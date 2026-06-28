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
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint64_t lean_uint64_mul(uint64_t, uint64_t);
lean_object* l_String_quote(lean_object*);
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
static const lean_string_object l_Near_Contract_isInitialized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "STATE"};
static const lean_object* l_Near_Contract_isInitialized___closed__0 = (const lean_object*)&l_Near_Contract_isInitialized___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized();
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_done___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Near_Contract_done___closed__0 = (const lean_object*)&l_Near_Contract_done___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_done();
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object*);
static const lean_string_object l_Near_Contract_returnBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Near_Contract_returnBool___closed__0 = (const lean_object*)&l_Near_Contract_returnBool___closed__0_value;
static const lean_string_object l_Near_Contract_returnBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Near_Contract_returnBool___closed__1 = (const lean_object*)&l_Near_Contract_returnBool___closed__1_value;
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t);
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadState();
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object*);
static const lean_string_object l_Near_StringMap_storageKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Near_StringMap_storageKey___closed__0 = (const lean_object*)&l_Near_StringMap_storageKey___closed__0_value;
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
static lean_object* _init_l_Near_instReprAccountId_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(6u);
v___x_166_ = lean_nat_to_int(v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___redArg(lean_object* v_x_167_){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_168_ = ((lean_object*)(l_Near_instReprAccountId_repr___redArg___closed__3));
v___x_169_ = lean_obj_once(&l_Near_instReprAccountId_repr___redArg___closed__4, &l_Near_instReprAccountId_repr___redArg___closed__4_once, _init_l_Near_instReprAccountId_repr___redArg___closed__4);
v___x_170_ = l_String_quote(v_x_167_);
v___x_171_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
v___x_172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_169_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = 0;
v___x_174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set_uint8(v___x_174_, sizeof(void*)*1, v___x_173_);
v___x_175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_168_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
v___x_176_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_177_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_175_);
v___x_179_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_176_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set_uint8(v___x_182_, sizeof(void*)*1, v___x_173_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr(lean_object* v_x_183_, lean_object* v_prec_184_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Near_instReprAccountId_repr___redArg(v_x_183_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___boxed(lean_object* v_x_186_, lean_object* v_prec_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Near_instReprAccountId_repr(v_x_186_, v_prec_187_);
lean_dec(v_prec_187_);
return v_res_188_;
}
}
static lean_object* _init_l_Near_AccountId_minLen(void){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lean_unsigned_to_nat(2u);
return v___x_191_;
}
}
static lean_object* _init_l_Near_AccountId_maxLen(void){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_unsigned_to_nat(64u);
return v___x_192_;
}
}
LEAN_EXPORT uint8_t l_Near_AccountId_isValid(lean_object* v_s_193_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_194_ = lean_unsigned_to_nat(2u);
v___x_195_ = lean_string_length(v_s_193_);
v___x_196_ = lean_nat_dec_le(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
return v___x_196_;
}
else
{
lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_197_ = lean_unsigned_to_nat(64u);
v___x_198_ = lean_nat_dec_le(v___x_195_, v___x_197_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_isValid___boxed(lean_object* v_s_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Near_AccountId_isValid(v_s_199_);
lean_dec_ref(v_s_199_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_parse(lean_object* v_s_202_){
_start:
{
uint8_t v___x_203_; 
v___x_203_ = l_Near_AccountId_isValid(v_s_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
lean_dec_ref(v_s_202_);
v___x_204_ = lean_box(0);
return v___x_204_;
}
else
{
lean_object* v___x_205_; 
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v_s_202_);
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr(lean_object* v_a_206_){
_start:
{
lean_inc_ref(v_a_206_);
return v_a_206_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr___boxed(lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Near_AccountId_asStr(v_a_207_);
lean_dec_ref(v_a_207_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0(lean_object* v_a_209_){
_start:
{
lean_inc_ref(v_a_209_);
return v_a_209_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0___boxed(lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Near_AccountId_instToString___lam__0(v_a_210_);
lean_dec_ref(v_a_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0(lean_object* v_a_217_, lean_object* v_x_218_){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_219_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_220_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_220_, 0, v_a_217_);
v___x_221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_219_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0___boxed(lean_object* v_a_223_, lean_object* v_x_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Near_AccountId_instRepr___lam__0(v_a_223_, v_x_224_);
lean_dec(v_x_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawWrite___boxed(lean_object* v_key_231_, lean_object* v_value_232_, lean_object* v_a_00___x40___internal___hyg_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = lean_near_storage_write(v_key_231_, v_value_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawRead___boxed(lean_object* v_key_237_, lean_object* v_a_00___x40___internal___hyg_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = lean_near_storage_read(v_key_237_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_hasKey___boxed(lean_object* v_key_242_, lean_object* v_a_00___x40___internal___hyg_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = lean_near_storage_has_key(v_key_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_remove___boxed(lean_object* v_key_247_, lean_object* v_a_00___x40___internal___hyg_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lean_near_storage_remove(v_key_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write(lean_object* v_key_250_, lean_object* v_value_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_near_storage_write(v_key_250_, v_value_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write___boxed(lean_object* v_key_254_, lean_object* v_value_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Near_Storage_write(v_key_254_, v_value_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read(lean_object* v_key_258_, lean_object* v_default_259_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = lean_near_storage_read(v_key_258_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_273_; 
v_a_262_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_273_ == 0)
{
v___x_264_ = v___x_261_;
v_isShared_265_ = v_isSharedCheck_273_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_273_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
if (lean_obj_tag(v_a_262_) == 0)
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v_default_259_);
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_default_259_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
else
{
lean_object* v_val_269_; lean_object* v___x_271_; 
lean_dec_ref(v_default_259_);
v_val_269_ = lean_ctor_get(v_a_262_, 0);
lean_inc(v_val_269_);
lean_dec_ref_known(v_a_262_, 1);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v_val_269_);
v___x_271_ = v___x_264_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_val_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
lean_dec_ref(v_default_259_);
v_a_274_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_261_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_261_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read___boxed(lean_object* v_key_282_, lean_object* v_default_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Near_Storage_read(v_key_282_, v_default_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f(lean_object* v_key_286_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_near_storage_read(v_key_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f___boxed(lean_object* v_key_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Near_Storage_read_x3f(v_key_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64(lean_object* v_key_292_, uint64_t v_value_293_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = lean_uint64_to_nat(v_value_293_);
v___x_296_ = l_Nat_reprFast(v___x_295_);
v___x_297_ = lean_near_storage_write(v_key_292_, v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64___boxed(lean_object* v_key_298_, lean_object* v_value_299_, lean_object* v_a_300_){
_start:
{
uint64_t v_value_boxed_301_; lean_object* v_res_302_; 
v_value_boxed_301_ = lean_unbox_uint64(v_value_299_);
lean_dec_ref(v_value_299_);
v_res_302_ = l_Near_Storage_writeU64(v_key_298_, v_value_boxed_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = lean_near_current_account_id();
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = lean_near_predecessor_account_id();
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object* v_a_00___x40___internal___hyg_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = lean_near_block_timestamp();
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object* v_a_00___x40___internal___hyg_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = lean_near_block_height();
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object* v_a_00___x40___internal___hyg_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = lean_near_input();
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object* v_data_320_, lean_object* v_a_00___x40___internal___hyg_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = lean_near_value_return(v_data_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object* v_msg_325_, lean_object* v_a_00___x40___internal___hyg_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = lean_near_log(v_msg_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized(){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_331_ = lean_near_storage_has_key(v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Near_Contract_isInitialized();
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object* v_value_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_near_value_return(v_value_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object* v_value_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Near_Contract_returnValue(v_value_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done(){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = ((lean_object*)(l_Near_Contract_done___closed__0));
v___x_343_ = lean_near_value_return(v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Near_Contract_done();
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t v_b_348_){
_start:
{
if (v_b_348_ == 0)
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l_Near_Contract_returnBool___closed__0));
v___x_351_ = lean_near_value_return(v___x_350_);
return v___x_351_;
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l_Near_Contract_returnBool___closed__1));
v___x_353_ = lean_near_value_return(v___x_352_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object* v_b_354_, lean_object* v_a_355_){
_start:
{
uint8_t v_b_boxed_356_; lean_object* v_res_357_; 
v_b_boxed_356_ = lean_unbox(v_b_354_);
v_res_357_ = l_Near_Contract_returnBool(v_b_boxed_356_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t v_condition_358_, lean_object* v_msg_359_){
_start:
{
if (v_condition_358_ == 0)
{
lean_object* v___x_361_; 
v___x_361_ = lean_near_log(v_msg_359_);
return v___x_361_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec_ref(v_msg_359_);
v___x_362_ = lean_box(0);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object* v_condition_364_, lean_object* v_msg_365_, lean_object* v_a_366_){
_start:
{
uint8_t v_condition_boxed_367_; lean_object* v_res_368_; 
v_condition_boxed_367_ = lean_unbox(v_condition_364_);
v_res_368_ = l_Near_Contract_require(v_condition_boxed_367_, v_msg_365_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object* v_value_369_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_372_ = lean_near_storage_write(v___x_371_, v_value_369_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object* v_value_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Near_Contract_initState(v_value_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState(){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_378_ = lean_near_storage_read(v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object* v_a_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Near_Contract_loadState();
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object* v_mapPrefix_381_){
_start:
{
lean_inc_ref(v_mapPrefix_381_);
return v_mapPrefix_381_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object* v_mapPrefix_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Near_StringMap_make(v_mapPrefix_382_);
lean_dec_ref(v_mapPrefix_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey(lean_object* v_m_385_, lean_object* v_key_386_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = ((lean_object*)(l_Near_StringMap_storageKey___closed__0));
v___x_388_ = lean_string_append(v_m_385_, v___x_387_);
v___x_389_ = lean_string_append(v___x_388_, v_key_386_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey___boxed(lean_object* v_m_390_, lean_object* v_key_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Near_StringMap_storageKey(v_m_390_, v_key_391_);
lean_dec_ref(v_key_391_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get(lean_object* v_m_393_, lean_object* v_key_394_){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = l_Near_StringMap_storageKey(v_m_393_, v_key_394_);
v___x_397_ = lean_near_storage_read(v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get___boxed(lean_object* v_m_398_, lean_object* v_key_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Near_StringMap_get(v_m_398_, v_key_399_);
lean_dec_ref(v_key_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set(lean_object* v_m_402_, lean_object* v_key_403_, lean_object* v_value_404_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = l_Near_StringMap_storageKey(v_m_402_, v_key_403_);
v___x_407_ = lean_near_storage_write(v___x_406_, v_value_404_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set___boxed(lean_object* v_m_408_, lean_object* v_key_409_, lean_object* v_value_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Near_StringMap_set(v_m_408_, v_key_409_, v_value_410_);
lean_dec_ref(v_key_409_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains(lean_object* v_m_413_, lean_object* v_key_414_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = l_Near_StringMap_storageKey(v_m_413_, v_key_414_);
v___x_417_ = lean_near_storage_has_key(v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains___boxed(lean_object* v_m_418_, lean_object* v_key_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Near_StringMap_contains(v_m_418_, v_key_419_);
lean_dec_ref(v_key_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove(lean_object* v_m_422_, lean_object* v_key_423_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = l_Near_StringMap_storageKey(v_m_422_, v_key_423_);
v___x_426_ = lean_near_storage_remove(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove___boxed(lean_object* v_m_427_, lean_object* v_key_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Near_StringMap_remove(v_m_427_, v_key_428_);
lean_dec_ref(v_key_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr(lean_object* v_m_431_, lean_object* v_key_432_, lean_object* v_default_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Near_StringMap_get(v_m_431_, v_key_432_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_447_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_447_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
if (lean_obj_tag(v_a_436_) == 0)
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v_default_433_);
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_default_433_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
else
{
lean_object* v_val_443_; lean_object* v___x_445_; 
lean_dec_ref(v_default_433_);
v_val_443_ = lean_ctor_get(v_a_436_, 0);
lean_inc(v_val_443_);
lean_dec_ref_known(v_a_436_, 1);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v_val_443_);
v___x_445_ = v___x_438_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_val_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v_default_433_);
v_a_448_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_435_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_435_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr___boxed(lean_object* v_m_456_, lean_object* v_key_457_, lean_object* v_default_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Near_StringMap_getOr(v_m_456_, v_key_457_, v_default_458_);
lean_dec_ref(v_key_457_);
return v_res_460_;
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
