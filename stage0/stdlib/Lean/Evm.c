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
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load(lean_object* v_k_204_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_evm_sload(v_k_204_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load___boxed(lean_object* v_k_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Evm_Storage_load(v_k_207_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store(lean_object* v_k_210_, lean_object* v_v_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_evm_sstore(v_k_210_, v_v_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store___boxed(lean_object* v_k_214_, lean_object* v_v_215_, lean_object* v_a_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_Evm_Storage_store(v_k_214_, v_v_215_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot(lean_object* v_slot_218_, lean_object* v_key_219_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_evm_mstore(v___x_221_, v_key_219_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; 
lean_dec_ref_known(v___x_222_, 1);
v___x_223_ = lean_unsigned_to_nat(32u);
v___x_224_ = lean_evm_mstore(v___x_223_, v_slot_218_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_dec_ref_known(v___x_224_, 1);
v___x_225_ = lean_unsigned_to_nat(64u);
v___x_226_ = lean_evm_keccak256(v___x_221_, v___x_225_);
return v___x_226_;
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
v_a_227_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_224_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_224_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec(v_slot_218_);
v_a_235_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_222_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_222_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot___boxed(lean_object* v_slot_243_, lean_object* v_key_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Evm_Storage_mapSlot(v_slot_243_, v_key_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad(lean_object* v_slot_247_, lean_object* v_key_248_){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = lean_evm_mstore(v___x_250_, v_key_248_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref_known(v___x_251_, 1);
v___x_252_ = lean_unsigned_to_nat(32u);
v___x_253_ = lean_evm_mstore(v___x_252_, v_slot_247_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec_ref_known(v___x_253_, 1);
v___x_254_ = lean_unsigned_to_nat(64u);
v___x_255_ = lean_evm_keccak256(v___x_250_, v___x_254_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_257_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_256_);
lean_dec_ref_known(v___x_255_, 1);
v___x_257_ = lean_evm_sload(v_a_256_);
return v___x_257_;
}
else
{
return v___x_255_;
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
v_a_258_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_253_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_253_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
lean_dec(v_slot_247_);
v_a_266_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_251_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_251_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
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
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad___boxed(lean_object* v_slot_274_, lean_object* v_key_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Evm_Storage_mapLoad(v_slot_274_, v_key_275_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore(lean_object* v_slot_278_, lean_object* v_key_279_, lean_object* v_val_280_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_evm_mstore(v___x_282_, v_key_279_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec_ref_known(v___x_283_, 1);
v___x_284_ = lean_unsigned_to_nat(32u);
v___x_285_ = lean_evm_mstore(v___x_284_, v_slot_278_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
lean_dec_ref_known(v___x_285_, 1);
v___x_286_ = lean_unsigned_to_nat(64u);
v___x_287_ = lean_evm_keccak256(v___x_282_, v___x_286_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_289_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_a_288_);
lean_dec_ref_known(v___x_287_, 1);
v___x_289_ = lean_evm_sstore(v_a_288_, v_val_280_);
return v___x_289_;
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec(v_val_280_);
v_a_290_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_287_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_287_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
else
{
lean_dec(v_val_280_);
return v___x_285_;
}
}
else
{
lean_dec(v_val_280_);
lean_dec(v_slot_278_);
return v___x_283_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore___boxed(lean_object* v_slot_298_, lean_object* v_key_299_, lean_object* v_val_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Evm_Storage_mapStore(v_slot_298_, v_key_299_, v_val_300_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender(){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_evm_caller();
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender___boxed(lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Evm_Env_sender();
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value(){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_evm_callvalue();
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value___boxed(lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lean_Evm_Env_value();
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp(){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_evm_timestamp();
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Evm_Env_blockTimestamp();
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber(){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lean_evm_number();
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Evm_Env_blockNumber();
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance(){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_evm_selfbalance();
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_Evm_Env_balance();
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require(uint8_t v_cond_323_){
_start:
{
if (v_cond_323_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(0u);
v___x_326_ = lean_evm_revert(v___x_325_, v___x_325_);
return v___x_326_;
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_box(0);
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_require___boxed(lean_object* v_cond_329_, lean_object* v_a_330_){
_start:
{
uint8_t v_cond_boxed_331_; lean_object* v_res_332_; 
v_cond_boxed_331_ = lean_unbox(v_cond_329_);
v_res_332_ = l_Lean_Evm_require(v_cond_boxed_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg(uint8_t v_cond_333_){
_start:
{
if (v_cond_333_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_evm_revert(v___x_335_, v___x_335_);
return v___x_336_;
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_box(0);
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___redArg___boxed(lean_object* v_cond_339_, lean_object* v_a_340_){
_start:
{
uint8_t v_cond_boxed_341_; lean_object* v_res_342_; 
v_cond_boxed_341_ = lean_unbox(v_cond_339_);
v_res_342_ = l_Lean_Evm_requireMsg___redArg(v_cond_boxed_341_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg(uint8_t v_cond_343_, lean_object* v___reason_344_){
_start:
{
if (v_cond_343_ == 0)
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
LEAN_EXPORT lean_object* l_Lean_Evm_requireMsg___boxed(lean_object* v_cond_350_, lean_object* v___reason_351_, lean_object* v_a_352_){
_start:
{
uint8_t v_cond_boxed_353_; lean_object* v_res_354_; 
v_cond_boxed_353_ = lean_unbox(v_cond_350_);
v_res_354_ = l_Lean_Evm_requireMsg(v_cond_boxed_353_, v___reason_351_);
lean_dec_ref(v___reason_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous(lean_object* v_offset_355_, lean_object* v_dataLen_356_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = lean_evm_log0(v_offset_355_, v_dataLen_356_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_anonymous___boxed(lean_object* v_offset_359_, lean_object* v_dataLen_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Evm_Event_anonymous(v_offset_359_, v_dataLen_360_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1(lean_object* v_topic_363_, lean_object* v_offset_364_, lean_object* v_dataLen_365_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = lean_evm_log1(v_topic_363_, v_offset_364_, v_dataLen_365_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit1___boxed(lean_object* v_topic_368_, lean_object* v_offset_369_, lean_object* v_dataLen_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Evm_Event_emit1(v_topic_368_, v_offset_369_, v_dataLen_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2(lean_object* v_t1_373_, lean_object* v_t2_374_, lean_object* v_offset_375_, lean_object* v_dataLen_376_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_evm_log2(v_t1_373_, v_t2_374_, v_offset_375_, v_dataLen_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Event_emit2___boxed(lean_object* v_t1_379_, lean_object* v_t2_380_, lean_object* v_offset_381_, lean_object* v_dataLen_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_Evm_Event_emit2(v_t1_379_, v_t2_380_, v_offset_381_, v_dataLen_382_);
return v_res_384_;
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
