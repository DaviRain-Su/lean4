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
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
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
static const lean_string_object l_Near_Storage_increment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l_Near_Storage_increment___closed__0 = (const lean_object*)&l_Near_Storage_increment___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Storage_increment(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_increment___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Near_Counter_make(lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_make___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_get(lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_increment(lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_increment___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_reset(lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_reset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Counter_set(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Counter_set___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Near_Storage_increment(lean_object* v_key_304_){
_start:
{
lean_object* v___x_306_; 
lean_inc_ref(v_key_304_);
v___x_306_ = lean_near_storage_read(v_key_304_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___y_309_; lean_object* v___y_333_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v___x_306_, 1);
if (lean_obj_tag(v_a_307_) == 0)
{
lean_object* v___x_339_; 
v___x_339_ = ((lean_object*)(l_Near_Storage_increment___closed__0));
v___y_333_ = v___x_339_;
goto v___jp_332_;
}
else
{
lean_object* v_val_340_; 
v_val_340_ = lean_ctor_get(v_a_307_, 0);
lean_inc(v_val_340_);
lean_dec_ref_known(v_a_307_, 1);
v___y_333_ = v_val_340_;
goto v___jp_332_;
}
v___jp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_unsigned_to_nat(1u);
v___x_311_ = lean_nat_add(v___y_309_, v___x_310_);
lean_dec(v___y_309_);
lean_inc(v___x_311_);
v___x_312_ = l_Nat_reprFast(v___x_311_);
v___x_313_ = lean_near_storage_write(v_key_304_, v___x_312_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_322_; 
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_322_ == 0)
{
lean_object* v_unused_323_; 
v_unused_323_ = lean_ctor_get(v___x_313_, 0);
lean_dec(v_unused_323_);
v___x_315_ = v___x_313_;
v_isShared_316_ = v_isSharedCheck_322_;
goto v_resetjp_314_;
}
else
{
lean_dec(v___x_313_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_322_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
uint64_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_317_ = lean_uint64_of_nat(v___x_311_);
lean_dec(v___x_311_);
v___x_318_ = lean_box_uint64(v___x_317_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_318_);
v___x_320_ = v___x_315_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v___x_311_);
v_a_324_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_313_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_313_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
v___jp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = lean_string_utf8_byte_size(v___y_333_);
v___x_336_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_336_, 0, v___y_333_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
lean_ctor_set(v___x_336_, 2, v___x_335_);
v___x_337_ = l_String_Slice_toNat_x3f(v___x_336_);
lean_dec_ref_known(v___x_336_, 3);
if (lean_obj_tag(v___x_337_) == 0)
{
v___y_309_ = v___x_334_;
goto v___jp_308_;
}
else
{
lean_object* v_val_338_; 
v_val_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_val_338_);
lean_dec_ref_known(v___x_337_, 1);
v___y_309_ = v_val_338_;
goto v___jp_308_;
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec_ref(v_key_304_);
v_a_341_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_306_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_306_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_increment___boxed(lean_object* v_key_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Near_Storage_increment(v_key_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = lean_near_current_account_id();
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = lean_near_predecessor_account_id();
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object* v_a_00___x40___internal___hyg_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = lean_near_block_timestamp();
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object* v_a_00___x40___internal___hyg_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = lean_near_block_height();
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object* v_a_00___x40___internal___hyg_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = lean_near_input();
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object* v_data_369_, lean_object* v_a_00___x40___internal___hyg_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = lean_near_value_return(v_data_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object* v_msg_374_, lean_object* v_a_00___x40___internal___hyg_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = lean_near_log(v_msg_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized(){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_380_ = lean_near_storage_has_key(v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Near_Contract_isInitialized();
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object* v_value_383_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = lean_near_value_return(v_value_383_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object* v_value_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Near_Contract_returnValue(v_value_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done(){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l_Near_Contract_done___closed__0));
v___x_392_ = lean_near_value_return(v___x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object* v_a_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Near_Contract_done();
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t v_b_397_){
_start:
{
if (v_b_397_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = ((lean_object*)(l_Near_Contract_returnBool___closed__0));
v___x_400_ = lean_near_value_return(v___x_399_);
return v___x_400_;
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = ((lean_object*)(l_Near_Contract_returnBool___closed__1));
v___x_402_ = lean_near_value_return(v___x_401_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object* v_b_403_, lean_object* v_a_404_){
_start:
{
uint8_t v_b_boxed_405_; lean_object* v_res_406_; 
v_b_boxed_405_ = lean_unbox(v_b_403_);
v_res_406_ = l_Near_Contract_returnBool(v_b_boxed_405_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t v_condition_407_, lean_object* v_msg_408_){
_start:
{
if (v_condition_407_ == 0)
{
lean_object* v___x_410_; 
v___x_410_ = lean_near_log(v_msg_408_);
return v___x_410_;
}
else
{
lean_object* v___x_411_; lean_object* v___x_412_; 
lean_dec_ref(v_msg_408_);
v___x_411_ = lean_box(0);
v___x_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object* v_condition_413_, lean_object* v_msg_414_, lean_object* v_a_415_){
_start:
{
uint8_t v_condition_boxed_416_; lean_object* v_res_417_; 
v_condition_boxed_416_ = lean_unbox(v_condition_413_);
v_res_417_ = l_Near_Contract_require(v_condition_boxed_416_, v_msg_414_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object* v_value_418_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_421_ = lean_near_storage_write(v___x_420_, v_value_418_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object* v_value_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Near_Contract_initState(v_value_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState(){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_427_ = lean_near_storage_read(v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Near_Contract_loadState();
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_make(lean_object* v_key_430_){
_start:
{
lean_inc_ref(v_key_430_);
return v_key_430_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_make___boxed(lean_object* v_key_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Near_Counter_make(v_key_431_);
lean_dec_ref(v_key_431_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_get(lean_object* v_c_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lean_near_storage_read(v_c_433_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_456_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_456_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_456_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_456_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___y_441_; lean_object* v___y_448_; 
if (lean_obj_tag(v_a_436_) == 0)
{
lean_object* v___x_454_; 
v___x_454_ = ((lean_object*)(l_Near_Storage_increment___closed__0));
v___y_448_ = v___x_454_;
goto v___jp_447_;
}
else
{
lean_object* v_val_455_; 
v_val_455_ = lean_ctor_get(v_a_436_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v_a_436_, 1);
v___y_448_ = v_val_455_;
goto v___jp_447_;
}
v___jp_440_:
{
uint64_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_442_ = lean_uint64_of_nat(v___y_441_);
lean_dec(v___y_441_);
v___x_443_ = lean_box_uint64(v___x_442_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_443_);
v___x_445_ = v___x_438_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
v___jp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_string_utf8_byte_size(v___y_448_);
v___x_451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_451_, 0, v___y_448_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_450_);
v___x_452_ = l_String_Slice_toNat_x3f(v___x_451_);
lean_dec_ref_known(v___x_451_, 3);
if (lean_obj_tag(v___x_452_) == 0)
{
v___y_441_ = v___x_449_;
goto v___jp_440_;
}
else
{
lean_object* v_val_453_; 
v_val_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_val_453_);
lean_dec_ref_known(v___x_452_, 1);
v___y_441_ = v_val_453_;
goto v___jp_440_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_435_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_435_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Counter_get___boxed(lean_object* v_c_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Near_Counter_get(v_c_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_increment(lean_object* v_c_468_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Near_Storage_increment(v_c_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_increment___boxed(lean_object* v_c_471_, lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Near_Counter_increment(v_c_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_reset(lean_object* v_c_474_){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = ((lean_object*)(l_Near_Storage_increment___closed__0));
v___x_477_ = lean_near_storage_write(v_c_474_, v___x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_reset___boxed(lean_object* v_c_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Near_Counter_reset(v_c_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_set(lean_object* v_c_481_, uint64_t v_n_482_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = lean_uint64_to_nat(v_n_482_);
v___x_485_ = l_Nat_reprFast(v___x_484_);
v___x_486_ = lean_near_storage_write(v_c_481_, v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Near_Counter_set___boxed(lean_object* v_c_487_, lean_object* v_n_488_, lean_object* v_a_489_){
_start:
{
uint64_t v_n_boxed_490_; lean_object* v_res_491_; 
v_n_boxed_490_ = lean_unbox_uint64(v_n_488_);
lean_dec_ref(v_n_488_);
v_res_491_ = l_Near_Counter_set(v_c_487_, v_n_boxed_490_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object* v_mapPrefix_492_){
_start:
{
lean_inc_ref(v_mapPrefix_492_);
return v_mapPrefix_492_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object* v_mapPrefix_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Near_StringMap_make(v_mapPrefix_493_);
lean_dec_ref(v_mapPrefix_493_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey(lean_object* v_m_496_, lean_object* v_key_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = ((lean_object*)(l_Near_StringMap_storageKey___closed__0));
v___x_499_ = lean_string_append(v_m_496_, v___x_498_);
v___x_500_ = lean_string_append(v___x_499_, v_key_497_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey___boxed(lean_object* v_m_501_, lean_object* v_key_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Near_StringMap_storageKey(v_m_501_, v_key_502_);
lean_dec_ref(v_key_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get(lean_object* v_m_504_, lean_object* v_key_505_){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = l_Near_StringMap_storageKey(v_m_504_, v_key_505_);
v___x_508_ = lean_near_storage_read(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get___boxed(lean_object* v_m_509_, lean_object* v_key_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Near_StringMap_get(v_m_509_, v_key_510_);
lean_dec_ref(v_key_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set(lean_object* v_m_513_, lean_object* v_key_514_, lean_object* v_value_515_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = l_Near_StringMap_storageKey(v_m_513_, v_key_514_);
v___x_518_ = lean_near_storage_write(v___x_517_, v_value_515_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set___boxed(lean_object* v_m_519_, lean_object* v_key_520_, lean_object* v_value_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Near_StringMap_set(v_m_519_, v_key_520_, v_value_521_);
lean_dec_ref(v_key_520_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains(lean_object* v_m_524_, lean_object* v_key_525_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = l_Near_StringMap_storageKey(v_m_524_, v_key_525_);
v___x_528_ = lean_near_storage_has_key(v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains___boxed(lean_object* v_m_529_, lean_object* v_key_530_, lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Near_StringMap_contains(v_m_529_, v_key_530_);
lean_dec_ref(v_key_530_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove(lean_object* v_m_533_, lean_object* v_key_534_){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = l_Near_StringMap_storageKey(v_m_533_, v_key_534_);
v___x_537_ = lean_near_storage_remove(v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove___boxed(lean_object* v_m_538_, lean_object* v_key_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Near_StringMap_remove(v_m_538_, v_key_539_);
lean_dec_ref(v_key_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr(lean_object* v_m_542_, lean_object* v_key_543_, lean_object* v_default_544_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_Near_StringMap_get(v_m_542_, v_key_543_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_558_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_558_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
if (lean_obj_tag(v_a_547_) == 0)
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v_default_544_);
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_default_544_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
else
{
lean_object* v_val_554_; lean_object* v___x_556_; 
lean_dec_ref(v_default_544_);
v_val_554_ = lean_ctor_get(v_a_547_, 0);
lean_inc(v_val_554_);
lean_dec_ref_known(v_a_547_, 1);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v_val_554_);
v___x_556_ = v___x_549_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_val_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_dec_ref(v_default_544_);
v_a_559_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_546_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_546_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr___boxed(lean_object* v_m_567_, lean_object* v_key_568_, lean_object* v_default_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Near_StringMap_getOr(v_m_567_, v_key_568_, v_default_569_);
lean_dec_ref(v_key_568_);
return v_res_571_;
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
