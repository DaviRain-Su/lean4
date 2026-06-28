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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_mul(uint64_t, uint64_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
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
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___redArg(uint64_t);
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instReprNearToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instReprNearToken_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instReprNearToken___closed__0 = (const lean_object*)&l_Near_instReprNearToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instReprNearToken = (const lean_object*)&l_Near_instReprNearToken___closed__0_value;
LEAN_EXPORT uint64_t l_Near_NearToken_zero;
LEAN_EXPORT uint64_t l_Near_NearToken_fromYocto(uint64_t);
LEAN_EXPORT lean_object* l_Near_NearToken_fromYocto___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Near_NearToken_fromNear(uint64_t);
LEAN_EXPORT lean_object* l_Near_NearToken_fromNear___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Near_NearToken_add(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Near_NearToken_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Near_NearToken_isZero(uint64_t);
LEAN_EXPORT lean_object* l_Near_NearToken_isZero___boxed(lean_object*);
static const lean_closure_object l_Near_NearToken_instAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_NearToken_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_NearToken_instAdd___closed__0 = (const lean_object*)&l_Near_NearToken_instAdd___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_NearToken_instAdd = (const lean_object*)&l_Near_NearToken_instAdd___closed__0_value;
static const lean_string_object l_Near_NearToken_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " yoctoNEAR"};
static const lean_object* l_Near_NearToken_instRepr___lam__0___closed__0 = (const lean_object*)&l_Near_NearToken_instRepr___lam__0___closed__0_value;
static const lean_ctor_object l_Near_NearToken_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_NearToken_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Near_NearToken_instRepr___lam__0___closed__1 = (const lean_object*)&l_Near_NearToken_instRepr___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0(uint64_t, lean_object*);
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
static const lean_closure_object l_Near_Storage_instCodecNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_reprFast, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecNat___closed__0 = (const lean_object*)&l_Near_Storage_instCodecNat___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_parseNat_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecNat___closed__1 = (const lean_object*)&l_Near_Storage_instCodecNat___closed__1_value;
static const lean_ctor_object l_Near_Storage_instCodecNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecNat___closed__0_value),((lean_object*)&l_Near_Storage_instCodecNat___closed__1_value)}};
static const lean_object* l_Near_Storage_instCodecNat___closed__2 = (const lean_object*)&l_Near_Storage_instCodecNat___closed__2_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecNat = (const lean_object*)&l_Near_Storage_instCodecNat___closed__2_value;
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
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__0___boxed(lean_object*);
static const lean_closure_object l_Near_Storage_instCodecNearToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecNearToken___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecNearToken___closed__0 = (const lean_object*)&l_Near_Storage_instCodecNearToken___closed__0_value;
static const lean_ctor_object l_Near_Storage_instCodecNearToken___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecNearToken___closed__0_value),((lean_object*)&l_Near_Storage_instCodecUInt64___closed__1_value)}};
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
lean_object* lean_near_current_account_id();
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object*);
lean_object* lean_near_predecessor_account_id();
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object*);
lean_object* lean_near_block_timestamp();
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object*);
lean_object* lean_near_block_height();
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object*);
lean_object* lean_near_input();
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object*);
lean_object* lean_near_value_return(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object*, lean_object*);
lean_object* lean_near_log(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_currentAccount();
LEAN_EXPORT lean_object* l_Near_Env_currentAccount___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount();
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount___boxed(lean_object*);
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
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "blockHeight"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__10 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__10_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__10_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__11 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__11_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__12;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "blockTimestamp"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__13 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__13_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__13_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__14 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__14_value;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__15 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__15_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__15_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__16 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__16_value;
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
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___redArg(uint64_t v_x_27_){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_28_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__6));
v___x_29_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__7, &l_Near_instReprNearToken_repr___redArg___closed__7_once, _init_l_Near_instReprNearToken_repr___redArg___closed__7);
v___x_30_ = lean_uint64_to_nat(v_x_27_);
v___x_31_ = l_Nat_reprFast(v___x_30_);
v___x_32_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
v___x_33_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_29_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
v___x_34_ = 0;
v___x_35_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_35_, 0, v___x_33_);
lean_ctor_set_uint8(v___x_35_, sizeof(void*)*1, v___x_34_);
v___x_36_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_28_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_38_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_39_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_36_);
v___x_40_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_41_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_39_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v___x_42_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_37_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set_uint8(v___x_43_, sizeof(void*)*1, v___x_34_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___redArg___boxed(lean_object* v_x_44_){
_start:
{
uint64_t v_x_147__boxed_45_; lean_object* v_res_46_; 
v_x_147__boxed_45_ = lean_unbox_uint64(v_x_44_);
lean_dec_ref(v_x_44_);
v_res_46_ = l_Near_instReprNearToken_repr___redArg(v_x_147__boxed_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr(uint64_t v_x_47_, lean_object* v_prec_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Near_instReprNearToken_repr___redArg(v_x_47_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___boxed(lean_object* v_x_50_, lean_object* v_prec_51_){
_start:
{
uint64_t v_x_206__boxed_52_; lean_object* v_res_53_; 
v_x_206__boxed_52_ = lean_unbox_uint64(v_x_50_);
lean_dec_ref(v_x_50_);
v_res_53_ = l_Near_instReprNearToken_repr(v_x_206__boxed_52_, v_prec_51_);
lean_dec(v_prec_51_);
return v_res_53_;
}
}
static uint64_t _init_l_Near_NearToken_zero(void){
_start:
{
uint64_t v___x_56_; 
v___x_56_ = 0ULL;
return v___x_56_;
}
}
LEAN_EXPORT uint64_t l_Near_NearToken_fromYocto(uint64_t v_amount_57_){
_start:
{
return v_amount_57_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromYocto___boxed(lean_object* v_amount_58_){
_start:
{
uint64_t v_amount_boxed_59_; uint64_t v_res_60_; lean_object* v_r_61_; 
v_amount_boxed_59_ = lean_unbox_uint64(v_amount_58_);
lean_dec_ref(v_amount_58_);
v_res_60_ = l_Near_NearToken_fromYocto(v_amount_boxed_59_);
v_r_61_ = lean_box_uint64(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT uint64_t l_Near_NearToken_fromNear(uint64_t v_amount_62_){
_start:
{
uint64_t v___x_63_; uint64_t v___x_64_; 
v___x_63_ = 1000000000000ULL;
v___x_64_ = lean_uint64_mul(v_amount_62_, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromNear___boxed(lean_object* v_amount_65_){
_start:
{
uint64_t v_amount_boxed_66_; uint64_t v_res_67_; lean_object* v_r_68_; 
v_amount_boxed_66_ = lean_unbox_uint64(v_amount_65_);
lean_dec_ref(v_amount_65_);
v_res_67_ = l_Near_NearToken_fromNear(v_amount_boxed_66_);
v_r_68_ = lean_box_uint64(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint64_t l_Near_NearToken_add(uint64_t v_a_69_, uint64_t v_b_70_){
_start:
{
uint64_t v___x_71_; 
v___x_71_ = lean_uint64_add(v_a_69_, v_b_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_add___boxed(lean_object* v_a_72_, lean_object* v_b_73_){
_start:
{
uint64_t v_a_boxed_74_; uint64_t v_b_boxed_75_; uint64_t v_res_76_; lean_object* v_r_77_; 
v_a_boxed_74_ = lean_unbox_uint64(v_a_72_);
lean_dec_ref(v_a_72_);
v_b_boxed_75_ = lean_unbox_uint64(v_b_73_);
lean_dec_ref(v_b_73_);
v_res_76_ = l_Near_NearToken_add(v_a_boxed_74_, v_b_boxed_75_);
v_r_77_ = lean_box_uint64(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT uint8_t l_Near_NearToken_isZero(uint64_t v_t_78_){
_start:
{
uint64_t v___x_79_; uint8_t v___x_80_; 
v___x_79_ = 0ULL;
v___x_80_ = lean_uint64_dec_eq(v_t_78_, v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_isZero___boxed(lean_object* v_t_81_){
_start:
{
uint64_t v_t_boxed_82_; uint8_t v_res_83_; lean_object* v_r_84_; 
v_t_boxed_82_ = lean_unbox_uint64(v_t_81_);
lean_dec_ref(v_t_81_);
v_res_83_ = l_Near_NearToken_isZero(v_t_boxed_82_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0(uint64_t v_t_90_, lean_object* v_x_91_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_92_ = lean_uint64_to_nat(v_t_90_);
v___x_93_ = l_Nat_reprFast(v___x_92_);
v___x_94_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
v___x_95_ = ((lean_object*)(l_Near_NearToken_instRepr___lam__0___closed__1));
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0___boxed(lean_object* v_t_97_, lean_object* v_x_98_){
_start:
{
uint64_t v_t_boxed_99_; lean_object* v_res_100_; 
v_t_boxed_99_ = lean_unbox_uint64(v_t_97_);
lean_dec_ref(v_t_97_);
v_res_100_ = l_Near_NearToken_instRepr___lam__0(v_t_boxed_99_, v_x_98_);
lean_dec(v_x_98_);
return v_res_100_;
}
}
static lean_object* _init_l_Near_instReprGas_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(9u);
v___x_113_ = lean_nat_to_int(v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___redArg(uint64_t v_x_114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_115_ = ((lean_object*)(l_Near_instReprGas_repr___redArg___closed__3));
v___x_116_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_117_ = lean_uint64_to_nat(v_x_114_);
v___x_118_ = l_Nat_reprFast(v___x_117_);
v___x_119_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
v___x_120_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_116_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = 0;
v___x_122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*1, v___x_121_);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_115_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_125_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_123_);
v___x_127_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_124_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set_uint8(v___x_130_, sizeof(void*)*1, v___x_121_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___redArg___boxed(lean_object* v_x_131_){
_start:
{
uint64_t v_x_118__boxed_132_; lean_object* v_res_133_; 
v_x_118__boxed_132_ = lean_unbox_uint64(v_x_131_);
lean_dec_ref(v_x_131_);
v_res_133_ = l_Near_instReprGas_repr___redArg(v_x_118__boxed_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr(uint64_t v_x_134_, lean_object* v_prec_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Near_instReprGas_repr___redArg(v_x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___boxed(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
uint64_t v_x_164__boxed_139_; lean_object* v_res_140_; 
v_x_164__boxed_139_ = lean_unbox_uint64(v_x_137_);
lean_dec_ref(v_x_137_);
v_res_140_ = l_Near_instReprGas_repr(v_x_164__boxed_139_, v_prec_138_);
lean_dec(v_prec_138_);
return v_res_140_;
}
}
static uint64_t _init_l_Near_Gas_zero(void){
_start:
{
uint64_t v___x_143_; 
v___x_143_ = 0ULL;
return v___x_143_;
}
}
LEAN_EXPORT uint64_t l_Near_Gas_fromGas(uint64_t v_gas_144_){
_start:
{
return v_gas_144_;
}
}
LEAN_EXPORT lean_object* l_Near_Gas_fromGas___boxed(lean_object* v_gas_145_){
_start:
{
uint64_t v_gas_boxed_146_; uint64_t v_res_147_; lean_object* v_r_148_; 
v_gas_boxed_146_ = lean_unbox_uint64(v_gas_145_);
lean_dec_ref(v_gas_145_);
v_res_147_ = l_Near_Gas_fromGas(v_gas_boxed_146_);
v_r_148_ = lean_box_uint64(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT uint64_t l_Near_Gas_fromTgas(uint64_t v_tgas_149_){
_start:
{
uint64_t v___x_150_; uint64_t v___x_151_; 
v___x_150_ = 1000000000000ULL;
v___x_151_ = lean_uint64_mul(v_tgas_149_, v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Near_Gas_fromTgas___boxed(lean_object* v_tgas_152_){
_start:
{
uint64_t v_tgas_boxed_153_; uint64_t v_res_154_; lean_object* v_r_155_; 
v_tgas_boxed_153_ = lean_unbox_uint64(v_tgas_152_);
lean_dec_ref(v_tgas_152_);
v_res_154_ = l_Near_Gas_fromTgas(v_tgas_boxed_153_);
v_r_155_ = lean_box_uint64(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT uint8_t l_Near_instBEqAccountId_beq(lean_object* v_x_156_, lean_object* v_x_157_){
_start:
{
uint8_t v___x_158_; 
v___x_158_ = lean_string_dec_eq(v_x_156_, v_x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Near_instBEqAccountId_beq___boxed(lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
uint8_t v_res_161_; lean_object* v_r_162_; 
v_res_161_ = l_Near_instBEqAccountId_beq(v_x_159_, v_x_160_);
lean_dec_ref(v_x_160_);
lean_dec_ref(v_x_159_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
static lean_object* _init_l_Near_instReprAccountId_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(6u);
v___x_175_ = lean_nat_to_int(v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___redArg(lean_object* v_x_176_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_177_ = ((lean_object*)(l_Near_instReprAccountId_repr___redArg___closed__3));
v___x_178_ = lean_obj_once(&l_Near_instReprAccountId_repr___redArg___closed__4, &l_Near_instReprAccountId_repr___redArg___closed__4_once, _init_l_Near_instReprAccountId_repr___redArg___closed__4);
v___x_179_ = l_String_quote(v_x_176_);
v___x_180_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
v___x_181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_178_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = 0;
v___x_183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*1, v___x_182_);
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_177_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_186_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_184_);
v___x_188_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_185_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set_uint8(v___x_191_, sizeof(void*)*1, v___x_182_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr(lean_object* v_x_192_, lean_object* v_prec_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_Near_instReprAccountId_repr___redArg(v_x_192_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___boxed(lean_object* v_x_195_, lean_object* v_prec_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Near_instReprAccountId_repr(v_x_195_, v_prec_196_);
lean_dec(v_prec_196_);
return v_res_197_;
}
}
static lean_object* _init_l_Near_AccountId_minLen(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_unsigned_to_nat(2u);
return v___x_200_;
}
}
static lean_object* _init_l_Near_AccountId_maxLen(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_unsigned_to_nat(64u);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked(lean_object* v_s_202_){
_start:
{
lean_inc_ref(v_s_202_);
return v_s_202_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked___boxed(lean_object* v_s_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Near_AccountId_unchecked(v_s_203_);
lean_dec_ref(v_s_203_);
return v_res_204_;
}
}
LEAN_EXPORT uint8_t l_Near_AccountId_isValid(lean_object* v_s_205_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(2u);
v___x_207_ = lean_string_length(v_s_205_);
v___x_208_ = lean_nat_dec_le(v___x_206_, v___x_207_);
if (v___x_208_ == 0)
{
return v___x_208_;
}
else
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_unsigned_to_nat(64u);
v___x_210_ = lean_nat_dec_le(v___x_207_, v___x_209_);
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_isValid___boxed(lean_object* v_s_211_){
_start:
{
uint8_t v_res_212_; lean_object* v_r_213_; 
v_res_212_ = l_Near_AccountId_isValid(v_s_211_);
lean_dec_ref(v_s_211_);
v_r_213_ = lean_box(v_res_212_);
return v_r_213_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_parse(lean_object* v_s_214_){
_start:
{
uint8_t v___x_215_; 
v___x_215_ = l_Near_AccountId_isValid(v_s_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
lean_dec_ref(v_s_214_);
v___x_216_ = lean_box(0);
return v___x_216_;
}
else
{
lean_object* v___x_217_; 
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v_s_214_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr(lean_object* v_a_218_){
_start:
{
lean_inc_ref(v_a_218_);
return v_a_218_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr___boxed(lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Near_AccountId_asStr(v_a_219_);
lean_dec_ref(v_a_219_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0(lean_object* v_a_221_){
_start:
{
lean_inc_ref(v_a_221_);
return v_a_221_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0___boxed(lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Near_AccountId_instToString___lam__0(v_a_222_);
lean_dec_ref(v_a_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0(lean_object* v_a_229_, lean_object* v_x_230_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_231_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_232_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_232_, 0, v_a_229_);
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_231_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0___boxed(lean_object* v_a_235_, lean_object* v_x_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Near_AccountId_instRepr___lam__0(v_a_235_, v_x_236_);
lean_dec(v_x_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawWrite___boxed(lean_object* v_key_243_, lean_object* v_value_244_, lean_object* v_a_00___x40___internal___hyg_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = lean_near_storage_write(v_key_243_, v_value_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawRead___boxed(lean_object* v_key_249_, lean_object* v_a_00___x40___internal___hyg_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = lean_near_storage_read(v_key_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_hasKey___boxed(lean_object* v_key_254_, lean_object* v_a_00___x40___internal___hyg_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lean_near_storage_has_key(v_key_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_remove___boxed(lean_object* v_key_259_, lean_object* v_a_00___x40___internal___hyg_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = lean_near_storage_remove(v_key_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write(lean_object* v_key_262_, lean_object* v_value_263_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_near_storage_write(v_key_262_, v_value_263_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write___boxed(lean_object* v_key_266_, lean_object* v_value_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Near_Storage_write(v_key_266_, v_value_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read(lean_object* v_key_270_, lean_object* v_default_271_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_near_storage_read(v_key_270_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_285_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_285_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_285_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_285_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
if (lean_obj_tag(v_a_274_) == 0)
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v_default_271_);
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_default_271_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
else
{
lean_object* v_val_281_; lean_object* v___x_283_; 
lean_dec_ref(v_default_271_);
v_val_281_ = lean_ctor_get(v_a_274_, 0);
lean_inc(v_val_281_);
lean_dec_ref_known(v_a_274_, 1);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v_val_281_);
v___x_283_ = v___x_276_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_val_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec_ref(v_default_271_);
v_a_286_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_273_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_273_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read___boxed(lean_object* v_key_294_, lean_object* v_default_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Near_Storage_read(v_key_294_, v_default_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f(lean_object* v_key_298_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_near_storage_read(v_key_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f___boxed(lean_object* v_key_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Near_Storage_read_x3f(v_key_301_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64(lean_object* v_key_304_, uint64_t v_value_305_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_307_ = lean_uint64_to_nat(v_value_305_);
v___x_308_ = l_Nat_reprFast(v___x_307_);
v___x_309_ = lean_near_storage_write(v_key_304_, v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64___boxed(lean_object* v_key_310_, lean_object* v_value_311_, lean_object* v_a_312_){
_start:
{
uint64_t v_value_boxed_313_; lean_object* v_res_314_; 
v_value_boxed_313_ = lean_unbox_uint64(v_value_311_);
lean_dec_ref(v_value_311_);
v_res_314_ = l_Near_Storage_writeU64(v_key_310_, v_value_boxed_313_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f___lam__0(lean_object* v_acc_x3f_315_, uint32_t v_c_316_){
_start:
{
if (lean_obj_tag(v_acc_x3f_315_) == 0)
{
return v_acc_x3f_315_;
}
else
{
lean_object* v_val_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_336_; 
v_val_317_ = lean_ctor_get(v_acc_x3f_315_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v_acc_x3f_315_);
if (v_isSharedCheck_336_ == 0)
{
v___x_319_ = v_acc_x3f_315_;
v_isShared_320_ = v_isSharedCheck_336_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_val_317_);
lean_dec(v_acc_x3f_315_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_336_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v_code_321_; lean_object* v_zeroCode_322_; uint8_t v___y_324_; uint8_t v___x_333_; 
v_code_321_ = lean_uint32_to_nat(v_c_316_);
v_zeroCode_322_ = lean_unsigned_to_nat(48u);
v___x_333_ = lean_nat_dec_lt(v_code_321_, v_zeroCode_322_);
if (v___x_333_ == 0)
{
lean_object* v_nineCode_334_; uint8_t v___x_335_; 
v_nineCode_334_ = lean_unsigned_to_nat(57u);
v___x_335_ = lean_nat_dec_lt(v_nineCode_334_, v_code_321_);
v___y_324_ = v___x_335_;
goto v___jp_323_;
}
else
{
v___y_324_ = v___x_333_;
goto v___jp_323_;
}
v___jp_323_:
{
if (v___y_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_325_ = lean_unsigned_to_nat(10u);
v___x_326_ = lean_nat_mul(v_val_317_, v___x_325_);
lean_dec(v_val_317_);
v___x_327_ = lean_nat_sub(v_code_321_, v_zeroCode_322_);
lean_dec(v_code_321_);
v___x_328_ = lean_nat_add(v___x_326_, v___x_327_);
lean_dec(v___x_327_);
lean_dec(v___x_326_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v___x_328_);
v___x_330_ = v___x_319_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
else
{
lean_object* v___x_332_; 
lean_dec(v_code_321_);
lean_del_object(v___x_319_);
lean_dec(v_val_317_);
v___x_332_ = lean_box(0);
return v___x_332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f___lam__0___boxed(lean_object* v_acc_x3f_337_, lean_object* v_c_338_){
_start:
{
uint32_t v_c_boxed_339_; lean_object* v_res_340_; 
v_c_boxed_339_ = lean_unbox_uint32(v_c_338_);
lean_dec(v_c_338_);
v_res_340_ = l_Near_Storage_parseNat_x3f___lam__0(v_acc_x3f_337_, v_c_boxed_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f(lean_object* v_s_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_string_data(v_s_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v___x_346_; 
v___x_346_ = lean_box(0);
return v___x_346_;
}
else
{
lean_object* v___f_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___f_347_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_348_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_349_ = l_List_foldl___redArg(v___f_347_, v___x_348_, v___x_345_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecString___lam__0(lean_object* v_val_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v_val_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0(uint64_t v_n_358_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_uint64_to_nat(v_n_358_);
v___x_360_ = l_Nat_reprFast(v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0___boxed(lean_object* v_n_361_){
_start:
{
uint64_t v_n_boxed_362_; lean_object* v_res_363_; 
v_n_boxed_362_ = lean_unbox_uint64(v_n_361_);
lean_dec_ref(v_n_361_);
v_res_363_ = l_Near_Storage_instCodecUInt64___lam__0(v_n_boxed_362_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__2(lean_object* v___f_364_, lean_object* v_s_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_string_data(v_s_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v___x_367_; 
lean_dec_ref(v___f_364_);
v___x_367_ = lean_box(0);
return v___x_367_;
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_369_ = l_List_foldl___redArg(v___f_364_, v___x_368_, v___x_366_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_370_; 
v___x_370_ = lean_box(0);
return v___x_370_;
}
else
{
lean_object* v_val_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_380_; 
v_val_371_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_380_ == 0)
{
v___x_373_ = v___x_369_;
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_val_371_);
lean_dec(v___x_369_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
uint64_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_375_ = lean_uint64_of_nat(v_val_371_);
lean_dec(v_val_371_);
v___x_376_ = lean_box_uint64(v___x_375_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 0, v___x_376_);
v___x_378_ = v___x_373_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0(uint8_t v_b_396_){
_start:
{
if (v_b_396_ == 0)
{
lean_object* v___x_397_; 
v___x_397_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
return v___x_397_;
}
else
{
lean_object* v___x_398_; 
v___x_398_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
return v___x_398_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0___boxed(lean_object* v_b_399_){
_start:
{
uint8_t v_b_boxed_400_; lean_object* v_res_401_; 
v_b_boxed_400_ = lean_unbox(v_b_399_);
v_res_401_ = l_Near_Storage_instCodecBool___lam__0(v_b_boxed_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1(lean_object* v_s_402_){
_start:
{
lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_403_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
v___x_404_ = lean_string_dec_eq(v_s_402_, v___x_403_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
v___x_406_ = lean_string_dec_eq(v_s_402_, v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; 
v___x_407_ = lean_box(0);
return v___x_407_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_box(v___x_404_);
v___x_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
else
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_box(v___x_404_);
v___x_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1___boxed(lean_object* v_s_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Near_Storage_instCodecBool___lam__1(v_s_412_);
lean_dec_ref(v_s_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__0(uint64_t v_t_426_){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_uint64_to_nat(v_t_426_);
v___x_428_ = l_Nat_reprFast(v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__0___boxed(lean_object* v_t_429_){
_start:
{
uint64_t v_t_boxed_430_; lean_object* v_res_431_; 
v_t_boxed_430_ = lean_unbox_uint64(v_t_429_);
lean_dec_ref(v_t_429_);
v_res_431_ = l_Near_Storage_instCodecNearToken___lam__0(v_t_boxed_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0(uint64_t v_g_437_){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_uint64_to_nat(v_g_437_);
v___x_439_ = l_Nat_reprFast(v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0___boxed(lean_object* v_g_440_){
_start:
{
uint64_t v_g_boxed_441_; lean_object* v_res_442_; 
v_g_boxed_441_ = lean_unbox_uint64(v_g_440_);
lean_dec_ref(v_g_440_);
v_res_442_ = l_Near_Storage_instCodecGas___lam__0(v_g_boxed_441_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg(lean_object* v_inst_448_, lean_object* v_key_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = lean_near_storage_read(v_key_449_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_466_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_466_ == 0)
{
v___x_454_ = v___x_451_;
v_isShared_455_ = v_isSharedCheck_466_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_451_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_466_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
if (lean_obj_tag(v_a_452_) == 0)
{
lean_object* v___x_456_; lean_object* v___x_458_; 
lean_dec_ref(v_inst_448_);
v___x_456_ = lean_box(0);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_456_);
v___x_458_ = v___x_454_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
else
{
lean_object* v_val_460_; lean_object* v_decode_461_; lean_object* v___x_462_; lean_object* v___x_464_; 
v_val_460_ = lean_ctor_get(v_a_452_, 0);
lean_inc(v_val_460_);
lean_dec_ref_known(v_a_452_, 1);
v_decode_461_ = lean_ctor_get(v_inst_448_, 1);
lean_inc_ref(v_decode_461_);
lean_dec_ref(v_inst_448_);
v___x_462_ = lean_apply_1(v_decode_461_, v_val_460_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_462_);
v___x_464_ = v___x_454_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_dec_ref(v_inst_448_);
v_a_467_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_451_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_451_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg___boxed(lean_object* v_inst_475_, lean_object* v_key_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Near_Storage_readAs_x3f___redArg(v_inst_475_, v_key_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f(lean_object* v_00_u03b1_479_, lean_object* v_inst_480_, lean_object* v_key_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lean_near_storage_read(v_key_481_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_498_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_498_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_498_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_498_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
if (lean_obj_tag(v_a_484_) == 0)
{
lean_object* v___x_488_; lean_object* v___x_490_; 
lean_dec_ref(v_inst_480_);
v___x_488_ = lean_box(0);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_488_);
v___x_490_ = v___x_486_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
else
{
lean_object* v_val_492_; lean_object* v_decode_493_; lean_object* v___x_494_; lean_object* v___x_496_; 
v_val_492_ = lean_ctor_get(v_a_484_, 0);
lean_inc(v_val_492_);
lean_dec_ref_known(v_a_484_, 1);
v_decode_493_ = lean_ctor_get(v_inst_480_, 1);
lean_inc_ref(v_decode_493_);
lean_dec_ref(v_inst_480_);
v___x_494_ = lean_apply_1(v_decode_493_, v_val_492_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_494_);
v___x_496_ = v___x_486_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_inst_480_);
v_a_499_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_483_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_483_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___boxed(lean_object* v_00_u03b1_507_, lean_object* v_inst_508_, lean_object* v_key_509_, lean_object* v_a_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Near_Storage_readAs_x3f(v_00_u03b1_507_, v_inst_508_, v_key_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg(lean_object* v_inst_512_, lean_object* v_key_513_, lean_object* v_default_514_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lean_near_storage_read(v_key_513_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_534_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_534_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_534_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_534_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
if (lean_obj_tag(v_a_517_) == 0)
{
lean_object* v___x_522_; 
lean_dec_ref(v_inst_512_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v_default_514_);
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_default_514_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
else
{
lean_object* v_val_524_; lean_object* v_decode_525_; lean_object* v___x_526_; 
v_val_524_ = lean_ctor_get(v_a_517_, 0);
lean_inc(v_val_524_);
lean_dec_ref_known(v_a_517_, 1);
v_decode_525_ = lean_ctor_get(v_inst_512_, 1);
lean_inc_ref(v_decode_525_);
lean_dec_ref(v_inst_512_);
v___x_526_ = lean_apply_1(v_decode_525_, v_val_524_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_528_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v_default_514_);
v___x_528_ = v___x_519_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_default_514_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
else
{
lean_object* v_val_530_; lean_object* v___x_532_; 
lean_dec(v_default_514_);
v_val_530_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_val_530_);
lean_dec_ref_known(v___x_526_, 1);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v_val_530_);
v___x_532_ = v___x_519_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_val_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec(v_default_514_);
lean_dec_ref(v_inst_512_);
v_a_535_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_516_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_516_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg___boxed(lean_object* v_inst_543_, lean_object* v_key_544_, lean_object* v_default_545_, lean_object* v_a_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Near_Storage_readAs___redArg(v_inst_543_, v_key_544_, v_default_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs(lean_object* v_00_u03b1_548_, lean_object* v_inst_549_, lean_object* v_key_550_, lean_object* v_default_551_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = lean_near_storage_read(v_key_550_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_571_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_571_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_571_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_571_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
if (lean_obj_tag(v_a_554_) == 0)
{
lean_object* v___x_559_; 
lean_dec_ref(v_inst_549_);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v_default_551_);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_default_551_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
else
{
lean_object* v_val_561_; lean_object* v_decode_562_; lean_object* v___x_563_; 
v_val_561_ = lean_ctor_get(v_a_554_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v_a_554_, 1);
v_decode_562_ = lean_ctor_get(v_inst_549_, 1);
lean_inc_ref(v_decode_562_);
lean_dec_ref(v_inst_549_);
v___x_563_ = lean_apply_1(v_decode_562_, v_val_561_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v___x_565_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v_default_551_);
v___x_565_ = v___x_556_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_default_551_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
else
{
lean_object* v_val_567_; lean_object* v___x_569_; 
lean_dec(v_default_551_);
v_val_567_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_val_567_);
lean_dec_ref_known(v___x_563_, 1);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v_val_567_);
v___x_569_ = v___x_556_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_val_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec(v_default_551_);
lean_dec_ref(v_inst_549_);
v_a_572_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_553_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_553_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___boxed(lean_object* v_00_u03b1_580_, lean_object* v_inst_581_, lean_object* v_key_582_, lean_object* v_default_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Near_Storage_readAs(v_00_u03b1_580_, v_inst_581_, v_key_582_, v_default_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg(lean_object* v_inst_586_, lean_object* v_key_587_, lean_object* v_value_588_){
_start:
{
lean_object* v_encode_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_encode_590_ = lean_ctor_get(v_inst_586_, 0);
lean_inc_ref(v_encode_590_);
lean_dec_ref(v_inst_586_);
v___x_591_ = lean_apply_1(v_encode_590_, v_value_588_);
v___x_592_ = lean_near_storage_write(v_key_587_, v___x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg___boxed(lean_object* v_inst_593_, lean_object* v_key_594_, lean_object* v_value_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Near_Storage_writeAs___redArg(v_inst_593_, v_key_594_, v_value_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs(lean_object* v_00_u03b1_598_, lean_object* v_inst_599_, lean_object* v_key_600_, lean_object* v_value_601_){
_start:
{
lean_object* v_encode_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_encode_603_ = lean_ctor_get(v_inst_599_, 0);
lean_inc_ref(v_encode_603_);
lean_dec_ref(v_inst_599_);
v___x_604_ = lean_apply_1(v_encode_603_, v_value_601_);
v___x_605_ = lean_near_storage_write(v_key_600_, v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___boxed(lean_object* v_00_u03b1_606_, lean_object* v_inst_607_, lean_object* v_key_608_, lean_object* v_value_609_, lean_object* v_a_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Near_Storage_writeAs(v_00_u03b1_606_, v_inst_607_, v_key_608_, v_value_609_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_contains(lean_object* v_key_612_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = lean_near_storage_has_key(v_key_612_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_contains___boxed(lean_object* v_key_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Near_Storage_contains(v_key_615_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_delete(lean_object* v_key_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_near_storage_remove(v_key_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_delete___boxed(lean_object* v_key_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Near_Storage_delete(v_key_621_);
return v_res_623_;
}
}
static lean_object* _init_l_Near_Storage_instReprKey_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_unsigned_to_nat(8u);
v___x_634_ = lean_nat_to_int(v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l_Near_Storage_instReprKey_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__9, &l_Near_instReprNearToken_repr___redArg___closed__9_once, _init_l_Near_instReprNearToken_repr___redArg___closed__9);
v___x_636_ = lean_nat_to_int(v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___redArg(lean_object* v_x_637_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_638_ = ((lean_object*)(l_Near_Storage_instReprKey_repr___redArg___closed__3));
v___x_639_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__4, &l_Near_Storage_instReprKey_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__4);
v___x_640_ = l_String_quote(v_x_637_);
v___x_641_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
v___x_642_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_639_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = 0;
v___x_644_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set_uint8(v___x_644_, sizeof(void*)*1, v___x_643_);
v___x_645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_638_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_647_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
lean_ctor_set(v___x_648_, 1, v___x_645_);
v___x_649_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_646_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set_uint8(v___x_652_, sizeof(void*)*1, v___x_643_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr(lean_object* v_00_u03b1_653_, lean_object* v_inst_654_, lean_object* v_x_655_, lean_object* v_prec_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Near_Storage_instReprKey_repr___redArg(v_x_655_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___boxed(lean_object* v_00_u03b1_658_, lean_object* v_inst_659_, lean_object* v_x_660_, lean_object* v_prec_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Near_Storage_instReprKey_repr(v_00_u03b1_658_, v_inst_659_, v_x_660_, v_prec_661_);
lean_dec(v_prec_661_);
lean_dec_ref(v_inst_659_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey___redArg(lean_object* v_inst_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = lean_alloc_closure((void*)(l_Near_Storage_instReprKey_repr___boxed), 4, 2);
lean_closure_set(v___x_664_, 0, lean_box(0));
lean_closure_set(v___x_664_, 1, v_inst_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey(lean_object* v_00_u03b1_665_, lean_object* v_inst_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lean_alloc_closure((void*)(l_Near_Storage_instReprKey_repr___boxed), 4, 2);
lean_closure_set(v___x_667_, 0, lean_box(0));
lean_closure_set(v___x_667_, 1, v_inst_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg(lean_object* v_name_668_){
_start:
{
lean_inc_ref(v_name_668_);
return v_name_668_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg___boxed(lean_object* v_name_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Near_Storage_Key_make___redArg(v_name_669_);
lean_dec_ref(v_name_669_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make(lean_object* v_00_u03b1_671_, lean_object* v_name_672_){
_start:
{
lean_inc_ref(v_name_672_);
return v_name_672_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___boxed(lean_object* v_00_u03b1_673_, lean_object* v_name_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Near_Storage_Key_make(v_00_u03b1_673_, v_name_674_);
lean_dec_ref(v_name_674_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg(lean_object* v_inst_676_, lean_object* v_key_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lean_near_storage_read(v_key_677_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_694_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_694_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_694_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_694_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
if (lean_obj_tag(v_a_680_) == 0)
{
lean_object* v___x_684_; lean_object* v___x_686_; 
lean_dec_ref(v_inst_676_);
v___x_684_ = lean_box(0);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_684_);
v___x_686_ = v___x_682_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
else
{
lean_object* v_val_688_; lean_object* v_decode_689_; lean_object* v___x_690_; lean_object* v___x_692_; 
v_val_688_ = lean_ctor_get(v_a_680_, 0);
lean_inc(v_val_688_);
lean_dec_ref_known(v_a_680_, 1);
v_decode_689_ = lean_ctor_get(v_inst_676_, 1);
lean_inc_ref(v_decode_689_);
lean_dec_ref(v_inst_676_);
v___x_690_ = lean_apply_1(v_decode_689_, v_val_688_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_690_);
v___x_692_ = v___x_682_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec_ref(v_inst_676_);
v_a_695_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_679_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_679_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg___boxed(lean_object* v_inst_703_, lean_object* v_key_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Near_Storage_Key_read_x3f___redArg(v_inst_703_, v_key_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f(lean_object* v_00_u03b1_707_, lean_object* v_inst_708_, lean_object* v_key_709_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = lean_near_storage_read(v_key_709_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_726_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_726_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_726_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_726_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
if (lean_obj_tag(v_a_712_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_718_; 
lean_dec_ref(v_inst_708_);
v___x_716_ = lean_box(0);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_716_);
v___x_718_ = v___x_714_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
else
{
lean_object* v_val_720_; lean_object* v_decode_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
v_val_720_ = lean_ctor_get(v_a_712_, 0);
lean_inc(v_val_720_);
lean_dec_ref_known(v_a_712_, 1);
v_decode_721_ = lean_ctor_get(v_inst_708_, 1);
lean_inc_ref(v_decode_721_);
lean_dec_ref(v_inst_708_);
v___x_722_ = lean_apply_1(v_decode_721_, v_val_720_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_722_);
v___x_724_ = v___x_714_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_722_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref(v_inst_708_);
v_a_727_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_711_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_711_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___boxed(lean_object* v_00_u03b1_735_, lean_object* v_inst_736_, lean_object* v_key_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Near_Storage_Key_read_x3f(v_00_u03b1_735_, v_inst_736_, v_key_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg(lean_object* v_inst_740_, lean_object* v_key_741_, lean_object* v_default_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = lean_near_storage_read(v_key_741_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_762_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_762_ == 0)
{
v___x_747_ = v___x_744_;
v_isShared_748_ = v_isSharedCheck_762_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_762_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
if (lean_obj_tag(v_a_745_) == 0)
{
lean_object* v___x_750_; 
lean_dec_ref(v_inst_740_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v_default_742_);
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_default_742_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
else
{
lean_object* v_val_752_; lean_object* v_decode_753_; lean_object* v___x_754_; 
v_val_752_ = lean_ctor_get(v_a_745_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v_a_745_, 1);
v_decode_753_ = lean_ctor_get(v_inst_740_, 1);
lean_inc_ref(v_decode_753_);
lean_dec_ref(v_inst_740_);
v___x_754_ = lean_apply_1(v_decode_753_, v_val_752_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v___x_756_; 
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v_default_742_);
v___x_756_ = v___x_747_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_default_742_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
else
{
lean_object* v_val_758_; lean_object* v___x_760_; 
lean_dec(v_default_742_);
v_val_758_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_val_758_);
lean_dec_ref_known(v___x_754_, 1);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v_val_758_);
v___x_760_ = v___x_747_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_val_758_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_default_742_);
lean_dec_ref(v_inst_740_);
v_a_763_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_744_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_744_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg___boxed(lean_object* v_inst_771_, lean_object* v_key_772_, lean_object* v_default_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Near_Storage_Key_read___redArg(v_inst_771_, v_key_772_, v_default_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read(lean_object* v_00_u03b1_776_, lean_object* v_inst_777_, lean_object* v_key_778_, lean_object* v_default_779_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = lean_near_storage_read(v_key_778_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_799_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_799_ == 0)
{
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_799_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_799_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
if (lean_obj_tag(v_a_782_) == 0)
{
lean_object* v___x_787_; 
lean_dec_ref(v_inst_777_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v_default_779_);
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_default_779_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
else
{
lean_object* v_val_789_; lean_object* v_decode_790_; lean_object* v___x_791_; 
v_val_789_ = lean_ctor_get(v_a_782_, 0);
lean_inc(v_val_789_);
lean_dec_ref_known(v_a_782_, 1);
v_decode_790_ = lean_ctor_get(v_inst_777_, 1);
lean_inc_ref(v_decode_790_);
lean_dec_ref(v_inst_777_);
v___x_791_ = lean_apply_1(v_decode_790_, v_val_789_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v___x_793_; 
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v_default_779_);
v___x_793_ = v___x_784_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_default_779_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
else
{
lean_object* v_val_795_; lean_object* v___x_797_; 
lean_dec(v_default_779_);
v_val_795_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_val_795_);
lean_dec_ref_known(v___x_791_, 1);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v_val_795_);
v___x_797_ = v___x_784_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_val_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v_default_779_);
lean_dec_ref(v_inst_777_);
v_a_800_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_781_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_781_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___boxed(lean_object* v_00_u03b1_808_, lean_object* v_inst_809_, lean_object* v_key_810_, lean_object* v_default_811_, lean_object* v_a_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Near_Storage_Key_read(v_00_u03b1_808_, v_inst_809_, v_key_810_, v_default_811_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg(lean_object* v_inst_814_, lean_object* v_key_815_, lean_object* v_value_816_){
_start:
{
lean_object* v_encode_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v_encode_818_ = lean_ctor_get(v_inst_814_, 0);
lean_inc_ref(v_encode_818_);
lean_dec_ref(v_inst_814_);
v___x_819_ = lean_apply_1(v_encode_818_, v_value_816_);
v___x_820_ = lean_near_storage_write(v_key_815_, v___x_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg___boxed(lean_object* v_inst_821_, lean_object* v_key_822_, lean_object* v_value_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Near_Storage_Key_write___redArg(v_inst_821_, v_key_822_, v_value_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write(lean_object* v_00_u03b1_826_, lean_object* v_inst_827_, lean_object* v_key_828_, lean_object* v_value_829_){
_start:
{
lean_object* v_encode_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_encode_831_ = lean_ctor_get(v_inst_827_, 0);
lean_inc_ref(v_encode_831_);
lean_dec_ref(v_inst_827_);
v___x_832_ = lean_apply_1(v_encode_831_, v_value_829_);
v___x_833_ = lean_near_storage_write(v_key_828_, v___x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___boxed(lean_object* v_00_u03b1_834_, lean_object* v_inst_835_, lean_object* v_key_836_, lean_object* v_value_837_, lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Near_Storage_Key_write(v_00_u03b1_834_, v_inst_835_, v_key_836_, v_value_837_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg(lean_object* v_key_840_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_near_storage_has_key(v_key_840_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg___boxed(lean_object* v_key_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Near_Storage_Key_contains___redArg(v_key_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains(lean_object* v_00_u03b1_846_, lean_object* v_key_847_){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_near_storage_has_key(v_key_847_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___boxed(lean_object* v_00_u03b1_850_, lean_object* v_key_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Near_Storage_Key_contains(v_00_u03b1_850_, v_key_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg(lean_object* v_key_854_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = lean_near_storage_remove(v_key_854_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg___boxed(lean_object* v_key_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Near_Storage_Key_remove___redArg(v_key_857_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove(lean_object* v_00_u03b1_860_, lean_object* v_key_861_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = lean_near_storage_remove(v_key_861_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___boxed(lean_object* v_00_u03b1_864_, lean_object* v_key_865_, lean_object* v_a_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Near_Storage_Key_remove(v_00_u03b1_864_, v_key_865_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg(lean_object* v_inst_868_, lean_object* v_key_869_, lean_object* v_f_870_){
_start:
{
lean_object* v___x_872_; 
lean_inc_ref(v_key_869_);
v___x_872_ = lean_near_storage_read(v_key_869_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_915_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_915_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_915_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_915_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
if (lean_obj_tag(v_a_873_) == 0)
{
lean_object* v___x_877_; lean_object* v___x_879_; 
lean_dec(v_f_870_);
lean_dec_ref(v_key_869_);
lean_dec_ref(v_inst_868_);
v___x_877_ = lean_box(0);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_877_);
v___x_879_ = v___x_875_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_877_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
else
{
lean_object* v_val_881_; lean_object* v_encode_882_; lean_object* v_decode_883_; lean_object* v___x_884_; 
v_val_881_ = lean_ctor_get(v_a_873_, 0);
lean_inc(v_val_881_);
lean_dec_ref_known(v_a_873_, 1);
v_encode_882_ = lean_ctor_get(v_inst_868_, 0);
lean_inc_ref(v_encode_882_);
v_decode_883_ = lean_ctor_get(v_inst_868_, 1);
lean_inc_ref(v_decode_883_);
lean_dec_ref(v_inst_868_);
v___x_884_ = lean_apply_1(v_decode_883_, v_val_881_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v___x_886_; 
lean_dec_ref(v_encode_882_);
lean_dec(v_f_870_);
lean_dec_ref(v_key_869_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_884_);
v___x_886_ = v___x_875_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
else
{
lean_object* v_val_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_914_; 
lean_del_object(v___x_875_);
v_val_888_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_914_ == 0)
{
v___x_890_ = v___x_884_;
v_isShared_891_ = v_isSharedCheck_914_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_val_888_);
lean_dec(v___x_884_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_914_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_apply_1(v_f_870_, v_val_888_);
lean_inc(v___x_892_);
v___x_893_ = lean_apply_1(v_encode_882_, v___x_892_);
v___x_894_ = lean_near_storage_write(v_key_869_, v___x_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_904_; 
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v___x_894_, 0);
lean_dec(v_unused_905_);
v___x_896_ = v___x_894_;
v_isShared_897_ = v_isSharedCheck_904_;
goto v_resetjp_895_;
}
else
{
lean_dec(v___x_894_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_904_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v___x_892_);
v___x_899_ = v___x_890_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_892_);
v___x_899_ = v_reuseFailAlloc_903_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_901_; 
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 0, v___x_899_);
v___x_901_ = v___x_896_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v___x_892_);
lean_del_object(v___x_890_);
v_a_906_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_894_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_894_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
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
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec(v_f_870_);
lean_dec_ref(v_key_869_);
lean_dec_ref(v_inst_868_);
v_a_916_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_872_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_872_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg___boxed(lean_object* v_inst_924_, lean_object* v_key_925_, lean_object* v_f_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Near_Storage_Key_modify_x3f___redArg(v_inst_924_, v_key_925_, v_f_926_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f(lean_object* v_00_u03b1_929_, lean_object* v_inst_930_, lean_object* v_key_931_, lean_object* v_f_932_){
_start:
{
lean_object* v___x_934_; 
lean_inc_ref(v_key_931_);
v___x_934_ = lean_near_storage_read(v_key_931_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_977_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_977_ == 0)
{
v___x_937_ = v___x_934_;
v_isShared_938_ = v_isSharedCheck_977_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_934_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_977_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
if (lean_obj_tag(v_a_935_) == 0)
{
lean_object* v___x_939_; lean_object* v___x_941_; 
lean_dec(v_f_932_);
lean_dec_ref(v_key_931_);
lean_dec_ref(v_inst_930_);
v___x_939_ = lean_box(0);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_939_);
v___x_941_ = v___x_937_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v___x_939_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
else
{
lean_object* v_val_943_; lean_object* v_encode_944_; lean_object* v_decode_945_; lean_object* v___x_946_; 
v_val_943_ = lean_ctor_get(v_a_935_, 0);
lean_inc(v_val_943_);
lean_dec_ref_known(v_a_935_, 1);
v_encode_944_ = lean_ctor_get(v_inst_930_, 0);
lean_inc_ref(v_encode_944_);
v_decode_945_ = lean_ctor_get(v_inst_930_, 1);
lean_inc_ref(v_decode_945_);
lean_dec_ref(v_inst_930_);
v___x_946_ = lean_apply_1(v_decode_945_, v_val_943_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v___x_948_; 
lean_dec_ref(v_encode_944_);
lean_dec(v_f_932_);
lean_dec_ref(v_key_931_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_946_);
v___x_948_ = v___x_937_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
else
{
lean_object* v_val_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_976_; 
lean_del_object(v___x_937_);
v_val_950_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_976_ == 0)
{
v___x_952_ = v___x_946_;
v_isShared_953_ = v_isSharedCheck_976_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_val_950_);
lean_dec(v___x_946_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_976_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_954_ = lean_apply_1(v_f_932_, v_val_950_);
lean_inc(v___x_954_);
v___x_955_ = lean_apply_1(v_encode_944_, v___x_954_);
v___x_956_ = lean_near_storage_write(v_key_931_, v___x_955_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_966_; 
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_966_ == 0)
{
lean_object* v_unused_967_; 
v_unused_967_ = lean_ctor_get(v___x_956_, 0);
lean_dec(v_unused_967_);
v___x_958_ = v___x_956_;
v_isShared_959_ = v_isSharedCheck_966_;
goto v_resetjp_957_;
}
else
{
lean_dec(v___x_956_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_966_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v___x_954_);
v___x_961_ = v___x_952_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v___x_954_);
v___x_961_ = v_reuseFailAlloc_965_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_963_; 
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_961_);
v___x_963_ = v___x_958_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec(v___x_954_);
lean_del_object(v___x_952_);
v_a_968_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_956_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_956_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
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
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_f_932_);
lean_dec_ref(v_key_931_);
lean_dec_ref(v_inst_930_);
v_a_978_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_934_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_934_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___boxed(lean_object* v_00_u03b1_986_, lean_object* v_inst_987_, lean_object* v_key_988_, lean_object* v_f_989_, lean_object* v_a_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Near_Storage_Key_modify_x3f(v_00_u03b1_986_, v_inst_987_, v_key_988_, v_f_989_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg(lean_object* v_inst_992_, lean_object* v_key_993_, lean_object* v_default_994_, lean_object* v_f_995_){
_start:
{
lean_object* v___x_997_; 
lean_inc_ref(v_key_993_);
v___x_997_ = lean_near_storage_read(v_key_993_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v_a_1000_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 1);
if (lean_obj_tag(v_a_998_) == 0)
{
v_a_1000_ = v_default_994_;
goto v___jp_999_;
}
else
{
lean_object* v_val_1021_; lean_object* v_decode_1022_; lean_object* v___x_1023_; 
v_val_1021_ = lean_ctor_get(v_a_998_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v_a_998_, 1);
v_decode_1022_ = lean_ctor_get(v_inst_992_, 1);
lean_inc_ref(v_decode_1022_);
v___x_1023_ = lean_apply_1(v_decode_1022_, v_val_1021_);
if (lean_obj_tag(v___x_1023_) == 0)
{
v_a_1000_ = v_default_994_;
goto v___jp_999_;
}
else
{
lean_object* v_val_1024_; 
lean_dec(v_default_994_);
v_val_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_val_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v_a_1000_ = v_val_1024_;
goto v___jp_999_;
}
}
v___jp_999_:
{
lean_object* v_encode_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v_encode_1001_ = lean_ctor_get(v_inst_992_, 0);
lean_inc_ref(v_encode_1001_);
lean_dec_ref(v_inst_992_);
v___x_1002_ = lean_apply_1(v_f_995_, v_a_1000_);
lean_inc(v___x_1002_);
v___x_1003_ = lean_apply_1(v_encode_1001_, v___x_1002_);
v___x_1004_ = lean_near_storage_write(v_key_993_, v___x_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1011_ == 0)
{
lean_object* v_unused_1012_; 
v_unused_1012_ = lean_ctor_get(v___x_1004_, 0);
lean_dec(v_unused_1012_);
v___x_1006_ = v___x_1004_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_dec(v___x_1004_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v___x_1002_);
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1002_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v___x_1002_);
v_a_1013_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1004_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1004_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_f_995_);
lean_dec(v_default_994_);
lean_dec_ref(v_key_993_);
lean_dec_ref(v_inst_992_);
v_a_1025_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_997_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_997_);
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
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg___boxed(lean_object* v_inst_1033_, lean_object* v_key_1034_, lean_object* v_default_1035_, lean_object* v_f_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Near_Storage_Key_modify___redArg(v_inst_1033_, v_key_1034_, v_default_1035_, v_f_1036_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify(lean_object* v_00_u03b1_1039_, lean_object* v_inst_1040_, lean_object* v_key_1041_, lean_object* v_default_1042_, lean_object* v_f_1043_){
_start:
{
lean_object* v_a_1046_; lean_object* v___x_1067_; 
lean_inc_ref(v_key_1041_);
v___x_1067_ = lean_near_storage_read(v_key_1041_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
if (lean_obj_tag(v_a_1068_) == 0)
{
v_a_1046_ = v_default_1042_;
goto v___jp_1045_;
}
else
{
lean_object* v_val_1069_; lean_object* v_decode_1070_; lean_object* v___x_1071_; 
v_val_1069_ = lean_ctor_get(v_a_1068_, 0);
lean_inc(v_val_1069_);
lean_dec_ref_known(v_a_1068_, 1);
v_decode_1070_ = lean_ctor_get(v_inst_1040_, 1);
lean_inc_ref(v_decode_1070_);
v___x_1071_ = lean_apply_1(v_decode_1070_, v_val_1069_);
if (lean_obj_tag(v___x_1071_) == 0)
{
v_a_1046_ = v_default_1042_;
goto v___jp_1045_;
}
else
{
lean_object* v_val_1072_; 
lean_dec(v_default_1042_);
v_val_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_val_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v_a_1046_ = v_val_1072_;
goto v___jp_1045_;
}
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_dec(v_f_1043_);
lean_dec(v_default_1042_);
lean_dec_ref(v_key_1041_);
lean_dec_ref(v_inst_1040_);
v_a_1073_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1067_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1067_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
v___jp_1045_:
{
lean_object* v_encode_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v_encode_1047_ = lean_ctor_get(v_inst_1040_, 0);
lean_inc_ref(v_encode_1047_);
lean_dec_ref(v_inst_1040_);
v___x_1048_ = lean_apply_1(v_f_1043_, v_a_1046_);
lean_inc(v___x_1048_);
v___x_1049_ = lean_apply_1(v_encode_1047_, v___x_1048_);
v___x_1050_ = lean_near_storage_write(v_key_1041_, v___x_1049_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v___x_1050_, 0);
lean_dec(v_unused_1058_);
v___x_1052_ = v___x_1050_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_dec(v___x_1050_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1048_);
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1048_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v___x_1048_);
v_a_1059_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1050_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1050_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
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
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___boxed(lean_object* v_00_u03b1_1081_, lean_object* v_inst_1082_, lean_object* v_key_1083_, lean_object* v_default_1084_, lean_object* v_f_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Near_Storage_Key_modify(v_00_u03b1_1081_, v_inst_1082_, v_key_1083_, v_default_1084_, v_f_1085_);
return v_res_1087_;
}
}
static lean_object* _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = lean_unsigned_to_nat(7u);
v___x_1098_ = lean_nat_to_int(v___x_1097_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___redArg(lean_object* v_x_1099_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1100_ = ((lean_object*)(l_Near_Storage_instReprSlot_repr___redArg___closed__3));
v___x_1101_ = lean_obj_once(&l_Near_Storage_instReprSlot_repr___redArg___closed__4, &l_Near_Storage_instReprSlot_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4);
v___x_1102_ = l_Near_Storage_instReprKey_repr___redArg(v_x_1099_);
v___x_1103_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = 0;
v___x_1105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1105_, 0, v___x_1103_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*1, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1100_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_1108_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_1109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
lean_ctor_set(v___x_1109_, 1, v___x_1106_);
v___x_1110_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_1111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1107_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*1, v___x_1104_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr(lean_object* v_00_u03b1_1114_, lean_object* v_inst_1115_, lean_object* v_x_1116_, lean_object* v_prec_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Near_Storage_instReprSlot_repr___redArg(v_x_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_inst_1120_, lean_object* v_x_1121_, lean_object* v_prec_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Near_Storage_instReprSlot_repr(v_00_u03b1_1119_, v_inst_1120_, v_x_1121_, v_prec_1122_);
lean_dec(v_prec_1122_);
lean_dec_ref(v_inst_1120_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot___redArg(lean_object* v_inst_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_alloc_closure((void*)(l_Near_Storage_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_1125_, 0, lean_box(0));
lean_closure_set(v___x_1125_, 1, v_inst_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot(lean_object* v_00_u03b1_1126_, lean_object* v_inst_1127_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_alloc_closure((void*)(l_Near_Storage_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_1128_, 0, lean_box(0));
lean_closure_set(v___x_1128_, 1, v_inst_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg(lean_object* v_name_1129_){
_start:
{
lean_inc_ref(v_name_1129_);
return v_name_1129_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg___boxed(lean_object* v_name_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Near_Storage_Slot_make___redArg(v_name_1130_);
lean_dec_ref(v_name_1130_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make(lean_object* v_00_u03b1_1132_, lean_object* v_name_1133_){
_start:
{
lean_inc_ref(v_name_1133_);
return v_name_1133_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___boxed(lean_object* v_00_u03b1_1134_, lean_object* v_name_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Near_Storage_Slot_make(v_00_u03b1_1134_, v_name_1135_);
lean_dec_ref(v_name_1135_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg(lean_object* v_inst_1137_, lean_object* v_slot_1138_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_near_storage_read(v_slot_1138_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1155_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1143_ = v___x_1140_;
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1140_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
if (lean_obj_tag(v_a_1141_) == 0)
{
lean_object* v___x_1145_; lean_object* v___x_1147_; 
lean_dec_ref(v_inst_1137_);
v___x_1145_ = lean_box(0);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1145_);
v___x_1147_ = v___x_1143_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
else
{
lean_object* v_val_1149_; lean_object* v_decode_1150_; lean_object* v___x_1151_; lean_object* v___x_1153_; 
v_val_1149_ = lean_ctor_get(v_a_1141_, 0);
lean_inc(v_val_1149_);
lean_dec_ref_known(v_a_1141_, 1);
v_decode_1150_ = lean_ctor_get(v_inst_1137_, 1);
lean_inc_ref(v_decode_1150_);
lean_dec_ref(v_inst_1137_);
v___x_1151_ = lean_apply_1(v_decode_1150_, v_val_1149_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1151_);
v___x_1153_ = v___x_1143_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec_ref(v_inst_1137_);
v_a_1156_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1140_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1140_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg___boxed(lean_object* v_inst_1164_, lean_object* v_slot_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Near_Storage_Slot_read_x3f___redArg(v_inst_1164_, v_slot_1165_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f(lean_object* v_00_u03b1_1168_, lean_object* v_inst_1169_, lean_object* v_slot_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = lean_near_storage_read(v_slot_1170_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1187_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1187_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1187_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
if (lean_obj_tag(v_a_1173_) == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1179_; 
lean_dec_ref(v_inst_1169_);
v___x_1177_ = lean_box(0);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1177_);
v___x_1179_ = v___x_1175_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
else
{
lean_object* v_val_1181_; lean_object* v_decode_1182_; lean_object* v___x_1183_; lean_object* v___x_1185_; 
v_val_1181_ = lean_ctor_get(v_a_1173_, 0);
lean_inc(v_val_1181_);
lean_dec_ref_known(v_a_1173_, 1);
v_decode_1182_ = lean_ctor_get(v_inst_1169_, 1);
lean_inc_ref(v_decode_1182_);
lean_dec_ref(v_inst_1169_);
v___x_1183_ = lean_apply_1(v_decode_1182_, v_val_1181_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1183_);
v___x_1185_ = v___x_1175_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec_ref(v_inst_1169_);
v_a_1188_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1172_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1172_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___boxed(lean_object* v_00_u03b1_1196_, lean_object* v_inst_1197_, lean_object* v_slot_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Near_Storage_Slot_read_x3f(v_00_u03b1_1196_, v_inst_1197_, v_slot_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg(lean_object* v_inst_1201_, lean_object* v_slot_1202_, lean_object* v_default_1203_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = lean_near_storage_read(v_slot_1202_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1223_; 
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1208_ = v___x_1205_;
v_isShared_1209_ = v_isSharedCheck_1223_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1205_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1223_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
if (lean_obj_tag(v_a_1206_) == 0)
{
lean_object* v___x_1211_; 
lean_dec_ref(v_inst_1201_);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v_default_1203_);
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_default_1203_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
else
{
lean_object* v_val_1213_; lean_object* v_decode_1214_; lean_object* v___x_1215_; 
v_val_1213_ = lean_ctor_get(v_a_1206_, 0);
lean_inc(v_val_1213_);
lean_dec_ref_known(v_a_1206_, 1);
v_decode_1214_ = lean_ctor_get(v_inst_1201_, 1);
lean_inc_ref(v_decode_1214_);
lean_dec_ref(v_inst_1201_);
v___x_1215_ = lean_apply_1(v_decode_1214_, v_val_1213_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1217_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v_default_1203_);
v___x_1217_ = v___x_1208_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_default_1203_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
else
{
lean_object* v_val_1219_; lean_object* v___x_1221_; 
lean_dec(v_default_1203_);
v_val_1219_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_val_1219_);
lean_dec_ref_known(v___x_1215_, 1);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v_val_1219_);
v___x_1221_ = v___x_1208_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_val_1219_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_dec(v_default_1203_);
lean_dec_ref(v_inst_1201_);
v_a_1224_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1205_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1205_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg___boxed(lean_object* v_inst_1232_, lean_object* v_slot_1233_, lean_object* v_default_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Near_Storage_Slot_read___redArg(v_inst_1232_, v_slot_1233_, v_default_1234_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read(lean_object* v_00_u03b1_1237_, lean_object* v_inst_1238_, lean_object* v_slot_1239_, lean_object* v_default_1240_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = lean_near_storage_read(v_slot_1239_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1260_; 
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1245_ = v___x_1242_;
v_isShared_1246_ = v_isSharedCheck_1260_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1242_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1260_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
if (lean_obj_tag(v_a_1243_) == 0)
{
lean_object* v___x_1248_; 
lean_dec_ref(v_inst_1238_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_default_1240_);
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_default_1240_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
else
{
lean_object* v_val_1250_; lean_object* v_decode_1251_; lean_object* v___x_1252_; 
v_val_1250_ = lean_ctor_get(v_a_1243_, 0);
lean_inc(v_val_1250_);
lean_dec_ref_known(v_a_1243_, 1);
v_decode_1251_ = lean_ctor_get(v_inst_1238_, 1);
lean_inc_ref(v_decode_1251_);
lean_dec_ref(v_inst_1238_);
v___x_1252_ = lean_apply_1(v_decode_1251_, v_val_1250_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v___x_1254_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_default_1240_);
v___x_1254_ = v___x_1245_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_default_1240_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
else
{
lean_object* v_val_1256_; lean_object* v___x_1258_; 
lean_dec(v_default_1240_);
v_val_1256_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_val_1256_);
lean_dec_ref_known(v___x_1252_, 1);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_val_1256_);
v___x_1258_ = v___x_1245_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_val_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec(v_default_1240_);
lean_dec_ref(v_inst_1238_);
v_a_1261_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1242_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1242_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___boxed(lean_object* v_00_u03b1_1269_, lean_object* v_inst_1270_, lean_object* v_slot_1271_, lean_object* v_default_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Near_Storage_Slot_read(v_00_u03b1_1269_, v_inst_1270_, v_slot_1271_, v_default_1272_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg(lean_object* v_inst_1275_, lean_object* v_slot_1276_, lean_object* v_value_1277_){
_start:
{
lean_object* v_encode_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v_encode_1279_ = lean_ctor_get(v_inst_1275_, 0);
lean_inc_ref(v_encode_1279_);
lean_dec_ref(v_inst_1275_);
v___x_1280_ = lean_apply_1(v_encode_1279_, v_value_1277_);
v___x_1281_ = lean_near_storage_write(v_slot_1276_, v___x_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg___boxed(lean_object* v_inst_1282_, lean_object* v_slot_1283_, lean_object* v_value_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Near_Storage_Slot_write___redArg(v_inst_1282_, v_slot_1283_, v_value_1284_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write(lean_object* v_00_u03b1_1287_, lean_object* v_inst_1288_, lean_object* v_slot_1289_, lean_object* v_value_1290_){
_start:
{
lean_object* v_encode_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_encode_1292_ = lean_ctor_get(v_inst_1288_, 0);
lean_inc_ref(v_encode_1292_);
lean_dec_ref(v_inst_1288_);
v___x_1293_ = lean_apply_1(v_encode_1292_, v_value_1290_);
v___x_1294_ = lean_near_storage_write(v_slot_1289_, v___x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___boxed(lean_object* v_00_u03b1_1295_, lean_object* v_inst_1296_, lean_object* v_slot_1297_, lean_object* v_value_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Near_Storage_Slot_write(v_00_u03b1_1295_, v_inst_1296_, v_slot_1297_, v_value_1298_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg(lean_object* v_slot_1301_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_near_storage_has_key(v_slot_1301_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg___boxed(lean_object* v_slot_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Near_Storage_Slot_contains___redArg(v_slot_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains(lean_object* v_00_u03b1_1307_, lean_object* v_slot_1308_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_near_storage_has_key(v_slot_1308_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___boxed(lean_object* v_00_u03b1_1311_, lean_object* v_slot_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Near_Storage_Slot_contains(v_00_u03b1_1311_, v_slot_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg(lean_object* v_slot_1315_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_near_storage_remove(v_slot_1315_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg___boxed(lean_object* v_slot_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Near_Storage_Slot_remove___redArg(v_slot_1318_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove(lean_object* v_00_u03b1_1321_, lean_object* v_slot_1322_){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_near_storage_remove(v_slot_1322_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___boxed(lean_object* v_00_u03b1_1325_, lean_object* v_slot_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Near_Storage_Slot_remove(v_00_u03b1_1325_, v_slot_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg(lean_object* v_inst_1329_, lean_object* v_slot_1330_, lean_object* v_f_1331_){
_start:
{
lean_object* v___x_1333_; 
lean_inc_ref(v_slot_1330_);
v___x_1333_ = lean_near_storage_read(v_slot_1330_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1376_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1336_ = v___x_1333_;
v_isShared_1337_ = v_isSharedCheck_1376_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1333_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1376_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
if (lean_obj_tag(v_a_1334_) == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1340_; 
lean_dec(v_f_1331_);
lean_dec_ref(v_slot_1330_);
lean_dec_ref(v_inst_1329_);
v___x_1338_ = lean_box(0);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1338_);
v___x_1340_ = v___x_1336_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
else
{
lean_object* v_val_1342_; lean_object* v_encode_1343_; lean_object* v_decode_1344_; lean_object* v___x_1345_; 
v_val_1342_ = lean_ctor_get(v_a_1334_, 0);
lean_inc(v_val_1342_);
lean_dec_ref_known(v_a_1334_, 1);
v_encode_1343_ = lean_ctor_get(v_inst_1329_, 0);
lean_inc_ref(v_encode_1343_);
v_decode_1344_ = lean_ctor_get(v_inst_1329_, 1);
lean_inc_ref(v_decode_1344_);
lean_dec_ref(v_inst_1329_);
v___x_1345_ = lean_apply_1(v_decode_1344_, v_val_1342_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v___x_1347_; 
lean_dec_ref(v_encode_1343_);
lean_dec(v_f_1331_);
lean_dec_ref(v_slot_1330_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1345_);
v___x_1347_ = v___x_1336_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
else
{
lean_object* v_val_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1375_; 
lean_del_object(v___x_1336_);
v_val_1349_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1351_ = v___x_1345_;
v_isShared_1352_ = v_isSharedCheck_1375_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_val_1349_);
lean_dec(v___x_1345_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1375_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1353_ = lean_apply_1(v_f_1331_, v_val_1349_);
lean_inc(v___x_1353_);
v___x_1354_ = lean_apply_1(v_encode_1343_, v___x_1353_);
v___x_1355_ = lean_near_storage_write(v_slot_1330_, v___x_1354_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1365_; 
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1365_ == 0)
{
lean_object* v_unused_1366_; 
v_unused_1366_ = lean_ctor_get(v___x_1355_, 0);
lean_dec(v_unused_1366_);
v___x_1357_ = v___x_1355_;
v_isShared_1358_ = v_isSharedCheck_1365_;
goto v_resetjp_1356_;
}
else
{
lean_dec(v___x_1355_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1365_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v___x_1353_);
v___x_1360_ = v___x_1351_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1353_);
v___x_1360_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
lean_object* v___x_1362_; 
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1360_);
v___x_1362_ = v___x_1357_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
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
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec(v___x_1353_);
lean_del_object(v___x_1351_);
v_a_1367_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1355_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1355_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
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
lean_object* v_a_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1384_; 
lean_dec(v_f_1331_);
lean_dec_ref(v_slot_1330_);
lean_dec_ref(v_inst_1329_);
v_a_1377_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1379_ = v___x_1333_;
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_a_1377_);
lean_dec(v___x_1333_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1377_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg___boxed(lean_object* v_inst_1385_, lean_object* v_slot_1386_, lean_object* v_f_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Near_Storage_Slot_modify_x3f___redArg(v_inst_1385_, v_slot_1386_, v_f_1387_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f(lean_object* v_00_u03b1_1390_, lean_object* v_inst_1391_, lean_object* v_slot_1392_, lean_object* v_f_1393_){
_start:
{
lean_object* v___x_1395_; 
lean_inc_ref(v_slot_1392_);
v___x_1395_ = lean_near_storage_read(v_slot_1392_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1438_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1438_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1438_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
if (lean_obj_tag(v_a_1396_) == 0)
{
lean_object* v___x_1400_; lean_object* v___x_1402_; 
lean_dec(v_f_1393_);
lean_dec_ref(v_slot_1392_);
lean_dec_ref(v_inst_1391_);
v___x_1400_ = lean_box(0);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___x_1400_);
v___x_1402_ = v___x_1398_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1400_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
else
{
lean_object* v_val_1404_; lean_object* v_encode_1405_; lean_object* v_decode_1406_; lean_object* v___x_1407_; 
v_val_1404_ = lean_ctor_get(v_a_1396_, 0);
lean_inc(v_val_1404_);
lean_dec_ref_known(v_a_1396_, 1);
v_encode_1405_ = lean_ctor_get(v_inst_1391_, 0);
lean_inc_ref(v_encode_1405_);
v_decode_1406_ = lean_ctor_get(v_inst_1391_, 1);
lean_inc_ref(v_decode_1406_);
lean_dec_ref(v_inst_1391_);
v___x_1407_ = lean_apply_1(v_decode_1406_, v_val_1404_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v___x_1409_; 
lean_dec_ref(v_encode_1405_);
lean_dec(v_f_1393_);
lean_dec_ref(v_slot_1392_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___x_1407_);
v___x_1409_ = v___x_1398_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
else
{
lean_object* v_val_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1437_; 
lean_del_object(v___x_1398_);
v_val_1411_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1413_ = v___x_1407_;
v_isShared_1414_ = v_isSharedCheck_1437_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_val_1411_);
lean_dec(v___x_1407_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1437_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1415_ = lean_apply_1(v_f_1393_, v_val_1411_);
lean_inc(v___x_1415_);
v___x_1416_ = lean_apply_1(v_encode_1405_, v___x_1415_);
v___x_1417_ = lean_near_storage_write(v_slot_1392_, v___x_1416_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1427_; 
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; 
v_unused_1428_ = lean_ctor_get(v___x_1417_, 0);
lean_dec(v_unused_1428_);
v___x_1419_ = v___x_1417_;
v_isShared_1420_ = v_isSharedCheck_1427_;
goto v_resetjp_1418_;
}
else
{
lean_dec(v___x_1417_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1427_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1415_);
v___x_1422_ = v___x_1413_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1415_);
v___x_1422_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1424_; 
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1422_);
v___x_1424_ = v___x_1419_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec(v___x_1415_);
lean_del_object(v___x_1413_);
v_a_1429_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1417_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1417_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
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
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_dec(v_f_1393_);
lean_dec_ref(v_slot_1392_);
lean_dec_ref(v_inst_1391_);
v_a_1439_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1395_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1395_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___boxed(lean_object* v_00_u03b1_1447_, lean_object* v_inst_1448_, lean_object* v_slot_1449_, lean_object* v_f_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Near_Storage_Slot_modify_x3f(v_00_u03b1_1447_, v_inst_1448_, v_slot_1449_, v_f_1450_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg(lean_object* v_inst_1453_, lean_object* v_slot_1454_, lean_object* v_default_1455_, lean_object* v_f_1456_){
_start:
{
lean_object* v___x_1458_; 
lean_inc_ref(v_slot_1454_);
v___x_1458_ = lean_near_storage_read(v_slot_1454_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v_a_1461_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1458_, 1);
if (lean_obj_tag(v_a_1459_) == 0)
{
v_a_1461_ = v_default_1455_;
goto v___jp_1460_;
}
else
{
lean_object* v_val_1482_; lean_object* v_decode_1483_; lean_object* v___x_1484_; 
v_val_1482_ = lean_ctor_get(v_a_1459_, 0);
lean_inc(v_val_1482_);
lean_dec_ref_known(v_a_1459_, 1);
v_decode_1483_ = lean_ctor_get(v_inst_1453_, 1);
lean_inc_ref(v_decode_1483_);
v___x_1484_ = lean_apply_1(v_decode_1483_, v_val_1482_);
if (lean_obj_tag(v___x_1484_) == 0)
{
v_a_1461_ = v_default_1455_;
goto v___jp_1460_;
}
else
{
lean_object* v_val_1485_; 
lean_dec(v_default_1455_);
v_val_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_val_1485_);
lean_dec_ref_known(v___x_1484_, 1);
v_a_1461_ = v_val_1485_;
goto v___jp_1460_;
}
}
v___jp_1460_:
{
lean_object* v_encode_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_encode_1462_ = lean_ctor_get(v_inst_1453_, 0);
lean_inc_ref(v_encode_1462_);
lean_dec_ref(v_inst_1453_);
v___x_1463_ = lean_apply_1(v_f_1456_, v_a_1461_);
lean_inc(v___x_1463_);
v___x_1464_ = lean_apply_1(v_encode_1462_, v___x_1463_);
v___x_1465_ = lean_near_storage_write(v_slot_1454_, v___x_1464_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; 
v_unused_1473_ = lean_ctor_get(v___x_1465_, 0);
lean_dec(v_unused_1473_);
v___x_1467_ = v___x_1465_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_dec(v___x_1465_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1463_);
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1463_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec(v___x_1463_);
v_a_1474_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1465_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1465_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec(v_f_1456_);
lean_dec(v_default_1455_);
lean_dec_ref(v_slot_1454_);
lean_dec_ref(v_inst_1453_);
v_a_1486_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1458_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1458_);
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
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg___boxed(lean_object* v_inst_1494_, lean_object* v_slot_1495_, lean_object* v_default_1496_, lean_object* v_f_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Near_Storage_Slot_modify___redArg(v_inst_1494_, v_slot_1495_, v_default_1496_, v_f_1497_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify(lean_object* v_00_u03b1_1500_, lean_object* v_inst_1501_, lean_object* v_slot_1502_, lean_object* v_default_1503_, lean_object* v_f_1504_){
_start:
{
lean_object* v_a_1507_; lean_object* v___x_1528_; 
lean_inc_ref(v_slot_1502_);
v___x_1528_ = lean_near_storage_read(v_slot_1502_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref_known(v___x_1528_, 1);
if (lean_obj_tag(v_a_1529_) == 0)
{
v_a_1507_ = v_default_1503_;
goto v___jp_1506_;
}
else
{
lean_object* v_val_1530_; lean_object* v_decode_1531_; lean_object* v___x_1532_; 
v_val_1530_ = lean_ctor_get(v_a_1529_, 0);
lean_inc(v_val_1530_);
lean_dec_ref_known(v_a_1529_, 1);
v_decode_1531_ = lean_ctor_get(v_inst_1501_, 1);
lean_inc_ref(v_decode_1531_);
v___x_1532_ = lean_apply_1(v_decode_1531_, v_val_1530_);
if (lean_obj_tag(v___x_1532_) == 0)
{
v_a_1507_ = v_default_1503_;
goto v___jp_1506_;
}
else
{
lean_object* v_val_1533_; 
lean_dec(v_default_1503_);
v_val_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_val_1533_);
lean_dec_ref_known(v___x_1532_, 1);
v_a_1507_ = v_val_1533_;
goto v___jp_1506_;
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_f_1504_);
lean_dec(v_default_1503_);
lean_dec_ref(v_slot_1502_);
lean_dec_ref(v_inst_1501_);
v_a_1534_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1528_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1528_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
v___jp_1506_:
{
lean_object* v_encode_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v_encode_1508_ = lean_ctor_get(v_inst_1501_, 0);
lean_inc_ref(v_encode_1508_);
lean_dec_ref(v_inst_1501_);
v___x_1509_ = lean_apply_1(v_f_1504_, v_a_1507_);
lean_inc(v___x_1509_);
v___x_1510_ = lean_apply_1(v_encode_1508_, v___x_1509_);
v___x_1511_ = lean_near_storage_write(v_slot_1502_, v___x_1510_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1518_ == 0)
{
lean_object* v_unused_1519_; 
v_unused_1519_ = lean_ctor_get(v___x_1511_, 0);
lean_dec(v_unused_1519_);
v___x_1513_ = v___x_1511_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_dec(v___x_1511_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1509_);
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v___x_1509_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec(v___x_1509_);
v_a_1520_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1511_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1511_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___boxed(lean_object* v_00_u03b1_1542_, lean_object* v_inst_1543_, lean_object* v_slot_1544_, lean_object* v_default_1545_, lean_object* v_f_1546_, lean_object* v_a_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Near_Storage_Slot_modify(v_00_u03b1_1542_, v_inst_1543_, v_slot_1544_, v_default_1545_, v_f_1546_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___redArg(lean_object* v_x_1558_){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1559_ = ((lean_object*)(l_Near_Storage_instReprTypedMap_repr___redArg___closed__3));
v___x_1560_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__7, &l_Near_instReprNearToken_repr___redArg___closed__7_once, _init_l_Near_instReprNearToken_repr___redArg___closed__7);
v___x_1561_ = l_String_quote(v_x_1558_);
v___x_1562_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
v___x_1563_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1560_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = 0;
v___x_1565_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*1, v___x_1564_);
v___x_1566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1559_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_1568_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_1569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
lean_ctor_set(v___x_1569_, 1, v___x_1566_);
v___x_1570_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_1571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1569_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1567_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
lean_ctor_set_uint8(v___x_1573_, sizeof(void*)*1, v___x_1564_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr(lean_object* v_00_u03b1_1574_, lean_object* v_inst_1575_, lean_object* v_x_1576_, lean_object* v_prec_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Near_Storage_instReprTypedMap_repr___redArg(v_x_1576_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___boxed(lean_object* v_00_u03b1_1579_, lean_object* v_inst_1580_, lean_object* v_x_1581_, lean_object* v_prec_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Near_Storage_instReprTypedMap_repr(v_00_u03b1_1579_, v_inst_1580_, v_x_1581_, v_prec_1582_);
lean_dec(v_prec_1582_);
lean_dec_ref(v_inst_1580_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap___redArg(lean_object* v_inst_1584_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = lean_alloc_closure((void*)(l_Near_Storage_instReprTypedMap_repr___boxed), 4, 2);
lean_closure_set(v___x_1585_, 0, lean_box(0));
lean_closure_set(v___x_1585_, 1, v_inst_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap(lean_object* v_00_u03b1_1586_, lean_object* v_inst_1587_){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_alloc_closure((void*)(l_Near_Storage_instReprTypedMap_repr___boxed), 4, 2);
lean_closure_set(v___x_1588_, 0, lean_box(0));
lean_closure_set(v___x_1588_, 1, v_inst_1587_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg(lean_object* v_mapPrefix_1589_){
_start:
{
lean_inc_ref(v_mapPrefix_1589_);
return v_mapPrefix_1589_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg___boxed(lean_object* v_mapPrefix_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Near_Storage_TypedMap_make___redArg(v_mapPrefix_1590_);
lean_dec_ref(v_mapPrefix_1590_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make(lean_object* v_00_u03b1_1592_, lean_object* v_mapPrefix_1593_){
_start:
{
lean_inc_ref(v_mapPrefix_1593_);
return v_mapPrefix_1593_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___boxed(lean_object* v_00_u03b1_1594_, lean_object* v_mapPrefix_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Near_Storage_TypedMap_make(v_00_u03b1_1594_, v_mapPrefix_1595_);
lean_dec_ref(v_mapPrefix_1595_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg(lean_object* v_m_1598_, lean_object* v_key_1599_){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1601_ = lean_string_append(v_m_1598_, v___x_1600_);
v___x_1602_ = lean_string_append(v___x_1601_, v_key_1599_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg___boxed(lean_object* v_m_1603_, lean_object* v_key_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_1603_, v_key_1604_);
lean_dec_ref(v_key_1604_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey(lean_object* v_00_u03b1_1606_, lean_object* v_m_1607_, lean_object* v_key_1608_){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1609_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1610_ = lean_string_append(v_m_1607_, v___x_1609_);
v___x_1611_ = lean_string_append(v___x_1610_, v_key_1608_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___boxed(lean_object* v_00_u03b1_1612_, lean_object* v_m_1613_, lean_object* v_key_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Near_Storage_TypedMap_storageKey(v_00_u03b1_1612_, v_m_1613_, v_key_1614_);
lean_dec_ref(v_key_1614_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg(lean_object* v_inst_1616_, lean_object* v_m_1617_, lean_object* v_key_1618_){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1620_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1621_ = lean_string_append(v_m_1617_, v___x_1620_);
v___x_1622_ = lean_string_append(v___x_1621_, v_key_1618_);
v___x_1623_ = lean_near_storage_read(v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1638_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1638_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1638_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
if (lean_obj_tag(v_a_1624_) == 0)
{
lean_object* v___x_1628_; lean_object* v___x_1630_; 
lean_dec_ref(v_inst_1616_);
v___x_1628_ = lean_box(0);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1628_);
v___x_1630_ = v___x_1626_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
else
{
lean_object* v_val_1632_; lean_object* v_decode_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
v_val_1632_ = lean_ctor_get(v_a_1624_, 0);
lean_inc(v_val_1632_);
lean_dec_ref_known(v_a_1624_, 1);
v_decode_1633_ = lean_ctor_get(v_inst_1616_, 1);
lean_inc_ref(v_decode_1633_);
lean_dec_ref(v_inst_1616_);
v___x_1634_ = lean_apply_1(v_decode_1633_, v_val_1632_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1634_);
v___x_1636_ = v___x_1626_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
lean_dec_ref(v_inst_1616_);
v_a_1639_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1623_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1623_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg___boxed(lean_object* v_inst_1647_, lean_object* v_m_1648_, lean_object* v_key_1649_, lean_object* v_a_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Near_Storage_TypedMap_get___redArg(v_inst_1647_, v_m_1648_, v_key_1649_);
lean_dec_ref(v_key_1649_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get(lean_object* v_00_u03b1_1652_, lean_object* v_inst_1653_, lean_object* v_m_1654_, lean_object* v_key_1655_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1657_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1658_ = lean_string_append(v_m_1654_, v___x_1657_);
v___x_1659_ = lean_string_append(v___x_1658_, v_key_1655_);
v___x_1660_ = lean_near_storage_read(v___x_1659_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1675_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1663_ = v___x_1660_;
v_isShared_1664_ = v_isSharedCheck_1675_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1660_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1675_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
if (lean_obj_tag(v_a_1661_) == 0)
{
lean_object* v___x_1665_; lean_object* v___x_1667_; 
lean_dec_ref(v_inst_1653_);
v___x_1665_ = lean_box(0);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v___x_1665_);
v___x_1667_ = v___x_1663_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
else
{
lean_object* v_val_1669_; lean_object* v_decode_1670_; lean_object* v___x_1671_; lean_object* v___x_1673_; 
v_val_1669_ = lean_ctor_get(v_a_1661_, 0);
lean_inc(v_val_1669_);
lean_dec_ref_known(v_a_1661_, 1);
v_decode_1670_ = lean_ctor_get(v_inst_1653_, 1);
lean_inc_ref(v_decode_1670_);
lean_dec_ref(v_inst_1653_);
v___x_1671_ = lean_apply_1(v_decode_1670_, v_val_1669_);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v___x_1671_);
v___x_1673_ = v___x_1663_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
lean_dec_ref(v_inst_1653_);
v_a_1676_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1660_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1660_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___boxed(lean_object* v_00_u03b1_1684_, lean_object* v_inst_1685_, lean_object* v_m_1686_, lean_object* v_key_1687_, lean_object* v_a_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Near_Storage_TypedMap_get(v_00_u03b1_1684_, v_inst_1685_, v_m_1686_, v_key_1687_);
lean_dec_ref(v_key_1687_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg(lean_object* v_inst_1690_, lean_object* v_m_1691_, lean_object* v_key_1692_, lean_object* v_default_1693_){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1695_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1696_ = lean_string_append(v_m_1691_, v___x_1695_);
v___x_1697_ = lean_string_append(v___x_1696_, v_key_1692_);
v___x_1698_ = lean_near_storage_read(v___x_1697_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1716_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1701_ = v___x_1698_;
v_isShared_1702_ = v_isSharedCheck_1716_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1698_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1716_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
if (lean_obj_tag(v_a_1699_) == 0)
{
lean_object* v___x_1704_; 
lean_dec_ref(v_inst_1690_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v_default_1693_);
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_default_1693_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
else
{
lean_object* v_val_1706_; lean_object* v_decode_1707_; lean_object* v___x_1708_; 
v_val_1706_ = lean_ctor_get(v_a_1699_, 0);
lean_inc(v_val_1706_);
lean_dec_ref_known(v_a_1699_, 1);
v_decode_1707_ = lean_ctor_get(v_inst_1690_, 1);
lean_inc_ref(v_decode_1707_);
lean_dec_ref(v_inst_1690_);
v___x_1708_ = lean_apply_1(v_decode_1707_, v_val_1706_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v___x_1710_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v_default_1693_);
v___x_1710_ = v___x_1701_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_default_1693_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
else
{
lean_object* v_val_1712_; lean_object* v___x_1714_; 
lean_dec(v_default_1693_);
v_val_1712_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_val_1712_);
lean_dec_ref_known(v___x_1708_, 1);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v_val_1712_);
v___x_1714_ = v___x_1701_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_val_1712_);
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
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec(v_default_1693_);
lean_dec_ref(v_inst_1690_);
v_a_1717_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1698_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1698_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg___boxed(lean_object* v_inst_1725_, lean_object* v_m_1726_, lean_object* v_key_1727_, lean_object* v_default_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Near_Storage_TypedMap_getOr___redArg(v_inst_1725_, v_m_1726_, v_key_1727_, v_default_1728_);
lean_dec_ref(v_key_1727_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr(lean_object* v_00_u03b1_1731_, lean_object* v_inst_1732_, lean_object* v_m_1733_, lean_object* v_key_1734_, lean_object* v_default_1735_){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1737_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1738_ = lean_string_append(v_m_1733_, v___x_1737_);
v___x_1739_ = lean_string_append(v___x_1738_, v_key_1734_);
v___x_1740_ = lean_near_storage_read(v___x_1739_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1758_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1758_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1758_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
if (lean_obj_tag(v_a_1741_) == 0)
{
lean_object* v___x_1746_; 
lean_dec_ref(v_inst_1732_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v_default_1735_);
v___x_1746_ = v___x_1743_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_default_1735_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
else
{
lean_object* v_val_1748_; lean_object* v_decode_1749_; lean_object* v___x_1750_; 
v_val_1748_ = lean_ctor_get(v_a_1741_, 0);
lean_inc(v_val_1748_);
lean_dec_ref_known(v_a_1741_, 1);
v_decode_1749_ = lean_ctor_get(v_inst_1732_, 1);
lean_inc_ref(v_decode_1749_);
lean_dec_ref(v_inst_1732_);
v___x_1750_ = lean_apply_1(v_decode_1749_, v_val_1748_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v___x_1752_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v_default_1735_);
v___x_1752_ = v___x_1743_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_default_1735_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
else
{
lean_object* v_val_1754_; lean_object* v___x_1756_; 
lean_dec(v_default_1735_);
v_val_1754_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_val_1754_);
lean_dec_ref_known(v___x_1750_, 1);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v_val_1754_);
v___x_1756_ = v___x_1743_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_val_1754_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v_default_1735_);
lean_dec_ref(v_inst_1732_);
v_a_1759_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1740_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1740_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___boxed(lean_object* v_00_u03b1_1767_, lean_object* v_inst_1768_, lean_object* v_m_1769_, lean_object* v_key_1770_, lean_object* v_default_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Near_Storage_TypedMap_getOr(v_00_u03b1_1767_, v_inst_1768_, v_m_1769_, v_key_1770_, v_default_1771_);
lean_dec_ref(v_key_1770_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg(lean_object* v_inst_1774_, lean_object* v_m_1775_, lean_object* v_key_1776_, lean_object* v_value_1777_){
_start:
{
lean_object* v_encode_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v_encode_1779_ = lean_ctor_get(v_inst_1774_, 0);
lean_inc_ref(v_encode_1779_);
lean_dec_ref(v_inst_1774_);
v___x_1780_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1781_ = lean_string_append(v_m_1775_, v___x_1780_);
v___x_1782_ = lean_string_append(v___x_1781_, v_key_1776_);
v___x_1783_ = lean_apply_1(v_encode_1779_, v_value_1777_);
v___x_1784_ = lean_near_storage_write(v___x_1782_, v___x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg___boxed(lean_object* v_inst_1785_, lean_object* v_m_1786_, lean_object* v_key_1787_, lean_object* v_value_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Near_Storage_TypedMap_set___redArg(v_inst_1785_, v_m_1786_, v_key_1787_, v_value_1788_);
lean_dec_ref(v_key_1787_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set(lean_object* v_00_u03b1_1791_, lean_object* v_inst_1792_, lean_object* v_m_1793_, lean_object* v_key_1794_, lean_object* v_value_1795_){
_start:
{
lean_object* v_encode_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v_encode_1797_ = lean_ctor_get(v_inst_1792_, 0);
lean_inc_ref(v_encode_1797_);
lean_dec_ref(v_inst_1792_);
v___x_1798_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1799_ = lean_string_append(v_m_1793_, v___x_1798_);
v___x_1800_ = lean_string_append(v___x_1799_, v_key_1794_);
v___x_1801_ = lean_apply_1(v_encode_1797_, v_value_1795_);
v___x_1802_ = lean_near_storage_write(v___x_1800_, v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___boxed(lean_object* v_00_u03b1_1803_, lean_object* v_inst_1804_, lean_object* v_m_1805_, lean_object* v_key_1806_, lean_object* v_value_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Near_Storage_TypedMap_set(v_00_u03b1_1803_, v_inst_1804_, v_m_1805_, v_key_1806_, v_value_1807_);
lean_dec_ref(v_key_1806_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg(lean_object* v_m_1810_, lean_object* v_key_1811_){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1813_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1814_ = lean_string_append(v_m_1810_, v___x_1813_);
v___x_1815_ = lean_string_append(v___x_1814_, v_key_1811_);
v___x_1816_ = lean_near_storage_has_key(v___x_1815_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg___boxed(lean_object* v_m_1817_, lean_object* v_key_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Near_Storage_TypedMap_contains___redArg(v_m_1817_, v_key_1818_);
lean_dec_ref(v_key_1818_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains(lean_object* v_00_u03b1_1821_, lean_object* v_m_1822_, lean_object* v_key_1823_){
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
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___boxed(lean_object* v_00_u03b1_1829_, lean_object* v_m_1830_, lean_object* v_key_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Near_Storage_TypedMap_contains(v_00_u03b1_1829_, v_m_1830_, v_key_1831_);
lean_dec_ref(v_key_1831_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg(lean_object* v_m_1834_, lean_object* v_key_1835_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1837_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1838_ = lean_string_append(v_m_1834_, v___x_1837_);
v___x_1839_ = lean_string_append(v___x_1838_, v_key_1835_);
v___x_1840_ = lean_near_storage_remove(v___x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg___boxed(lean_object* v_m_1841_, lean_object* v_key_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Near_Storage_TypedMap_remove___redArg(v_m_1841_, v_key_1842_);
lean_dec_ref(v_key_1842_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove(lean_object* v_00_u03b1_1845_, lean_object* v_m_1846_, lean_object* v_key_1847_){
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
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___boxed(lean_object* v_00_u03b1_1853_, lean_object* v_m_1854_, lean_object* v_key_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Near_Storage_TypedMap_remove(v_00_u03b1_1853_, v_m_1854_, v_key_1855_);
lean_dec_ref(v_key_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg(lean_object* v_inst_1858_, lean_object* v_m_1859_, lean_object* v_key_1860_, lean_object* v_default_1861_, lean_object* v_f_1862_){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1864_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1865_ = lean_string_append(v_m_1859_, v___x_1864_);
v___x_1866_ = lean_string_append(v___x_1865_, v_key_1860_);
lean_inc_ref(v___x_1866_);
v___x_1867_ = lean_near_storage_read(v___x_1866_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v_a_1870_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
lean_dec_ref_known(v___x_1867_, 1);
if (lean_obj_tag(v_a_1868_) == 0)
{
v_a_1870_ = v_default_1861_;
goto v___jp_1869_;
}
else
{
lean_object* v_val_1891_; lean_object* v_decode_1892_; lean_object* v___x_1893_; 
v_val_1891_ = lean_ctor_get(v_a_1868_, 0);
lean_inc(v_val_1891_);
lean_dec_ref_known(v_a_1868_, 1);
v_decode_1892_ = lean_ctor_get(v_inst_1858_, 1);
lean_inc_ref(v_decode_1892_);
v___x_1893_ = lean_apply_1(v_decode_1892_, v_val_1891_);
if (lean_obj_tag(v___x_1893_) == 0)
{
v_a_1870_ = v_default_1861_;
goto v___jp_1869_;
}
else
{
lean_object* v_val_1894_; 
lean_dec(v_default_1861_);
v_val_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_val_1894_);
lean_dec_ref_known(v___x_1893_, 1);
v_a_1870_ = v_val_1894_;
goto v___jp_1869_;
}
}
v___jp_1869_:
{
lean_object* v_encode_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_encode_1871_ = lean_ctor_get(v_inst_1858_, 0);
lean_inc_ref(v_encode_1871_);
lean_dec_ref(v_inst_1858_);
v___x_1872_ = lean_apply_1(v_f_1862_, v_a_1870_);
lean_inc(v___x_1872_);
v___x_1873_ = lean_apply_1(v_encode_1871_, v___x_1872_);
v___x_1874_ = lean_near_storage_write(v___x_1866_, v___x_1873_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1881_ == 0)
{
lean_object* v_unused_1882_; 
v_unused_1882_ = lean_ctor_get(v___x_1874_, 0);
lean_dec(v_unused_1882_);
v___x_1876_ = v___x_1874_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_dec(v___x_1874_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1872_);
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1872_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
lean_dec(v___x_1872_);
v_a_1883_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1874_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1874_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec_ref(v___x_1866_);
lean_dec(v_f_1862_);
lean_dec(v_default_1861_);
lean_dec_ref(v_inst_1858_);
v_a_1895_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1867_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1867_);
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
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg___boxed(lean_object* v_inst_1903_, lean_object* v_m_1904_, lean_object* v_key_1905_, lean_object* v_default_1906_, lean_object* v_f_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Near_Storage_TypedMap_modify___redArg(v_inst_1903_, v_m_1904_, v_key_1905_, v_default_1906_, v_f_1907_);
lean_dec_ref(v_key_1905_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify(lean_object* v_00_u03b1_1910_, lean_object* v_inst_1911_, lean_object* v_m_1912_, lean_object* v_key_1913_, lean_object* v_default_1914_, lean_object* v_f_1915_){
_start:
{
lean_object* v_a_1918_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1942_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
lean_inc_ref(v_m_1912_);
v___x_1943_ = lean_string_append(v_m_1912_, v___x_1942_);
v___x_1944_ = lean_string_append(v___x_1943_, v_key_1913_);
v___x_1945_ = lean_near_storage_read(v___x_1944_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
if (lean_obj_tag(v_a_1946_) == 0)
{
v_a_1918_ = v_default_1914_;
goto v___jp_1917_;
}
else
{
lean_object* v_val_1947_; lean_object* v_decode_1948_; lean_object* v___x_1949_; 
v_val_1947_ = lean_ctor_get(v_a_1946_, 0);
lean_inc(v_val_1947_);
lean_dec_ref_known(v_a_1946_, 1);
v_decode_1948_ = lean_ctor_get(v_inst_1911_, 1);
lean_inc_ref(v_decode_1948_);
v___x_1949_ = lean_apply_1(v_decode_1948_, v_val_1947_);
if (lean_obj_tag(v___x_1949_) == 0)
{
v_a_1918_ = v_default_1914_;
goto v___jp_1917_;
}
else
{
lean_object* v_val_1950_; 
lean_dec(v_default_1914_);
v_val_1950_ = lean_ctor_get(v___x_1949_, 0);
lean_inc(v_val_1950_);
lean_dec_ref_known(v___x_1949_, 1);
v_a_1918_ = v_val_1950_;
goto v___jp_1917_;
}
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec(v_f_1915_);
lean_dec(v_default_1914_);
lean_dec_ref(v_m_1912_);
lean_dec_ref(v_inst_1911_);
v_a_1951_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1945_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1945_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
v___jp_1917_:
{
lean_object* v_encode_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v_encode_1919_ = lean_ctor_get(v_inst_1911_, 0);
lean_inc_ref(v_encode_1919_);
lean_dec_ref(v_inst_1911_);
v___x_1920_ = lean_apply_1(v_f_1915_, v_a_1918_);
v___x_1921_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1922_ = lean_string_append(v_m_1912_, v___x_1921_);
v___x_1923_ = lean_string_append(v___x_1922_, v_key_1913_);
lean_inc(v___x_1920_);
v___x_1924_ = lean_apply_1(v_encode_1919_, v___x_1920_);
v___x_1925_ = lean_near_storage_write(v___x_1923_, v___x_1924_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1932_ == 0)
{
lean_object* v_unused_1933_; 
v_unused_1933_ = lean_ctor_get(v___x_1925_, 0);
lean_dec(v_unused_1933_);
v___x_1927_ = v___x_1925_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_dec(v___x_1925_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v___x_1920_);
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1920_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec(v___x_1920_);
v_a_1934_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1925_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1925_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___boxed(lean_object* v_00_u03b1_1959_, lean_object* v_inst_1960_, lean_object* v_m_1961_, lean_object* v_key_1962_, lean_object* v_default_1963_, lean_object* v_f_1964_, lean_object* v_a_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_Near_Storage_TypedMap_modify(v_00_u03b1_1959_, v_inst_1960_, v_m_1961_, v_key_1962_, v_default_1963_, v_f_1964_);
lean_dec_ref(v_key_1962_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = lean_near_current_account_id();
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = lean_near_predecessor_account_id();
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object* v_a_00___x40___internal___hyg_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = lean_near_block_timestamp();
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object* v_a_00___x40___internal___hyg_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = lean_near_block_height();
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object* v_a_00___x40___internal___hyg_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = lean_near_input();
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object* v_data_1984_, lean_object* v_a_00___x40___internal___hyg_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = lean_near_value_return(v_data_1984_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object* v_msg_1989_, lean_object* v_a_00___x40___internal___hyg_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = lean_near_log(v_msg_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccount(){
_start:
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_near_current_account_id();
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1993_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1993_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
v_a_2002_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1993_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1993_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccount___boxed(lean_object* v_a_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l_Near_Env_currentAccount();
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount(){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_2013_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_2013_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
else
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2029_; 
v_a_2022_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2024_ = v___x_2013_;
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_2013_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2029_;
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
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount___boxed(lean_object* v_a_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Near_Env_predecessorAccount();
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_inputString(){
_start:
{
lean_object* v___x_2033_; 
v___x_2033_ = lean_near_input();
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_inputString___boxed(lean_object* v_a_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Near_Env_inputString();
return v_res_2035_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = lean_unsigned_to_nat(18u);
v___x_2046_ = lean_nat_to_int(v___x_2045_);
return v___x_2046_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = lean_unsigned_to_nat(22u);
v___x_2054_ = lean_nat_to_int(v___x_2053_);
return v___x_2054_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_unsigned_to_nat(15u);
v___x_2059_ = lean_nat_to_int(v___x_2058_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___redArg(lean_object* v_x_2066_){
_start:
{
lean_object* v_currentAccount_2067_; lean_object* v_predecessorAccount_2068_; uint64_t v_blockHeight_2069_; uint64_t v_blockTimestamp_2070_; lean_object* v_input_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_currentAccount_2067_ = lean_ctor_get(v_x_2066_, 0);
lean_inc_ref(v_currentAccount_2067_);
v_predecessorAccount_2068_ = lean_ctor_get(v_x_2066_, 1);
lean_inc_ref(v_predecessorAccount_2068_);
v_blockHeight_2069_ = lean_ctor_get_uint64(v_x_2066_, sizeof(void*)*3);
v_blockTimestamp_2070_ = lean_ctor_get_uint64(v_x_2066_, sizeof(void*)*3 + 8);
v_input_2071_ = lean_ctor_get(v_x_2066_, 2);
lean_inc_ref(v_input_2071_);
lean_dec_ref(v_x_2066_);
v___x_2072_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__5));
v___x_2073_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__3));
v___x_2074_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__4, &l_Near_Env_instReprContext_repr___redArg___closed__4_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__4);
v___x_2075_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_2076_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2076_, 0, v_currentAccount_2067_);
v___x_2077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2075_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
v___x_2078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
lean_ctor_set(v___x_2078_, 1, v___x_2075_);
v___x_2079_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2074_);
lean_ctor_set(v___x_2079_, 1, v___x_2078_);
v___x_2080_ = 0;
v___x_2081_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2081_, 0, v___x_2079_);
lean_ctor_set_uint8(v___x_2081_, sizeof(void*)*1, v___x_2080_);
v___x_2082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2073_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__6));
v___x_2084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = lean_box(1);
v___x_2086_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2084_);
lean_ctor_set(v___x_2086_, 1, v___x_2085_);
v___x_2087_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__8));
v___x_2088_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
lean_ctor_set(v___x_2089_, 1, v___x_2072_);
v___x_2090_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__9, &l_Near_Env_instReprContext_repr___redArg___closed__9_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__9);
v___x_2091_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2091_, 0, v_predecessorAccount_2068_);
v___x_2092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2075_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
lean_ctor_set(v___x_2093_, 1, v___x_2075_);
v___x_2094_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2090_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
v___x_2095_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set_uint8(v___x_2095_, sizeof(void*)*1, v___x_2080_);
v___x_2096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2089_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
lean_ctor_set(v___x_2097_, 1, v___x_2083_);
v___x_2098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v___x_2085_);
v___x_2099_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__11));
v___x_2100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
lean_ctor_set(v___x_2101_, 1, v___x_2072_);
v___x_2102_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__12, &l_Near_Env_instReprContext_repr___redArg___closed__12_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__12);
v___x_2103_ = lean_uint64_to_nat(v_blockHeight_2069_);
v___x_2104_ = l_Nat_reprFast(v___x_2103_);
v___x_2105_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
v___x_2106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2102_);
lean_ctor_set(v___x_2106_, 1, v___x_2105_);
v___x_2107_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
lean_ctor_set_uint8(v___x_2107_, sizeof(void*)*1, v___x_2080_);
v___x_2108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2101_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
v___x_2109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
lean_ctor_set(v___x_2109_, 1, v___x_2083_);
v___x_2110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
lean_ctor_set(v___x_2110_, 1, v___x_2085_);
v___x_2111_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__14));
v___x_2112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2110_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
lean_ctor_set(v___x_2113_, 1, v___x_2072_);
v___x_2114_ = lean_uint64_to_nat(v_blockTimestamp_2070_);
v___x_2115_ = l_Nat_reprFast(v___x_2114_);
v___x_2116_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
v___x_2117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2074_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
lean_ctor_set_uint8(v___x_2118_, sizeof(void*)*1, v___x_2080_);
v___x_2119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2113_);
lean_ctor_set(v___x_2119_, 1, v___x_2118_);
v___x_2120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v___x_2083_);
v___x_2121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
lean_ctor_set(v___x_2121_, 1, v___x_2085_);
v___x_2122_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__16));
v___x_2123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
lean_ctor_set(v___x_2124_, 1, v___x_2072_);
v___x_2125_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_2126_ = l_String_quote(v_input_2071_);
v___x_2127_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
v___x_2128_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2125_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2129_, 0, v___x_2128_);
lean_ctor_set_uint8(v___x_2129_, sizeof(void*)*1, v___x_2080_);
v___x_2130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2124_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_2132_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_2133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
lean_ctor_set(v___x_2133_, 1, v___x_2130_);
v___x_2134_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_2135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2133_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
v___x_2136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2131_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
lean_ctor_set_uint8(v___x_2137_, sizeof(void*)*1, v___x_2080_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr(lean_object* v_x_2138_, lean_object* v_prec_2139_){
_start:
{
lean_object* v___x_2140_; 
v___x_2140_ = l_Near_Env_instReprContext_repr___redArg(v_x_2138_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___boxed(lean_object* v_x_2141_, lean_object* v_prec_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l_Near_Env_instReprContext_repr(v_x_2141_, v_prec_2142_);
lean_dec(v_prec_2142_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_context(){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_near_current_account_id();
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_a_2148_; lean_object* v___x_2149_; 
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_a_2148_);
lean_dec_ref_known(v___x_2147_, 1);
v___x_2149_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2151_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 1);
v___x_2151_ = lean_near_block_height();
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2153_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2152_);
lean_dec_ref_known(v___x_2151_, 1);
v___x_2153_ = lean_near_block_timestamp();
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2155_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc(v_a_2154_);
lean_dec_ref_known(v___x_2153_, 1);
v___x_2155_ = lean_near_input();
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2166_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2158_ = v___x_2155_;
v_isShared_2159_ = v_isSharedCheck_2166_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2155_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2166_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2160_; uint64_t v___x_2161_; uint64_t v___x_2162_; lean_object* v___x_2164_; 
v___x_2160_ = lean_alloc_ctor(0, 3, 16);
lean_ctor_set(v___x_2160_, 0, v_a_2148_);
lean_ctor_set(v___x_2160_, 1, v_a_2150_);
lean_ctor_set(v___x_2160_, 2, v_a_2156_);
v___x_2161_ = lean_unbox_uint64(v_a_2152_);
lean_dec(v_a_2152_);
lean_ctor_set_uint64(v___x_2160_, sizeof(void*)*3, v___x_2161_);
v___x_2162_ = lean_unbox_uint64(v_a_2154_);
lean_dec(v_a_2154_);
lean_ctor_set_uint64(v___x_2160_, sizeof(void*)*3 + 8, v___x_2162_);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v___x_2160_);
v___x_2164_ = v___x_2158_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v___x_2160_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
lean_dec(v_a_2154_);
lean_dec(v_a_2152_);
lean_dec(v_a_2150_);
lean_dec(v_a_2148_);
v_a_2167_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2155_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2155_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec(v_a_2152_);
lean_dec(v_a_2150_);
lean_dec(v_a_2148_);
v_a_2175_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2153_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2153_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec(v_a_2150_);
lean_dec(v_a_2148_);
v_a_2183_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2151_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2151_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
lean_dec(v_a_2148_);
v_a_2191_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v___x_2149_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2149_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
else
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2206_; 
v_a_2199_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2201_ = v___x_2147_;
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2147_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2204_; 
if (v_isShared_2202_ == 0)
{
v___x_2204_ = v___x_2201_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_a_2199_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_context___boxed(lean_object* v_a_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Near_Env_context();
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg(lean_object* v_inst_2209_, lean_object* v_value_2210_){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = lean_apply_1(v_inst_2209_, v_value_2210_);
v___x_2213_ = lean_near_log(v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg___boxed(lean_object* v_inst_2214_, lean_object* v_value_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Near_Env_logValue___redArg(v_inst_2214_, v_value_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue(lean_object* v_00_u03b1_2218_, lean_object* v_inst_2219_, lean_object* v_value_2220_){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = lean_apply_1(v_inst_2219_, v_value_2220_);
v___x_2223_ = lean_near_log(v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___boxed(lean_object* v_00_u03b1_2224_, lean_object* v_inst_2225_, lean_object* v_value_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Near_Env_logValue(v_00_u03b1_2224_, v_inst_2225_, v_value_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx(uint8_t v_x_2229_){
_start:
{
switch(v_x_2229_)
{
case 0:
{
lean_object* v___x_2230_; 
v___x_2230_ = lean_unsigned_to_nat(0u);
return v___x_2230_;
}
case 1:
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_unsigned_to_nat(1u);
return v___x_2231_;
}
default: 
{
lean_object* v___x_2232_; 
v___x_2232_ = lean_unsigned_to_nat(2u);
return v___x_2232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx___boxed(lean_object* v_x_2233_){
_start:
{
uint8_t v_x_boxed_2234_; lean_object* v_res_2235_; 
v_x_boxed_2234_ = lean_unbox(v_x_2233_);
v_res_2235_ = l_Near_Contract_Mode_ctorIdx(v_x_boxed_2234_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx(uint8_t v_x_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Near_Contract_Mode_ctorIdx(v_x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx___boxed(lean_object* v_x_2238_){
_start:
{
uint8_t v_x_4__boxed_2239_; lean_object* v_res_2240_; 
v_x_4__boxed_2239_ = lean_unbox(v_x_2238_);
v_res_2240_ = l_Near_Contract_Mode_toCtorIdx(v_x_4__boxed_2239_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg(lean_object* v_k_2241_){
_start:
{
lean_inc(v_k_2241_);
return v_k_2241_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg___boxed(lean_object* v_k_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Near_Contract_Mode_ctorElim___redArg(v_k_2242_);
lean_dec(v_k_2242_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim(lean_object* v_motive_2244_, lean_object* v_ctorIdx_2245_, uint8_t v_t_2246_, lean_object* v_h_2247_, lean_object* v_k_2248_){
_start:
{
lean_inc(v_k_2248_);
return v_k_2248_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___boxed(lean_object* v_motive_2249_, lean_object* v_ctorIdx_2250_, lean_object* v_t_2251_, lean_object* v_h_2252_, lean_object* v_k_2253_){
_start:
{
uint8_t v_t_boxed_2254_; lean_object* v_res_2255_; 
v_t_boxed_2254_ = lean_unbox(v_t_2251_);
v_res_2255_ = l_Near_Contract_Mode_ctorElim(v_motive_2249_, v_ctorIdx_2250_, v_t_boxed_2254_, v_h_2252_, v_k_2253_);
lean_dec(v_k_2253_);
lean_dec(v_ctorIdx_2250_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg(lean_object* v_init_2256_){
_start:
{
lean_inc(v_init_2256_);
return v_init_2256_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg___boxed(lean_object* v_init_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Near_Contract_Mode_init_elim___redArg(v_init_2257_);
lean_dec(v_init_2257_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim(lean_object* v_motive_2259_, uint8_t v_t_2260_, lean_object* v_h_2261_, lean_object* v_init_2262_){
_start:
{
lean_inc(v_init_2262_);
return v_init_2262_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___boxed(lean_object* v_motive_2263_, lean_object* v_t_2264_, lean_object* v_h_2265_, lean_object* v_init_2266_){
_start:
{
uint8_t v_t_boxed_2267_; lean_object* v_res_2268_; 
v_t_boxed_2267_ = lean_unbox(v_t_2264_);
v_res_2268_ = l_Near_Contract_Mode_init_elim(v_motive_2263_, v_t_boxed_2267_, v_h_2265_, v_init_2266_);
lean_dec(v_init_2266_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg(lean_object* v_view_2269_){
_start:
{
lean_inc(v_view_2269_);
return v_view_2269_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg___boxed(lean_object* v_view_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Near_Contract_Mode_view_elim___redArg(v_view_2270_);
lean_dec(v_view_2270_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim(lean_object* v_motive_2272_, uint8_t v_t_2273_, lean_object* v_h_2274_, lean_object* v_view_2275_){
_start:
{
lean_inc(v_view_2275_);
return v_view_2275_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___boxed(lean_object* v_motive_2276_, lean_object* v_t_2277_, lean_object* v_h_2278_, lean_object* v_view_2279_){
_start:
{
uint8_t v_t_boxed_2280_; lean_object* v_res_2281_; 
v_t_boxed_2280_ = lean_unbox(v_t_2277_);
v_res_2281_ = l_Near_Contract_Mode_view_elim(v_motive_2276_, v_t_boxed_2280_, v_h_2278_, v_view_2279_);
lean_dec(v_view_2279_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg(lean_object* v_update_2282_){
_start:
{
lean_inc(v_update_2282_);
return v_update_2282_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg___boxed(lean_object* v_update_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l_Near_Contract_Mode_update_elim___redArg(v_update_2283_);
lean_dec(v_update_2283_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim(lean_object* v_motive_2285_, uint8_t v_t_2286_, lean_object* v_h_2287_, lean_object* v_update_2288_){
_start:
{
lean_inc(v_update_2288_);
return v_update_2288_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___boxed(lean_object* v_motive_2289_, lean_object* v_t_2290_, lean_object* v_h_2291_, lean_object* v_update_2292_){
_start:
{
uint8_t v_t_boxed_2293_; lean_object* v_res_2294_; 
v_t_boxed_2293_ = lean_unbox(v_t_2290_);
v_res_2294_ = l_Near_Contract_Mode_update_elim(v_motive_2289_, v_t_boxed_2293_, v_h_2291_, v_update_2292_);
lean_dec(v_update_2292_);
return v_res_2294_;
}
}
LEAN_EXPORT uint8_t l_Near_Contract_instBEqMode_beq(uint8_t v_x_2295_, uint8_t v_y_2296_){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; uint8_t v___x_2299_; 
v___x_2297_ = l_Near_Contract_Mode_ctorIdx(v_x_2295_);
v___x_2298_ = l_Near_Contract_Mode_ctorIdx(v_y_2296_);
v___x_2299_ = lean_nat_dec_eq(v___x_2297_, v___x_2298_);
lean_dec(v___x_2298_);
lean_dec(v___x_2297_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instBEqMode_beq___boxed(lean_object* v_x_2300_, lean_object* v_y_2301_){
_start:
{
uint8_t v_x_17__boxed_2302_; uint8_t v_y_18__boxed_2303_; uint8_t v_res_2304_; lean_object* v_r_2305_; 
v_x_17__boxed_2302_ = lean_unbox(v_x_2300_);
v_y_18__boxed_2303_ = lean_unbox(v_y_2301_);
v_res_2304_ = l_Near_Contract_instBEqMode_beq(v_x_17__boxed_2302_, v_y_18__boxed_2303_);
v_r_2305_ = lean_box(v_res_2304_);
return v_r_2305_;
}
}
static lean_object* _init_l_Near_Contract_instReprMode_repr___closed__6(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_unsigned_to_nat(2u);
v___x_2318_ = lean_nat_to_int(v___x_2317_);
return v___x_2318_;
}
}
static lean_object* _init_l_Near_Contract_instReprMode_repr___closed__7(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = lean_unsigned_to_nat(1u);
v___x_2320_ = lean_nat_to_int(v___x_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr(uint8_t v_x_2321_, lean_object* v_prec_2322_){
_start:
{
lean_object* v___y_2324_; lean_object* v___y_2331_; lean_object* v___y_2338_; 
switch(v_x_2321_)
{
case 0:
{
lean_object* v___x_2344_; uint8_t v___x_2345_; 
v___x_2344_ = lean_unsigned_to_nat(1024u);
v___x_2345_ = lean_nat_dec_le(v___x_2344_, v_prec_2322_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; 
v___x_2346_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_2324_ = v___x_2346_;
goto v___jp_2323_;
}
else
{
lean_object* v___x_2347_; 
v___x_2347_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_2324_ = v___x_2347_;
goto v___jp_2323_;
}
}
case 1:
{
lean_object* v___x_2348_; uint8_t v___x_2349_; 
v___x_2348_ = lean_unsigned_to_nat(1024u);
v___x_2349_ = lean_nat_dec_le(v___x_2348_, v_prec_2322_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; 
v___x_2350_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_2331_ = v___x_2350_;
goto v___jp_2330_;
}
else
{
lean_object* v___x_2351_; 
v___x_2351_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_2331_ = v___x_2351_;
goto v___jp_2330_;
}
}
default: 
{
lean_object* v___x_2352_; uint8_t v___x_2353_; 
v___x_2352_ = lean_unsigned_to_nat(1024u);
v___x_2353_ = lean_nat_dec_le(v___x_2352_, v_prec_2322_);
if (v___x_2353_ == 0)
{
lean_object* v___x_2354_; 
v___x_2354_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_2338_ = v___x_2354_;
goto v___jp_2337_;
}
else
{
lean_object* v___x_2355_; 
v___x_2355_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_2338_ = v___x_2355_;
goto v___jp_2337_;
}
}
}
v___jp_2323_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2325_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__1));
lean_inc(v___y_2324_);
v___x_2326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___y_2324_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v___x_2327_ = 0;
v___x_2328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2328_, 0, v___x_2326_);
lean_ctor_set_uint8(v___x_2328_, sizeof(void*)*1, v___x_2327_);
v___x_2329_ = l_Repr_addAppParen(v___x_2328_, v_prec_2322_);
return v___x_2329_;
}
v___jp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2332_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__3));
lean_inc(v___y_2331_);
v___x_2333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___y_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = 0;
v___x_2335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set_uint8(v___x_2335_, sizeof(void*)*1, v___x_2334_);
v___x_2336_ = l_Repr_addAppParen(v___x_2335_, v_prec_2322_);
return v___x_2336_;
}
v___jp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; uint8_t v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2339_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__5));
lean_inc(v___y_2338_);
v___x_2340_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___y_2338_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = 0;
v___x_2342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2342_, 0, v___x_2340_);
lean_ctor_set_uint8(v___x_2342_, sizeof(void*)*1, v___x_2341_);
v___x_2343_ = l_Repr_addAppParen(v___x_2342_, v_prec_2322_);
return v___x_2343_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr___boxed(lean_object* v_x_2356_, lean_object* v_prec_2357_){
_start:
{
uint8_t v_x_177__boxed_2358_; lean_object* v_res_2359_; 
v_x_177__boxed_2358_ = lean_unbox(v_x_2356_);
v_res_2359_ = l_Near_Contract_instReprMode_repr(v_x_177__boxed_2358_, v_prec_2357_);
lean_dec(v_prec_2357_);
return v_res_2359_;
}
}
static lean_object* _init_l_Near_Contract_entry___boxed__const__1(void){
_start:
{
uint32_t v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = 0;
v___x_2363_ = lean_box_uint32(v___x_2362_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_entry(lean_object* v_action_2364_){
_start:
{
lean_object* v___x_2366_; 
v___x_2366_ = lean_apply_1(v_action_2364_, lean_box(0));
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2374_; 
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2374_ == 0)
{
lean_object* v_unused_2375_; 
v_unused_2375_ = lean_ctor_get(v___x_2366_, 0);
lean_dec(v_unused_2375_);
v___x_2368_ = v___x_2366_;
v_isShared_2369_ = v_isSharedCheck_2374_;
goto v_resetjp_2367_;
}
else
{
lean_dec(v___x_2366_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2374_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2370_; lean_object* v___x_2372_; 
v___x_2370_ = l_Near_Contract_entry___boxed__const__1;
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 0, v___x_2370_);
v___x_2372_ = v___x_2368_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
v_a_2376_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2366_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2366_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_entry___boxed(lean_object* v_action_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Near_Contract_entry(v_action_2384_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initializer(lean_object* v_name_2387_, lean_object* v_action_2388_){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_2389_, 0, v_action_2388_);
v___x_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2390_, 0, v_name_2387_);
lean_ctor_set(v___x_2390_, 1, v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_view(lean_object* v_name_2391_, lean_object* v_action_2392_){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_2393_, 0, v_action_2392_);
v___x_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2394_, 0, v_name_2391_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_update(lean_object* v_name_2395_, lean_object* v_action_2396_){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_2397_, 0, v_action_2396_);
v___x_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2398_, 0, v_name_2395_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized(){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2402_ = lean_near_storage_has_key(v___x_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object* v_a_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Near_Contract_isInitialized();
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object* v_value_2405_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_near_value_return(v_value_2405_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object* v_value_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Near_Contract_returnValue(v_value_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnText(lean_object* v_value_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_near_value_return(v_value_2411_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnText___boxed(lean_object* v_value_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Near_Contract_returnText(v_value_2414_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnJson(lean_object* v_value_2417_){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_near_value_return(v_value_2417_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnJson___boxed(lean_object* v_value_2420_, lean_object* v_a_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Near_Contract_returnJson(v_value_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done(){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(l_Near_Contract_done___closed__0));
v___x_2426_ = lean_near_value_return(v___x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object* v_a_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Near_Contract_done();
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t v_b_2429_){
_start:
{
if (v_b_2429_ == 0)
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
v___x_2432_ = lean_near_value_return(v___x_2431_);
return v___x_2432_;
}
else
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
v___x_2434_ = lean_near_value_return(v___x_2433_);
return v___x_2434_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object* v_b_2435_, lean_object* v_a_2436_){
_start:
{
uint8_t v_b_boxed_2437_; lean_object* v_res_2438_; 
v_b_boxed_2437_ = lean_unbox(v_b_2435_);
v_res_2438_ = l_Near_Contract_returnBool(v_b_boxed_2437_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnU64(uint64_t v_n_2439_){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2441_ = lean_uint64_to_nat(v_n_2439_);
v___x_2442_ = l_Nat_reprFast(v___x_2441_);
v___x_2443_ = lean_near_value_return(v___x_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnU64___boxed(lean_object* v_n_2444_, lean_object* v_a_2445_){
_start:
{
uint64_t v_n_boxed_2446_; lean_object* v_res_2447_; 
v_n_boxed_2446_ = lean_unbox_uint64(v_n_2444_);
lean_dec_ref(v_n_2444_);
v_res_2447_ = l_Near_Contract_returnU64(v_n_boxed_2446_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnNat(lean_object* v_n_2448_){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = l_Nat_reprFast(v_n_2448_);
v___x_2451_ = lean_near_value_return(v___x_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnNat___boxed(lean_object* v_n_2452_, lean_object* v_a_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_Near_Contract_returnNat(v_n_2452_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId(lean_object* v_account_2455_){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = lean_near_value_return(v_account_2455_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId___boxed(lean_object* v_account_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Near_Contract_returnAccountId(v_account_2458_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg(lean_object* v_inst_2461_, lean_object* v_value_2462_){
_start:
{
lean_object* v_encode_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v_encode_2464_ = lean_ctor_get(v_inst_2461_, 0);
lean_inc_ref(v_encode_2464_);
lean_dec_ref(v_inst_2461_);
v___x_2465_ = lean_apply_1(v_encode_2464_, v_value_2462_);
v___x_2466_ = lean_near_value_return(v___x_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg___boxed(lean_object* v_inst_2467_, lean_object* v_value_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Near_Contract_returnEncoded___redArg(v_inst_2467_, v_value_2468_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded(lean_object* v_00_u03b1_2471_, lean_object* v_inst_2472_, lean_object* v_value_2473_){
_start:
{
lean_object* v_encode_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v_encode_2475_ = lean_ctor_get(v_inst_2472_, 0);
lean_inc_ref(v_encode_2475_);
lean_dec_ref(v_inst_2472_);
v___x_2476_ = lean_apply_1(v_encode_2475_, v_value_2473_);
v___x_2477_ = lean_near_value_return(v___x_2476_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___boxed(lean_object* v_00_u03b1_2478_, lean_object* v_inst_2479_, lean_object* v_value_2480_, lean_object* v_a_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Near_Contract_returnEncoded(v_00_u03b1_2478_, v_inst_2479_, v_value_2480_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t v_condition_2483_, lean_object* v_msg_2484_){
_start:
{
if (v_condition_2483_ == 0)
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_near_log(v_msg_2484_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2494_; 
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v___x_2486_, 0);
lean_dec(v_unused_2495_);
v___x_2488_ = v___x_2486_;
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
else
{
lean_dec(v___x_2486_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = lean_box(v_condition_2483_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v___x_2490_);
v___x_2492_ = v___x_2488_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v___x_2490_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
v_a_2496_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2486_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2486_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
else
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
lean_dec_ref(v_msg_2484_);
v___x_2504_ = lean_box(v_condition_2483_);
v___x_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
return v___x_2505_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object* v_condition_2506_, lean_object* v_msg_2507_, lean_object* v_a_2508_){
_start:
{
uint8_t v_condition_boxed_2509_; lean_object* v_res_2510_; 
v_condition_boxed_2509_ = lean_unbox(v_condition_2506_);
v_res_2510_ = l_Near_Contract_require(v_condition_boxed_2509_, v_msg_2507_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized(){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2514_ = lean_near_storage_has_key(v___x_2513_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; uint8_t v___x_2516_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
v___x_2516_ = lean_unbox(v_a_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec_ref_known(v___x_2514_, 1);
v___x_2517_ = ((lean_object*)(l_Near_Contract_requireInitialized___closed__0));
v___x_2518_ = lean_near_log(v___x_2517_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2525_ == 0)
{
lean_object* v_unused_2526_; 
v_unused_2526_ = lean_ctor_get(v___x_2518_, 0);
lean_dec(v_unused_2526_);
v___x_2520_ = v___x_2518_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_dec(v___x_2518_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v_a_2515_);
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2515_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
else
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_dec(v_a_2515_);
v_a_2527_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2518_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2518_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
else
{
lean_dec(v_a_2515_);
return v___x_2514_;
}
}
else
{
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized___boxed(lean_object* v_a_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Near_Contract_requireInitialized();
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized(){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2540_ = lean_near_storage_has_key(v___x_2539_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2571_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2543_ = v___x_2540_;
v_isShared_2544_ = v_isSharedCheck_2571_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2540_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2571_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
uint8_t v___x_2545_; 
v___x_2545_ = lean_unbox(v_a_2541_);
lean_dec(v_a_2541_);
if (v___x_2545_ == 0)
{
uint8_t v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2549_; 
v___x_2546_ = 1;
v___x_2547_ = lean_box(v___x_2546_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 0, v___x_2547_);
v___x_2549_ = v___x_2543_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v___x_2547_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
else
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
lean_del_object(v___x_2543_);
v___x_2551_ = ((lean_object*)(l_Near_Contract_requireNotInitialized___closed__0));
v___x_2552_ = lean_near_log(v___x_2551_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2561_; 
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2561_ == 0)
{
lean_object* v_unused_2562_; 
v_unused_2562_ = lean_ctor_get(v___x_2552_, 0);
lean_dec(v_unused_2562_);
v___x_2554_ = v___x_2552_;
v_isShared_2555_ = v_isSharedCheck_2561_;
goto v_resetjp_2553_;
}
else
{
lean_dec(v___x_2552_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2561_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
uint8_t v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2559_; 
v___x_2556_ = 0;
v___x_2557_ = lean_box(v___x_2556_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v___x_2557_);
v___x_2559_ = v___x_2554_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2557_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
v_a_2563_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___x_2552_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2552_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
}
}
else
{
return v___x_2540_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized___boxed(lean_object* v_a_2572_){
_start:
{
lean_object* v_res_2573_; 
v_res_2573_ = l_Near_Contract_requireNotInitialized();
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor(lean_object* v_account_2574_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2586_; 
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2579_ = v___x_2576_;
v_isShared_2580_ = v_isSharedCheck_2586_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2576_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2586_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
uint8_t v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2584_; 
v___x_2581_ = lean_string_dec_eq(v_a_2577_, v_account_2574_);
lean_dec(v_a_2577_);
v___x_2582_ = lean_box(v___x_2581_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2582_);
v___x_2584_ = v___x_2579_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v___x_2582_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2594_; 
v_a_2587_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2589_ = v___x_2576_;
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2576_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2587_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor___boxed(lean_object* v_account_2595_, lean_object* v_a_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_Near_Contract_isPredecessor(v_account_2595_);
lean_dec_ref(v_account_2595_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor(lean_object* v_account_2599_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2631_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2604_ = v___x_2601_;
v_isShared_2605_ = v_isSharedCheck_2631_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2601_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2631_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
uint8_t v___x_2606_; 
v___x_2606_ = lean_string_dec_eq(v_a_2602_, v_account_2599_);
lean_dec(v_a_2602_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
lean_del_object(v___x_2604_);
v___x_2607_ = ((lean_object*)(l_Near_Contract_requirePredecessor___closed__0));
v___x_2608_ = lean_string_append(v___x_2607_, v_account_2599_);
v___x_2609_ = lean_near_log(v___x_2608_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2617_; 
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2617_ == 0)
{
lean_object* v_unused_2618_; 
v_unused_2618_ = lean_ctor_get(v___x_2609_, 0);
lean_dec(v_unused_2618_);
v___x_2611_ = v___x_2609_;
v_isShared_2612_ = v_isSharedCheck_2617_;
goto v_resetjp_2610_;
}
else
{
lean_dec(v___x_2609_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2617_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2615_; 
v___x_2613_ = lean_box(v___x_2606_);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v___x_2613_);
v___x_2615_ = v___x_2611_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v___x_2613_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
v_a_2619_ = lean_ctor_get(v___x_2609_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2609_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2609_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
else
{
lean_object* v___x_2627_; lean_object* v___x_2629_; 
v___x_2627_ = lean_box(v___x_2606_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 0, v___x_2627_);
v___x_2629_ = v___x_2604_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v___x_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
v_a_2632_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2601_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2601_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor___boxed(lean_object* v_account_2640_, lean_object* v_a_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Near_Contract_requirePredecessor(v_account_2640_);
lean_dec_ref(v_account_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object* v_value_2643_){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2646_ = lean_near_storage_write(v___x_2645_, v_value_2643_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object* v_value_2647_, lean_object* v_a_2648_){
_start:
{
lean_object* v_res_2649_; 
v_res_2649_ = l_Near_Contract_initState(v_value_2647_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState(){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2652_ = lean_near_storage_read(v___x_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object* v_a_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Near_Contract_loadState();
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg(lean_object* v_inst_2655_, lean_object* v_value_2656_){
_start:
{
lean_object* v_encode_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v_encode_2658_ = lean_ctor_get(v_inst_2655_, 0);
lean_inc_ref(v_encode_2658_);
lean_dec_ref(v_inst_2655_);
v___x_2659_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2660_ = lean_apply_1(v_encode_2658_, v_value_2656_);
v___x_2661_ = lean_near_storage_write(v___x_2659_, v___x_2660_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg___boxed(lean_object* v_inst_2662_, lean_object* v_value_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Near_Contract_initStateAs___redArg(v_inst_2662_, v_value_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs(lean_object* v_00_u03b1_2666_, lean_object* v_inst_2667_, lean_object* v_value_2668_){
_start:
{
lean_object* v_encode_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v_encode_2670_ = lean_ctor_get(v_inst_2667_, 0);
lean_inc_ref(v_encode_2670_);
lean_dec_ref(v_inst_2667_);
v___x_2671_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2672_ = lean_apply_1(v_encode_2670_, v_value_2668_);
v___x_2673_ = lean_near_storage_write(v___x_2671_, v___x_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___boxed(lean_object* v_00_u03b1_2674_, lean_object* v_inst_2675_, lean_object* v_value_2676_, lean_object* v_a_2677_){
_start:
{
lean_object* v_res_2678_; 
v_res_2678_ = l_Near_Contract_initStateAs(v_00_u03b1_2674_, v_inst_2675_, v_value_2676_);
return v_res_2678_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg(lean_object* v_inst_2679_, lean_object* v_value_2680_){
_start:
{
lean_object* v_encode_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_encode_2682_ = lean_ctor_get(v_inst_2679_, 0);
lean_inc_ref(v_encode_2682_);
lean_dec_ref(v_inst_2679_);
v___x_2683_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2684_ = lean_apply_1(v_encode_2682_, v_value_2680_);
v___x_2685_ = lean_near_storage_write(v___x_2683_, v___x_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg___boxed(lean_object* v_inst_2686_, lean_object* v_value_2687_, lean_object* v_a_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Near_Contract_saveStateAs___redArg(v_inst_2686_, v_value_2687_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs(lean_object* v_00_u03b1_2690_, lean_object* v_inst_2691_, lean_object* v_value_2692_){
_start:
{
lean_object* v_encode_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v_encode_2694_ = lean_ctor_get(v_inst_2691_, 0);
lean_inc_ref(v_encode_2694_);
lean_dec_ref(v_inst_2691_);
v___x_2695_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2696_ = lean_apply_1(v_encode_2694_, v_value_2692_);
v___x_2697_ = lean_near_storage_write(v___x_2695_, v___x_2696_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___boxed(lean_object* v_00_u03b1_2698_, lean_object* v_inst_2699_, lean_object* v_value_2700_, lean_object* v_a_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l_Near_Contract_saveStateAs(v_00_u03b1_2698_, v_inst_2699_, v_value_2700_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg(lean_object* v_inst_2703_){
_start:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2705_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2706_ = lean_near_storage_read(v___x_2705_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2721_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2709_ = v___x_2706_;
v_isShared_2710_ = v_isSharedCheck_2721_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v___x_2706_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2721_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
if (lean_obj_tag(v_a_2707_) == 0)
{
lean_object* v___x_2711_; lean_object* v___x_2713_; 
lean_dec_ref(v_inst_2703_);
v___x_2711_ = lean_box(0);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 0, v___x_2711_);
v___x_2713_ = v___x_2709_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
else
{
lean_object* v_val_2715_; lean_object* v_decode_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v_val_2715_ = lean_ctor_get(v_a_2707_, 0);
lean_inc(v_val_2715_);
lean_dec_ref_known(v_a_2707_, 1);
v_decode_2716_ = lean_ctor_get(v_inst_2703_, 1);
lean_inc_ref(v_decode_2716_);
lean_dec_ref(v_inst_2703_);
v___x_2717_ = lean_apply_1(v_decode_2716_, v_val_2715_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 0, v___x_2717_);
v___x_2719_ = v___x_2709_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
else
{
lean_object* v_a_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2729_; 
lean_dec_ref(v_inst_2703_);
v_a_2722_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2724_ = v___x_2706_;
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_a_2722_);
lean_dec(v___x_2706_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2727_; 
if (v_isShared_2725_ == 0)
{
v___x_2727_ = v___x_2724_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_a_2722_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg___boxed(lean_object* v_inst_2730_, lean_object* v_a_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Near_Contract_loadStateAs_x3f___redArg(v_inst_2730_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f(lean_object* v_00_u03b1_2733_, lean_object* v_inst_2734_){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2737_ = lean_near_storage_read(v___x_2736_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2752_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2740_ = v___x_2737_;
v_isShared_2741_ = v_isSharedCheck_2752_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2737_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2752_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
if (lean_obj_tag(v_a_2738_) == 0)
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
lean_dec_ref(v_inst_2734_);
v___x_2742_ = lean_box(0);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2742_);
v___x_2744_ = v___x_2740_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
else
{
lean_object* v_val_2746_; lean_object* v_decode_2747_; lean_object* v___x_2748_; lean_object* v___x_2750_; 
v_val_2746_ = lean_ctor_get(v_a_2738_, 0);
lean_inc(v_val_2746_);
lean_dec_ref_known(v_a_2738_, 1);
v_decode_2747_ = lean_ctor_get(v_inst_2734_, 1);
lean_inc_ref(v_decode_2747_);
lean_dec_ref(v_inst_2734_);
v___x_2748_ = lean_apply_1(v_decode_2747_, v_val_2746_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2748_);
v___x_2750_ = v___x_2740_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec_ref(v_inst_2734_);
v_a_2753_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2737_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2737_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___boxed(lean_object* v_00_u03b1_2761_, lean_object* v_inst_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Near_Contract_loadStateAs_x3f(v_00_u03b1_2761_, v_inst_2762_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg(lean_object* v_inst_2765_, lean_object* v_default_2766_){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2769_ = lean_near_storage_read(v___x_2768_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2787_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2772_ = v___x_2769_;
v_isShared_2773_ = v_isSharedCheck_2787_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2769_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2787_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
if (lean_obj_tag(v_a_2770_) == 0)
{
lean_object* v___x_2775_; 
lean_dec_ref(v_inst_2765_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 0, v_default_2766_);
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_default_2766_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
else
{
lean_object* v_val_2777_; lean_object* v_decode_2778_; lean_object* v___x_2779_; 
v_val_2777_ = lean_ctor_get(v_a_2770_, 0);
lean_inc(v_val_2777_);
lean_dec_ref_known(v_a_2770_, 1);
v_decode_2778_ = lean_ctor_get(v_inst_2765_, 1);
lean_inc_ref(v_decode_2778_);
lean_dec_ref(v_inst_2765_);
v___x_2779_ = lean_apply_1(v_decode_2778_, v_val_2777_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v___x_2781_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 0, v_default_2766_);
v___x_2781_ = v___x_2772_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_default_2766_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
else
{
lean_object* v_val_2783_; lean_object* v___x_2785_; 
lean_dec(v_default_2766_);
v_val_2783_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_val_2783_);
lean_dec_ref_known(v___x_2779_, 1);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 0, v_val_2783_);
v___x_2785_ = v___x_2772_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_val_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_dec(v_default_2766_);
lean_dec_ref(v_inst_2765_);
v_a_2788_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2769_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2769_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg___boxed(lean_object* v_inst_2796_, lean_object* v_default_2797_, lean_object* v_a_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Near_Contract_loadStateAs___redArg(v_inst_2796_, v_default_2797_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs(lean_object* v_00_u03b1_2800_, lean_object* v_inst_2801_, lean_object* v_default_2802_){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_2805_ = lean_near_storage_read(v___x_2804_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2823_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2808_ = v___x_2805_;
v_isShared_2809_ = v_isSharedCheck_2823_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2805_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2823_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
if (lean_obj_tag(v_a_2806_) == 0)
{
lean_object* v___x_2811_; 
lean_dec_ref(v_inst_2801_);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v_default_2802_);
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_default_2802_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
else
{
lean_object* v_val_2813_; lean_object* v_decode_2814_; lean_object* v___x_2815_; 
v_val_2813_ = lean_ctor_get(v_a_2806_, 0);
lean_inc(v_val_2813_);
lean_dec_ref_known(v_a_2806_, 1);
v_decode_2814_ = lean_ctor_get(v_inst_2801_, 1);
lean_inc_ref(v_decode_2814_);
lean_dec_ref(v_inst_2801_);
v___x_2815_ = lean_apply_1(v_decode_2814_, v_val_2813_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v___x_2817_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v_default_2802_);
v___x_2817_ = v___x_2808_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_default_2802_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
else
{
lean_object* v_val_2819_; lean_object* v___x_2821_; 
lean_dec(v_default_2802_);
v_val_2819_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_val_2819_);
lean_dec_ref_known(v___x_2815_, 1);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v_val_2819_);
v___x_2821_ = v___x_2808_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_val_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
lean_dec(v_default_2802_);
lean_dec_ref(v_inst_2801_);
v_a_2824_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2805_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2805_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
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
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___boxed(lean_object* v_00_u03b1_2832_, lean_object* v_inst_2833_, lean_object* v_default_2834_, lean_object* v_a_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_Near_Contract_loadStateAs(v_00_u03b1_2832_, v_inst_2833_, v_default_2834_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object* v_mapPrefix_2837_){
_start:
{
lean_inc_ref(v_mapPrefix_2837_);
return v_mapPrefix_2837_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object* v_mapPrefix_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_Near_StringMap_make(v_mapPrefix_2838_);
lean_dec_ref(v_mapPrefix_2838_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey(lean_object* v_m_2840_, lean_object* v_key_2841_){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2842_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2843_ = lean_string_append(v_m_2840_, v___x_2842_);
v___x_2844_ = lean_string_append(v___x_2843_, v_key_2841_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey___boxed(lean_object* v_m_2845_, lean_object* v_key_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Near_StringMap_storageKey(v_m_2845_, v_key_2846_);
lean_dec_ref(v_key_2846_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get(lean_object* v_m_2848_, lean_object* v_key_2849_){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = l_Near_StringMap_storageKey(v_m_2848_, v_key_2849_);
v___x_2852_ = lean_near_storage_read(v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get___boxed(lean_object* v_m_2853_, lean_object* v_key_2854_, lean_object* v_a_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l_Near_StringMap_get(v_m_2853_, v_key_2854_);
lean_dec_ref(v_key_2854_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set(lean_object* v_m_2857_, lean_object* v_key_2858_, lean_object* v_value_2859_){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2861_ = l_Near_StringMap_storageKey(v_m_2857_, v_key_2858_);
v___x_2862_ = lean_near_storage_write(v___x_2861_, v_value_2859_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set___boxed(lean_object* v_m_2863_, lean_object* v_key_2864_, lean_object* v_value_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Near_StringMap_set(v_m_2863_, v_key_2864_, v_value_2865_);
lean_dec_ref(v_key_2864_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains(lean_object* v_m_2868_, lean_object* v_key_2869_){
_start:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2871_ = l_Near_StringMap_storageKey(v_m_2868_, v_key_2869_);
v___x_2872_ = lean_near_storage_has_key(v___x_2871_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains___boxed(lean_object* v_m_2873_, lean_object* v_key_2874_, lean_object* v_a_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = l_Near_StringMap_contains(v_m_2873_, v_key_2874_);
lean_dec_ref(v_key_2874_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove(lean_object* v_m_2877_, lean_object* v_key_2878_){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2880_ = l_Near_StringMap_storageKey(v_m_2877_, v_key_2878_);
v___x_2881_ = lean_near_storage_remove(v___x_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove___boxed(lean_object* v_m_2882_, lean_object* v_key_2883_, lean_object* v_a_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Near_StringMap_remove(v_m_2882_, v_key_2883_);
lean_dec_ref(v_key_2883_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr(lean_object* v_m_2886_, lean_object* v_key_2887_, lean_object* v_default_2888_){
_start:
{
lean_object* v___x_2890_; 
v___x_2890_ = l_Near_StringMap_get(v_m_2886_, v_key_2887_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2902_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2893_ = v___x_2890_;
v_isShared_2894_ = v_isSharedCheck_2902_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2890_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2902_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
if (lean_obj_tag(v_a_2891_) == 0)
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v_default_2888_);
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_default_2888_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
else
{
lean_object* v_val_2898_; lean_object* v___x_2900_; 
lean_dec_ref(v_default_2888_);
v_val_2898_ = lean_ctor_get(v_a_2891_, 0);
lean_inc(v_val_2898_);
lean_dec_ref_known(v_a_2891_, 1);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v_val_2898_);
v___x_2900_ = v___x_2893_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_val_2898_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec_ref(v_default_2888_);
v_a_2903_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2890_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2890_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr___boxed(lean_object* v_m_2911_, lean_object* v_key_2912_, lean_object* v_default_2913_, lean_object* v_a_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Near_StringMap_getOr(v_m_2911_, v_key_2912_, v_default_2913_);
lean_dec_ref(v_key_2912_);
return v_res_2915_;
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
l_Near_NearToken_zero = _init_l_Near_NearToken_zero();
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
