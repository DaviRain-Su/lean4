// Lean compiler output
// Module: Lean.Evm
// Imports: public import Init.Prelude public import Init.Data.String public import Init.Data.Bool public import Init.Data.UInt public import Init.Data.Nat public import Init.System.IO
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_sqrt(lean_object*);
lean_object* lean_evm_calldataload(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_calldataload___boxed(lean_object*, lean_object*);
lean_object* lean_evm_mstore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_mstore___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_mload(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_mload___boxed(lean_object*, lean_object*);
lean_object* lean_evm_sload(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_sload___boxed(lean_object*, lean_object*);
lean_object* lean_evm_sstore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_sstore___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_caller();
LEAN_EXPORT lean_object* l_Lean_Evm_caller___boxed(lean_object*);
lean_object* lean_evm_callvalue();
LEAN_EXPORT lean_object* l_Lean_Evm_callvalue___boxed(lean_object*);
lean_object* lean_evm_timestamp();
LEAN_EXPORT lean_object* l_Lean_Evm_timestamp___boxed(lean_object*);
lean_object* lean_evm_number();
LEAN_EXPORT lean_object* l_Lean_Evm_number___boxed(lean_object*);
lean_object* lean_evm_selfbalance();
LEAN_EXPORT lean_object* l_Lean_Evm_selfbalance___boxed(lean_object*);
lean_object* lean_evm_return(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_returnMem___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_revert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_revertMem___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_keccak256(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_keccak256___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_log0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_log0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_log1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_log1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_log2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_log2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_call(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_call___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_staticcall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_staticcall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_delegatecall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_delegatecall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_create(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_create___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_create2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_create2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_selfdestruct(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_selfdestruct___boxed(lean_object*, lean_object*);
lean_object* lean_evm_blockhash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_blockhash___boxed(lean_object*, lean_object*);
lean_object* lean_evm_extcodesize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_extcodesize___boxed(lean_object*, lean_object*);
lean_object* lean_evm_extcodehash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_extcodehash___boxed(lean_object*, lean_object*);
lean_object* lean_evm_gas();
LEAN_EXPORT lean_object* l_Lean_Evm_gas___boxed(lean_object*);
lean_object* lean_evm_origin();
LEAN_EXPORT lean_object* l_Lean_Evm_origin___boxed(lean_object*);
lean_object* lean_evm_gasprice();
LEAN_EXPORT lean_object* l_Lean_Evm_gasprice___boxed(lean_object*);
lean_object* lean_evm_coinbase();
LEAN_EXPORT lean_object* l_Lean_Evm_coinbase___boxed(lean_object*);
lean_object* lean_evm_gaslimit();
LEAN_EXPORT lean_object* l_Lean_Evm_gaslimit___boxed(lean_object*);
lean_object* lean_evm_basefee();
LEAN_EXPORT lean_object* l_Lean_Evm_basefee___boxed(lean_object*);
lean_object* lean_evm_chainid();
LEAN_EXPORT lean_object* l_Lean_Evm_chainId___boxed(lean_object*);
lean_object* lean_evm_balance(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_balanceOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_arg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_arg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_revert();
LEAN_EXPORT lean_object* l_Lean_Evm_revert___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_revertWithReason(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_revertWithReason___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Slot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Slot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Load(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Load___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Store(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Store___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gas();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gas___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_origin();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_origin___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gasprice();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gasprice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_coinbase();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_coinbase___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gaslimit();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gaslimit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_basefee();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_basefee___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockHash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balanceOf(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balanceOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_chainId();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_chainId___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codehash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codehash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codesize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codesize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_min(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_min___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_max(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_max___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_absDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_absDiff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_isqrt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_isqrt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_sqrt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_sqrt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_floorDiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_floorDiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_ceilDiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_ceilDiv___boxed(lean_object*, lean_object*);
lean_object* lean_evm_exp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_natPow___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_evm_not(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_bitNot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_require(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Evm_require___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_sha256(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_sha256___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_ecrecover(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_ecrecover___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_methodId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_methodId___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Evm_memcpy___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Evm_memcpy___closed__0;
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_concat64(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_concat64___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_calldataload___boxed(lean_object* v_i_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lean_evm_calldataload(v_i_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_mstore___boxed(lean_object* v_i_9_, lean_object* v_v_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lean_evm_mstore(v_i_9_, v_v_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_mload___boxed(lean_object* v_i_15_, lean_object* v_a_00___x40___internal___hyg_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lean_evm_mload(v_i_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_sload___boxed(lean_object* v_k_20_, lean_object* v_a_00___x40___internal___hyg_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lean_evm_sload(v_k_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_sstore___boxed(lean_object* v_k_26_, lean_object* v_v_27_, lean_object* v_a_00___x40___internal___hyg_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = lean_evm_sstore(v_k_26_, v_v_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_caller___boxed(lean_object* v_a_00___x40___internal___hyg_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lean_evm_caller();
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_callvalue___boxed(lean_object* v_a_00___x40___internal___hyg_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lean_evm_callvalue();
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_timestamp___boxed(lean_object* v_a_00___x40___internal___hyg_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = lean_evm_timestamp();
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_number___boxed(lean_object* v_a_00___x40___internal___hyg_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lean_evm_number();
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_selfbalance___boxed(lean_object* v_a_00___x40___internal___hyg_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = lean_evm_selfbalance();
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnMem___boxed(lean_object* v_offset_48_, lean_object* v_len_49_, lean_object* v_a_00___x40___internal___hyg_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = lean_evm_return(v_offset_48_, v_len_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revertMem___boxed(lean_object* v_offset_55_, lean_object* v_len_56_, lean_object* v_a_00___x40___internal___hyg_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = lean_evm_revert(v_offset_55_, v_len_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_keccak256___boxed(lean_object* v_offset_62_, lean_object* v_len_63_, lean_object* v_a_00___x40___internal___hyg_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = lean_evm_keccak256(v_offset_62_, v_len_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_log0___boxed(lean_object* v_offset_69_, lean_object* v_len_70_, lean_object* v_a_00___x40___internal___hyg_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lean_evm_log0(v_offset_69_, v_len_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_log1___boxed(lean_object* v_topic_77_, lean_object* v_offset_78_, lean_object* v_len_79_, lean_object* v_a_00___x40___internal___hyg_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lean_evm_log1(v_topic_77_, v_offset_78_, v_len_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_log2___boxed(lean_object* v_t1_87_, lean_object* v_t2_88_, lean_object* v_offset_89_, lean_object* v_len_90_, lean_object* v_a_00___x40___internal___hyg_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = lean_evm_log2(v_t1_87_, v_t2_88_, v_offset_89_, v_len_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_call___boxed(lean_object* v_gas_101_, lean_object* v_to_102_, lean_object* v_value_103_, lean_object* v_ioOffset_104_, lean_object* v_ioLen_105_, lean_object* v_outOffset_106_, lean_object* v_outLen_107_, lean_object* v_a_00___x40___internal___hyg_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = lean_evm_call(v_gas_101_, v_to_102_, v_value_103_, v_ioOffset_104_, v_ioLen_105_, v_outOffset_106_, v_outLen_107_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_staticcall___boxed(lean_object* v_gas_117_, lean_object* v_to_118_, lean_object* v_ioOffset_119_, lean_object* v_ioLen_120_, lean_object* v_outOffset_121_, lean_object* v_outLen_122_, lean_object* v_a_00___x40___internal___hyg_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lean_evm_staticcall(v_gas_117_, v_to_118_, v_ioOffset_119_, v_ioLen_120_, v_outOffset_121_, v_outLen_122_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_delegatecall___boxed(lean_object* v_gas_132_, lean_object* v_to_133_, lean_object* v_ioOffset_134_, lean_object* v_ioLen_135_, lean_object* v_outOffset_136_, lean_object* v_outLen_137_, lean_object* v_a_00___x40___internal___hyg_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lean_evm_delegatecall(v_gas_132_, v_to_133_, v_ioOffset_134_, v_ioLen_135_, v_outOffset_136_, v_outLen_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_create___boxed(lean_object* v_value_144_, lean_object* v_offset_145_, lean_object* v_len_146_, lean_object* v_a_00___x40___internal___hyg_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = lean_evm_create(v_value_144_, v_offset_145_, v_len_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_create2___boxed(lean_object* v_value_154_, lean_object* v_offset_155_, lean_object* v_len_156_, lean_object* v_salt_157_, lean_object* v_a_00___x40___internal___hyg_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = lean_evm_create2(v_value_154_, v_offset_155_, v_len_156_, v_salt_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_selfdestruct___boxed(lean_object* v_beneficiary_162_, lean_object* v_a_00___x40___internal___hyg_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = lean_evm_selfdestruct(v_beneficiary_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_blockhash___boxed(lean_object* v_blockNumber_167_, lean_object* v_a_00___x40___internal___hyg_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lean_evm_blockhash(v_blockNumber_167_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_extcodesize___boxed(lean_object* v_addr_172_, lean_object* v_a_00___x40___internal___hyg_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = lean_evm_extcodesize(v_addr_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_extcodehash___boxed(lean_object* v_addr_177_, lean_object* v_a_00___x40___internal___hyg_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = lean_evm_extcodehash(v_addr_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_gas___boxed(lean_object* v_a_00___x40___internal___hyg_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = lean_evm_gas();
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_origin___boxed(lean_object* v_a_00___x40___internal___hyg_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lean_evm_origin();
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_gasprice___boxed(lean_object* v_a_00___x40___internal___hyg_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = lean_evm_gasprice();
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_coinbase___boxed(lean_object* v_a_00___x40___internal___hyg_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = lean_evm_coinbase();
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_gaslimit___boxed(lean_object* v_a_00___x40___internal___hyg_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = lean_evm_gaslimit();
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_basefee___boxed(lean_object* v_a_00___x40___internal___hyg_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = lean_evm_basefee();
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_chainId___boxed(lean_object* v_a_00___x40___internal___hyg_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = lean_evm_chainid();
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_balanceOf___boxed(lean_object* v_addr_203_, lean_object* v_a_00___x40___internal___hyg_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = lean_evm_balance(v_addr_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_arg(lean_object* v_i_206_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_208_ = lean_unsigned_to_nat(4u);
v___x_209_ = lean_unsigned_to_nat(32u);
v___x_210_ = lean_nat_mul(v_i_206_, v___x_209_);
v___x_211_ = lean_nat_add(v___x_208_, v___x_210_);
lean_dec(v___x_210_);
v___x_212_ = lean_evm_calldataload(v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_arg___boxed(lean_object* v_i_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Evm_arg(v_i_213_);
lean_dec(v_i_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256(lean_object* v_v_216_){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_evm_mstore(v___x_218_, v_v_216_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec_ref_known(v___x_219_, 1);
v___x_220_ = lean_unsigned_to_nat(32u);
v___x_221_ = lean_evm_return(v___x_218_, v___x_220_);
return v___x_221_;
}
else
{
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256___boxed(lean_object* v_v_222_, lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_Evm_returnU256(v_v_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revert(){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(0u);
v___x_227_ = lean_evm_revert(v___x_226_, v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revert___boxed(lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Evm_revert();
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revertWithReason(lean_object* v_reasonLen_230_){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_unsigned_to_nat(147846272u);
v___x_234_ = lean_evm_mstore(v___x_232_, v___x_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec_ref_known(v___x_234_, 1);
v___x_235_ = lean_unsigned_to_nat(4u);
v___x_236_ = lean_unsigned_to_nat(32u);
v___x_237_ = lean_evm_mstore(v___x_235_, v___x_236_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec_ref_known(v___x_237_, 1);
v___x_238_ = lean_unsigned_to_nat(36u);
lean_inc(v_reasonLen_230_);
v___x_239_ = lean_evm_mstore(v___x_238_, v_reasonLen_230_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec_ref_known(v___x_239_, 1);
v___x_240_ = lean_unsigned_to_nat(68u);
v___x_241_ = lean_unsigned_to_nat(31u);
v___x_242_ = lean_nat_add(v_reasonLen_230_, v___x_241_);
lean_dec(v_reasonLen_230_);
v___x_243_ = lean_unsigned_to_nat(5u);
v___x_244_ = lean_nat_shiftr(v___x_242_, v___x_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_nat_mul(v___x_244_, v___x_236_);
lean_dec(v___x_244_);
v___x_246_ = lean_nat_add(v___x_240_, v___x_245_);
lean_dec(v___x_245_);
v___x_247_ = lean_evm_revert(v___x_232_, v___x_246_);
return v___x_247_;
}
else
{
lean_dec(v_reasonLen_230_);
return v___x_239_;
}
}
else
{
lean_dec(v_reasonLen_230_);
return v___x_237_;
}
}
else
{
lean_dec(v_reasonLen_230_);
return v___x_234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revertWithReason___boxed(lean_object* v_reasonLen_248_, lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_Evm_revertWithReason(v_reasonLen_248_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load(lean_object* v_k_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_evm_sload(v_k_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load___boxed(lean_object* v_k_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Evm_Storage_load(v_k_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store(lean_object* v_k_257_, lean_object* v_v_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_evm_sstore(v_k_257_, v_v_258_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store___boxed(lean_object* v_k_261_, lean_object* v_v_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Evm_Storage_store(v_k_261_, v_v_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot(lean_object* v_slot_265_, lean_object* v_key_266_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = lean_evm_mstore(v___x_268_, v_key_266_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec_ref_known(v___x_269_, 1);
v___x_270_ = lean_unsigned_to_nat(32u);
v___x_271_ = lean_evm_mstore(v___x_270_, v_slot_265_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_dec_ref_known(v___x_271_, 1);
v___x_272_ = lean_unsigned_to_nat(64u);
v___x_273_ = lean_evm_keccak256(v___x_268_, v___x_272_);
return v___x_273_;
}
else
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v_a_274_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_271_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_271_);
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
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
lean_dec(v_slot_265_);
v_a_282_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_269_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_269_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot___boxed(lean_object* v_slot_290_, lean_object* v_key_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_Evm_Storage_mapSlot(v_slot_290_, v_key_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad(lean_object* v_slot_294_, lean_object* v_key_295_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(0u);
v___x_298_ = lean_evm_mstore(v___x_297_, v_key_295_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec_ref_known(v___x_298_, 1);
v___x_299_ = lean_unsigned_to_nat(32u);
v___x_300_ = lean_evm_mstore(v___x_299_, v_slot_294_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec_ref_known(v___x_300_, 1);
v___x_301_ = lean_unsigned_to_nat(64u);
v___x_302_ = lean_evm_keccak256(v___x_297_, v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_304_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_303_);
lean_dec_ref_known(v___x_302_, 1);
v___x_304_ = lean_evm_sload(v_a_303_);
return v___x_304_;
}
else
{
return v___x_302_;
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
v_a_305_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_300_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_300_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v_slot_294_);
v_a_313_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_298_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_298_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad___boxed(lean_object* v_slot_321_, lean_object* v_key_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Evm_Storage_mapLoad(v_slot_321_, v_key_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore(lean_object* v_slot_325_, lean_object* v_key_326_, lean_object* v_val_327_){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = lean_evm_mstore(v___x_329_, v_key_326_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v___x_331_; lean_object* v___x_332_; 
lean_dec_ref_known(v___x_330_, 1);
v___x_331_ = lean_unsigned_to_nat(32u);
v___x_332_ = lean_evm_mstore(v___x_331_, v_slot_325_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec_ref_known(v___x_332_, 1);
v___x_333_ = lean_unsigned_to_nat(64u);
v___x_334_ = lean_evm_keccak256(v___x_329_, v___x_333_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
v___x_336_ = lean_evm_sstore(v_a_335_, v_val_327_);
return v___x_336_;
}
else
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_dec(v_val_327_);
v_a_337_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_334_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_334_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
else
{
lean_dec(v_val_327_);
return v___x_332_;
}
}
else
{
lean_dec(v_val_327_);
lean_dec(v_slot_325_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore___boxed(lean_object* v_slot_345_, lean_object* v_key_346_, lean_object* v_val_347_, lean_object* v_a_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_Evm_Storage_mapStore(v_slot_345_, v_key_346_, v_val_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Slot(lean_object* v_slot_350_, lean_object* v_outerKey_351_, lean_object* v_innerKey_352_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_evm_mstore(v___x_354_, v_innerKey_352_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec_ref_known(v___x_355_, 1);
v___x_356_ = lean_unsigned_to_nat(32u);
v___x_357_ = lean_evm_mstore(v___x_356_, v_outerKey_351_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_dec_ref_known(v___x_357_, 1);
v___x_358_ = lean_unsigned_to_nat(64u);
v___x_359_ = lean_evm_keccak256(v___x_354_, v___x_358_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_361_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_359_, 1);
v___x_361_ = lean_evm_mstore(v___x_354_, v_a_360_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v___x_362_; 
lean_dec_ref_known(v___x_361_, 1);
v___x_362_ = lean_evm_mstore(v___x_356_, v_slot_350_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v___x_363_; 
lean_dec_ref_known(v___x_362_, 1);
v___x_363_ = lean_evm_keccak256(v___x_354_, v___x_358_);
return v___x_363_;
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v_a_364_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_362_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_362_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_slot_350_);
v_a_372_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_361_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_361_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
else
{
lean_dec(v_slot_350_);
return v___x_359_;
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec(v_slot_350_);
v_a_380_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_357_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_357_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
lean_dec(v_outerKey_351_);
lean_dec(v_slot_350_);
v_a_388_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_355_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_355_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Slot___boxed(lean_object* v_slot_396_, lean_object* v_outerKey_397_, lean_object* v_innerKey_398_, lean_object* v_a_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Evm_Storage_map2Slot(v_slot_396_, v_outerKey_397_, v_innerKey_398_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Load(lean_object* v_slot_401_, lean_object* v_k1_402_, lean_object* v_k2_403_){
_start:
{
lean_object* v___y_406_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_unsigned_to_nat(0u);
v___x_410_ = lean_evm_mstore(v___x_409_, v_k2_403_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
lean_dec_ref_known(v___x_410_, 1);
v___x_411_ = lean_unsigned_to_nat(32u);
v___x_412_ = lean_evm_mstore(v___x_411_, v_k1_402_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; 
lean_dec_ref_known(v___x_412_, 1);
v___x_413_ = lean_unsigned_to_nat(64u);
v___x_414_ = lean_evm_keccak256(v___x_409_, v___x_413_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_416_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_414_, 1);
v___x_416_ = lean_evm_mstore(v___x_409_, v_a_415_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v___x_417_; 
lean_dec_ref_known(v___x_416_, 1);
v___x_417_ = lean_evm_mstore(v___x_411_, v_slot_401_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v___x_418_; 
lean_dec_ref_known(v___x_417_, 1);
v___x_418_ = lean_evm_keccak256(v___x_409_, v___x_413_);
v___y_406_ = v___x_418_;
goto v___jp_405_;
}
else
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
v_a_419_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_417_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_417_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec(v_slot_401_);
v_a_427_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_416_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_416_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
else
{
lean_dec(v_slot_401_);
v___y_406_ = v___x_414_;
goto v___jp_405_;
}
}
else
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
lean_dec(v_slot_401_);
v_a_435_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_412_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_412_);
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
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_435_);
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
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec(v_k1_402_);
lean_dec(v_slot_401_);
v_a_443_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_410_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_410_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
v___jp_405_:
{
if (lean_obj_tag(v___y_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_408_; 
v_a_407_ = lean_ctor_get(v___y_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___y_406_, 1);
v___x_408_ = lean_evm_sload(v_a_407_);
return v___x_408_;
}
else
{
return v___y_406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Load___boxed(lean_object* v_slot_451_, lean_object* v_k1_452_, lean_object* v_k2_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_Evm_Storage_map2Load(v_slot_451_, v_k1_452_, v_k2_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Store(lean_object* v_slot_456_, lean_object* v_k1_457_, lean_object* v_k2_458_, lean_object* v_val_459_){
_start:
{
lean_object* v___y_462_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = lean_evm_mstore(v___x_473_, v_k2_458_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec_ref_known(v___x_474_, 1);
v___x_475_ = lean_unsigned_to_nat(32u);
v___x_476_ = lean_evm_mstore(v___x_475_, v_k1_457_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec_ref_known(v___x_476_, 1);
v___x_477_ = lean_unsigned_to_nat(64u);
v___x_478_ = lean_evm_keccak256(v___x_473_, v___x_477_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_480_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
v___x_480_ = lean_evm_mstore(v___x_473_, v_a_479_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v___x_481_; 
lean_dec_ref_known(v___x_480_, 1);
v___x_481_ = lean_evm_mstore(v___x_475_, v_slot_456_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v___x_482_; 
lean_dec_ref_known(v___x_481_, 1);
v___x_482_ = lean_evm_keccak256(v___x_473_, v___x_477_);
v___y_462_ = v___x_482_;
goto v___jp_461_;
}
else
{
lean_dec(v_val_459_);
return v___x_481_;
}
}
else
{
lean_dec(v_val_459_);
lean_dec(v_slot_456_);
return v___x_480_;
}
}
else
{
lean_dec(v_slot_456_);
v___y_462_ = v___x_478_;
goto v___jp_461_;
}
}
else
{
lean_dec(v_val_459_);
lean_dec(v_slot_456_);
return v___x_476_;
}
}
else
{
lean_dec(v_val_459_);
lean_dec(v_k1_457_);
lean_dec(v_slot_456_);
return v___x_474_;
}
v___jp_461_:
{
if (lean_obj_tag(v___y_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_464_; 
v_a_463_ = lean_ctor_get(v___y_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___y_462_, 1);
v___x_464_ = lean_evm_sstore(v_a_463_, v_val_459_);
return v___x_464_;
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_val_459_);
v_a_465_ = lean_ctor_get(v___y_462_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___y_462_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___y_462_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___y_462_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Store___boxed(lean_object* v_slot_483_, lean_object* v_k1_484_, lean_object* v_k2_485_, lean_object* v_val_486_, lean_object* v_a_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_Evm_Storage_map2Store(v_slot_483_, v_k1_484_, v_k2_485_, v_val_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___redArg(lean_object* v_n_489_){
_start:
{
lean_inc(v_n_489_);
return v_n_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___redArg___boxed(lean_object* v_n_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_Evm_Storage_Var_ofSlot___redArg(v_n_490_);
lean_dec(v_n_490_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot(lean_object* v_00_u03b1_492_, lean_object* v_n_493_){
_start:
{
lean_inc(v_n_493_);
return v_n_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___boxed(lean_object* v_00_u03b1_494_, lean_object* v_n_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_Evm_Storage_Var_ofSlot(v_00_u03b1_494_, v_n_495_);
lean_dec(v_n_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___redArg(lean_object* v_v_497_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = lean_evm_sload(v_v_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___redArg___boxed(lean_object* v_v_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Evm_Storage_Var_read___redArg(v_v_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read(lean_object* v_00_u03b1_503_, lean_object* v_v_504_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = lean_evm_sload(v_v_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___boxed(lean_object* v_00_u03b1_507_, lean_object* v_v_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Evm_Storage_Var_read(v_00_u03b1_507_, v_v_508_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___redArg(lean_object* v_v_511_, lean_object* v_val_512_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = lean_evm_sstore(v_v_511_, v_val_512_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___redArg___boxed(lean_object* v_v_515_, lean_object* v_val_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_Evm_Storage_Var_write___redArg(v_v_515_, v_val_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write(lean_object* v_00_u03b1_519_, lean_object* v_v_520_, lean_object* v_val_521_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = lean_evm_sstore(v_v_520_, v_val_521_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___boxed(lean_object* v_00_u03b1_524_, lean_object* v_v_525_, lean_object* v_val_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_Evm_Storage_Var_write(v_00_u03b1_524_, v_v_525_, v_val_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___redArg(lean_object* v_n_529_){
_start:
{
lean_inc(v_n_529_);
return v_n_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___redArg___boxed(lean_object* v_n_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Evm_Storage_Map_ofSlot___redArg(v_n_530_);
lean_dec(v_n_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot(lean_object* v_00_u03b1_532_, lean_object* v_n_533_){
_start:
{
lean_inc(v_n_533_);
return v_n_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___boxed(lean_object* v_00_u03b1_534_, lean_object* v_n_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lean_Evm_Storage_Map_ofSlot(v_00_u03b1_534_, v_n_535_);
lean_dec(v_n_535_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___redArg(lean_object* v_m_537_, lean_object* v_key_538_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = lean_evm_mstore(v___x_540_, v_key_538_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec_ref_known(v___x_541_, 1);
v___x_542_ = lean_unsigned_to_nat(32u);
v___x_543_ = lean_evm_mstore(v___x_542_, v_m_537_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v___x_544_; lean_object* v___x_545_; 
lean_dec_ref_known(v___x_543_, 1);
v___x_544_ = lean_unsigned_to_nat(64u);
v___x_545_ = lean_evm_keccak256(v___x_540_, v___x_544_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_547_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_545_, 1);
v___x_547_ = lean_evm_sload(v_a_546_);
return v___x_547_;
}
else
{
return v___x_545_;
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
v_a_548_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_543_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_543_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec(v_m_537_);
v_a_556_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_541_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_541_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___redArg___boxed(lean_object* v_m_564_, lean_object* v_key_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Evm_Storage_Map_get___redArg(v_m_564_, v_key_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get(lean_object* v_00_u03b1_568_, lean_object* v_m_569_, lean_object* v_key_570_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_evm_mstore(v___x_572_, v_key_570_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec_ref_known(v___x_573_, 1);
v___x_574_ = lean_unsigned_to_nat(32u);
v___x_575_ = lean_evm_mstore(v___x_574_, v_m_569_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec_ref_known(v___x_575_, 1);
v___x_576_ = lean_unsigned_to_nat(64u);
v___x_577_ = lean_evm_keccak256(v___x_572_, v___x_576_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = lean_evm_sload(v_a_578_);
return v___x_579_;
}
else
{
return v___x_577_;
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
v_a_580_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_575_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_575_);
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
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
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
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
lean_dec(v_m_569_);
v_a_588_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_573_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_573_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___boxed(lean_object* v_00_u03b1_596_, lean_object* v_m_597_, lean_object* v_key_598_, lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Evm_Storage_Map_get(v_00_u03b1_596_, v_m_597_, v_key_598_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___redArg(lean_object* v_m_601_, lean_object* v_key_602_, lean_object* v_val_603_){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_evm_mstore(v___x_605_, v_key_602_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec_ref_known(v___x_606_, 1);
v___x_607_ = lean_unsigned_to_nat(32u);
v___x_608_ = lean_evm_mstore(v___x_607_, v_m_601_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; 
lean_dec_ref_known(v___x_608_, 1);
v___x_609_ = lean_unsigned_to_nat(64u);
v___x_610_ = lean_evm_keccak256(v___x_605_, v___x_609_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_612_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___x_610_, 1);
v___x_612_ = lean_evm_sstore(v_a_611_, v_val_603_);
return v___x_612_;
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v_val_603_);
v_a_613_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_610_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_610_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_dec(v_val_603_);
return v___x_608_;
}
}
else
{
lean_dec(v_val_603_);
lean_dec(v_m_601_);
return v___x_606_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___redArg___boxed(lean_object* v_m_621_, lean_object* v_key_622_, lean_object* v_val_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_Evm_Storage_Map_set___redArg(v_m_621_, v_key_622_, v_val_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set(lean_object* v_00_u03b1_626_, lean_object* v_m_627_, lean_object* v_key_628_, lean_object* v_val_629_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_unsigned_to_nat(0u);
v___x_632_ = lean_evm_mstore(v___x_631_, v_key_628_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_dec_ref_known(v___x_632_, 1);
v___x_633_ = lean_unsigned_to_nat(32u);
v___x_634_ = lean_evm_mstore(v___x_633_, v_m_627_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; 
lean_dec_ref_known(v___x_634_, 1);
v___x_635_ = lean_unsigned_to_nat(64u);
v___x_636_ = lean_evm_keccak256(v___x_631_, v___x_635_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_638_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_a_637_);
lean_dec_ref_known(v___x_636_, 1);
v___x_638_ = lean_evm_sstore(v_a_637_, v_val_629_);
return v___x_638_;
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec(v_val_629_);
v_a_639_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_636_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_636_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
else
{
lean_dec(v_val_629_);
return v___x_634_;
}
}
else
{
lean_dec(v_val_629_);
lean_dec(v_m_627_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___boxed(lean_object* v_00_u03b1_647_, lean_object* v_m_648_, lean_object* v_key_649_, lean_object* v_val_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Evm_Storage_Map_set(v_00_u03b1_647_, v_m_648_, v_key_649_, v_val_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___redArg(lean_object* v_m_653_, lean_object* v_key_654_, lean_object* v_f_655_){
_start:
{
lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_677_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_unsigned_to_nat(0u);
lean_inc(v_key_654_);
v___x_689_ = lean_evm_mstore(v___x_688_, v_key_654_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec_ref_known(v___x_689_, 1);
v___x_690_ = lean_unsigned_to_nat(32u);
lean_inc(v_m_653_);
v___x_691_ = lean_evm_mstore(v___x_690_, v_m_653_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; 
lean_dec_ref_known(v___x_691_, 1);
v___x_692_ = lean_unsigned_to_nat(64u);
v___x_693_ = lean_evm_keccak256(v___x_688_, v___x_692_);
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_695_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v___x_693_, 1);
v___x_695_ = lean_evm_sload(v_a_694_);
v___y_677_ = v___x_695_;
goto v___jp_676_;
}
else
{
v___y_677_ = v___x_693_;
goto v___jp_676_;
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v_f_655_);
lean_dec(v_key_654_);
lean_dec(v_m_653_);
v_a_696_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_691_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_691_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec_ref(v_f_655_);
lean_dec(v_key_654_);
lean_dec(v_m_653_);
v_a_704_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_689_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_689_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
v___jp_657_:
{
if (lean_obj_tag(v___y_659_) == 0)
{
lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
v_isSharedCheck_666_ = !lean_is_exclusive(v___y_659_);
if (v_isSharedCheck_666_ == 0)
{
lean_object* v_unused_667_; 
v_unused_667_ = lean_ctor_get(v___y_659_, 0);
lean_dec(v_unused_667_);
v___x_661_ = v___y_659_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_dec(v___y_659_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___y_658_);
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v___y_658_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v___y_658_);
v_a_668_ = lean_ctor_get(v___y_659_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___y_659_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___y_659_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___y_659_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
v___jp_676_:
{
if (lean_obj_tag(v___y_677_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v_a_678_ = lean_ctor_get(v___y_677_, 0);
lean_inc(v_a_678_);
lean_dec_ref_known(v___y_677_, 1);
v___x_679_ = lean_apply_1(v_f_655_, v_a_678_);
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_evm_mstore(v___x_680_, v_key_654_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; 
lean_dec_ref_known(v___x_681_, 1);
v___x_682_ = lean_unsigned_to_nat(32u);
v___x_683_ = lean_evm_mstore(v___x_682_, v_m_653_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; 
lean_dec_ref_known(v___x_683_, 1);
v___x_684_ = lean_unsigned_to_nat(64u);
v___x_685_ = lean_evm_keccak256(v___x_680_, v___x_684_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_687_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_685_, 1);
lean_inc(v___x_679_);
v___x_687_ = lean_evm_sstore(v_a_686_, v___x_679_);
v___y_658_ = v___x_679_;
v___y_659_ = v___x_687_;
goto v___jp_657_;
}
else
{
lean_dec(v___x_679_);
return v___x_685_;
}
}
else
{
v___y_658_ = v___x_679_;
v___y_659_ = v___x_683_;
goto v___jp_657_;
}
}
else
{
lean_dec(v_m_653_);
v___y_658_ = v___x_679_;
v___y_659_ = v___x_681_;
goto v___jp_657_;
}
}
else
{
lean_dec_ref(v_f_655_);
lean_dec(v_key_654_);
lean_dec(v_m_653_);
return v___y_677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___redArg___boxed(lean_object* v_m_712_, lean_object* v_key_713_, lean_object* v_f_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Evm_Storage_Map_modify___redArg(v_m_712_, v_key_713_, v_f_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify(lean_object* v_00_u03b1_717_, lean_object* v_m_718_, lean_object* v_key_719_, lean_object* v_f_720_){
_start:
{
lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_742_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_unsigned_to_nat(0u);
lean_inc(v_key_719_);
v___x_754_ = lean_evm_mstore(v___x_753_, v_key_719_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v___x_755_; lean_object* v___x_756_; 
lean_dec_ref_known(v___x_754_, 1);
v___x_755_ = lean_unsigned_to_nat(32u);
lean_inc(v_m_718_);
v___x_756_ = lean_evm_mstore(v___x_755_, v_m_718_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v___x_757_; lean_object* v___x_758_; 
lean_dec_ref_known(v___x_756_, 1);
v___x_757_ = lean_unsigned_to_nat(64u);
v___x_758_ = lean_evm_keccak256(v___x_753_, v___x_757_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = lean_evm_sload(v_a_759_);
v___y_742_ = v___x_760_;
goto v___jp_741_;
}
else
{
v___y_742_ = v___x_758_;
goto v___jp_741_;
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec_ref(v_f_720_);
lean_dec(v_key_719_);
lean_dec(v_m_718_);
v_a_761_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_756_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_756_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v_f_720_);
lean_dec(v_key_719_);
lean_dec(v_m_718_);
v_a_769_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_754_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_754_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
v___jp_722_:
{
if (lean_obj_tag(v___y_724_) == 0)
{
lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
v_isSharedCheck_731_ = !lean_is_exclusive(v___y_724_);
if (v_isSharedCheck_731_ == 0)
{
lean_object* v_unused_732_; 
v_unused_732_ = lean_ctor_get(v___y_724_, 0);
lean_dec(v_unused_732_);
v___x_726_ = v___y_724_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_dec(v___y_724_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___y_723_);
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___y_723_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec(v___y_723_);
v_a_733_ = lean_ctor_get(v___y_724_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___y_724_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___y_724_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___y_724_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
v___jp_741_:
{
if (lean_obj_tag(v___y_742_) == 0)
{
lean_object* v_a_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_a_743_ = lean_ctor_get(v___y_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___y_742_, 1);
v___x_744_ = lean_apply_1(v_f_720_, v_a_743_);
v___x_745_ = lean_unsigned_to_nat(0u);
v___x_746_ = lean_evm_mstore(v___x_745_, v_key_719_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; 
lean_dec_ref_known(v___x_746_, 1);
v___x_747_ = lean_unsigned_to_nat(32u);
v___x_748_ = lean_evm_mstore(v___x_747_, v_m_718_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec_ref_known(v___x_748_, 1);
v___x_749_ = lean_unsigned_to_nat(64u);
v___x_750_ = lean_evm_keccak256(v___x_745_, v___x_749_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_750_, 1);
lean_inc(v___x_744_);
v___x_752_ = lean_evm_sstore(v_a_751_, v___x_744_);
v___y_723_ = v___x_744_;
v___y_724_ = v___x_752_;
goto v___jp_722_;
}
else
{
lean_dec(v___x_744_);
return v___x_750_;
}
}
else
{
v___y_723_ = v___x_744_;
v___y_724_ = v___x_748_;
goto v___jp_722_;
}
}
else
{
lean_dec(v_m_718_);
v___y_723_ = v___x_744_;
v___y_724_ = v___x_746_;
goto v___jp_722_;
}
}
else
{
lean_dec_ref(v_f_720_);
lean_dec(v_key_719_);
lean_dec(v_m_718_);
return v___y_742_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___boxed(lean_object* v_00_u03b1_777_, lean_object* v_m_778_, lean_object* v_key_779_, lean_object* v_f_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_Evm_Storage_Map_modify(v_00_u03b1_777_, v_m_778_, v_key_779_, v_f_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___redArg(lean_object* v_n_783_){
_start:
{
lean_inc(v_n_783_);
return v_n_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___redArg___boxed(lean_object* v_n_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_Evm_Storage_Map2_ofSlot___redArg(v_n_784_);
lean_dec(v_n_784_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot(lean_object* v_00_u03b1_786_, lean_object* v_n_787_){
_start:
{
lean_inc(v_n_787_);
return v_n_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___boxed(lean_object* v_00_u03b1_788_, lean_object* v_n_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_Evm_Storage_Map2_ofSlot(v_00_u03b1_788_, v_n_789_);
lean_dec(v_n_789_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___redArg(lean_object* v_m_791_, lean_object* v_k1_792_, lean_object* v_k2_793_){
_start:
{
lean_object* v___y_796_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_unsigned_to_nat(0u);
v___x_800_ = lean_evm_mstore(v___x_799_, v_k2_793_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec_ref_known(v___x_800_, 1);
v___x_801_ = lean_unsigned_to_nat(32u);
v___x_802_ = lean_evm_mstore(v___x_801_, v_k1_792_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec_ref_known(v___x_802_, 1);
v___x_803_ = lean_unsigned_to_nat(64u);
v___x_804_ = lean_evm_keccak256(v___x_799_, v___x_803_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_806_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_804_, 1);
v___x_806_ = lean_evm_mstore(v___x_799_, v_a_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v___x_807_; 
lean_dec_ref_known(v___x_806_, 1);
v___x_807_ = lean_evm_mstore(v___x_801_, v_m_791_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v___x_808_; 
lean_dec_ref_known(v___x_807_, 1);
v___x_808_ = lean_evm_keccak256(v___x_799_, v___x_803_);
v___y_796_ = v___x_808_;
goto v___jp_795_;
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
v_a_809_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_807_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_807_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
else
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_824_; 
lean_dec(v_m_791_);
v_a_817_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_824_ == 0)
{
v___x_819_ = v___x_806_;
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_806_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_817_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
else
{
lean_dec(v_m_791_);
v___y_796_ = v___x_804_;
goto v___jp_795_;
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
lean_dec(v_m_791_);
v_a_825_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_832_ == 0)
{
v___x_827_ = v___x_802_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_802_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_k1_792_);
lean_dec(v_m_791_);
v_a_833_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_800_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_800_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
v___jp_795_:
{
if (lean_obj_tag(v___y_796_) == 0)
{
lean_object* v_a_797_; lean_object* v___x_798_; 
v_a_797_ = lean_ctor_get(v___y_796_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___y_796_, 1);
v___x_798_ = lean_evm_sload(v_a_797_);
return v___x_798_;
}
else
{
return v___y_796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___redArg___boxed(lean_object* v_m_841_, lean_object* v_k1_842_, lean_object* v_k2_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_Evm_Storage_Map2_get___redArg(v_m_841_, v_k1_842_, v_k2_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get(lean_object* v_00_u03b1_846_, lean_object* v_m_847_, lean_object* v_k1_848_, lean_object* v_k2_849_){
_start:
{
lean_object* v___y_852_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = lean_evm_mstore(v___x_855_, v_k2_849_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v___x_857_; lean_object* v___x_858_; 
lean_dec_ref_known(v___x_856_, 1);
v___x_857_ = lean_unsigned_to_nat(32u);
v___x_858_ = lean_evm_mstore(v___x_857_, v_k1_848_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v___x_859_; lean_object* v___x_860_; 
lean_dec_ref_known(v___x_858_, 1);
v___x_859_ = lean_unsigned_to_nat(64u);
v___x_860_ = lean_evm_keccak256(v___x_855_, v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = lean_evm_mstore(v___x_855_, v_a_861_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v___x_863_; 
lean_dec_ref_known(v___x_862_, 1);
v___x_863_ = lean_evm_mstore(v___x_857_, v_m_847_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_864_; 
lean_dec_ref_known(v___x_863_, 1);
v___x_864_ = lean_evm_keccak256(v___x_855_, v___x_859_);
v___y_852_ = v___x_864_;
goto v___jp_851_;
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
v_a_865_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_863_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_863_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
lean_dec(v_m_847_);
v_a_873_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_862_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_862_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
else
{
lean_dec(v_m_847_);
v___y_852_ = v___x_860_;
goto v___jp_851_;
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec(v_m_847_);
v_a_881_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_858_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_858_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec(v_k1_848_);
lean_dec(v_m_847_);
v_a_889_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_856_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_856_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
v___jp_851_:
{
if (lean_obj_tag(v___y_852_) == 0)
{
lean_object* v_a_853_; lean_object* v___x_854_; 
v_a_853_ = lean_ctor_get(v___y_852_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___y_852_, 1);
v___x_854_ = lean_evm_sload(v_a_853_);
return v___x_854_;
}
else
{
return v___y_852_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___boxed(lean_object* v_00_u03b1_897_, lean_object* v_m_898_, lean_object* v_k1_899_, lean_object* v_k2_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lean_Evm_Storage_Map2_get(v_00_u03b1_897_, v_m_898_, v_k1_899_, v_k2_900_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___redArg(lean_object* v_m_903_, lean_object* v_k1_904_, lean_object* v_k2_905_, lean_object* v_val_906_){
_start:
{
lean_object* v___y_909_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = lean_evm_mstore(v___x_920_, v_k2_905_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec_ref_known(v___x_921_, 1);
v___x_922_ = lean_unsigned_to_nat(32u);
v___x_923_ = lean_evm_mstore(v___x_922_, v_k1_904_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec_ref_known(v___x_923_, 1);
v___x_924_ = lean_unsigned_to_nat(64u);
v___x_925_ = lean_evm_keccak256(v___x_920_, v___x_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v___x_927_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_925_, 1);
v___x_927_ = lean_evm_mstore(v___x_920_, v_a_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v___x_928_; 
lean_dec_ref_known(v___x_927_, 1);
v___x_928_ = lean_evm_mstore(v___x_922_, v_m_903_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v___x_929_; 
lean_dec_ref_known(v___x_928_, 1);
v___x_929_ = lean_evm_keccak256(v___x_920_, v___x_924_);
v___y_909_ = v___x_929_;
goto v___jp_908_;
}
else
{
lean_dec(v_val_906_);
return v___x_928_;
}
}
else
{
lean_dec(v_val_906_);
lean_dec(v_m_903_);
return v___x_927_;
}
}
else
{
lean_dec(v_m_903_);
v___y_909_ = v___x_925_;
goto v___jp_908_;
}
}
else
{
lean_dec(v_val_906_);
lean_dec(v_m_903_);
return v___x_923_;
}
}
else
{
lean_dec(v_val_906_);
lean_dec(v_k1_904_);
lean_dec(v_m_903_);
return v___x_921_;
}
v___jp_908_:
{
if (lean_obj_tag(v___y_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___y_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___y_909_, 1);
v___x_911_ = lean_evm_sstore(v_a_910_, v_val_906_);
return v___x_911_;
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec(v_val_906_);
v_a_912_ = lean_ctor_get(v___y_909_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___y_909_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___y_909_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___y_909_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___redArg___boxed(lean_object* v_m_930_, lean_object* v_k1_931_, lean_object* v_k2_932_, lean_object* v_val_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lean_Evm_Storage_Map2_set___redArg(v_m_930_, v_k1_931_, v_k2_932_, v_val_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set(lean_object* v_00_u03b1_936_, lean_object* v_m_937_, lean_object* v_k1_938_, lean_object* v_k2_939_, lean_object* v_val_940_){
_start:
{
lean_object* v___y_943_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_evm_mstore(v___x_954_, v_k2_939_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v___x_956_; lean_object* v___x_957_; 
lean_dec_ref_known(v___x_955_, 1);
v___x_956_ = lean_unsigned_to_nat(32u);
v___x_957_ = lean_evm_mstore(v___x_956_, v_k1_938_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v___x_958_; lean_object* v___x_959_; 
lean_dec_ref_known(v___x_957_, 1);
v___x_958_ = lean_unsigned_to_nat(64u);
v___x_959_ = lean_evm_keccak256(v___x_954_, v___x_958_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v___x_961_ = lean_evm_mstore(v___x_954_, v_a_960_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v___x_962_; 
lean_dec_ref_known(v___x_961_, 1);
v___x_962_ = lean_evm_mstore(v___x_956_, v_m_937_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v___x_963_; 
lean_dec_ref_known(v___x_962_, 1);
v___x_963_ = lean_evm_keccak256(v___x_954_, v___x_958_);
v___y_943_ = v___x_963_;
goto v___jp_942_;
}
else
{
lean_dec(v_val_940_);
return v___x_962_;
}
}
else
{
lean_dec(v_val_940_);
lean_dec(v_m_937_);
return v___x_961_;
}
}
else
{
lean_dec(v_m_937_);
v___y_943_ = v___x_959_;
goto v___jp_942_;
}
}
else
{
lean_dec(v_val_940_);
lean_dec(v_m_937_);
return v___x_957_;
}
}
else
{
lean_dec(v_val_940_);
lean_dec(v_k1_938_);
lean_dec(v_m_937_);
return v___x_955_;
}
v___jp_942_:
{
if (lean_obj_tag(v___y_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_945_; 
v_a_944_ = lean_ctor_get(v___y_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___y_943_, 1);
v___x_945_ = lean_evm_sstore(v_a_944_, v_val_940_);
return v___x_945_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_val_940_);
v_a_946_ = lean_ctor_get(v___y_943_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___y_943_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___y_943_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___y_943_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___boxed(lean_object* v_00_u03b1_964_, lean_object* v_m_965_, lean_object* v_k1_966_, lean_object* v_k2_967_, lean_object* v_val_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_Evm_Storage_Map2_set(v_00_u03b1_964_, v_m_965_, v_k1_966_, v_k2_967_, v_val_968_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___redArg(lean_object* v_n_971_){
_start:
{
lean_inc(v_n_971_);
return v_n_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___redArg___boxed(lean_object* v_n_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lean_Evm_Storage_Array_ofSlot___redArg(v_n_972_);
lean_dec(v_n_972_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot(lean_object* v_00_u03b1_974_, lean_object* v_n_975_){
_start:
{
lean_inc(v_n_975_);
return v_n_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___boxed(lean_object* v_00_u03b1_976_, lean_object* v_n_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_Evm_Storage_Array_ofSlot(v_00_u03b1_976_, v_n_977_);
lean_dec(v_n_977_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___redArg(lean_object* v_a_979_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = lean_evm_sload(v_a_979_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___redArg___boxed(lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lean_Evm_Storage_Array_length___redArg(v_a_982_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length(lean_object* v_00_u03b1_985_, lean_object* v_a_986_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = lean_evm_sload(v_a_986_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___boxed(lean_object* v_00_u03b1_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_Evm_Storage_Array_length(v_00_u03b1_989_, v_a_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___redArg(lean_object* v_a_993_, lean_object* v_index_994_){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lean_unsigned_to_nat(0u);
v___x_997_ = lean_evm_mstore(v___x_996_, v_a_993_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_998_; lean_object* v___x_999_; 
lean_dec_ref_known(v___x_997_, 1);
v___x_998_ = lean_unsigned_to_nat(32u);
v___x_999_ = lean_evm_keccak256(v___x_996_, v___x_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1008_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1004_ = lean_nat_add(v_a_1000_, v_index_994_);
lean_dec(v_a_1000_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1004_);
v___x_1006_ = v___x_1002_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
return v___x_999_;
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_997_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_997_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___redArg___boxed(lean_object* v_a_1017_, lean_object* v_index_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lean_Evm_Storage_Array_elemSlot___redArg(v_a_1017_, v_index_1018_);
lean_dec(v_index_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot(lean_object* v_00_u03b1_1021_, lean_object* v_a_1022_, lean_object* v_index_1023_){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = lean_evm_mstore(v___x_1025_, v_a_1022_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
lean_dec_ref_known(v___x_1026_, 1);
v___x_1027_ = lean_unsigned_to_nat(32u);
v___x_1028_ = lean_evm_keccak256(v___x_1025_, v___x_1027_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1037_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = lean_nat_add(v_a_1029_, v_index_1023_);
lean_dec(v_a_1029_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1033_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
else
{
return v___x_1028_;
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
v_a_1038_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_1026_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1026_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___boxed(lean_object* v_00_u03b1_1046_, lean_object* v_a_1047_, lean_object* v_index_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_Evm_Storage_Array_elemSlot(v_00_u03b1_1046_, v_a_1047_, v_index_1048_);
lean_dec(v_index_1048_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___redArg(lean_object* v_a_1051_, lean_object* v_index_1052_){
_start:
{
lean_object* v___x_1054_; 
lean_inc(v_a_1051_);
v___x_1054_ = lean_evm_sload(v_a_1051_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1081_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1057_ = v___x_1054_;
v_isShared_1058_ = v_isSharedCheck_1081_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1054_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1081_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
uint8_t v___x_1059_; 
v___x_1059_ = lean_nat_dec_le(v_a_1055_, v_index_1052_);
lean_dec(v_a_1055_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
lean_del_object(v___x_1057_);
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_evm_mstore(v___x_1060_, v_a_1051_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
lean_dec_ref_known(v___x_1061_, 1);
v___x_1062_ = lean_unsigned_to_nat(32u);
v___x_1063_ = lean_evm_keccak256(v___x_1060_, v___x_1062_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1065_ = lean_nat_add(v_a_1064_, v_index_1052_);
lean_dec(v_a_1064_);
v___x_1066_ = lean_evm_sload(v___x_1065_);
return v___x_1066_;
}
else
{
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1068_; 
v_a_1067_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1067_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1068_ = lean_evm_sload(v_a_1067_);
return v___x_1068_;
}
else
{
return v___x_1063_;
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1061_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1061_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1079_; 
lean_dec(v_a_1051_);
v___x_1077_ = lean_unsigned_to_nat(0u);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1077_);
v___x_1079_ = v___x_1057_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_dec(v_a_1051_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___redArg___boxed(lean_object* v_a_1082_, lean_object* v_index_1083_, lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lean_Evm_Storage_Array_get___redArg(v_a_1082_, v_index_1083_);
lean_dec(v_index_1083_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get(lean_object* v_00_u03b1_1086_, lean_object* v_a_1087_, lean_object* v_index_1088_){
_start:
{
lean_object* v___x_1090_; 
lean_inc(v_a_1087_);
v___x_1090_ = lean_evm_sload(v_a_1087_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1117_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1117_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1117_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_nat_dec_le(v_a_1091_, v_index_1088_);
lean_dec(v_a_1091_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_del_object(v___x_1093_);
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = lean_evm_mstore(v___x_1096_, v_a_1087_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec_ref_known(v___x_1097_, 1);
v___x_1098_ = lean_unsigned_to_nat(32u);
v___x_1099_ = lean_evm_keccak256(v___x_1096_, v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1101_ = lean_nat_add(v_a_1100_, v_index_1088_);
lean_dec(v_a_1100_);
v___x_1102_ = lean_evm_sload(v___x_1101_);
return v___x_1102_;
}
else
{
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1104_; 
v_a_1103_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1104_ = lean_evm_sload(v_a_1103_);
return v___x_1104_;
}
else
{
return v___x_1099_;
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_a_1105_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1097_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1097_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
else
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
lean_dec(v_a_1087_);
v___x_1113_ = lean_unsigned_to_nat(0u);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1113_);
v___x_1115_ = v___x_1093_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
else
{
lean_dec(v_a_1087_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___boxed(lean_object* v_00_u03b1_1118_, lean_object* v_a_1119_, lean_object* v_index_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_Evm_Storage_Array_get(v_00_u03b1_1118_, v_a_1119_, v_index_1120_);
lean_dec(v_index_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___redArg(lean_object* v_a_1123_, lean_object* v_val_1124_){
_start:
{
lean_object* v___x_1126_; 
lean_inc(v_a_1123_);
v___x_1126_ = lean_evm_sload(v_a_1123_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v_a_1129_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v___x_1126_, 1);
v___x_1134_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_1123_);
v___x_1135_ = lean_evm_mstore(v___x_1134_, v_a_1123_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_dec_ref_known(v___x_1135_, 1);
v___x_1136_ = lean_unsigned_to_nat(32u);
v___x_1137_ = lean_evm_keccak256(v___x_1134_, v___x_1136_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1138_; lean_object* v___x_1139_; 
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1137_, 1);
v___x_1139_ = lean_nat_add(v_a_1138_, v_a_1127_);
lean_dec(v_a_1138_);
v_a_1129_ = v___x_1139_;
goto v___jp_1128_;
}
else
{
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1140_; 
v_a_1140_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1137_, 1);
v_a_1129_ = v_a_1140_;
goto v___jp_1128_;
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec(v_a_1127_);
lean_dec(v_val_1124_);
lean_dec(v_a_1123_);
v_a_1141_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1137_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1137_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
}
else
{
lean_dec(v_a_1127_);
lean_dec(v_val_1124_);
lean_dec(v_a_1123_);
return v___x_1135_;
}
v___jp_1128_:
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_evm_sstore(v_a_1129_, v_val_1124_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_dec_ref_known(v___x_1130_, 1);
v___x_1131_ = lean_unsigned_to_nat(1u);
v___x_1132_ = lean_nat_add(v_a_1127_, v___x_1131_);
lean_dec(v_a_1127_);
v___x_1133_ = lean_evm_sstore(v_a_1123_, v___x_1132_);
return v___x_1133_;
}
else
{
lean_dec(v_a_1127_);
lean_dec(v_a_1123_);
return v___x_1130_;
}
}
}
else
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
lean_dec(v_val_1124_);
lean_dec(v_a_1123_);
v_a_1149_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1126_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1126_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___redArg___boxed(lean_object* v_a_1157_, lean_object* v_val_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_Evm_Storage_Array_push___redArg(v_a_1157_, v_val_1158_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push(lean_object* v_00_u03b1_1161_, lean_object* v_a_1162_, lean_object* v_val_1163_){
_start:
{
lean_object* v___x_1165_; 
lean_inc(v_a_1162_);
v___x_1165_ = lean_evm_sload(v_a_1162_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; lean_object* v_a_1168_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_a_1166_);
lean_dec_ref_known(v___x_1165_, 1);
v___x_1173_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_1162_);
v___x_1174_ = lean_evm_mstore(v___x_1173_, v_a_1162_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec_ref_known(v___x_1174_, 1);
v___x_1175_ = lean_unsigned_to_nat(32u);
v___x_1176_ = lean_evm_keccak256(v___x_1173_, v___x_1175_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1178_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref_known(v___x_1176_, 1);
v___x_1178_ = lean_nat_add(v_a_1177_, v_a_1166_);
lean_dec(v_a_1177_);
v_a_1168_ = v___x_1178_;
goto v___jp_1167_;
}
else
{
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1179_; 
v_a_1179_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1176_, 1);
v_a_1168_ = v_a_1179_;
goto v___jp_1167_;
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_dec(v_a_1166_);
lean_dec(v_val_1163_);
lean_dec(v_a_1162_);
v_a_1180_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1176_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1176_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
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
}
else
{
lean_dec(v_a_1166_);
lean_dec(v_val_1163_);
lean_dec(v_a_1162_);
return v___x_1174_;
}
v___jp_1167_:
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_evm_sstore(v_a_1168_, v_val_1163_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
lean_dec_ref_known(v___x_1169_, 1);
v___x_1170_ = lean_unsigned_to_nat(1u);
v___x_1171_ = lean_nat_add(v_a_1166_, v___x_1170_);
lean_dec(v_a_1166_);
v___x_1172_ = lean_evm_sstore(v_a_1162_, v___x_1171_);
return v___x_1172_;
}
else
{
lean_dec(v_a_1166_);
lean_dec(v_a_1162_);
return v___x_1169_;
}
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec(v_val_1163_);
lean_dec(v_a_1162_);
v_a_1188_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1165_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1165_);
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
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___boxed(lean_object* v_00_u03b1_1196_, lean_object* v_a_1197_, lean_object* v_val_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Evm_Storage_Array_push(v_00_u03b1_1196_, v_a_1197_, v_val_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___redArg(lean_object* v_a_1201_, lean_object* v_index_1202_, lean_object* v_val_1203_){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_evm_mstore(v___x_1205_, v_a_1201_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_dec_ref_known(v___x_1206_, 1);
v___x_1207_ = lean_unsigned_to_nat(32u);
v___x_1208_ = lean_evm_keccak256(v___x_1205_, v___x_1207_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1210_ = lean_nat_add(v_a_1209_, v_index_1202_);
lean_dec(v_a_1209_);
v___x_1211_ = lean_evm_sstore(v___x_1210_, v_val_1203_);
return v___x_1211_;
}
else
{
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; 
v_a_1212_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1213_ = lean_evm_sstore(v_a_1212_, v_val_1203_);
return v___x_1213_;
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec(v_val_1203_);
v_a_1214_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1208_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1208_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
}
else
{
lean_dec(v_val_1203_);
return v___x_1206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___redArg___boxed(lean_object* v_a_1222_, lean_object* v_index_1223_, lean_object* v_val_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_Evm_Storage_Array_set___redArg(v_a_1222_, v_index_1223_, v_val_1224_);
lean_dec(v_index_1223_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set(lean_object* v_00_u03b1_1227_, lean_object* v_a_1228_, lean_object* v_index_1229_, lean_object* v_val_1230_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1233_ = lean_evm_mstore(v___x_1232_, v_a_1228_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_dec_ref_known(v___x_1233_, 1);
v___x_1234_ = lean_unsigned_to_nat(32u);
v___x_1235_ = lean_evm_keccak256(v___x_1232_, v___x_1234_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1237_ = lean_nat_add(v_a_1236_, v_index_1229_);
lean_dec(v_a_1236_);
v___x_1238_ = lean_evm_sstore(v___x_1237_, v_val_1230_);
return v___x_1238_;
}
else
{
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; 
v_a_1239_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1240_ = lean_evm_sstore(v_a_1239_, v_val_1230_);
return v___x_1240_;
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec(v_val_1230_);
v_a_1241_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1235_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1235_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
else
{
lean_dec(v_val_1230_);
return v___x_1233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___boxed(lean_object* v_00_u03b1_1249_, lean_object* v_a_1250_, lean_object* v_index_1251_, lean_object* v_val_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_Evm_Storage_Array_set(v_00_u03b1_1249_, v_a_1250_, v_index_1251_, v_val_1252_);
lean_dec(v_index_1251_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender(){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = lean_evm_caller();
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender___boxed(lean_object* v_a_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_Evm_Env_sender();
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value(){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_evm_callvalue();
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value___boxed(lean_object* v_a_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_Evm_Env_value();
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gas(){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_evm_gas();
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gas___boxed(lean_object* v_a_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_Evm_Env_gas();
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_origin(){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_evm_origin();
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_origin___boxed(lean_object* v_a_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = l_Lean_Evm_Env_origin();
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gasprice(){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_evm_gasprice();
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gasprice___boxed(lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Evm_Env_gasprice();
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp(){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_evm_timestamp();
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_Evm_Env_blockTimestamp();
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber(){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_evm_number();
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object* v_a_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_Lean_Evm_Env_blockNumber();
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_coinbase(){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_evm_coinbase();
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_coinbase___boxed(lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Lean_Evm_Env_coinbase();
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gaslimit(){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_evm_gaslimit();
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_gaslimit___boxed(lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_Evm_Env_gaslimit();
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_basefee(){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_evm_basefee();
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_basefee___boxed(lean_object* v_a_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_Evm_Env_basefee();
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockHash(lean_object* v_n_1295_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_evm_blockhash(v_n_1295_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockHash___boxed(lean_object* v_n_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lean_Evm_Env_blockHash(v_n_1298_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance(){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_evm_selfbalance();
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object* v_a_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lean_Evm_Env_balance();
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balanceOf(lean_object* v_addr_1305_){
_start:
{
lean_object* v___x_1307_; 
v___x_1307_ = lean_evm_balance(v_addr_1305_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balanceOf___boxed(lean_object* v_addr_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lean_Evm_Env_balanceOf(v_addr_1308_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_chainId(){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_evm_chainid();
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_chainId___boxed(lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_Evm_Env_chainId();
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codehash(lean_object* v_addr_1315_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_evm_extcodehash(v_addr_1315_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codehash___boxed(lean_object* v_addr_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_Evm_Env_codehash(v_addr_1318_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codesize(lean_object* v_addr_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = lean_evm_extcodesize(v_addr_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_codesize___boxed(lean_object* v_addr_1324_, lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Lean_Evm_Env_codesize(v_addr_1324_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_min(lean_object* v_a_1327_, lean_object* v_b_1328_){
_start:
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_nat_dec_le(v_a_1327_, v_b_1328_);
if (v___x_1329_ == 0)
{
lean_inc(v_b_1328_);
return v_b_1328_;
}
else
{
lean_inc(v_a_1327_);
return v_a_1327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_min___boxed(lean_object* v_a_1330_, lean_object* v_b_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Evm_min(v_a_1330_, v_b_1331_);
lean_dec(v_b_1331_);
lean_dec(v_a_1330_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_max(lean_object* v_a_1333_, lean_object* v_b_1334_){
_start:
{
uint8_t v___x_1335_; 
v___x_1335_ = lean_nat_dec_le(v_b_1334_, v_a_1333_);
if (v___x_1335_ == 0)
{
lean_inc(v_b_1334_);
return v_b_1334_;
}
else
{
lean_inc(v_a_1333_);
return v_a_1333_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_max___boxed(lean_object* v_a_1336_, lean_object* v_b_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lean_Evm_max(v_a_1336_, v_b_1337_);
lean_dec(v_b_1337_);
lean_dec(v_a_1336_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_absDiff(lean_object* v_a_1339_, lean_object* v_b_1340_){
_start:
{
uint8_t v___x_1341_; 
v___x_1341_ = lean_nat_dec_le(v_b_1340_, v_a_1339_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; 
v___x_1342_ = lean_unsigned_to_nat(0u);
return v___x_1342_;
}
else
{
lean_object* v___x_1343_; 
v___x_1343_ = lean_nat_sub(v_a_1339_, v_b_1340_);
return v___x_1343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_absDiff___boxed(lean_object* v_a_1344_, lean_object* v_b_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lean_Evm_absDiff(v_a_1344_, v_b_1345_);
lean_dec(v_b_1345_);
lean_dec(v_a_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_isqrt(lean_object* v_n_1347_){
_start:
{
lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1349_ = lean_nat_dec_le(v_n_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Nat_sqrt(v_n_1347_);
return v___x_1350_;
}
else
{
lean_inc(v_n_1347_);
return v_n_1347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_isqrt___boxed(lean_object* v_n_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_Evm_isqrt(v_n_1351_);
lean_dec(v_n_1351_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_sqrt(lean_object* v_n_1353_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = l_Lean_Evm_isqrt(v_n_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_sqrt___boxed(lean_object* v_n_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lean_Evm_sqrt(v_n_1355_);
lean_dec(v_n_1355_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_floorDiv(lean_object* v_a_1357_, lean_object* v_b_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_nat_div(v_a_1357_, v_b_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_floorDiv___boxed(lean_object* v_a_1360_, lean_object* v_b_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_Evm_floorDiv(v_a_1360_, v_b_1361_);
lean_dec(v_b_1361_);
lean_dec(v_a_1360_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_ceilDiv(lean_object* v_a_1363_, lean_object* v_b_1364_){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1365_ = lean_nat_add(v_a_1363_, v_b_1364_);
v___x_1366_ = lean_unsigned_to_nat(1u);
v___x_1367_ = lean_nat_sub(v___x_1365_, v___x_1366_);
lean_dec(v___x_1365_);
v___x_1368_ = lean_nat_div(v___x_1367_, v_b_1364_);
lean_dec(v___x_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_ceilDiv___boxed(lean_object* v_a_1369_, lean_object* v_b_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Lean_Evm_ceilDiv(v_a_1369_, v_b_1370_);
lean_dec(v_b_1370_);
lean_dec(v_a_1369_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_natPow___boxed(lean_object* v_base_1375_, lean_object* v_exp_1376_, lean_object* v_a_00___x40___internal___hyg_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = lean_evm_exp(v_base_1375_, v_exp_1376_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_bitNot___boxed(lean_object* v_n_1381_, lean_object* v_a_00___x40___internal___hyg_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = lean_evm_not(v_n_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require(uint8_t v_cond_1384_){
_start:
{
if (v_cond_1384_ == 0)
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_unsigned_to_nat(0u);
v___x_1387_ = lean_evm_revert(v___x_1386_, v___x_1386_);
return v___x_1387_;
}
else
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_box(0);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require___boxed(lean_object* v_cond_1390_, lean_object* v_a_1391_){
_start:
{
uint8_t v_cond_boxed_1392_; lean_object* v_res_1393_; 
v_cond_boxed_1392_ = lean_unbox(v_cond_1390_);
v_res_1393_ = l_Lean_Evm_require(v_cond_boxed_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg(uint8_t v_cond_1394_){
_start:
{
if (v_cond_1394_ == 0)
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_unsigned_to_nat(0u);
v___x_1397_ = lean_evm_revert(v___x_1396_, v___x_1396_);
return v___x_1397_;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = lean_box(0);
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg___boxed(lean_object* v_cond_1400_, lean_object* v_a_1401_){
_start:
{
uint8_t v_cond_boxed_1402_; lean_object* v_res_1403_; 
v_cond_boxed_1402_ = lean_unbox(v_cond_1400_);
v_res_1403_ = l_Lean_Evm_requireMsg___redArg(v_cond_boxed_1402_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg(uint8_t v_cond_1404_, lean_object* v___reason_1405_){
_start:
{
if (v_cond_1404_ == 0)
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_unsigned_to_nat(0u);
v___x_1408_ = lean_evm_revert(v___x_1407_, v___x_1407_);
return v___x_1408_;
}
else
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_box(0);
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___boxed(lean_object* v_cond_1411_, lean_object* v___reason_1412_, lean_object* v_a_1413_){
_start:
{
uint8_t v_cond_boxed_1414_; lean_object* v_res_1415_; 
v_cond_boxed_1414_ = lean_unbox(v_cond_1411_);
v_res_1415_ = l_Lean_Evm_requireMsg(v_cond_boxed_1414_, v___reason_1412_);
lean_dec_ref(v___reason_1412_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous(lean_object* v_offset_1416_, lean_object* v_dataLen_1417_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_evm_log0(v_offset_1416_, v_dataLen_1417_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous___boxed(lean_object* v_offset_1420_, lean_object* v_dataLen_1421_, lean_object* v_a_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_Lean_Evm_Event_anonymous(v_offset_1420_, v_dataLen_1421_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1(lean_object* v_topic_1424_, lean_object* v_offset_1425_, lean_object* v_dataLen_1426_){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_evm_log1(v_topic_1424_, v_offset_1425_, v_dataLen_1426_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1___boxed(lean_object* v_topic_1429_, lean_object* v_offset_1430_, lean_object* v_dataLen_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Evm_Event_emit1(v_topic_1429_, v_offset_1430_, v_dataLen_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2(lean_object* v_t1_1434_, lean_object* v_t2_1435_, lean_object* v_offset_1436_, lean_object* v_dataLen_1437_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_evm_log2(v_t1_1434_, v_t2_1435_, v_offset_1436_, v_dataLen_1437_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2___boxed(lean_object* v_t1_1440_, lean_object* v_t2_1441_, lean_object* v_offset_1442_, lean_object* v_dataLen_1443_, lean_object* v_a_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l_Lean_Evm_Event_emit2(v_t1_1440_, v_t2_1441_, v_offset_1442_, v_dataLen_1443_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_sha256(lean_object* v_offset_1446_, lean_object* v_len_1447_, lean_object* v_outOffset_1448_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1450_ = lean_unsigned_to_nat(3000u);
v___x_1451_ = lean_unsigned_to_nat(2u);
v___x_1452_ = lean_unsigned_to_nat(32u);
lean_inc(v_outOffset_1448_);
v___x_1453_ = lean_evm_staticcall(v___x_1450_, v___x_1451_, v_offset_1446_, v_len_1447_, v_outOffset_1448_, v___x_1452_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v___x_1454_; 
lean_dec_ref_known(v___x_1453_, 1);
v___x_1454_ = lean_evm_mload(v_outOffset_1448_);
return v___x_1454_;
}
else
{
lean_dec(v_outOffset_1448_);
return v___x_1453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_sha256___boxed(lean_object* v_offset_1455_, lean_object* v_len_1456_, lean_object* v_outOffset_1457_, lean_object* v_a_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Evm_sha256(v_offset_1455_, v_len_1456_, v_outOffset_1457_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_ecrecover(lean_object* v_offset_1460_, lean_object* v_outOffset_1461_){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1463_ = lean_unsigned_to_nat(3000u);
v___x_1464_ = lean_unsigned_to_nat(1u);
v___x_1465_ = lean_unsigned_to_nat(128u);
v___x_1466_ = lean_unsigned_to_nat(32u);
lean_inc(v_outOffset_1461_);
v___x_1467_ = lean_evm_staticcall(v___x_1463_, v___x_1464_, v_offset_1460_, v___x_1465_, v_outOffset_1461_, v___x_1466_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v___x_1468_; 
lean_dec_ref_known(v___x_1467_, 1);
v___x_1468_ = lean_evm_mload(v_outOffset_1461_);
return v___x_1468_;
}
else
{
lean_dec(v_outOffset_1461_);
return v___x_1467_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_ecrecover___boxed(lean_object* v_offset_1469_, lean_object* v_outOffset_1470_, lean_object* v_a_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lean_Evm_ecrecover(v_offset_1469_, v_outOffset_1470_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_methodId(lean_object* v_offset_1473_, lean_object* v_len_1474_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_evm_keccak256(v_offset_1473_, v_len_1474_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1486_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1479_ = v___x_1476_;
v_isShared_1480_ = v_isSharedCheck_1486_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v___x_1476_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1486_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1484_; 
v___x_1481_ = lean_unsigned_to_nat(224u);
v___x_1482_ = lean_nat_shiftr(v_a_1477_, v___x_1481_);
lean_dec(v_a_1477_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 0, v___x_1482_);
v___x_1484_ = v___x_1479_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1482_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
else
{
return v___x_1476_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_methodId___boxed(lean_object* v_offset_1487_, lean_object* v_len_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Lean_Evm_methodId(v_offset_1487_, v_len_1488_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy___lam__0(lean_object* v___x_1491_, lean_object* v_src_1492_, lean_object* v_dst_1493_, lean_object* v___x_1494_, lean_object* v_a_1495_, lean_object* v_x_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = lean_nat_mul(v_a_1495_, v___x_1491_);
v___x_1500_ = lean_nat_add(v_src_1492_, v___x_1499_);
v___x_1501_ = lean_evm_mload(v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = lean_nat_add(v_dst_1493_, v___x_1499_);
lean_dec(v___x_1499_);
v___x_1504_ = lean_evm_mstore(v___x_1503_, v_a_1502_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1512_; 
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; 
v_unused_1513_ = lean_ctor_get(v___x_1504_, 0);
lean_dec(v_unused_1513_);
v___x_1506_ = v___x_1504_;
v_isShared_1507_ = v_isSharedCheck_1512_;
goto v_resetjp_1505_;
}
else
{
lean_dec(v___x_1504_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1512_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; lean_object* v___x_1510_; 
v___x_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1494_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 0, v___x_1508_);
v___x_1510_ = v___x_1506_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v_a_1514_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1504_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1504_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec(v___x_1499_);
v_a_1522_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1501_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1501_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy___lam__0___boxed(lean_object* v___x_1530_, lean_object* v_src_1531_, lean_object* v_dst_1532_, lean_object* v___x_1533_, lean_object* v_a_1534_, lean_object* v_x_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Lean_Evm_memcpy___lam__0(v___x_1530_, v_src_1531_, v_dst_1532_, v___x_1533_, v_a_1534_, v_x_1535_, v___y_1536_);
lean_dec(v_a_1534_);
lean_dec(v_dst_1532_);
lean_dec(v_src_1531_);
lean_dec(v___x_1530_);
return v_res_1538_;
}
}
static lean_object* _init_l_Lean_Evm_memcpy___closed__0(void){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_instMonadEIO(lean_box(0));
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy(lean_object* v_dst_1540_, lean_object* v_src_1541_, lean_object* v_len_1542_){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v_chunks_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___f_1552_; lean_object* v___x_282__overap_1553_; lean_object* v___x_1554_; 
v___x_1544_ = lean_obj_once(&l_Lean_Evm_memcpy___closed__0, &l_Lean_Evm_memcpy___closed__0_once, _init_l_Lean_Evm_memcpy___closed__0);
v___x_1545_ = lean_unsigned_to_nat(32u);
v___x_1546_ = lean_unsigned_to_nat(5u);
v_chunks_1547_ = lean_nat_shiftr(v_len_1542_, v___x_1546_);
v___x_1548_ = lean_unsigned_to_nat(0u);
v___x_1549_ = lean_unsigned_to_nat(1u);
lean_inc(v_chunks_1547_);
v___x_1550_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set(v___x_1550_, 1, v_chunks_1547_);
lean_ctor_set(v___x_1550_, 2, v___x_1549_);
v___x_1551_ = lean_box(0);
lean_inc(v_dst_1540_);
lean_inc(v_src_1541_);
v___f_1552_ = lean_alloc_closure((void*)(l_Lean_Evm_memcpy___lam__0___boxed), 8, 4);
lean_closure_set(v___f_1552_, 0, v___x_1545_);
lean_closure_set(v___f_1552_, 1, v_src_1541_);
lean_closure_set(v___f_1552_, 2, v_dst_1540_);
lean_closure_set(v___f_1552_, 3, v___x_1551_);
v___x_282__overap_1553_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop(lean_box(0), lean_box(0), v___x_1544_, v___x_1550_, v___f_1552_, v___x_1551_, v___x_1548_, lean_box(0), lean_box(0));
v___x_1554_ = lean_apply_1(v___x_282__overap_1553_, lean_box(0));
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1577_; 
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; 
v_unused_1578_ = lean_ctor_get(v___x_1554_, 0);
lean_dec(v_unused_1578_);
v___x_1556_ = v___x_1554_;
v_isShared_1557_ = v_isSharedCheck_1577_;
goto v_resetjp_1555_;
}
else
{
lean_dec(v___x_1554_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1577_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; uint8_t v___x_1559_; 
v___x_1558_ = lean_nat_mod(v_len_1542_, v___x_1545_);
v___x_1559_ = lean_nat_dec_lt(v___x_1548_, v___x_1558_);
lean_dec(v___x_1558_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v_chunks_1547_);
lean_dec(v_src_1541_);
lean_dec(v_dst_1540_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1551_);
v___x_1561_ = v___x_1556_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1551_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
lean_del_object(v___x_1556_);
v___x_1563_ = lean_nat_mul(v_chunks_1547_, v___x_1545_);
lean_dec(v_chunks_1547_);
v___x_1564_ = lean_nat_add(v_src_1541_, v___x_1563_);
lean_dec(v_src_1541_);
v___x_1565_ = lean_evm_mload(v___x_1564_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1567_ = lean_nat_add(v_dst_1540_, v___x_1563_);
lean_dec(v___x_1563_);
lean_dec(v_dst_1540_);
v___x_1568_ = lean_evm_mstore(v___x_1567_, v_a_1566_);
return v___x_1568_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_dec(v___x_1563_);
lean_dec(v_dst_1540_);
v_a_1569_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1565_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1565_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
}
else
{
lean_dec(v_chunks_1547_);
lean_dec(v_src_1541_);
lean_dec(v_dst_1540_);
return v___x_1554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_memcpy___boxed(lean_object* v_dst_1579_, lean_object* v_src_1580_, lean_object* v_len_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_Evm_memcpy(v_dst_1579_, v_src_1580_, v_len_1581_);
lean_dec(v_len_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_concat64(lean_object* v_dst_1584_, lean_object* v_a_1585_, lean_object* v_b_1586_){
_start:
{
lean_object* v___x_1588_; 
lean_inc(v_dst_1584_);
v___x_1588_ = lean_evm_mstore(v_dst_1584_, v_a_1585_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
lean_dec_ref_known(v___x_1588_, 1);
v___x_1589_ = lean_unsigned_to_nat(32u);
v___x_1590_ = lean_nat_add(v_dst_1584_, v___x_1589_);
lean_dec(v_dst_1584_);
v___x_1591_ = lean_evm_mstore(v___x_1590_, v_b_1586_);
return v___x_1591_;
}
else
{
lean_dec(v_b_1586_);
lean_dec(v_dst_1584_);
return v___x_1588_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_concat64___boxed(lean_object* v_dst_1592_, lean_object* v_a_1593_, lean_object* v_b_1594_, lean_object* v_a_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Lean_Evm_concat64(v_dst_1592_, v_a_1593_, v_b_1594_);
return v_res_1596_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Evm(uint8_t builtin) {
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
res = runtime_initialize_Init_Data_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Evm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_String(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
lean_object* initialize_Init_Data_UInt(uint8_t builtin);
lean_object* initialize_Init_Data_Nat(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Evm(uint8_t builtin) {
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
res = initialize_Init_Data_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Evm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Evm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Evm(builtin);
}
#ifdef __cplusplus
}
#endif
