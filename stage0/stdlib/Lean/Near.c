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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
lean_object* l_String_toNat_x3f(lean_object*);
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
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__1(lean_object*);
static const lean_closure_object l_Near_Storage_instCodecUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecUInt64___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecUInt64___closed__0 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecUInt64___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecUInt64___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecUInt64___closed__1 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__1_value;
static const lean_ctor_object l_Near_Storage_instCodecUInt64___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecUInt64___closed__0_value),((lean_object*)&l_Near_Storage_instCodecUInt64___closed__1_value)}};
static const lean_object* l_Near_Storage_instCodecUInt64___closed__2 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__2_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecUInt64 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__2_value;
static const lean_closure_object l_Near_Storage_instCodecNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_reprFast, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecNat___closed__0 = (const lean_object*)&l_Near_Storage_instCodecNat___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_toNat_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
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
static lean_object* _init_l_Near_AccountId_minLen(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_unsigned_to_nat(2u);
return v___x_165_;
}
}
static lean_object* _init_l_Near_AccountId_maxLen(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_unsigned_to_nat(64u);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked(lean_object* v_s_167_){
_start:
{
lean_inc_ref(v_s_167_);
return v_s_167_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked___boxed(lean_object* v_s_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Near_AccountId_unchecked(v_s_168_);
lean_dec_ref(v_s_168_);
return v_res_169_;
}
}
LEAN_EXPORT uint8_t l_Near_AccountId_isValid(lean_object* v_s_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_171_ = lean_unsigned_to_nat(2u);
v___x_172_ = lean_string_length(v_s_170_);
v___x_173_ = lean_nat_dec_le(v___x_171_, v___x_172_);
if (v___x_173_ == 0)
{
return v___x_173_;
}
else
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(64u);
v___x_175_ = lean_nat_dec_le(v___x_172_, v___x_174_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_isValid___boxed(lean_object* v_s_176_){
_start:
{
uint8_t v_res_177_; lean_object* v_r_178_; 
v_res_177_ = l_Near_AccountId_isValid(v_s_176_);
lean_dec_ref(v_s_176_);
v_r_178_ = lean_box(v_res_177_);
return v_r_178_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_parse(lean_object* v_s_179_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = l_Near_AccountId_isValid(v_s_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
lean_dec_ref(v_s_179_);
v___x_181_ = lean_box(0);
return v___x_181_;
}
else
{
lean_object* v___x_182_; 
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v_s_179_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr(lean_object* v_a_183_){
_start:
{
lean_inc_ref(v_a_183_);
return v_a_183_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr___boxed(lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Near_AccountId_asStr(v_a_184_);
lean_dec_ref(v_a_184_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0(lean_object* v_a_186_){
_start:
{
lean_inc_ref(v_a_186_);
return v_a_186_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0___boxed(lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Near_AccountId_instToString___lam__0(v_a_187_);
lean_dec_ref(v_a_187_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0(lean_object* v_a_194_, lean_object* v_x_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_196_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_197_, 0, v_a_194_);
v___x_198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v___x_196_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0___boxed(lean_object* v_a_200_, lean_object* v_x_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Near_AccountId_instRepr___lam__0(v_a_200_, v_x_201_);
lean_dec(v_x_201_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawWrite___boxed(lean_object* v_key_208_, lean_object* v_value_209_, lean_object* v_a_00___x40___internal___hyg_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = lean_near_storage_write(v_key_208_, v_value_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawRead___boxed(lean_object* v_key_214_, lean_object* v_a_00___x40___internal___hyg_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = lean_near_storage_read(v_key_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_hasKey___boxed(lean_object* v_key_219_, lean_object* v_a_00___x40___internal___hyg_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = lean_near_storage_has_key(v_key_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_remove___boxed(lean_object* v_key_224_, lean_object* v_a_00___x40___internal___hyg_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = lean_near_storage_remove(v_key_224_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write(lean_object* v_key_227_, lean_object* v_value_228_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_near_storage_write(v_key_227_, v_value_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write___boxed(lean_object* v_key_231_, lean_object* v_value_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Near_Storage_write(v_key_231_, v_value_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read(lean_object* v_key_235_, lean_object* v_default_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_near_storage_read(v_key_235_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_250_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_250_ == 0)
{
v___x_241_ = v___x_238_;
v_isShared_242_ = v_isSharedCheck_250_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_250_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
if (lean_obj_tag(v_a_239_) == 0)
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v_default_236_);
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_default_236_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
else
{
lean_object* v_val_246_; lean_object* v___x_248_; 
lean_dec_ref(v_default_236_);
v_val_246_ = lean_ctor_get(v_a_239_, 0);
lean_inc(v_val_246_);
lean_dec_ref_known(v_a_239_, 1);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v_val_246_);
v___x_248_ = v___x_241_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_val_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
else
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_258_; 
lean_dec_ref(v_default_236_);
v_a_251_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_258_ == 0)
{
v___x_253_ = v___x_238_;
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_238_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_a_251_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read___boxed(lean_object* v_key_259_, lean_object* v_default_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Near_Storage_read(v_key_259_, v_default_260_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f(lean_object* v_key_263_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_near_storage_read(v_key_263_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f___boxed(lean_object* v_key_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Near_Storage_read_x3f(v_key_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64(lean_object* v_key_269_, uint64_t v_value_270_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_uint64_to_nat(v_value_270_);
v___x_273_ = l_Nat_reprFast(v___x_272_);
v___x_274_ = lean_near_storage_write(v_key_269_, v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64___boxed(lean_object* v_key_275_, lean_object* v_value_276_, lean_object* v_a_277_){
_start:
{
uint64_t v_value_boxed_278_; lean_object* v_res_279_; 
v_value_boxed_278_ = lean_unbox_uint64(v_value_276_);
lean_dec_ref(v_value_276_);
v_res_279_ = l_Near_Storage_writeU64(v_key_275_, v_value_boxed_278_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecString___lam__0(lean_object* v_val_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v_val_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0(uint64_t v_n_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_uint64_to_nat(v_n_288_);
v___x_290_ = l_Nat_reprFast(v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0___boxed(lean_object* v_n_291_){
_start:
{
uint64_t v_n_boxed_292_; lean_object* v_res_293_; 
v_n_boxed_292_ = lean_unbox_uint64(v_n_291_);
lean_dec_ref(v_n_291_);
v_res_293_ = l_Near_Storage_instCodecUInt64___lam__0(v_n_boxed_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__1(lean_object* v_s_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_string_utf8_byte_size(v_s_294_);
v___x_297_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_297_, 0, v_s_294_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
lean_ctor_set(v___x_297_, 2, v___x_296_);
v___x_298_ = l_String_Slice_toNat_x3f(v___x_297_);
lean_dec_ref_known(v___x_297_, 3);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v___x_299_; 
v___x_299_ = lean_box(0);
return v___x_299_;
}
else
{
lean_object* v_val_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_309_; 
v_val_300_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_309_ == 0)
{
v___x_302_ = v___x_298_;
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_val_300_);
lean_dec(v___x_298_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
uint64_t v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_304_ = lean_uint64_of_nat(v_val_300_);
lean_dec(v_val_300_);
v___x_305_ = lean_box_uint64(v___x_304_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_305_);
v___x_307_ = v___x_302_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0(uint8_t v_b_324_){
_start:
{
if (v_b_324_ == 0)
{
lean_object* v___x_325_; 
v___x_325_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
return v___x_325_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0___boxed(lean_object* v_b_327_){
_start:
{
uint8_t v_b_boxed_328_; lean_object* v_res_329_; 
v_b_boxed_328_ = lean_unbox(v_b_327_);
v_res_329_ = l_Near_Storage_instCodecBool___lam__0(v_b_boxed_328_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1(lean_object* v_s_330_){
_start:
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
v___x_332_ = lean_string_dec_eq(v_s_330_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
v___x_334_ = lean_string_dec_eq(v_s_330_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
v___x_335_ = lean_box(0);
return v___x_335_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_box(v___x_332_);
v___x_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_box(v___x_332_);
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1___boxed(lean_object* v_s_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Near_Storage_instCodecBool___lam__1(v_s_340_);
lean_dec_ref(v_s_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__0(uint64_t v_t_354_){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_uint64_to_nat(v_t_354_);
v___x_356_ = l_Nat_reprFast(v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__0___boxed(lean_object* v_t_357_){
_start:
{
uint64_t v_t_boxed_358_; lean_object* v_res_359_; 
v_t_boxed_358_ = lean_unbox_uint64(v_t_357_);
lean_dec_ref(v_t_357_);
v_res_359_ = l_Near_Storage_instCodecNearToken___lam__0(v_t_boxed_358_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0(uint64_t v_g_365_){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_uint64_to_nat(v_g_365_);
v___x_367_ = l_Nat_reprFast(v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0___boxed(lean_object* v_g_368_){
_start:
{
uint64_t v_g_boxed_369_; lean_object* v_res_370_; 
v_g_boxed_369_ = lean_unbox_uint64(v_g_368_);
lean_dec_ref(v_g_368_);
v_res_370_ = l_Near_Storage_instCodecGas___lam__0(v_g_boxed_369_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg(lean_object* v_inst_376_, lean_object* v_key_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_near_storage_read(v_key_377_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_394_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_394_ == 0)
{
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_394_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_394_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
if (lean_obj_tag(v_a_380_) == 0)
{
lean_object* v___x_384_; lean_object* v___x_386_; 
lean_dec_ref(v_inst_376_);
v___x_384_ = lean_box(0);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_384_);
v___x_386_ = v___x_382_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_384_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
else
{
lean_object* v_val_388_; lean_object* v_decode_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
v_val_388_ = lean_ctor_get(v_a_380_, 0);
lean_inc(v_val_388_);
lean_dec_ref_known(v_a_380_, 1);
v_decode_389_ = lean_ctor_get(v_inst_376_, 1);
lean_inc_ref(v_decode_389_);
lean_dec_ref(v_inst_376_);
v___x_390_ = lean_apply_1(v_decode_389_, v_val_388_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_390_);
v___x_392_ = v___x_382_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec_ref(v_inst_376_);
v_a_395_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_379_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_379_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg___boxed(lean_object* v_inst_403_, lean_object* v_key_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Near_Storage_readAs_x3f___redArg(v_inst_403_, v_key_404_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f(lean_object* v_00_u03b1_407_, lean_object* v_inst_408_, lean_object* v_key_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Near_Storage_readAs_x3f___redArg(v_inst_408_, v_key_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___boxed(lean_object* v_00_u03b1_412_, lean_object* v_inst_413_, lean_object* v_key_414_, lean_object* v_a_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Near_Storage_readAs_x3f(v_00_u03b1_412_, v_inst_413_, v_key_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg(lean_object* v_inst_417_, lean_object* v_key_418_, lean_object* v_default_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Near_Storage_readAs_x3f___redArg(v_inst_417_, v_key_418_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_433_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_433_ == 0)
{
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_433_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_433_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
if (lean_obj_tag(v_a_422_) == 0)
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v_default_419_);
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_default_419_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
else
{
lean_object* v_val_429_; lean_object* v___x_431_; 
lean_dec(v_default_419_);
v_val_429_ = lean_ctor_get(v_a_422_, 0);
lean_inc(v_val_429_);
lean_dec_ref_known(v_a_422_, 1);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v_val_429_);
v___x_431_ = v___x_424_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_val_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_default_419_);
v_a_434_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_421_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_421_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg___boxed(lean_object* v_inst_442_, lean_object* v_key_443_, lean_object* v_default_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Near_Storage_readAs___redArg(v_inst_442_, v_key_443_, v_default_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs(lean_object* v_00_u03b1_447_, lean_object* v_inst_448_, lean_object* v_key_449_, lean_object* v_default_450_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l_Near_Storage_readAs___redArg(v_inst_448_, v_key_449_, v_default_450_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___boxed(lean_object* v_00_u03b1_453_, lean_object* v_inst_454_, lean_object* v_key_455_, lean_object* v_default_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Near_Storage_readAs(v_00_u03b1_453_, v_inst_454_, v_key_455_, v_default_456_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg(lean_object* v_inst_459_, lean_object* v_key_460_, lean_object* v_value_461_){
_start:
{
lean_object* v_encode_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_encode_463_ = lean_ctor_get(v_inst_459_, 0);
lean_inc_ref(v_encode_463_);
lean_dec_ref(v_inst_459_);
v___x_464_ = lean_apply_1(v_encode_463_, v_value_461_);
v___x_465_ = lean_near_storage_write(v_key_460_, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg___boxed(lean_object* v_inst_466_, lean_object* v_key_467_, lean_object* v_value_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Near_Storage_writeAs___redArg(v_inst_466_, v_key_467_, v_value_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs(lean_object* v_00_u03b1_471_, lean_object* v_inst_472_, lean_object* v_key_473_, lean_object* v_value_474_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Near_Storage_writeAs___redArg(v_inst_472_, v_key_473_, v_value_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___boxed(lean_object* v_00_u03b1_477_, lean_object* v_inst_478_, lean_object* v_key_479_, lean_object* v_value_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Near_Storage_writeAs(v_00_u03b1_477_, v_inst_478_, v_key_479_, v_value_480_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_contains(lean_object* v_key_483_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = lean_near_storage_has_key(v_key_483_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_contains___boxed(lean_object* v_key_486_, lean_object* v_a_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Near_Storage_contains(v_key_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_delete(lean_object* v_key_489_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = lean_near_storage_remove(v_key_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_delete___boxed(lean_object* v_key_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Near_Storage_delete(v_key_492_);
return v_res_494_;
}
}
static lean_object* _init_l_Near_Storage_instReprKey_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_unsigned_to_nat(8u);
v___x_505_ = lean_nat_to_int(v___x_504_);
return v___x_505_;
}
}
static lean_object* _init_l_Near_Storage_instReprKey_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__9, &l_Near_instReprNearToken_repr___redArg___closed__9_once, _init_l_Near_instReprNearToken_repr___redArg___closed__9);
v___x_507_ = lean_nat_to_int(v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___redArg(lean_object* v_x_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_509_ = ((lean_object*)(l_Near_Storage_instReprKey_repr___redArg___closed__3));
v___x_510_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__4, &l_Near_Storage_instReprKey_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__4);
v___x_511_ = l_String_quote(v_x_508_);
v___x_512_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
v___x_513_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_510_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = 0;
v___x_515_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set_uint8(v___x_515_, sizeof(void*)*1, v___x_514_);
v___x_516_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_509_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_518_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
lean_ctor_set(v___x_519_, 1, v___x_516_);
v___x_520_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_521_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_517_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_523_, sizeof(void*)*1, v___x_514_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr(lean_object* v_00_u03b1_524_, lean_object* v_inst_525_, lean_object* v_x_526_, lean_object* v_prec_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Near_Storage_instReprKey_repr___redArg(v_x_526_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___boxed(lean_object* v_00_u03b1_529_, lean_object* v_inst_530_, lean_object* v_x_531_, lean_object* v_prec_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Near_Storage_instReprKey_repr(v_00_u03b1_529_, v_inst_530_, v_x_531_, v_prec_532_);
lean_dec(v_prec_532_);
lean_dec_ref(v_inst_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey___redArg(lean_object* v_inst_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_closure((void*)(l_Near_Storage_instReprKey_repr___boxed), 4, 2);
lean_closure_set(v___x_535_, 0, lean_box(0));
lean_closure_set(v___x_535_, 1, v_inst_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey(lean_object* v_00_u03b1_536_, lean_object* v_inst_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = lean_alloc_closure((void*)(l_Near_Storage_instReprKey_repr___boxed), 4, 2);
lean_closure_set(v___x_538_, 0, lean_box(0));
lean_closure_set(v___x_538_, 1, v_inst_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg(lean_object* v_name_539_){
_start:
{
lean_inc_ref(v_name_539_);
return v_name_539_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg___boxed(lean_object* v_name_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Near_Storage_Key_make___redArg(v_name_540_);
lean_dec_ref(v_name_540_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make(lean_object* v_00_u03b1_542_, lean_object* v_name_543_){
_start:
{
lean_inc_ref(v_name_543_);
return v_name_543_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___boxed(lean_object* v_00_u03b1_544_, lean_object* v_name_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Near_Storage_Key_make(v_00_u03b1_544_, v_name_545_);
lean_dec_ref(v_name_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg(lean_object* v_inst_547_, lean_object* v_key_548_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Near_Storage_readAs_x3f___redArg(v_inst_547_, v_key_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg___boxed(lean_object* v_inst_551_, lean_object* v_key_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Near_Storage_Key_read_x3f___redArg(v_inst_551_, v_key_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f(lean_object* v_00_u03b1_555_, lean_object* v_inst_556_, lean_object* v_key_557_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Near_Storage_readAs_x3f___redArg(v_inst_556_, v_key_557_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___boxed(lean_object* v_00_u03b1_560_, lean_object* v_inst_561_, lean_object* v_key_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Near_Storage_Key_read_x3f(v_00_u03b1_560_, v_inst_561_, v_key_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg(lean_object* v_inst_565_, lean_object* v_key_566_, lean_object* v_default_567_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Near_Storage_readAs___redArg(v_inst_565_, v_key_566_, v_default_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg___boxed(lean_object* v_inst_570_, lean_object* v_key_571_, lean_object* v_default_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Near_Storage_Key_read___redArg(v_inst_570_, v_key_571_, v_default_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read(lean_object* v_00_u03b1_575_, lean_object* v_inst_576_, lean_object* v_key_577_, lean_object* v_default_578_){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = l_Near_Storage_readAs___redArg(v_inst_576_, v_key_577_, v_default_578_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___boxed(lean_object* v_00_u03b1_581_, lean_object* v_inst_582_, lean_object* v_key_583_, lean_object* v_default_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Near_Storage_Key_read(v_00_u03b1_581_, v_inst_582_, v_key_583_, v_default_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg(lean_object* v_inst_587_, lean_object* v_key_588_, lean_object* v_value_589_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Near_Storage_writeAs___redArg(v_inst_587_, v_key_588_, v_value_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg___boxed(lean_object* v_inst_592_, lean_object* v_key_593_, lean_object* v_value_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Near_Storage_Key_write___redArg(v_inst_592_, v_key_593_, v_value_594_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write(lean_object* v_00_u03b1_597_, lean_object* v_inst_598_, lean_object* v_key_599_, lean_object* v_value_600_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Near_Storage_writeAs___redArg(v_inst_598_, v_key_599_, v_value_600_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___boxed(lean_object* v_00_u03b1_603_, lean_object* v_inst_604_, lean_object* v_key_605_, lean_object* v_value_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Near_Storage_Key_write(v_00_u03b1_603_, v_inst_604_, v_key_605_, v_value_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg(lean_object* v_key_609_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = lean_near_storage_has_key(v_key_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg___boxed(lean_object* v_key_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Near_Storage_Key_contains___redArg(v_key_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains(lean_object* v_00_u03b1_615_, lean_object* v_key_616_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_near_storage_has_key(v_key_616_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___boxed(lean_object* v_00_u03b1_619_, lean_object* v_key_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Near_Storage_Key_contains(v_00_u03b1_619_, v_key_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg(lean_object* v_key_623_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_near_storage_remove(v_key_623_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg___boxed(lean_object* v_key_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Near_Storage_Key_remove___redArg(v_key_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove(lean_object* v_00_u03b1_629_, lean_object* v_key_630_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_near_storage_remove(v_key_630_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___boxed(lean_object* v_00_u03b1_633_, lean_object* v_key_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Near_Storage_Key_remove(v_00_u03b1_633_, v_key_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg(lean_object* v_inst_637_, lean_object* v_key_638_, lean_object* v_f_639_){
_start:
{
lean_object* v___x_641_; 
lean_inc_ref(v_key_638_);
lean_inc_ref(v_inst_637_);
v___x_641_ = l_Near_Storage_readAs_x3f___redArg(v_inst_637_, v_key_638_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_642_);
if (lean_obj_tag(v_a_642_) == 0)
{
lean_dec(v_f_639_);
lean_dec_ref(v_key_638_);
lean_dec_ref(v_inst_637_);
return v___x_641_;
}
else
{
lean_object* v_val_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_668_; 
lean_dec_ref_known(v___x_641_, 1);
v_val_643_ = lean_ctor_get(v_a_642_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_a_642_);
if (v_isSharedCheck_668_ == 0)
{
v___x_645_ = v_a_642_;
v_isShared_646_ = v_isSharedCheck_668_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_val_643_);
lean_dec(v_a_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_668_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_apply_1(v_f_639_, v_val_643_);
lean_inc(v___x_647_);
v___x_648_ = l_Near_Storage_writeAs___redArg(v_inst_637_, v_key_638_, v___x_647_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_658_; 
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; 
v_unused_659_ = lean_ctor_get(v___x_648_, 0);
lean_dec(v_unused_659_);
v___x_650_ = v___x_648_;
v_isShared_651_ = v_isSharedCheck_658_;
goto v_resetjp_649_;
}
else
{
lean_dec(v___x_648_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_658_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_647_);
v___x_653_ = v___x_645_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_647_);
v___x_653_ = v_reuseFailAlloc_657_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_655_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_653_);
v___x_655_ = v___x_650_;
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
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v___x_647_);
lean_del_object(v___x_645_);
v_a_660_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_648_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_648_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
}
}
else
{
lean_dec(v_f_639_);
lean_dec_ref(v_key_638_);
lean_dec_ref(v_inst_637_);
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg___boxed(lean_object* v_inst_669_, lean_object* v_key_670_, lean_object* v_f_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Near_Storage_Key_modify_x3f___redArg(v_inst_669_, v_key_670_, v_f_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f(lean_object* v_00_u03b1_674_, lean_object* v_inst_675_, lean_object* v_key_676_, lean_object* v_f_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Near_Storage_Key_modify_x3f___redArg(v_inst_675_, v_key_676_, v_f_677_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___boxed(lean_object* v_00_u03b1_680_, lean_object* v_inst_681_, lean_object* v_key_682_, lean_object* v_f_683_, lean_object* v_a_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Near_Storage_Key_modify_x3f(v_00_u03b1_680_, v_inst_681_, v_key_682_, v_f_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg(lean_object* v_inst_686_, lean_object* v_key_687_, lean_object* v_default_688_, lean_object* v_f_689_){
_start:
{
lean_object* v___x_691_; 
lean_inc_ref(v_key_687_);
lean_inc_ref(v_inst_686_);
v___x_691_ = l_Near_Storage_readAs___redArg(v_inst_686_, v_key_687_, v_default_688_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v_a_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_a_692_);
lean_dec_ref_known(v___x_691_, 1);
v___x_693_ = lean_apply_1(v_f_689_, v_a_692_);
lean_inc(v___x_693_);
v___x_694_ = l_Near_Storage_writeAs___redArg(v_inst_686_, v_key_687_, v___x_693_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v___x_694_, 0);
lean_dec(v_unused_702_);
v___x_696_ = v___x_694_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_dec(v___x_694_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_693_);
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_693_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec(v___x_693_);
v_a_703_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_694_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_694_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
else
{
lean_dec(v_f_689_);
lean_dec_ref(v_key_687_);
lean_dec_ref(v_inst_686_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg___boxed(lean_object* v_inst_711_, lean_object* v_key_712_, lean_object* v_default_713_, lean_object* v_f_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Near_Storage_Key_modify___redArg(v_inst_711_, v_key_712_, v_default_713_, v_f_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify(lean_object* v_00_u03b1_717_, lean_object* v_inst_718_, lean_object* v_key_719_, lean_object* v_default_720_, lean_object* v_f_721_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l_Near_Storage_Key_modify___redArg(v_inst_718_, v_key_719_, v_default_720_, v_f_721_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___boxed(lean_object* v_00_u03b1_724_, lean_object* v_inst_725_, lean_object* v_key_726_, lean_object* v_default_727_, lean_object* v_f_728_, lean_object* v_a_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Near_Storage_Key_modify(v_00_u03b1_724_, v_inst_725_, v_key_726_, v_default_727_, v_f_728_);
return v_res_730_;
}
}
static lean_object* _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = lean_unsigned_to_nat(7u);
v___x_741_ = lean_nat_to_int(v___x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___redArg(lean_object* v_x_742_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_743_ = ((lean_object*)(l_Near_Storage_instReprSlot_repr___redArg___closed__3));
v___x_744_ = lean_obj_once(&l_Near_Storage_instReprSlot_repr___redArg___closed__4, &l_Near_Storage_instReprSlot_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4);
v___x_745_ = l_Near_Storage_instReprKey_repr___redArg(v_x_742_);
v___x_746_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = 0;
v___x_748_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set_uint8(v___x_748_, sizeof(void*)*1, v___x_747_);
v___x_749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_743_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_751_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_752_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_749_);
v___x_753_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_754_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_750_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_756_, 0, v___x_755_);
lean_ctor_set_uint8(v___x_756_, sizeof(void*)*1, v___x_747_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr(lean_object* v_00_u03b1_757_, lean_object* v_inst_758_, lean_object* v_x_759_, lean_object* v_prec_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Near_Storage_instReprSlot_repr___redArg(v_x_759_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___boxed(lean_object* v_00_u03b1_762_, lean_object* v_inst_763_, lean_object* v_x_764_, lean_object* v_prec_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Near_Storage_instReprSlot_repr(v_00_u03b1_762_, v_inst_763_, v_x_764_, v_prec_765_);
lean_dec(v_prec_765_);
lean_dec_ref(v_inst_763_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot___redArg(lean_object* v_inst_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = lean_alloc_closure((void*)(l_Near_Storage_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_768_, 0, lean_box(0));
lean_closure_set(v___x_768_, 1, v_inst_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot(lean_object* v_00_u03b1_769_, lean_object* v_inst_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = lean_alloc_closure((void*)(l_Near_Storage_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_771_, 0, lean_box(0));
lean_closure_set(v___x_771_, 1, v_inst_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg(lean_object* v_name_772_){
_start:
{
lean_inc_ref(v_name_772_);
return v_name_772_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg___boxed(lean_object* v_name_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Near_Storage_Slot_make___redArg(v_name_773_);
lean_dec_ref(v_name_773_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make(lean_object* v_00_u03b1_775_, lean_object* v_name_776_){
_start:
{
lean_inc_ref(v_name_776_);
return v_name_776_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___boxed(lean_object* v_00_u03b1_777_, lean_object* v_name_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Near_Storage_Slot_make(v_00_u03b1_777_, v_name_778_);
lean_dec_ref(v_name_778_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg(lean_object* v_inst_780_, lean_object* v_slot_781_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Near_Storage_readAs_x3f___redArg(v_inst_780_, v_slot_781_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg___boxed(lean_object* v_inst_784_, lean_object* v_slot_785_, lean_object* v_a_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Near_Storage_Slot_read_x3f___redArg(v_inst_784_, v_slot_785_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f(lean_object* v_00_u03b1_788_, lean_object* v_inst_789_, lean_object* v_slot_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Near_Storage_readAs_x3f___redArg(v_inst_789_, v_slot_790_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___boxed(lean_object* v_00_u03b1_793_, lean_object* v_inst_794_, lean_object* v_slot_795_, lean_object* v_a_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Near_Storage_Slot_read_x3f(v_00_u03b1_793_, v_inst_794_, v_slot_795_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg(lean_object* v_inst_798_, lean_object* v_slot_799_, lean_object* v_default_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Near_Storage_readAs___redArg(v_inst_798_, v_slot_799_, v_default_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg___boxed(lean_object* v_inst_803_, lean_object* v_slot_804_, lean_object* v_default_805_, lean_object* v_a_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Near_Storage_Slot_read___redArg(v_inst_803_, v_slot_804_, v_default_805_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read(lean_object* v_00_u03b1_808_, lean_object* v_inst_809_, lean_object* v_slot_810_, lean_object* v_default_811_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Near_Storage_readAs___redArg(v_inst_809_, v_slot_810_, v_default_811_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___boxed(lean_object* v_00_u03b1_814_, lean_object* v_inst_815_, lean_object* v_slot_816_, lean_object* v_default_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Near_Storage_Slot_read(v_00_u03b1_814_, v_inst_815_, v_slot_816_, v_default_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg(lean_object* v_inst_820_, lean_object* v_slot_821_, lean_object* v_value_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Near_Storage_writeAs___redArg(v_inst_820_, v_slot_821_, v_value_822_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg___boxed(lean_object* v_inst_825_, lean_object* v_slot_826_, lean_object* v_value_827_, lean_object* v_a_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Near_Storage_Slot_write___redArg(v_inst_825_, v_slot_826_, v_value_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write(lean_object* v_00_u03b1_830_, lean_object* v_inst_831_, lean_object* v_slot_832_, lean_object* v_value_833_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Near_Storage_writeAs___redArg(v_inst_831_, v_slot_832_, v_value_833_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___boxed(lean_object* v_00_u03b1_836_, lean_object* v_inst_837_, lean_object* v_slot_838_, lean_object* v_value_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Near_Storage_Slot_write(v_00_u03b1_836_, v_inst_837_, v_slot_838_, v_value_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg(lean_object* v_slot_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = lean_near_storage_has_key(v_slot_842_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg___boxed(lean_object* v_slot_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Near_Storage_Slot_contains___redArg(v_slot_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains(lean_object* v_00_u03b1_848_, lean_object* v_slot_849_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = lean_near_storage_has_key(v_slot_849_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___boxed(lean_object* v_00_u03b1_852_, lean_object* v_slot_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Near_Storage_Slot_contains(v_00_u03b1_852_, v_slot_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg(lean_object* v_slot_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = lean_near_storage_remove(v_slot_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg___boxed(lean_object* v_slot_859_, lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Near_Storage_Slot_remove___redArg(v_slot_859_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove(lean_object* v_00_u03b1_862_, lean_object* v_slot_863_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = lean_near_storage_remove(v_slot_863_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___boxed(lean_object* v_00_u03b1_866_, lean_object* v_slot_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Near_Storage_Slot_remove(v_00_u03b1_866_, v_slot_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg(lean_object* v_inst_870_, lean_object* v_slot_871_, lean_object* v_f_872_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l_Near_Storage_Key_modify_x3f___redArg(v_inst_870_, v_slot_871_, v_f_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg___boxed(lean_object* v_inst_875_, lean_object* v_slot_876_, lean_object* v_f_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Near_Storage_Slot_modify_x3f___redArg(v_inst_875_, v_slot_876_, v_f_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f(lean_object* v_00_u03b1_880_, lean_object* v_inst_881_, lean_object* v_slot_882_, lean_object* v_f_883_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Near_Storage_Key_modify_x3f___redArg(v_inst_881_, v_slot_882_, v_f_883_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___boxed(lean_object* v_00_u03b1_886_, lean_object* v_inst_887_, lean_object* v_slot_888_, lean_object* v_f_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Near_Storage_Slot_modify_x3f(v_00_u03b1_886_, v_inst_887_, v_slot_888_, v_f_889_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg(lean_object* v_inst_892_, lean_object* v_slot_893_, lean_object* v_default_894_, lean_object* v_f_895_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = l_Near_Storage_Key_modify___redArg(v_inst_892_, v_slot_893_, v_default_894_, v_f_895_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg___boxed(lean_object* v_inst_898_, lean_object* v_slot_899_, lean_object* v_default_900_, lean_object* v_f_901_, lean_object* v_a_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Near_Storage_Slot_modify___redArg(v_inst_898_, v_slot_899_, v_default_900_, v_f_901_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify(lean_object* v_00_u03b1_904_, lean_object* v_inst_905_, lean_object* v_slot_906_, lean_object* v_default_907_, lean_object* v_f_908_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Near_Storage_Key_modify___redArg(v_inst_905_, v_slot_906_, v_default_907_, v_f_908_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___boxed(lean_object* v_00_u03b1_911_, lean_object* v_inst_912_, lean_object* v_slot_913_, lean_object* v_default_914_, lean_object* v_f_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Near_Storage_Slot_modify(v_00_u03b1_911_, v_inst_912_, v_slot_913_, v_default_914_, v_f_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___redArg(lean_object* v_x_927_){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_928_ = ((lean_object*)(l_Near_Storage_instReprTypedMap_repr___redArg___closed__3));
v___x_929_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__7, &l_Near_instReprNearToken_repr___redArg___closed__7_once, _init_l_Near_instReprNearToken_repr___redArg___closed__7);
v___x_930_ = l_String_quote(v_x_927_);
v___x_931_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
v___x_932_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_929_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = 0;
v___x_934_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_934_, 0, v___x_932_);
lean_ctor_set_uint8(v___x_934_, sizeof(void*)*1, v___x_933_);
v___x_935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_928_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_937_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_938_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set(v___x_938_, 1, v___x_935_);
v___x_939_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_938_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_936_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set_uint8(v___x_942_, sizeof(void*)*1, v___x_933_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr(lean_object* v_00_u03b1_943_, lean_object* v_inst_944_, lean_object* v_x_945_, lean_object* v_prec_946_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_Near_Storage_instReprTypedMap_repr___redArg(v_x_945_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___boxed(lean_object* v_00_u03b1_948_, lean_object* v_inst_949_, lean_object* v_x_950_, lean_object* v_prec_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Near_Storage_instReprTypedMap_repr(v_00_u03b1_948_, v_inst_949_, v_x_950_, v_prec_951_);
lean_dec(v_prec_951_);
lean_dec_ref(v_inst_949_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap___redArg(lean_object* v_inst_953_){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = lean_alloc_closure((void*)(l_Near_Storage_instReprTypedMap_repr___boxed), 4, 2);
lean_closure_set(v___x_954_, 0, lean_box(0));
lean_closure_set(v___x_954_, 1, v_inst_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap(lean_object* v_00_u03b1_955_, lean_object* v_inst_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = lean_alloc_closure((void*)(l_Near_Storage_instReprTypedMap_repr___boxed), 4, 2);
lean_closure_set(v___x_957_, 0, lean_box(0));
lean_closure_set(v___x_957_, 1, v_inst_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg(lean_object* v_mapPrefix_958_){
_start:
{
lean_inc_ref(v_mapPrefix_958_);
return v_mapPrefix_958_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg___boxed(lean_object* v_mapPrefix_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Near_Storage_TypedMap_make___redArg(v_mapPrefix_959_);
lean_dec_ref(v_mapPrefix_959_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make(lean_object* v_00_u03b1_961_, lean_object* v_mapPrefix_962_){
_start:
{
lean_inc_ref(v_mapPrefix_962_);
return v_mapPrefix_962_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___boxed(lean_object* v_00_u03b1_963_, lean_object* v_mapPrefix_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Near_Storage_TypedMap_make(v_00_u03b1_963_, v_mapPrefix_964_);
lean_dec_ref(v_mapPrefix_964_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg(lean_object* v_m_967_, lean_object* v_key_968_){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_969_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_970_ = lean_string_append(v_m_967_, v___x_969_);
v___x_971_ = lean_string_append(v___x_970_, v_key_968_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg___boxed(lean_object* v_m_972_, lean_object* v_key_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_972_, v_key_973_);
lean_dec_ref(v_key_973_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey(lean_object* v_00_u03b1_975_, lean_object* v_m_976_, lean_object* v_key_977_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_976_, v_key_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___boxed(lean_object* v_00_u03b1_979_, lean_object* v_m_980_, lean_object* v_key_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Near_Storage_TypedMap_storageKey(v_00_u03b1_979_, v_m_980_, v_key_981_);
lean_dec_ref(v_key_981_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg(lean_object* v_inst_983_, lean_object* v_m_984_, lean_object* v_key_985_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_984_, v_key_985_);
v___x_988_ = l_Near_Storage_readAs_x3f___redArg(v_inst_983_, v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg___boxed(lean_object* v_inst_989_, lean_object* v_m_990_, lean_object* v_key_991_, lean_object* v_a_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Near_Storage_TypedMap_get___redArg(v_inst_989_, v_m_990_, v_key_991_);
lean_dec_ref(v_key_991_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get(lean_object* v_00_u03b1_994_, lean_object* v_inst_995_, lean_object* v_m_996_, lean_object* v_key_997_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Near_Storage_TypedMap_get___redArg(v_inst_995_, v_m_996_, v_key_997_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___boxed(lean_object* v_00_u03b1_1000_, lean_object* v_inst_1001_, lean_object* v_m_1002_, lean_object* v_key_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Near_Storage_TypedMap_get(v_00_u03b1_1000_, v_inst_1001_, v_m_1002_, v_key_1003_);
lean_dec_ref(v_key_1003_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg(lean_object* v_inst_1006_, lean_object* v_m_1007_, lean_object* v_key_1008_, lean_object* v_default_1009_){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_1007_, v_key_1008_);
v___x_1012_ = l_Near_Storage_readAs___redArg(v_inst_1006_, v___x_1011_, v_default_1009_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg___boxed(lean_object* v_inst_1013_, lean_object* v_m_1014_, lean_object* v_key_1015_, lean_object* v_default_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Near_Storage_TypedMap_getOr___redArg(v_inst_1013_, v_m_1014_, v_key_1015_, v_default_1016_);
lean_dec_ref(v_key_1015_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr(lean_object* v_00_u03b1_1019_, lean_object* v_inst_1020_, lean_object* v_m_1021_, lean_object* v_key_1022_, lean_object* v_default_1023_){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Near_Storage_TypedMap_getOr___redArg(v_inst_1020_, v_m_1021_, v_key_1022_, v_default_1023_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___boxed(lean_object* v_00_u03b1_1026_, lean_object* v_inst_1027_, lean_object* v_m_1028_, lean_object* v_key_1029_, lean_object* v_default_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Near_Storage_TypedMap_getOr(v_00_u03b1_1026_, v_inst_1027_, v_m_1028_, v_key_1029_, v_default_1030_);
lean_dec_ref(v_key_1029_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg(lean_object* v_inst_1033_, lean_object* v_m_1034_, lean_object* v_key_1035_, lean_object* v_value_1036_){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_1034_, v_key_1035_);
v___x_1039_ = l_Near_Storage_writeAs___redArg(v_inst_1033_, v___x_1038_, v_value_1036_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg___boxed(lean_object* v_inst_1040_, lean_object* v_m_1041_, lean_object* v_key_1042_, lean_object* v_value_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Near_Storage_TypedMap_set___redArg(v_inst_1040_, v_m_1041_, v_key_1042_, v_value_1043_);
lean_dec_ref(v_key_1042_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set(lean_object* v_00_u03b1_1046_, lean_object* v_inst_1047_, lean_object* v_m_1048_, lean_object* v_key_1049_, lean_object* v_value_1050_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Near_Storage_TypedMap_set___redArg(v_inst_1047_, v_m_1048_, v_key_1049_, v_value_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___boxed(lean_object* v_00_u03b1_1053_, lean_object* v_inst_1054_, lean_object* v_m_1055_, lean_object* v_key_1056_, lean_object* v_value_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Near_Storage_TypedMap_set(v_00_u03b1_1053_, v_inst_1054_, v_m_1055_, v_key_1056_, v_value_1057_);
lean_dec_ref(v_key_1056_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg(lean_object* v_m_1060_, lean_object* v_key_1061_){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_1060_, v_key_1061_);
v___x_1064_ = lean_near_storage_has_key(v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg___boxed(lean_object* v_m_1065_, lean_object* v_key_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Near_Storage_TypedMap_contains___redArg(v_m_1065_, v_key_1066_);
lean_dec_ref(v_key_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains(lean_object* v_00_u03b1_1069_, lean_object* v_m_1070_, lean_object* v_key_1071_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Near_Storage_TypedMap_contains___redArg(v_m_1070_, v_key_1071_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___boxed(lean_object* v_00_u03b1_1074_, lean_object* v_m_1075_, lean_object* v_key_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Near_Storage_TypedMap_contains(v_00_u03b1_1074_, v_m_1075_, v_key_1076_);
lean_dec_ref(v_key_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg(lean_object* v_m_1079_, lean_object* v_key_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_1079_, v_key_1080_);
v___x_1083_ = lean_near_storage_remove(v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg___boxed(lean_object* v_m_1084_, lean_object* v_key_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Near_Storage_TypedMap_remove___redArg(v_m_1084_, v_key_1085_);
lean_dec_ref(v_key_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove(lean_object* v_00_u03b1_1088_, lean_object* v_m_1089_, lean_object* v_key_1090_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Near_Storage_TypedMap_remove___redArg(v_m_1089_, v_key_1090_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___boxed(lean_object* v_00_u03b1_1093_, lean_object* v_m_1094_, lean_object* v_key_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Near_Storage_TypedMap_remove(v_00_u03b1_1093_, v_m_1094_, v_key_1095_);
lean_dec_ref(v_key_1095_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg(lean_object* v_inst_1098_, lean_object* v_m_1099_, lean_object* v_key_1100_, lean_object* v_default_1101_, lean_object* v_f_1102_){
_start:
{
lean_object* v___x_1104_; 
lean_inc_ref(v_m_1099_);
lean_inc_ref(v_inst_1098_);
v___x_1104_ = l_Near_Storage_TypedMap_getOr___redArg(v_inst_1098_, v_m_1099_, v_key_1100_, v_default_1101_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = lean_apply_1(v_f_1102_, v_a_1105_);
lean_inc(v___x_1106_);
v___x_1107_ = l_Near_Storage_TypedMap_set___redArg(v_inst_1098_, v_m_1099_, v_key_1100_, v___x_1106_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1114_ == 0)
{
lean_object* v_unused_1115_; 
v_unused_1115_ = lean_ctor_get(v___x_1107_, 0);
lean_dec(v_unused_1115_);
v___x_1109_ = v___x_1107_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_dec(v___x_1107_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 0, v___x_1106_);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1106_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v___x_1106_);
v_a_1116_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1107_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1107_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_dec(v_f_1102_);
lean_dec_ref(v_m_1099_);
lean_dec_ref(v_inst_1098_);
return v___x_1104_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg___boxed(lean_object* v_inst_1124_, lean_object* v_m_1125_, lean_object* v_key_1126_, lean_object* v_default_1127_, lean_object* v_f_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Near_Storage_TypedMap_modify___redArg(v_inst_1124_, v_m_1125_, v_key_1126_, v_default_1127_, v_f_1128_);
lean_dec_ref(v_key_1126_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify(lean_object* v_00_u03b1_1131_, lean_object* v_inst_1132_, lean_object* v_m_1133_, lean_object* v_key_1134_, lean_object* v_default_1135_, lean_object* v_f_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Near_Storage_TypedMap_modify___redArg(v_inst_1132_, v_m_1133_, v_key_1134_, v_default_1135_, v_f_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___boxed(lean_object* v_00_u03b1_1139_, lean_object* v_inst_1140_, lean_object* v_m_1141_, lean_object* v_key_1142_, lean_object* v_default_1143_, lean_object* v_f_1144_, lean_object* v_a_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Near_Storage_TypedMap_modify(v_00_u03b1_1139_, v_inst_1140_, v_m_1141_, v_key_1142_, v_default_1143_, v_f_1144_);
lean_dec_ref(v_key_1142_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = lean_near_current_account_id();
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = lean_near_predecessor_account_id();
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object* v_a_00___x40___internal___hyg_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = lean_near_block_timestamp();
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object* v_a_00___x40___internal___hyg_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = lean_near_block_height();
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object* v_a_00___x40___internal___hyg_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = lean_near_input();
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object* v_data_1164_, lean_object* v_a_00___x40___internal___hyg_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = lean_near_value_return(v_data_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object* v_msg_1169_, lean_object* v_a_00___x40___internal___hyg_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = lean_near_log(v_msg_1169_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccount(){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_near_current_account_id();
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
v_a_1182_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1173_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1173_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccount___boxed(lean_object* v_a_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Near_Env_currentAccount();
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount(){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1193_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1193_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
v_a_1202_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1193_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1193_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount___boxed(lean_object* v_a_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Near_Env_predecessorAccount();
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_inputString(){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_near_input();
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_inputString___boxed(lean_object* v_a_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Near_Env_inputString();
return v_res_1215_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(18u);
v___x_1226_ = lean_nat_to_int(v___x_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = lean_unsigned_to_nat(22u);
v___x_1234_ = lean_nat_to_int(v___x_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = lean_unsigned_to_nat(15u);
v___x_1239_ = lean_nat_to_int(v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___redArg(lean_object* v_x_1246_){
_start:
{
lean_object* v_currentAccount_1247_; lean_object* v_predecessorAccount_1248_; uint64_t v_blockHeight_1249_; uint64_t v_blockTimestamp_1250_; lean_object* v_input_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v_currentAccount_1247_ = lean_ctor_get(v_x_1246_, 0);
lean_inc_ref(v_currentAccount_1247_);
v_predecessorAccount_1248_ = lean_ctor_get(v_x_1246_, 1);
lean_inc_ref(v_predecessorAccount_1248_);
v_blockHeight_1249_ = lean_ctor_get_uint64(v_x_1246_, sizeof(void*)*3);
v_blockTimestamp_1250_ = lean_ctor_get_uint64(v_x_1246_, sizeof(void*)*3 + 8);
v_input_1251_ = lean_ctor_get(v_x_1246_, 2);
lean_inc_ref(v_input_1251_);
lean_dec_ref(v_x_1246_);
v___x_1252_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__5));
v___x_1253_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__3));
v___x_1254_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__4, &l_Near_Env_instReprContext_repr___redArg___closed__4_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__4);
v___x_1255_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_1256_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1256_, 0, v_currentAccount_1247_);
v___x_1257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v___x_1255_);
v___x_1259_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1254_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = 0;
v___x_1261_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*1, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1253_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__6));
v___x_1264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_box(1);
v___x_1266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1264_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___x_1267_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__8));
v___x_1268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1266_);
lean_ctor_set(v___x_1268_, 1, v___x_1267_);
v___x_1269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___x_1252_);
v___x_1270_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__9, &l_Near_Env_instReprContext_repr___redArg___closed__9_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__9);
v___x_1271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1271_, 0, v_predecessorAccount_1248_);
v___x_1272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1255_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___x_1255_);
v___x_1274_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1270_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*1, v___x_1260_);
v___x_1276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1269_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set(v___x_1277_, 1, v___x_1263_);
v___x_1278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___x_1265_);
v___x_1279_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__11));
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v___x_1252_);
v___x_1282_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__12, &l_Near_Env_instReprContext_repr___redArg___closed__12_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__12);
v___x_1283_ = lean_uint64_to_nat(v_blockHeight_1249_);
v___x_1284_ = l_Nat_reprFast(v___x_1283_);
v___x_1285_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
v___x_1286_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1282_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
lean_ctor_set_uint8(v___x_1287_, sizeof(void*)*1, v___x_1260_);
v___x_1288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1281_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v___x_1263_);
v___x_1290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v___x_1265_);
v___x_1291_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__14));
v___x_1292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1290_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v___x_1252_);
v___x_1294_ = lean_uint64_to_nat(v_blockTimestamp_1250_);
v___x_1295_ = l_Nat_reprFast(v___x_1294_);
v___x_1296_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
v___x_1297_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1254_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*1, v___x_1260_);
v___x_1299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1293_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
lean_ctor_set(v___x_1300_, 1, v___x_1263_);
v___x_1301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v___x_1265_);
v___x_1302_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__16));
v___x_1303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1301_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___x_1252_);
v___x_1305_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_1306_ = l_String_quote(v_input_1251_);
v___x_1307_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
v___x_1308_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1305_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*1, v___x_1260_);
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1304_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_1312_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_1313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1310_);
v___x_1314_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_1315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1311_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set_uint8(v___x_1317_, sizeof(void*)*1, v___x_1260_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr(lean_object* v_x_1318_, lean_object* v_prec_1319_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Near_Env_instReprContext_repr___redArg(v_x_1318_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___boxed(lean_object* v_x_1321_, lean_object* v_prec_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Near_Env_instReprContext_repr(v_x_1321_, v_prec_1322_);
lean_dec(v_prec_1322_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_context(){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Near_Env_currentAccount();
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1329_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v___x_1327_, 1);
v___x_1329_ = l_Near_Env_predecessorAccount();
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v___x_1331_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___x_1331_ = lean_near_block_height();
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v___x_1333_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v___x_1333_ = lean_near_block_timestamp();
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1335_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1335_ = lean_near_input();
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1346_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1346_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1346_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; uint64_t v___x_1341_; uint64_t v___x_1342_; lean_object* v___x_1344_; 
v___x_1340_ = lean_alloc_ctor(0, 3, 16);
lean_ctor_set(v___x_1340_, 0, v_a_1328_);
lean_ctor_set(v___x_1340_, 1, v_a_1330_);
lean_ctor_set(v___x_1340_, 2, v_a_1336_);
v___x_1341_ = lean_unbox_uint64(v_a_1332_);
lean_dec(v_a_1332_);
lean_ctor_set_uint64(v___x_1340_, sizeof(void*)*3, v___x_1341_);
v___x_1342_ = lean_unbox_uint64(v_a_1334_);
lean_dec(v_a_1334_);
lean_ctor_set_uint64(v___x_1340_, sizeof(void*)*3 + 8, v___x_1342_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1340_);
v___x_1344_ = v___x_1338_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1340_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
else
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_dec(v_a_1334_);
lean_dec(v_a_1332_);
lean_dec(v_a_1330_);
lean_dec(v_a_1328_);
v_a_1347_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1335_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1335_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1347_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
lean_dec(v_a_1332_);
lean_dec(v_a_1330_);
lean_dec(v_a_1328_);
v_a_1355_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1333_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1333_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec(v_a_1330_);
lean_dec(v_a_1328_);
v_a_1363_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1331_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1331_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
lean_dec(v_a_1328_);
v_a_1371_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1329_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1329_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
v_a_1379_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1327_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1327_);
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
LEAN_EXPORT lean_object* l_Near_Env_context___boxed(lean_object* v_a_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Near_Env_context();
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg(lean_object* v_inst_1389_, lean_object* v_value_1390_){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_apply_1(v_inst_1389_, v_value_1390_);
v___x_1393_ = lean_near_log(v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg___boxed(lean_object* v_inst_1394_, lean_object* v_value_1395_, lean_object* v_a_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Near_Env_logValue___redArg(v_inst_1394_, v_value_1395_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue(lean_object* v_00_u03b1_1398_, lean_object* v_inst_1399_, lean_object* v_value_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Near_Env_logValue___redArg(v_inst_1399_, v_value_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___boxed(lean_object* v_00_u03b1_1403_, lean_object* v_inst_1404_, lean_object* v_value_1405_, lean_object* v_a_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l_Near_Env_logValue(v_00_u03b1_1403_, v_inst_1404_, v_value_1405_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx(uint8_t v_x_1408_){
_start:
{
switch(v_x_1408_)
{
case 0:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_unsigned_to_nat(0u);
return v___x_1409_;
}
case 1:
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_unsigned_to_nat(1u);
return v___x_1410_;
}
default: 
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_unsigned_to_nat(2u);
return v___x_1411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx___boxed(lean_object* v_x_1412_){
_start:
{
uint8_t v_x_boxed_1413_; lean_object* v_res_1414_; 
v_x_boxed_1413_ = lean_unbox(v_x_1412_);
v_res_1414_ = l_Near_Contract_Mode_ctorIdx(v_x_boxed_1413_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx(uint8_t v_x_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Near_Contract_Mode_ctorIdx(v_x_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx___boxed(lean_object* v_x_1417_){
_start:
{
uint8_t v_x_4__boxed_1418_; lean_object* v_res_1419_; 
v_x_4__boxed_1418_ = lean_unbox(v_x_1417_);
v_res_1419_ = l_Near_Contract_Mode_toCtorIdx(v_x_4__boxed_1418_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg(lean_object* v_k_1420_){
_start:
{
lean_inc(v_k_1420_);
return v_k_1420_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg___boxed(lean_object* v_k_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Near_Contract_Mode_ctorElim___redArg(v_k_1421_);
lean_dec(v_k_1421_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim(lean_object* v_motive_1423_, lean_object* v_ctorIdx_1424_, uint8_t v_t_1425_, lean_object* v_h_1426_, lean_object* v_k_1427_){
_start:
{
lean_inc(v_k_1427_);
return v_k_1427_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___boxed(lean_object* v_motive_1428_, lean_object* v_ctorIdx_1429_, lean_object* v_t_1430_, lean_object* v_h_1431_, lean_object* v_k_1432_){
_start:
{
uint8_t v_t_boxed_1433_; lean_object* v_res_1434_; 
v_t_boxed_1433_ = lean_unbox(v_t_1430_);
v_res_1434_ = l_Near_Contract_Mode_ctorElim(v_motive_1428_, v_ctorIdx_1429_, v_t_boxed_1433_, v_h_1431_, v_k_1432_);
lean_dec(v_k_1432_);
lean_dec(v_ctorIdx_1429_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg(lean_object* v_init_1435_){
_start:
{
lean_inc(v_init_1435_);
return v_init_1435_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg___boxed(lean_object* v_init_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Near_Contract_Mode_init_elim___redArg(v_init_1436_);
lean_dec(v_init_1436_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim(lean_object* v_motive_1438_, uint8_t v_t_1439_, lean_object* v_h_1440_, lean_object* v_init_1441_){
_start:
{
lean_inc(v_init_1441_);
return v_init_1441_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___boxed(lean_object* v_motive_1442_, lean_object* v_t_1443_, lean_object* v_h_1444_, lean_object* v_init_1445_){
_start:
{
uint8_t v_t_boxed_1446_; lean_object* v_res_1447_; 
v_t_boxed_1446_ = lean_unbox(v_t_1443_);
v_res_1447_ = l_Near_Contract_Mode_init_elim(v_motive_1442_, v_t_boxed_1446_, v_h_1444_, v_init_1445_);
lean_dec(v_init_1445_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg(lean_object* v_view_1448_){
_start:
{
lean_inc(v_view_1448_);
return v_view_1448_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg___boxed(lean_object* v_view_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Near_Contract_Mode_view_elim___redArg(v_view_1449_);
lean_dec(v_view_1449_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim(lean_object* v_motive_1451_, uint8_t v_t_1452_, lean_object* v_h_1453_, lean_object* v_view_1454_){
_start:
{
lean_inc(v_view_1454_);
return v_view_1454_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___boxed(lean_object* v_motive_1455_, lean_object* v_t_1456_, lean_object* v_h_1457_, lean_object* v_view_1458_){
_start:
{
uint8_t v_t_boxed_1459_; lean_object* v_res_1460_; 
v_t_boxed_1459_ = lean_unbox(v_t_1456_);
v_res_1460_ = l_Near_Contract_Mode_view_elim(v_motive_1455_, v_t_boxed_1459_, v_h_1457_, v_view_1458_);
lean_dec(v_view_1458_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg(lean_object* v_update_1461_){
_start:
{
lean_inc(v_update_1461_);
return v_update_1461_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg___boxed(lean_object* v_update_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Near_Contract_Mode_update_elim___redArg(v_update_1462_);
lean_dec(v_update_1462_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim(lean_object* v_motive_1464_, uint8_t v_t_1465_, lean_object* v_h_1466_, lean_object* v_update_1467_){
_start:
{
lean_inc(v_update_1467_);
return v_update_1467_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___boxed(lean_object* v_motive_1468_, lean_object* v_t_1469_, lean_object* v_h_1470_, lean_object* v_update_1471_){
_start:
{
uint8_t v_t_boxed_1472_; lean_object* v_res_1473_; 
v_t_boxed_1472_ = lean_unbox(v_t_1469_);
v_res_1473_ = l_Near_Contract_Mode_update_elim(v_motive_1468_, v_t_boxed_1472_, v_h_1470_, v_update_1471_);
lean_dec(v_update_1471_);
return v_res_1473_;
}
}
LEAN_EXPORT uint8_t l_Near_Contract_instBEqMode_beq(uint8_t v_x_1474_, uint8_t v_y_1475_){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1476_ = l_Near_Contract_Mode_ctorIdx(v_x_1474_);
v___x_1477_ = l_Near_Contract_Mode_ctorIdx(v_y_1475_);
v___x_1478_ = lean_nat_dec_eq(v___x_1476_, v___x_1477_);
lean_dec(v___x_1477_);
lean_dec(v___x_1476_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instBEqMode_beq___boxed(lean_object* v_x_1479_, lean_object* v_y_1480_){
_start:
{
uint8_t v_x_17__boxed_1481_; uint8_t v_y_18__boxed_1482_; uint8_t v_res_1483_; lean_object* v_r_1484_; 
v_x_17__boxed_1481_ = lean_unbox(v_x_1479_);
v_y_18__boxed_1482_ = lean_unbox(v_y_1480_);
v_res_1483_ = l_Near_Contract_instBEqMode_beq(v_x_17__boxed_1481_, v_y_18__boxed_1482_);
v_r_1484_ = lean_box(v_res_1483_);
return v_r_1484_;
}
}
static lean_object* _init_l_Near_Contract_instReprMode_repr___closed__6(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = lean_unsigned_to_nat(2u);
v___x_1497_ = lean_nat_to_int(v___x_1496_);
return v___x_1497_;
}
}
static lean_object* _init_l_Near_Contract_instReprMode_repr___closed__7(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = lean_unsigned_to_nat(1u);
v___x_1499_ = lean_nat_to_int(v___x_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr(uint8_t v_x_1500_, lean_object* v_prec_1501_){
_start:
{
lean_object* v___y_1503_; lean_object* v___y_1510_; lean_object* v___y_1517_; 
switch(v_x_1500_)
{
case 0:
{
lean_object* v___x_1523_; uint8_t v___x_1524_; 
v___x_1523_ = lean_unsigned_to_nat(1024u);
v___x_1524_ = lean_nat_dec_le(v___x_1523_, v_prec_1501_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_1503_ = v___x_1525_;
goto v___jp_1502_;
}
else
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_1503_ = v___x_1526_;
goto v___jp_1502_;
}
}
case 1:
{
lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1527_ = lean_unsigned_to_nat(1024u);
v___x_1528_ = lean_nat_dec_le(v___x_1527_, v_prec_1501_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_1510_ = v___x_1529_;
goto v___jp_1509_;
}
else
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_1510_ = v___x_1530_;
goto v___jp_1509_;
}
}
default: 
{
lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1531_ = lean_unsigned_to_nat(1024u);
v___x_1532_ = lean_nat_dec_le(v___x_1531_, v_prec_1501_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; 
v___x_1533_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_1517_ = v___x_1533_;
goto v___jp_1516_;
}
else
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_1517_ = v___x_1534_;
goto v___jp_1516_;
}
}
}
v___jp_1502_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1504_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__1));
lean_inc(v___y_1503_);
v___x_1505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___y_1503_);
lean_ctor_set(v___x_1505_, 1, v___x_1504_);
v___x_1506_ = 0;
v___x_1507_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set_uint8(v___x_1507_, sizeof(void*)*1, v___x_1506_);
v___x_1508_ = l_Repr_addAppParen(v___x_1507_, v_prec_1501_);
return v___x_1508_;
}
v___jp_1509_:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1511_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__3));
lean_inc(v___y_1510_);
v___x_1512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___y_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = 0;
v___x_1514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1514_, 0, v___x_1512_);
lean_ctor_set_uint8(v___x_1514_, sizeof(void*)*1, v___x_1513_);
v___x_1515_ = l_Repr_addAppParen(v___x_1514_, v_prec_1501_);
return v___x_1515_;
}
v___jp_1516_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1518_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__5));
lean_inc(v___y_1517_);
v___x_1519_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___y_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = 0;
v___x_1521_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*1, v___x_1520_);
v___x_1522_ = l_Repr_addAppParen(v___x_1521_, v_prec_1501_);
return v___x_1522_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr___boxed(lean_object* v_x_1535_, lean_object* v_prec_1536_){
_start:
{
uint8_t v_x_177__boxed_1537_; lean_object* v_res_1538_; 
v_x_177__boxed_1537_ = lean_unbox(v_x_1535_);
v_res_1538_ = l_Near_Contract_instReprMode_repr(v_x_177__boxed_1537_, v_prec_1536_);
lean_dec(v_prec_1536_);
return v_res_1538_;
}
}
static lean_object* _init_l_Near_Contract_entry___boxed__const__1(void){
_start:
{
uint32_t v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = 0;
v___x_1542_ = lean_box_uint32(v___x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_entry(lean_object* v_action_1543_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = lean_apply_1(v_action_1543_, lean_box(0));
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1553_; 
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1553_ == 0)
{
lean_object* v_unused_1554_; 
v_unused_1554_ = lean_ctor_get(v___x_1545_, 0);
lean_dec(v_unused_1554_);
v___x_1547_ = v___x_1545_;
v_isShared_1548_ = v_isSharedCheck_1553_;
goto v_resetjp_1546_;
}
else
{
lean_dec(v___x_1545_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1553_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; lean_object* v___x_1551_; 
v___x_1549_ = l_Near_Contract_entry___boxed__const__1;
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1549_);
v___x_1551_ = v___x_1547_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1549_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
v_a_1555_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1545_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1545_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_entry___boxed(lean_object* v_action_1563_, lean_object* v_a_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Near_Contract_entry(v_action_1563_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initializer(lean_object* v_name_1566_, lean_object* v_action_1567_){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_1568_, 0, v_action_1567_);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_name_1566_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_view(lean_object* v_name_1570_, lean_object* v_action_1571_){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_1572_, 0, v_action_1571_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v_name_1570_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_update(lean_object* v_name_1574_, lean_object* v_action_1575_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_1576_, 0, v_action_1575_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_name_1574_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized(){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_1581_ = lean_near_storage_has_key(v___x_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Near_Contract_isInitialized();
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object* v_value_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_near_value_return(v_value_1584_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object* v_value_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Near_Contract_returnValue(v_value_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnText(lean_object* v_value_1590_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_near_value_return(v_value_1590_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnText___boxed(lean_object* v_value_1593_, lean_object* v_a_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Near_Contract_returnText(v_value_1593_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnJson(lean_object* v_value_1596_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_near_value_return(v_value_1596_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnJson___boxed(lean_object* v_value_1599_, lean_object* v_a_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Near_Contract_returnJson(v_value_1599_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done(){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = ((lean_object*)(l_Near_Contract_done___closed__0));
v___x_1605_ = lean_near_value_return(v___x_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object* v_a_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Near_Contract_done();
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t v_b_1608_){
_start:
{
if (v_b_1608_ == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
v___x_1611_ = lean_near_value_return(v___x_1610_);
return v___x_1611_;
}
else
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
v___x_1613_ = lean_near_value_return(v___x_1612_);
return v___x_1613_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object* v_b_1614_, lean_object* v_a_1615_){
_start:
{
uint8_t v_b_boxed_1616_; lean_object* v_res_1617_; 
v_b_boxed_1616_ = lean_unbox(v_b_1614_);
v_res_1617_ = l_Near_Contract_returnBool(v_b_boxed_1616_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnU64(uint64_t v_n_1618_){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1620_ = lean_uint64_to_nat(v_n_1618_);
v___x_1621_ = l_Nat_reprFast(v___x_1620_);
v___x_1622_ = lean_near_value_return(v___x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnU64___boxed(lean_object* v_n_1623_, lean_object* v_a_1624_){
_start:
{
uint64_t v_n_boxed_1625_; lean_object* v_res_1626_; 
v_n_boxed_1625_ = lean_unbox_uint64(v_n_1623_);
lean_dec_ref(v_n_1623_);
v_res_1626_ = l_Near_Contract_returnU64(v_n_boxed_1625_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnNat(lean_object* v_n_1627_){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = l_Nat_reprFast(v_n_1627_);
v___x_1630_ = lean_near_value_return(v___x_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnNat___boxed(lean_object* v_n_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Near_Contract_returnNat(v_n_1631_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId(lean_object* v_account_1634_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = lean_near_value_return(v_account_1634_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId___boxed(lean_object* v_account_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Near_Contract_returnAccountId(v_account_1637_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg(lean_object* v_inst_1640_, lean_object* v_value_1641_){
_start:
{
lean_object* v_encode_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_encode_1643_ = lean_ctor_get(v_inst_1640_, 0);
lean_inc_ref(v_encode_1643_);
lean_dec_ref(v_inst_1640_);
v___x_1644_ = lean_apply_1(v_encode_1643_, v_value_1641_);
v___x_1645_ = lean_near_value_return(v___x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg___boxed(lean_object* v_inst_1646_, lean_object* v_value_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Near_Contract_returnEncoded___redArg(v_inst_1646_, v_value_1647_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded(lean_object* v_00_u03b1_1650_, lean_object* v_inst_1651_, lean_object* v_value_1652_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Near_Contract_returnEncoded___redArg(v_inst_1651_, v_value_1652_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___boxed(lean_object* v_00_u03b1_1655_, lean_object* v_inst_1656_, lean_object* v_value_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Near_Contract_returnEncoded(v_00_u03b1_1655_, v_inst_1656_, v_value_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t v_condition_1660_, lean_object* v_msg_1661_){
_start:
{
if (v_condition_1660_ == 0)
{
lean_object* v___x_1663_; 
v___x_1663_ = lean_near_log(v_msg_1661_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1671_; 
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1671_ == 0)
{
lean_object* v_unused_1672_; 
v_unused_1672_ = lean_ctor_get(v___x_1663_, 0);
lean_dec(v_unused_1672_);
v___x_1665_ = v___x_1663_;
v_isShared_1666_ = v_isSharedCheck_1671_;
goto v_resetjp_1664_;
}
else
{
lean_dec(v___x_1663_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1671_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1667_; lean_object* v___x_1669_; 
v___x_1667_ = lean_box(v_condition_1660_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1667_);
v___x_1669_ = v___x_1665_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
v_a_1673_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1663_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1663_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
lean_dec_ref(v_msg_1661_);
v___x_1681_ = lean_box(v_condition_1660_);
v___x_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
return v___x_1682_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object* v_condition_1683_, lean_object* v_msg_1684_, lean_object* v_a_1685_){
_start:
{
uint8_t v_condition_boxed_1686_; lean_object* v_res_1687_; 
v_condition_boxed_1686_ = lean_unbox(v_condition_1683_);
v_res_1687_ = l_Near_Contract_require(v_condition_boxed_1686_, v_msg_1684_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized(){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Near_Contract_isInitialized();
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; lean_object* v___x_1694_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = ((lean_object*)(l_Near_Contract_requireInitialized___closed__0));
v___x_1693_ = lean_unbox(v_a_1691_);
lean_dec(v_a_1691_);
v___x_1694_ = l_Near_Contract_require(v___x_1693_, v___x_1692_);
return v___x_1694_;
}
else
{
return v___x_1690_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized___boxed(lean_object* v_a_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Near_Contract_requireInitialized();
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized(){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Near_Contract_isInitialized();
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; uint8_t v___y_1702_; uint8_t v___x_1705_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1705_ = lean_unbox(v_a_1700_);
lean_dec(v_a_1700_);
if (v___x_1705_ == 0)
{
uint8_t v___x_1706_; 
v___x_1706_ = 1;
v___y_1702_ = v___x_1706_;
goto v___jp_1701_;
}
else
{
uint8_t v___x_1707_; 
v___x_1707_ = 0;
v___y_1702_ = v___x_1707_;
goto v___jp_1701_;
}
v___jp_1701_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = ((lean_object*)(l_Near_Contract_requireNotInitialized___closed__0));
v___x_1704_ = l_Near_Contract_require(v___y_1702_, v___x_1703_);
return v___x_1704_;
}
}
else
{
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized___boxed(lean_object* v_a_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Near_Contract_requireNotInitialized();
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor(lean_object* v_account_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Near_Env_predecessorAccount();
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1722_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1715_ = v___x_1712_;
v_isShared_1716_ = v_isSharedCheck_1722_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1712_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1722_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
uint8_t v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1717_ = lean_string_dec_eq(v_a_1713_, v_account_1710_);
lean_dec(v_a_1713_);
v___x_1718_ = lean_box(v___x_1717_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1718_);
v___x_1720_ = v___x_1715_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
v_a_1723_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1712_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1712_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor___boxed(lean_object* v_account_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Near_Contract_isPredecessor(v_account_1731_);
lean_dec_ref(v_account_1731_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor(lean_object* v_account_1735_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Near_Contract_isPredecessor(v_account_1735_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; lean_object* v___x_1742_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = ((lean_object*)(l_Near_Contract_requirePredecessor___closed__0));
v___x_1740_ = lean_string_append(v___x_1739_, v_account_1735_);
v___x_1741_ = lean_unbox(v_a_1738_);
lean_dec(v_a_1738_);
v___x_1742_ = l_Near_Contract_require(v___x_1741_, v___x_1740_);
return v___x_1742_;
}
else
{
return v___x_1737_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor___boxed(lean_object* v_account_1743_, lean_object* v_a_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Near_Contract_requirePredecessor(v_account_1743_);
lean_dec_ref(v_account_1743_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object* v_value_1746_){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_1749_ = lean_near_storage_write(v___x_1748_, v_value_1746_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object* v_value_1750_, lean_object* v_a_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Near_Contract_initState(v_value_1750_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState(){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_1755_ = lean_near_storage_read(v___x_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Near_Contract_loadState();
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg(lean_object* v_inst_1758_, lean_object* v_value_1759_){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_1762_ = l_Near_Storage_writeAs___redArg(v_inst_1758_, v___x_1761_, v_value_1759_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg___boxed(lean_object* v_inst_1763_, lean_object* v_value_1764_, lean_object* v_a_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Near_Contract_initStateAs___redArg(v_inst_1763_, v_value_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs(lean_object* v_00_u03b1_1767_, lean_object* v_inst_1768_, lean_object* v_value_1769_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_Near_Contract_initStateAs___redArg(v_inst_1768_, v_value_1769_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___boxed(lean_object* v_00_u03b1_1772_, lean_object* v_inst_1773_, lean_object* v_value_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l_Near_Contract_initStateAs(v_00_u03b1_1772_, v_inst_1773_, v_value_1774_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg(lean_object* v_inst_1777_, lean_object* v_value_1778_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Near_Contract_initStateAs___redArg(v_inst_1777_, v_value_1778_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg___boxed(lean_object* v_inst_1781_, lean_object* v_value_1782_, lean_object* v_a_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Near_Contract_saveStateAs___redArg(v_inst_1781_, v_value_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs(lean_object* v_00_u03b1_1785_, lean_object* v_inst_1786_, lean_object* v_value_1787_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Near_Contract_initStateAs___redArg(v_inst_1786_, v_value_1787_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___boxed(lean_object* v_00_u03b1_1790_, lean_object* v_inst_1791_, lean_object* v_value_1792_, lean_object* v_a_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_Near_Contract_saveStateAs(v_00_u03b1_1790_, v_inst_1791_, v_value_1792_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg(lean_object* v_inst_1795_){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_1798_ = l_Near_Storage_readAs_x3f___redArg(v_inst_1795_, v___x_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg___boxed(lean_object* v_inst_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Near_Contract_loadStateAs_x3f___redArg(v_inst_1799_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f(lean_object* v_00_u03b1_1802_, lean_object* v_inst_1803_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Near_Contract_loadStateAs_x3f___redArg(v_inst_1803_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___boxed(lean_object* v_00_u03b1_1806_, lean_object* v_inst_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Near_Contract_loadStateAs_x3f(v_00_u03b1_1806_, v_inst_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg(lean_object* v_inst_1810_, lean_object* v_default_1811_){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_1814_ = l_Near_Storage_readAs___redArg(v_inst_1810_, v___x_1813_, v_default_1811_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg___boxed(lean_object* v_inst_1815_, lean_object* v_default_1816_, lean_object* v_a_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Near_Contract_loadStateAs___redArg(v_inst_1815_, v_default_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs(lean_object* v_00_u03b1_1819_, lean_object* v_inst_1820_, lean_object* v_default_1821_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Near_Contract_loadStateAs___redArg(v_inst_1820_, v_default_1821_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___boxed(lean_object* v_00_u03b1_1824_, lean_object* v_inst_1825_, lean_object* v_default_1826_, lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Near_Contract_loadStateAs(v_00_u03b1_1824_, v_inst_1825_, v_default_1826_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object* v_mapPrefix_1829_){
_start:
{
lean_inc_ref(v_mapPrefix_1829_);
return v_mapPrefix_1829_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object* v_mapPrefix_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Near_StringMap_make(v_mapPrefix_1830_);
lean_dec_ref(v_mapPrefix_1830_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey(lean_object* v_m_1832_, lean_object* v_key_1833_){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1834_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1835_ = lean_string_append(v_m_1832_, v___x_1834_);
v___x_1836_ = lean_string_append(v___x_1835_, v_key_1833_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey___boxed(lean_object* v_m_1837_, lean_object* v_key_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Near_StringMap_storageKey(v_m_1837_, v_key_1838_);
lean_dec_ref(v_key_1838_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get(lean_object* v_m_1840_, lean_object* v_key_1841_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = l_Near_StringMap_storageKey(v_m_1840_, v_key_1841_);
v___x_1844_ = lean_near_storage_read(v___x_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get___boxed(lean_object* v_m_1845_, lean_object* v_key_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Near_StringMap_get(v_m_1845_, v_key_1846_);
lean_dec_ref(v_key_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set(lean_object* v_m_1849_, lean_object* v_key_1850_, lean_object* v_value_1851_){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = l_Near_StringMap_storageKey(v_m_1849_, v_key_1850_);
v___x_1854_ = lean_near_storage_write(v___x_1853_, v_value_1851_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set___boxed(lean_object* v_m_1855_, lean_object* v_key_1856_, lean_object* v_value_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Near_StringMap_set(v_m_1855_, v_key_1856_, v_value_1857_);
lean_dec_ref(v_key_1856_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains(lean_object* v_m_1860_, lean_object* v_key_1861_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = l_Near_StringMap_storageKey(v_m_1860_, v_key_1861_);
v___x_1864_ = lean_near_storage_has_key(v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains___boxed(lean_object* v_m_1865_, lean_object* v_key_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Near_StringMap_contains(v_m_1865_, v_key_1866_);
lean_dec_ref(v_key_1866_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove(lean_object* v_m_1869_, lean_object* v_key_1870_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = l_Near_StringMap_storageKey(v_m_1869_, v_key_1870_);
v___x_1873_ = lean_near_storage_remove(v___x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove___boxed(lean_object* v_m_1874_, lean_object* v_key_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Near_StringMap_remove(v_m_1874_, v_key_1875_);
lean_dec_ref(v_key_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr(lean_object* v_m_1878_, lean_object* v_key_1879_, lean_object* v_default_1880_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_Near_StringMap_get(v_m_1878_, v_key_1879_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1894_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1894_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1894_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
if (lean_obj_tag(v_a_1883_) == 0)
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v_default_1880_);
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_default_1880_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
else
{
lean_object* v_val_1890_; lean_object* v___x_1892_; 
lean_dec_ref(v_default_1880_);
v_val_1890_ = lean_ctor_get(v_a_1883_, 0);
lean_inc(v_val_1890_);
lean_dec_ref_known(v_a_1883_, 1);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v_val_1890_);
v___x_1892_ = v___x_1885_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_val_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec_ref(v_default_1880_);
v_a_1895_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1882_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1882_);
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
LEAN_EXPORT lean_object* l_Near_StringMap_getOr___boxed(lean_object* v_m_1903_, lean_object* v_key_1904_, lean_object* v_default_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Near_StringMap_getOr(v_m_1903_, v_key_1904_, v_default_1905_);
lean_dec_ref(v_key_1904_);
return v_res_1907_;
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
