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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender(){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = lean_evm_caller();
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender___boxed(lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Evm_Env_sender();
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value(){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_evm_callvalue();
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value___boxed(lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Evm_Env_value();
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp(){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_evm_timestamp();
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object* v_a_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lean_Evm_Env_blockTimestamp();
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber(){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = lean_evm_number();
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_Evm_Env_blockNumber();
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance(){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_evm_selfbalance();
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_Evm_Env_balance();
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require(uint8_t v_cond_344_){
_start:
{
if (v_cond_344_ == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_evm_revert(v___x_346_, v___x_346_);
return v___x_347_;
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require___boxed(lean_object* v_cond_350_, lean_object* v_a_351_){
_start:
{
uint8_t v_cond_boxed_352_; lean_object* v_res_353_; 
v_cond_boxed_352_ = lean_unbox(v_cond_350_);
v_res_353_ = l_Lean_Evm_require(v_cond_boxed_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg(uint8_t v_cond_354_){
_start:
{
if (v_cond_354_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = lean_evm_revert(v___x_356_, v___x_356_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_box(0);
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg___boxed(lean_object* v_cond_360_, lean_object* v_a_361_){
_start:
{
uint8_t v_cond_boxed_362_; lean_object* v_res_363_; 
v_cond_boxed_362_ = lean_unbox(v_cond_360_);
v_res_363_ = l_Lean_Evm_requireMsg___redArg(v_cond_boxed_362_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg(uint8_t v_cond_364_, lean_object* v___reason_365_){
_start:
{
if (v_cond_364_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_evm_revert(v___x_367_, v___x_367_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_box(0);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___boxed(lean_object* v_cond_371_, lean_object* v___reason_372_, lean_object* v_a_373_){
_start:
{
uint8_t v_cond_boxed_374_; lean_object* v_res_375_; 
v_cond_boxed_374_ = lean_unbox(v_cond_371_);
v_res_375_ = l_Lean_Evm_requireMsg(v_cond_boxed_374_, v___reason_372_);
lean_dec_ref(v___reason_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous(lean_object* v_offset_376_, lean_object* v_dataLen_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_evm_log0(v_offset_376_, v_dataLen_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous___boxed(lean_object* v_offset_380_, lean_object* v_dataLen_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Evm_Event_anonymous(v_offset_380_, v_dataLen_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1(lean_object* v_topic_384_, lean_object* v_offset_385_, lean_object* v_dataLen_386_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_evm_log1(v_topic_384_, v_offset_385_, v_dataLen_386_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1___boxed(lean_object* v_topic_389_, lean_object* v_offset_390_, lean_object* v_dataLen_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Evm_Event_emit1(v_topic_389_, v_offset_390_, v_dataLen_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2(lean_object* v_t1_394_, lean_object* v_t2_395_, lean_object* v_offset_396_, lean_object* v_dataLen_397_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = lean_evm_log2(v_t1_394_, v_t2_395_, v_offset_396_, v_dataLen_397_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2___boxed(lean_object* v_t1_400_, lean_object* v_t2_401_, lean_object* v_offset_402_, lean_object* v_dataLen_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Evm_Event_emit2(v_t1_400_, v_t2_401_, v_offset_402_, v_dataLen_403_);
return v_res_405_;
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
