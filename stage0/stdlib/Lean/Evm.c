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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance();
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Evm_arg(lean_object* v_i_180_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = lean_unsigned_to_nat(4u);
v___x_183_ = lean_unsigned_to_nat(32u);
v___x_184_ = lean_nat_mul(v_i_180_, v___x_183_);
v___x_185_ = lean_nat_add(v___x_182_, v___x_184_);
lean_dec(v___x_184_);
v___x_186_ = lean_evm_calldataload(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_arg___boxed(lean_object* v_i_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Evm_arg(v_i_187_);
lean_dec(v_i_187_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256(lean_object* v_v_190_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_evm_mstore(v___x_192_, v_v_190_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v___x_194_; lean_object* v___x_195_; 
lean_dec_ref_known(v___x_193_, 1);
v___x_194_ = lean_unsigned_to_nat(32u);
v___x_195_ = lean_evm_return(v___x_192_, v___x_194_);
return v___x_195_;
}
else
{
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256___boxed(lean_object* v_v_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_Evm_returnU256(v_v_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revert(){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_evm_revert(v___x_200_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revert___boxed(lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_Evm_revert();
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revertWithReason(lean_object* v_reasonLen_204_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_unsigned_to_nat(147846272u);
v___x_208_ = lean_evm_mstore(v___x_206_, v___x_207_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec_ref_known(v___x_208_, 1);
v___x_209_ = lean_unsigned_to_nat(4u);
v___x_210_ = lean_unsigned_to_nat(32u);
v___x_211_ = lean_evm_mstore(v___x_209_, v___x_210_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec_ref_known(v___x_211_, 1);
v___x_212_ = lean_unsigned_to_nat(36u);
lean_inc(v_reasonLen_204_);
v___x_213_ = lean_evm_mstore(v___x_212_, v_reasonLen_204_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec_ref_known(v___x_213_, 1);
v___x_214_ = lean_unsigned_to_nat(68u);
v___x_215_ = lean_unsigned_to_nat(31u);
v___x_216_ = lean_nat_add(v_reasonLen_204_, v___x_215_);
lean_dec(v_reasonLen_204_);
v___x_217_ = lean_unsigned_to_nat(5u);
v___x_218_ = lean_nat_shiftr(v___x_216_, v___x_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_nat_mul(v___x_218_, v___x_210_);
lean_dec(v___x_218_);
v___x_220_ = lean_nat_add(v___x_214_, v___x_219_);
lean_dec(v___x_219_);
v___x_221_ = lean_evm_revert(v___x_206_, v___x_220_);
return v___x_221_;
}
else
{
lean_dec(v_reasonLen_204_);
return v___x_213_;
}
}
else
{
lean_dec(v_reasonLen_204_);
return v___x_211_;
}
}
else
{
lean_dec(v_reasonLen_204_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revertWithReason___boxed(lean_object* v_reasonLen_222_, lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_Evm_revertWithReason(v_reasonLen_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load(lean_object* v_k_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_evm_sload(v_k_225_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load___boxed(lean_object* v_k_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Evm_Storage_load(v_k_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store(lean_object* v_k_231_, lean_object* v_v_232_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_evm_sstore(v_k_231_, v_v_232_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store___boxed(lean_object* v_k_235_, lean_object* v_v_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_Evm_Storage_store(v_k_235_, v_v_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot(lean_object* v_slot_239_, lean_object* v_key_240_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_unsigned_to_nat(0u);
v___x_243_ = lean_evm_mstore(v___x_242_, v_key_240_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec_ref_known(v___x_243_, 1);
v___x_244_ = lean_unsigned_to_nat(32u);
v___x_245_ = lean_evm_mstore(v___x_244_, v_slot_239_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec_ref_known(v___x_245_, 1);
v___x_246_ = lean_unsigned_to_nat(64u);
v___x_247_ = lean_evm_keccak256(v___x_242_, v___x_246_);
return v___x_247_;
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
v_a_248_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_245_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_slot_239_);
v_a_256_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_243_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_243_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot___boxed(lean_object* v_slot_264_, lean_object* v_key_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Evm_Storage_mapSlot(v_slot_264_, v_key_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad(lean_object* v_slot_268_, lean_object* v_key_269_){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_evm_mstore(v___x_271_, v_key_269_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec_ref_known(v___x_272_, 1);
v___x_273_ = lean_unsigned_to_nat(32u);
v___x_274_ = lean_evm_mstore(v___x_273_, v_slot_268_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec_ref_known(v___x_274_, 1);
v___x_275_ = lean_unsigned_to_nat(64u);
v___x_276_ = lean_evm_keccak256(v___x_271_, v___x_275_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_278_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
v___x_278_ = lean_evm_sload(v_a_277_);
return v___x_278_;
}
else
{
return v___x_276_;
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
v_a_279_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_274_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_274_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec(v_slot_268_);
v_a_287_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_272_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_272_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad___boxed(lean_object* v_slot_295_, lean_object* v_key_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Evm_Storage_mapLoad(v_slot_295_, v_key_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore(lean_object* v_slot_299_, lean_object* v_key_300_, lean_object* v_val_301_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = lean_evm_mstore(v___x_303_, v_key_300_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec_ref_known(v___x_304_, 1);
v___x_305_ = lean_unsigned_to_nat(32u);
v___x_306_ = lean_evm_mstore(v___x_305_, v_slot_299_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec_ref_known(v___x_306_, 1);
v___x_307_ = lean_unsigned_to_nat(64u);
v___x_308_ = lean_evm_keccak256(v___x_303_, v___x_307_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_310_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v___x_310_ = lean_evm_sstore(v_a_309_, v_val_301_);
return v___x_310_;
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
lean_dec(v_val_301_);
v_a_311_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_308_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_308_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
else
{
lean_dec(v_val_301_);
return v___x_306_;
}
}
else
{
lean_dec(v_val_301_);
lean_dec(v_slot_299_);
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore___boxed(lean_object* v_slot_319_, lean_object* v_key_320_, lean_object* v_val_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_Evm_Storage_mapStore(v_slot_319_, v_key_320_, v_val_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Slot(lean_object* v_slot_324_, lean_object* v_outerKey_325_, lean_object* v_innerKey_326_){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = lean_evm_mstore(v___x_328_, v_innerKey_326_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec_ref_known(v___x_329_, 1);
v___x_330_ = lean_unsigned_to_nat(32u);
v___x_331_ = lean_evm_mstore(v___x_330_, v_outerKey_325_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec_ref_known(v___x_331_, 1);
v___x_332_ = lean_unsigned_to_nat(64u);
v___x_333_ = lean_evm_keccak256(v___x_328_, v___x_332_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_335_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v___x_335_ = lean_evm_mstore(v___x_328_, v_a_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v___x_336_; 
lean_dec_ref_known(v___x_335_, 1);
v___x_336_ = lean_evm_mstore(v___x_330_, v_slot_324_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v___x_337_; 
lean_dec_ref_known(v___x_336_, 1);
v___x_337_ = lean_evm_keccak256(v___x_328_, v___x_332_);
return v___x_337_;
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_a_338_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_336_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_336_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_slot_324_);
v_a_346_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_335_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_335_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_dec(v_slot_324_);
return v___x_333_;
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_slot_324_);
v_a_354_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_331_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_331_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v_outerKey_325_);
lean_dec(v_slot_324_);
v_a_362_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_329_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_329_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Slot___boxed(lean_object* v_slot_370_, lean_object* v_outerKey_371_, lean_object* v_innerKey_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_Evm_Storage_map2Slot(v_slot_370_, v_outerKey_371_, v_innerKey_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Load(lean_object* v_slot_375_, lean_object* v_k1_376_, lean_object* v_k2_377_){
_start:
{
lean_object* v___y_380_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = lean_evm_mstore(v___x_383_, v_k2_377_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec_ref_known(v___x_384_, 1);
v___x_385_ = lean_unsigned_to_nat(32u);
v___x_386_ = lean_evm_mstore(v___x_385_, v_k1_376_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec_ref_known(v___x_386_, 1);
v___x_387_ = lean_unsigned_to_nat(64u);
v___x_388_ = lean_evm_keccak256(v___x_383_, v___x_387_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_390_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = lean_evm_mstore(v___x_383_, v_a_389_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v___x_391_; 
lean_dec_ref_known(v___x_390_, 1);
v___x_391_ = lean_evm_mstore(v___x_385_, v_slot_375_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v___x_392_; 
lean_dec_ref_known(v___x_391_, 1);
v___x_392_ = lean_evm_keccak256(v___x_383_, v___x_387_);
v___y_380_ = v___x_392_;
goto v___jp_379_;
}
else
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
v_a_393_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_391_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_391_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_slot_375_);
v_a_401_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_390_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_390_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_dec(v_slot_375_);
v___y_380_ = v___x_388_;
goto v___jp_379_;
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_slot_375_);
v_a_409_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_386_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_386_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_k1_376_);
lean_dec(v_slot_375_);
v_a_417_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_384_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_384_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
v___jp_379_:
{
if (lean_obj_tag(v___y_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; 
v_a_381_ = lean_ctor_get(v___y_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v___y_380_, 1);
v___x_382_ = lean_evm_sload(v_a_381_);
return v___x_382_;
}
else
{
return v___y_380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Load___boxed(lean_object* v_slot_425_, lean_object* v_k1_426_, lean_object* v_k2_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Evm_Storage_map2Load(v_slot_425_, v_k1_426_, v_k2_427_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Store(lean_object* v_slot_430_, lean_object* v_k1_431_, lean_object* v_k2_432_, lean_object* v_val_433_){
_start:
{
lean_object* v___y_436_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_evm_mstore(v___x_447_, v_k2_432_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec_ref_known(v___x_448_, 1);
v___x_449_ = lean_unsigned_to_nat(32u);
v___x_450_ = lean_evm_mstore(v___x_449_, v_k1_431_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec_ref_known(v___x_450_, 1);
v___x_451_ = lean_unsigned_to_nat(64u);
v___x_452_ = lean_evm_keccak256(v___x_447_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_454_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_452_, 1);
v___x_454_ = lean_evm_mstore(v___x_447_, v_a_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v___x_455_; 
lean_dec_ref_known(v___x_454_, 1);
v___x_455_ = lean_evm_mstore(v___x_449_, v_slot_430_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v___x_456_; 
lean_dec_ref_known(v___x_455_, 1);
v___x_456_ = lean_evm_keccak256(v___x_447_, v___x_451_);
v___y_436_ = v___x_456_;
goto v___jp_435_;
}
else
{
lean_dec(v_val_433_);
return v___x_455_;
}
}
else
{
lean_dec(v_val_433_);
lean_dec(v_slot_430_);
return v___x_454_;
}
}
else
{
lean_dec(v_slot_430_);
v___y_436_ = v___x_452_;
goto v___jp_435_;
}
}
else
{
lean_dec(v_val_433_);
lean_dec(v_slot_430_);
return v___x_450_;
}
}
else
{
lean_dec(v_val_433_);
lean_dec(v_k1_431_);
lean_dec(v_slot_430_);
return v___x_448_;
}
v___jp_435_:
{
if (lean_obj_tag(v___y_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_438_; 
v_a_437_ = lean_ctor_get(v___y_436_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___y_436_, 1);
v___x_438_ = lean_evm_sstore(v_a_437_, v_val_433_);
return v___x_438_;
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_dec(v_val_433_);
v_a_439_ = lean_ctor_get(v___y_436_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___y_436_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___y_436_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___y_436_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_map2Store___boxed(lean_object* v_slot_457_, lean_object* v_k1_458_, lean_object* v_k2_459_, lean_object* v_val_460_, lean_object* v_a_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lean_Evm_Storage_map2Store(v_slot_457_, v_k1_458_, v_k2_459_, v_val_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___redArg(lean_object* v_n_463_){
_start:
{
lean_inc(v_n_463_);
return v_n_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___redArg___boxed(lean_object* v_n_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Evm_Storage_Var_ofSlot___redArg(v_n_464_);
lean_dec(v_n_464_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot(lean_object* v_00_u03b1_466_, lean_object* v_n_467_){
_start:
{
lean_inc(v_n_467_);
return v_n_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_ofSlot___boxed(lean_object* v_00_u03b1_468_, lean_object* v_n_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_Evm_Storage_Var_ofSlot(v_00_u03b1_468_, v_n_469_);
lean_dec(v_n_469_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___redArg(lean_object* v_v_471_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = lean_evm_sload(v_v_471_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___redArg___boxed(lean_object* v_v_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lean_Evm_Storage_Var_read___redArg(v_v_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read(lean_object* v_00_u03b1_477_, lean_object* v_v_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lean_evm_sload(v_v_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_read___boxed(lean_object* v_00_u03b1_481_, lean_object* v_v_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_Evm_Storage_Var_read(v_00_u03b1_481_, v_v_482_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___redArg(lean_object* v_v_485_, lean_object* v_val_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lean_evm_sstore(v_v_485_, v_val_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___redArg___boxed(lean_object* v_v_489_, lean_object* v_val_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lean_Evm_Storage_Var_write___redArg(v_v_489_, v_val_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write(lean_object* v_00_u03b1_493_, lean_object* v_v_494_, lean_object* v_val_495_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lean_evm_sstore(v_v_494_, v_val_495_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Var_write___boxed(lean_object* v_00_u03b1_498_, lean_object* v_v_499_, lean_object* v_val_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Evm_Storage_Var_write(v_00_u03b1_498_, v_v_499_, v_val_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___redArg(lean_object* v_n_503_){
_start:
{
lean_inc(v_n_503_);
return v_n_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___redArg___boxed(lean_object* v_n_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Evm_Storage_Map_ofSlot___redArg(v_n_504_);
lean_dec(v_n_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot(lean_object* v_00_u03b1_506_, lean_object* v_n_507_){
_start:
{
lean_inc(v_n_507_);
return v_n_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_ofSlot___boxed(lean_object* v_00_u03b1_508_, lean_object* v_n_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Evm_Storage_Map_ofSlot(v_00_u03b1_508_, v_n_509_);
lean_dec(v_n_509_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___redArg(lean_object* v_m_511_, lean_object* v_key_512_){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_evm_mstore(v___x_514_, v_key_512_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
lean_dec_ref_known(v___x_515_, 1);
v___x_516_ = lean_unsigned_to_nat(32u);
v___x_517_ = lean_evm_mstore(v___x_516_, v_m_511_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_dec_ref_known(v___x_517_, 1);
v___x_518_ = lean_unsigned_to_nat(64u);
v___x_519_ = lean_evm_keccak256(v___x_514_, v___x_518_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_521_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_519_, 1);
v___x_521_ = lean_evm_sload(v_a_520_);
return v___x_521_;
}
else
{
return v___x_519_;
}
}
else
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
v_a_522_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_517_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_517_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec(v_m_511_);
v_a_530_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_515_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_515_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___redArg___boxed(lean_object* v_m_538_, lean_object* v_key_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lean_Evm_Storage_Map_get___redArg(v_m_538_, v_key_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get(lean_object* v_00_u03b1_542_, lean_object* v_m_543_, lean_object* v_key_544_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = lean_evm_mstore(v___x_546_, v_key_544_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v___x_548_; lean_object* v___x_549_; 
lean_dec_ref_known(v___x_547_, 1);
v___x_548_ = lean_unsigned_to_nat(32u);
v___x_549_ = lean_evm_mstore(v___x_548_, v_m_543_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v___x_550_; lean_object* v___x_551_; 
lean_dec_ref_known(v___x_549_, 1);
v___x_550_ = lean_unsigned_to_nat(64u);
v___x_551_ = lean_evm_keccak256(v___x_546_, v___x_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
v___x_553_ = lean_evm_sload(v_a_552_);
return v___x_553_;
}
else
{
return v___x_551_;
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
v_a_554_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_549_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_549_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_m_543_);
v_a_562_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_547_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_547_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_get___boxed(lean_object* v_00_u03b1_570_, lean_object* v_m_571_, lean_object* v_key_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Evm_Storage_Map_get(v_00_u03b1_570_, v_m_571_, v_key_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___redArg(lean_object* v_m_575_, lean_object* v_key_576_, lean_object* v_val_577_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_580_ = lean_evm_mstore(v___x_579_, v_key_576_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; 
lean_dec_ref_known(v___x_580_, 1);
v___x_581_ = lean_unsigned_to_nat(32u);
v___x_582_ = lean_evm_mstore(v___x_581_, v_m_575_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec_ref_known(v___x_582_, 1);
v___x_583_ = lean_unsigned_to_nat(64u);
v___x_584_ = lean_evm_keccak256(v___x_579_, v___x_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = lean_evm_sstore(v_a_585_, v_val_577_);
return v___x_586_;
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec(v_val_577_);
v_a_587_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_584_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_584_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
else
{
lean_dec(v_val_577_);
return v___x_582_;
}
}
else
{
lean_dec(v_val_577_);
lean_dec(v_m_575_);
return v___x_580_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___redArg___boxed(lean_object* v_m_595_, lean_object* v_key_596_, lean_object* v_val_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_Evm_Storage_Map_set___redArg(v_m_595_, v_key_596_, v_val_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set(lean_object* v_00_u03b1_600_, lean_object* v_m_601_, lean_object* v_key_602_, lean_object* v_val_603_){
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
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_set___boxed(lean_object* v_00_u03b1_621_, lean_object* v_m_622_, lean_object* v_key_623_, lean_object* v_val_624_, lean_object* v_a_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_Evm_Storage_Map_set(v_00_u03b1_621_, v_m_622_, v_key_623_, v_val_624_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___redArg(lean_object* v_m_627_, lean_object* v_key_628_, lean_object* v_f_629_){
_start:
{
lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_651_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_unsigned_to_nat(0u);
lean_inc(v_key_628_);
v___x_663_ = lean_evm_mstore(v___x_662_, v_key_628_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec_ref_known(v___x_663_, 1);
v___x_664_ = lean_unsigned_to_nat(32u);
lean_inc(v_m_627_);
v___x_665_ = lean_evm_mstore(v___x_664_, v_m_627_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v___x_666_; lean_object* v___x_667_; 
lean_dec_ref_known(v___x_665_, 1);
v___x_666_ = lean_unsigned_to_nat(64u);
v___x_667_ = lean_evm_keccak256(v___x_662_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_669_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v___x_667_, 1);
v___x_669_ = lean_evm_sload(v_a_668_);
v___y_651_ = v___x_669_;
goto v___jp_650_;
}
else
{
v___y_651_ = v___x_667_;
goto v___jp_650_;
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v_f_629_);
lean_dec(v_key_628_);
lean_dec(v_m_627_);
v_a_670_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_665_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_665_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v_f_629_);
lean_dec(v_key_628_);
lean_dec(v_m_627_);
v_a_678_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_663_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_663_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
v___jp_631_:
{
if (lean_obj_tag(v___y_633_) == 0)
{
lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
v_isSharedCheck_640_ = !lean_is_exclusive(v___y_633_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v___y_633_, 0);
lean_dec(v_unused_641_);
v___x_635_ = v___y_633_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_dec(v___y_633_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 0, v___y_632_);
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___y_632_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v___y_632_);
v_a_642_ = lean_ctor_get(v___y_633_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___y_633_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___y_633_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___y_633_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
v___jp_650_:
{
if (lean_obj_tag(v___y_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_a_652_ = lean_ctor_get(v___y_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v___y_651_, 1);
v___x_653_ = lean_apply_1(v_f_629_, v_a_652_);
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = lean_evm_mstore(v___x_654_, v_key_628_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; 
lean_dec_ref_known(v___x_655_, 1);
v___x_656_ = lean_unsigned_to_nat(32u);
v___x_657_ = lean_evm_mstore(v___x_656_, v_m_627_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec_ref_known(v___x_657_, 1);
v___x_658_ = lean_unsigned_to_nat(64u);
v___x_659_ = lean_evm_keccak256(v___x_654_, v___x_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_661_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v___x_659_, 1);
lean_inc(v___x_653_);
v___x_661_ = lean_evm_sstore(v_a_660_, v___x_653_);
v___y_632_ = v___x_653_;
v___y_633_ = v___x_661_;
goto v___jp_631_;
}
else
{
lean_dec(v___x_653_);
return v___x_659_;
}
}
else
{
v___y_632_ = v___x_653_;
v___y_633_ = v___x_657_;
goto v___jp_631_;
}
}
else
{
lean_dec(v_m_627_);
v___y_632_ = v___x_653_;
v___y_633_ = v___x_655_;
goto v___jp_631_;
}
}
else
{
lean_dec_ref(v_f_629_);
lean_dec(v_key_628_);
lean_dec(v_m_627_);
return v___y_651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___redArg___boxed(lean_object* v_m_686_, lean_object* v_key_687_, lean_object* v_f_688_, lean_object* v_a_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_Evm_Storage_Map_modify___redArg(v_m_686_, v_key_687_, v_f_688_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify(lean_object* v_00_u03b1_691_, lean_object* v_m_692_, lean_object* v_key_693_, lean_object* v_f_694_){
_start:
{
lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_716_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = lean_unsigned_to_nat(0u);
lean_inc(v_key_693_);
v___x_728_ = lean_evm_mstore(v___x_727_, v_key_693_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec_ref_known(v___x_728_, 1);
v___x_729_ = lean_unsigned_to_nat(32u);
lean_inc(v_m_692_);
v___x_730_ = lean_evm_mstore(v___x_729_, v_m_692_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec_ref_known(v___x_730_, 1);
v___x_731_ = lean_unsigned_to_nat(64u);
v___x_732_ = lean_evm_keccak256(v___x_727_, v___x_731_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_734_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_732_, 1);
v___x_734_ = lean_evm_sload(v_a_733_);
v___y_716_ = v___x_734_;
goto v___jp_715_;
}
else
{
v___y_716_ = v___x_732_;
goto v___jp_715_;
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec_ref(v_f_694_);
lean_dec(v_key_693_);
lean_dec(v_m_692_);
v_a_735_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_730_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_730_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec_ref(v_f_694_);
lean_dec(v_key_693_);
lean_dec(v_m_692_);
v_a_743_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_728_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_728_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
v___jp_696_:
{
if (lean_obj_tag(v___y_698_) == 0)
{
lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_isSharedCheck_705_ = !lean_is_exclusive(v___y_698_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; 
v_unused_706_ = lean_ctor_get(v___y_698_, 0);
lean_dec(v_unused_706_);
v___x_700_ = v___y_698_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_dec(v___y_698_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___y_697_);
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___y_697_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
lean_dec(v___y_697_);
v_a_707_ = lean_ctor_get(v___y_698_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___y_698_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___y_698_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___y_698_);
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
v___jp_715_:
{
if (lean_obj_tag(v___y_716_) == 0)
{
lean_object* v_a_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_a_717_ = lean_ctor_get(v___y_716_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___y_716_, 1);
v___x_718_ = lean_apply_1(v_f_694_, v_a_717_);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = lean_evm_mstore(v___x_719_, v_key_693_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_dec_ref_known(v___x_720_, 1);
v___x_721_ = lean_unsigned_to_nat(32u);
v___x_722_ = lean_evm_mstore(v___x_721_, v_m_692_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; 
lean_dec_ref_known(v___x_722_, 1);
v___x_723_ = lean_unsigned_to_nat(64u);
v___x_724_ = lean_evm_keccak256(v___x_719_, v___x_723_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
lean_inc(v___x_718_);
v___x_726_ = lean_evm_sstore(v_a_725_, v___x_718_);
v___y_697_ = v___x_718_;
v___y_698_ = v___x_726_;
goto v___jp_696_;
}
else
{
lean_dec(v___x_718_);
return v___x_724_;
}
}
else
{
v___y_697_ = v___x_718_;
v___y_698_ = v___x_722_;
goto v___jp_696_;
}
}
else
{
lean_dec(v_m_692_);
v___y_697_ = v___x_718_;
v___y_698_ = v___x_720_;
goto v___jp_696_;
}
}
else
{
lean_dec_ref(v_f_694_);
lean_dec(v_key_693_);
lean_dec(v_m_692_);
return v___y_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map_modify___boxed(lean_object* v_00_u03b1_751_, lean_object* v_m_752_, lean_object* v_key_753_, lean_object* v_f_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_Evm_Storage_Map_modify(v_00_u03b1_751_, v_m_752_, v_key_753_, v_f_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___redArg(lean_object* v_n_757_){
_start:
{
lean_inc(v_n_757_);
return v_n_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___redArg___boxed(lean_object* v_n_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_Evm_Storage_Map2_ofSlot___redArg(v_n_758_);
lean_dec(v_n_758_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot(lean_object* v_00_u03b1_760_, lean_object* v_n_761_){
_start:
{
lean_inc(v_n_761_);
return v_n_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_ofSlot___boxed(lean_object* v_00_u03b1_762_, lean_object* v_n_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_Evm_Storage_Map2_ofSlot(v_00_u03b1_762_, v_n_763_);
lean_dec(v_n_763_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___redArg(lean_object* v_m_765_, lean_object* v_k1_766_, lean_object* v_k2_767_){
_start:
{
lean_object* v___y_770_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_unsigned_to_nat(0u);
v___x_774_ = lean_evm_mstore(v___x_773_, v_k2_767_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; 
lean_dec_ref_known(v___x_774_, 1);
v___x_775_ = lean_unsigned_to_nat(32u);
v___x_776_ = lean_evm_mstore(v___x_775_, v_k1_766_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v___x_777_; lean_object* v___x_778_; 
lean_dec_ref_known(v___x_776_, 1);
v___x_777_ = lean_unsigned_to_nat(64u);
v___x_778_ = lean_evm_keccak256(v___x_773_, v___x_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_780_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
v___x_780_ = lean_evm_mstore(v___x_773_, v_a_779_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v___x_781_; 
lean_dec_ref_known(v___x_780_, 1);
v___x_781_ = lean_evm_mstore(v___x_775_, v_m_765_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v___x_782_; 
lean_dec_ref_known(v___x_781_, 1);
v___x_782_ = lean_evm_keccak256(v___x_773_, v___x_777_);
v___y_770_ = v___x_782_;
goto v___jp_769_;
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_a_783_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_781_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_781_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_m_765_);
v_a_791_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_780_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_780_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_dec(v_m_765_);
v___y_770_ = v___x_778_;
goto v___jp_769_;
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec(v_m_765_);
v_a_799_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_776_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_776_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_k1_766_);
lean_dec(v_m_765_);
v_a_807_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_774_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_774_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
v___jp_769_:
{
if (lean_obj_tag(v___y_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___y_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___y_770_, 1);
v___x_772_ = lean_evm_sload(v_a_771_);
return v___x_772_;
}
else
{
return v___y_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___redArg___boxed(lean_object* v_m_815_, lean_object* v_k1_816_, lean_object* v_k2_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_Evm_Storage_Map2_get___redArg(v_m_815_, v_k1_816_, v_k2_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get(lean_object* v_00_u03b1_820_, lean_object* v_m_821_, lean_object* v_k1_822_, lean_object* v_k2_823_){
_start:
{
lean_object* v___y_826_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = lean_evm_mstore(v___x_829_, v_k2_823_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec_ref_known(v___x_830_, 1);
v___x_831_ = lean_unsigned_to_nat(32u);
v___x_832_ = lean_evm_mstore(v___x_831_, v_k1_822_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; 
lean_dec_ref_known(v___x_832_, 1);
v___x_833_ = lean_unsigned_to_nat(64u);
v___x_834_ = lean_evm_keccak256(v___x_829_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_836_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_834_, 1);
v___x_836_ = lean_evm_mstore(v___x_829_, v_a_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v___x_837_; 
lean_dec_ref_known(v___x_836_, 1);
v___x_837_ = lean_evm_mstore(v___x_831_, v_m_821_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v___x_838_; 
lean_dec_ref_known(v___x_837_, 1);
v___x_838_ = lean_evm_keccak256(v___x_829_, v___x_833_);
v___y_826_ = v___x_838_;
goto v___jp_825_;
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_837_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_837_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec(v_m_821_);
v_a_847_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_836_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_836_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
else
{
lean_dec(v_m_821_);
v___y_826_ = v___x_834_;
goto v___jp_825_;
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec(v_m_821_);
v_a_855_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_832_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_832_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_dec(v_k1_822_);
lean_dec(v_m_821_);
v_a_863_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_830_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_830_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
v___jp_825_:
{
if (lean_obj_tag(v___y_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_828_; 
v_a_827_ = lean_ctor_get(v___y_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___y_826_, 1);
v___x_828_ = lean_evm_sload(v_a_827_);
return v___x_828_;
}
else
{
return v___y_826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_get___boxed(lean_object* v_00_u03b1_871_, lean_object* v_m_872_, lean_object* v_k1_873_, lean_object* v_k2_874_, lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_Evm_Storage_Map2_get(v_00_u03b1_871_, v_m_872_, v_k1_873_, v_k2_874_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___redArg(lean_object* v_m_877_, lean_object* v_k1_878_, lean_object* v_k2_879_, lean_object* v_val_880_){
_start:
{
lean_object* v___y_883_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = lean_evm_mstore(v___x_894_, v_k2_879_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec_ref_known(v___x_895_, 1);
v___x_896_ = lean_unsigned_to_nat(32u);
v___x_897_ = lean_evm_mstore(v___x_896_, v_k1_878_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec_ref_known(v___x_897_, 1);
v___x_898_ = lean_unsigned_to_nat(64u);
v___x_899_ = lean_evm_keccak256(v___x_894_, v___x_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = lean_evm_mstore(v___x_894_, v_a_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v___x_902_; 
lean_dec_ref_known(v___x_901_, 1);
v___x_902_ = lean_evm_mstore(v___x_896_, v_m_877_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v___x_903_; 
lean_dec_ref_known(v___x_902_, 1);
v___x_903_ = lean_evm_keccak256(v___x_894_, v___x_898_);
v___y_883_ = v___x_903_;
goto v___jp_882_;
}
else
{
lean_dec(v_val_880_);
return v___x_902_;
}
}
else
{
lean_dec(v_val_880_);
lean_dec(v_m_877_);
return v___x_901_;
}
}
else
{
lean_dec(v_m_877_);
v___y_883_ = v___x_899_;
goto v___jp_882_;
}
}
else
{
lean_dec(v_val_880_);
lean_dec(v_m_877_);
return v___x_897_;
}
}
else
{
lean_dec(v_val_880_);
lean_dec(v_k1_878_);
lean_dec(v_m_877_);
return v___x_895_;
}
v___jp_882_:
{
if (lean_obj_tag(v___y_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; 
v_a_884_ = lean_ctor_get(v___y_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___y_883_, 1);
v___x_885_ = lean_evm_sstore(v_a_884_, v_val_880_);
return v___x_885_;
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_val_880_);
v_a_886_ = lean_ctor_get(v___y_883_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___y_883_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___y_883_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___y_883_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___redArg___boxed(lean_object* v_m_904_, lean_object* v_k1_905_, lean_object* v_k2_906_, lean_object* v_val_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_Evm_Storage_Map2_set___redArg(v_m_904_, v_k1_905_, v_k2_906_, v_val_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set(lean_object* v_00_u03b1_910_, lean_object* v_m_911_, lean_object* v_k1_912_, lean_object* v_k2_913_, lean_object* v_val_914_){
_start:
{
lean_object* v___y_917_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_unsigned_to_nat(0u);
v___x_929_ = lean_evm_mstore(v___x_928_, v_k2_913_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_dec_ref_known(v___x_929_, 1);
v___x_930_ = lean_unsigned_to_nat(32u);
v___x_931_ = lean_evm_mstore(v___x_930_, v_k1_912_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec_ref_known(v___x_931_, 1);
v___x_932_ = lean_unsigned_to_nat(64u);
v___x_933_ = lean_evm_keccak256(v___x_928_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_935_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v___x_935_ = lean_evm_mstore(v___x_928_, v_a_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v___x_936_; 
lean_dec_ref_known(v___x_935_, 1);
v___x_936_ = lean_evm_mstore(v___x_930_, v_m_911_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v___x_937_; 
lean_dec_ref_known(v___x_936_, 1);
v___x_937_ = lean_evm_keccak256(v___x_928_, v___x_932_);
v___y_917_ = v___x_937_;
goto v___jp_916_;
}
else
{
lean_dec(v_val_914_);
return v___x_936_;
}
}
else
{
lean_dec(v_val_914_);
lean_dec(v_m_911_);
return v___x_935_;
}
}
else
{
lean_dec(v_m_911_);
v___y_917_ = v___x_933_;
goto v___jp_916_;
}
}
else
{
lean_dec(v_val_914_);
lean_dec(v_m_911_);
return v___x_931_;
}
}
else
{
lean_dec(v_val_914_);
lean_dec(v_k1_912_);
lean_dec(v_m_911_);
return v___x_929_;
}
v___jp_916_:
{
if (lean_obj_tag(v___y_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; 
v_a_918_ = lean_ctor_get(v___y_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___y_917_, 1);
v___x_919_ = lean_evm_sstore(v_a_918_, v_val_914_);
return v___x_919_;
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec(v_val_914_);
v_a_920_ = lean_ctor_get(v___y_917_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___y_917_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___y_917_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___y_917_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Map2_set___boxed(lean_object* v_00_u03b1_938_, lean_object* v_m_939_, lean_object* v_k1_940_, lean_object* v_k2_941_, lean_object* v_val_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Evm_Storage_Map2_set(v_00_u03b1_938_, v_m_939_, v_k1_940_, v_k2_941_, v_val_942_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___redArg(lean_object* v_n_945_){
_start:
{
lean_inc(v_n_945_);
return v_n_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___redArg___boxed(lean_object* v_n_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_Evm_Storage_Array_ofSlot___redArg(v_n_946_);
lean_dec(v_n_946_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot(lean_object* v_00_u03b1_948_, lean_object* v_n_949_){
_start:
{
lean_inc(v_n_949_);
return v_n_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_ofSlot___boxed(lean_object* v_00_u03b1_950_, lean_object* v_n_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_Evm_Storage_Array_ofSlot(v_00_u03b1_950_, v_n_951_);
lean_dec(v_n_951_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___redArg(lean_object* v_a_953_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = lean_evm_sload(v_a_953_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___redArg___boxed(lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lean_Evm_Storage_Array_length___redArg(v_a_956_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length(lean_object* v_00_u03b1_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = lean_evm_sload(v_a_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_length___boxed(lean_object* v_00_u03b1_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_Evm_Storage_Array_length(v_00_u03b1_963_, v_a_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___redArg(lean_object* v_a_967_, lean_object* v_index_968_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = lean_evm_mstore(v___x_970_, v_a_967_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; 
lean_dec_ref_known(v___x_971_, 1);
v___x_972_ = lean_unsigned_to_nat(32u);
v___x_973_ = lean_evm_keccak256(v___x_970_, v___x_972_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_982_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_982_ == 0)
{
v___x_976_ = v___x_973_;
v_isShared_977_ = v_isSharedCheck_982_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_973_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_982_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = lean_nat_add(v_a_974_, v_index_968_);
lean_dec(v_a_974_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_978_);
v___x_980_ = v___x_976_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
else
{
return v___x_973_;
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
v_a_983_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_971_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_971_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___redArg___boxed(lean_object* v_a_991_, lean_object* v_index_992_, lean_object* v_a_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_Evm_Storage_Array_elemSlot___redArg(v_a_991_, v_index_992_);
lean_dec(v_index_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot(lean_object* v_00_u03b1_995_, lean_object* v_a_996_, lean_object* v_index_997_){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_unsigned_to_nat(0u);
v___x_1000_ = lean_evm_mstore(v___x_999_, v_a_996_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_dec_ref_known(v___x_1000_, 1);
v___x_1001_ = lean_unsigned_to_nat(32u);
v___x_1002_ = lean_evm_keccak256(v___x_999_, v___x_1001_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = lean_nat_add(v_a_1003_, v_index_997_);
lean_dec(v_a_1003_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
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
return v___x_1002_;
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
v_a_1012_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_1000_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_1000_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_elemSlot___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_a_1021_, lean_object* v_index_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lean_Evm_Storage_Array_elemSlot(v_00_u03b1_1020_, v_a_1021_, v_index_1022_);
lean_dec(v_index_1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___redArg(lean_object* v_a_1025_, lean_object* v_index_1026_){
_start:
{
lean_object* v___x_1028_; 
lean_inc(v_a_1025_);
v___x_1028_ = lean_evm_sload(v_a_1025_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1055_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1055_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1055_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
uint8_t v___x_1033_; 
v___x_1033_ = lean_nat_dec_le(v_a_1029_, v_index_1026_);
lean_dec(v_a_1029_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_del_object(v___x_1031_);
v___x_1034_ = lean_unsigned_to_nat(0u);
v___x_1035_ = lean_evm_mstore(v___x_1034_, v_a_1025_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
lean_dec_ref_known(v___x_1035_, 1);
v___x_1036_ = lean_unsigned_to_nat(32u);
v___x_1037_ = lean_evm_keccak256(v___x_1034_, v___x_1036_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1039_ = lean_nat_add(v_a_1038_, v_index_1026_);
lean_dec(v_a_1038_);
v___x_1040_ = lean_evm_sload(v___x_1039_);
return v___x_1040_;
}
else
{
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; 
v_a_1041_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1042_ = lean_evm_sload(v_a_1041_);
return v___x_1042_;
}
else
{
return v___x_1037_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1035_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1035_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
else
{
lean_object* v___x_1051_; lean_object* v___x_1053_; 
lean_dec(v_a_1025_);
v___x_1051_ = lean_unsigned_to_nat(0u);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1051_);
v___x_1053_ = v___x_1031_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1051_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
else
{
lean_dec(v_a_1025_);
return v___x_1028_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___redArg___boxed(lean_object* v_a_1056_, lean_object* v_index_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lean_Evm_Storage_Array_get___redArg(v_a_1056_, v_index_1057_);
lean_dec(v_index_1057_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get(lean_object* v_00_u03b1_1060_, lean_object* v_a_1061_, lean_object* v_index_1062_){
_start:
{
lean_object* v___x_1064_; 
lean_inc(v_a_1061_);
v___x_1064_ = lean_evm_sload(v_a_1061_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1091_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1067_ = v___x_1064_;
v_isShared_1068_ = v_isSharedCheck_1091_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1091_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
uint8_t v___x_1069_; 
v___x_1069_ = lean_nat_dec_le(v_a_1065_, v_index_1062_);
lean_dec(v_a_1065_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
lean_del_object(v___x_1067_);
v___x_1070_ = lean_unsigned_to_nat(0u);
v___x_1071_ = lean_evm_mstore(v___x_1070_, v_a_1061_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec_ref_known(v___x_1071_, 1);
v___x_1072_ = lean_unsigned_to_nat(32u);
v___x_1073_ = lean_evm_keccak256(v___x_1070_, v___x_1072_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
v___x_1075_ = lean_nat_add(v_a_1074_, v_index_1062_);
lean_dec(v_a_1074_);
v___x_1076_ = lean_evm_sload(v___x_1075_);
return v___x_1076_;
}
else
{
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1078_; 
v_a_1077_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1073_, 1);
v___x_1078_ = lean_evm_sload(v_a_1077_);
return v___x_1078_;
}
else
{
return v___x_1073_;
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1071_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1071_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
else
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
lean_dec(v_a_1061_);
v___x_1087_ = lean_unsigned_to_nat(0u);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1087_);
v___x_1089_ = v___x_1067_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
else
{
lean_dec(v_a_1061_);
return v___x_1064_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_get___boxed(lean_object* v_00_u03b1_1092_, lean_object* v_a_1093_, lean_object* v_index_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lean_Evm_Storage_Array_get(v_00_u03b1_1092_, v_a_1093_, v_index_1094_);
lean_dec(v_index_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___redArg(lean_object* v_a_1097_, lean_object* v_val_1098_){
_start:
{
lean_object* v___x_1100_; 
lean_inc(v_a_1097_);
v___x_1100_ = lean_evm_sload(v_a_1097_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v_a_1103_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
lean_dec_ref_known(v___x_1100_, 1);
v___x_1108_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_1097_);
v___x_1109_ = lean_evm_mstore(v___x_1108_, v_a_1097_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
lean_dec_ref_known(v___x_1109_, 1);
v___x_1110_ = lean_unsigned_to_nat(32u);
v___x_1111_ = lean_evm_keccak256(v___x_1108_, v___x_1110_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1113_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_a_1112_);
lean_dec_ref_known(v___x_1111_, 1);
v___x_1113_ = lean_nat_add(v_a_1112_, v_a_1101_);
lean_dec(v_a_1112_);
v_a_1103_ = v___x_1113_;
goto v___jp_1102_;
}
else
{
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1114_; 
v_a_1114_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1111_, 1);
v_a_1103_ = v_a_1114_;
goto v___jp_1102_;
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v_a_1101_);
lean_dec(v_val_1098_);
lean_dec(v_a_1097_);
v_a_1115_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1111_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1111_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
}
else
{
lean_dec(v_a_1101_);
lean_dec(v_val_1098_);
lean_dec(v_a_1097_);
return v___x_1109_;
}
v___jp_1102_:
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_evm_sstore(v_a_1103_, v_val_1098_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec_ref_known(v___x_1104_, 1);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_add(v_a_1101_, v___x_1105_);
lean_dec(v_a_1101_);
v___x_1107_ = lean_evm_sstore(v_a_1097_, v___x_1106_);
return v___x_1107_;
}
else
{
lean_dec(v_a_1101_);
lean_dec(v_a_1097_);
return v___x_1104_;
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec(v_val_1098_);
lean_dec(v_a_1097_);
v_a_1123_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1100_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1100_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___redArg___boxed(lean_object* v_a_1131_, lean_object* v_val_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lean_Evm_Storage_Array_push___redArg(v_a_1131_, v_val_1132_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push(lean_object* v_00_u03b1_1135_, lean_object* v_a_1136_, lean_object* v_val_1137_){
_start:
{
lean_object* v___x_1139_; 
lean_inc(v_a_1136_);
v___x_1139_ = lean_evm_sload(v_a_1136_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v_a_1142_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1147_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_1136_);
v___x_1148_ = lean_evm_mstore(v___x_1147_, v_a_1136_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_dec_ref_known(v___x_1148_, 1);
v___x_1149_ = lean_unsigned_to_nat(32u);
v___x_1150_ = lean_evm_keccak256(v___x_1147_, v___x_1149_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1152_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_a_1151_);
lean_dec_ref_known(v___x_1150_, 1);
v___x_1152_ = lean_nat_add(v_a_1151_, v_a_1140_);
lean_dec(v_a_1151_);
v_a_1142_ = v___x_1152_;
goto v___jp_1141_;
}
else
{
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1153_; 
v_a_1153_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_a_1153_);
lean_dec_ref_known(v___x_1150_, 1);
v_a_1142_ = v_a_1153_;
goto v___jp_1141_;
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_a_1140_);
lean_dec(v_val_1137_);
lean_dec(v_a_1136_);
v_a_1154_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1150_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1150_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
else
{
lean_dec(v_a_1140_);
lean_dec(v_val_1137_);
lean_dec(v_a_1136_);
return v___x_1148_;
}
v___jp_1141_:
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_evm_sstore(v_a_1142_, v_val_1137_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_dec_ref_known(v___x_1143_, 1);
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = lean_nat_add(v_a_1140_, v___x_1144_);
lean_dec(v_a_1140_);
v___x_1146_ = lean_evm_sstore(v_a_1136_, v___x_1145_);
return v___x_1146_;
}
else
{
lean_dec(v_a_1140_);
lean_dec(v_a_1136_);
return v___x_1143_;
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec(v_val_1137_);
lean_dec(v_a_1136_);
v_a_1162_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1139_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1139_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_push___boxed(lean_object* v_00_u03b1_1170_, lean_object* v_a_1171_, lean_object* v_val_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lean_Evm_Storage_Array_push(v_00_u03b1_1170_, v_a_1171_, v_val_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___redArg(lean_object* v_a_1175_, lean_object* v_index_1176_, lean_object* v_val_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = lean_evm_mstore(v___x_1179_, v_a_1175_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
lean_dec_ref_known(v___x_1180_, 1);
v___x_1181_ = lean_unsigned_to_nat(32u);
v___x_1182_ = lean_evm_keccak256(v___x_1179_, v___x_1181_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1184_ = lean_nat_add(v_a_1183_, v_index_1176_);
lean_dec(v_a_1183_);
v___x_1185_ = lean_evm_sstore(v___x_1184_, v_val_1177_);
return v___x_1185_;
}
else
{
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1187_; 
v_a_1186_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1186_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1187_ = lean_evm_sstore(v_a_1186_, v_val_1177_);
return v___x_1187_;
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec(v_val_1177_);
v_a_1188_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1182_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1182_);
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
else
{
lean_dec(v_val_1177_);
return v___x_1180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___redArg___boxed(lean_object* v_a_1196_, lean_object* v_index_1197_, lean_object* v_val_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Evm_Storage_Array_set___redArg(v_a_1196_, v_index_1197_, v_val_1198_);
lean_dec(v_index_1197_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set(lean_object* v_00_u03b1_1201_, lean_object* v_a_1202_, lean_object* v_index_1203_, lean_object* v_val_1204_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = lean_unsigned_to_nat(0u);
v___x_1207_ = lean_evm_mstore(v___x_1206_, v_a_1202_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
lean_dec_ref_known(v___x_1207_, 1);
v___x_1208_ = lean_unsigned_to_nat(32u);
v___x_1209_ = lean_evm_keccak256(v___x_1206_, v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = lean_nat_add(v_a_1210_, v_index_1203_);
lean_dec(v_a_1210_);
v___x_1212_ = lean_evm_sstore(v___x_1211_, v_val_1204_);
return v___x_1212_;
}
else
{
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1214_; 
v_a_1213_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1214_ = lean_evm_sstore(v_a_1213_, v_val_1204_);
return v___x_1214_;
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec(v_val_1204_);
v_a_1215_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1209_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1209_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
else
{
lean_dec(v_val_1204_);
return v___x_1207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_Array_set___boxed(lean_object* v_00_u03b1_1223_, lean_object* v_a_1224_, lean_object* v_index_1225_, lean_object* v_val_1226_, lean_object* v_a_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lean_Evm_Storage_Array_set(v_00_u03b1_1223_, v_a_1224_, v_index_1225_, v_val_1226_);
lean_dec(v_index_1225_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender(){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_evm_caller();
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender___boxed(lean_object* v_a_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lean_Evm_Env_sender();
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value(){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = lean_evm_callvalue();
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value___boxed(lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lean_Evm_Env_value();
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp(){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = lean_evm_timestamp();
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Evm_Env_blockTimestamp();
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber(){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = lean_evm_number();
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object* v_a_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lean_Evm_Env_blockNumber();
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance(){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_evm_selfbalance();
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object* v_a_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_Evm_Env_balance();
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require(uint8_t v_cond_1249_){
_start:
{
if (v_cond_1249_ == 0)
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = lean_evm_revert(v___x_1251_, v___x_1251_);
return v___x_1252_;
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_box(0);
v___x_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
return v___x_1254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require___boxed(lean_object* v_cond_1255_, lean_object* v_a_1256_){
_start:
{
uint8_t v_cond_boxed_1257_; lean_object* v_res_1258_; 
v_cond_boxed_1257_ = lean_unbox(v_cond_1255_);
v_res_1258_ = l_Lean_Evm_require(v_cond_boxed_1257_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg(uint8_t v_cond_1259_){
_start:
{
if (v_cond_1259_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = lean_unsigned_to_nat(0u);
v___x_1262_ = lean_evm_revert(v___x_1261_, v___x_1261_);
return v___x_1262_;
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = lean_box(0);
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
return v___x_1264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg___boxed(lean_object* v_cond_1265_, lean_object* v_a_1266_){
_start:
{
uint8_t v_cond_boxed_1267_; lean_object* v_res_1268_; 
v_cond_boxed_1267_ = lean_unbox(v_cond_1265_);
v_res_1268_ = l_Lean_Evm_requireMsg___redArg(v_cond_boxed_1267_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg(uint8_t v_cond_1269_, lean_object* v___reason_1270_){
_start:
{
if (v_cond_1269_ == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = lean_unsigned_to_nat(0u);
v___x_1273_ = lean_evm_revert(v___x_1272_, v___x_1272_);
return v___x_1273_;
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = lean_box(0);
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
return v___x_1275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___boxed(lean_object* v_cond_1276_, lean_object* v___reason_1277_, lean_object* v_a_1278_){
_start:
{
uint8_t v_cond_boxed_1279_; lean_object* v_res_1280_; 
v_cond_boxed_1279_ = lean_unbox(v_cond_1276_);
v_res_1280_ = l_Lean_Evm_requireMsg(v_cond_boxed_1279_, v___reason_1277_);
lean_dec_ref(v___reason_1277_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous(lean_object* v_offset_1281_, lean_object* v_dataLen_1282_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_evm_log0(v_offset_1281_, v_dataLen_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous___boxed(lean_object* v_offset_1285_, lean_object* v_dataLen_1286_, lean_object* v_a_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_Evm_Event_anonymous(v_offset_1285_, v_dataLen_1286_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1(lean_object* v_topic_1289_, lean_object* v_offset_1290_, lean_object* v_dataLen_1291_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = lean_evm_log1(v_topic_1289_, v_offset_1290_, v_dataLen_1291_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1___boxed(lean_object* v_topic_1294_, lean_object* v_offset_1295_, lean_object* v_dataLen_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Lean_Evm_Event_emit1(v_topic_1294_, v_offset_1295_, v_dataLen_1296_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2(lean_object* v_t1_1299_, lean_object* v_t2_1300_, lean_object* v_offset_1301_, lean_object* v_dataLen_1302_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_evm_log2(v_t1_1299_, v_t2_1300_, v_offset_1301_, v_dataLen_1302_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2___boxed(lean_object* v_t1_1305_, lean_object* v_t2_1306_, lean_object* v_offset_1307_, lean_object* v_dataLen_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lean_Evm_Event_emit2(v_t1_1305_, v_t2_1306_, v_offset_1307_, v_dataLen_1308_);
return v_res_1310_;
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
