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
LEAN_EXPORT lean_object* l_Lean_Evm_arg(lean_object* v_i_93_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_95_ = lean_unsigned_to_nat(4u);
v___x_96_ = lean_unsigned_to_nat(32u);
v___x_97_ = lean_nat_mul(v_i_93_, v___x_96_);
v___x_98_ = lean_nat_add(v___x_95_, v___x_97_);
lean_dec(v___x_97_);
v___x_99_ = lean_evm_calldataload(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_arg___boxed(lean_object* v_i_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Evm_arg(v_i_100_);
lean_dec(v_i_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256(lean_object* v_v_103_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = lean_evm_mstore(v___x_105_, v_v_103_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_dec_ref_known(v___x_106_, 1);
v___x_107_ = lean_unsigned_to_nat(32u);
v___x_108_ = lean_evm_return(v___x_105_, v___x_107_);
return v___x_108_;
}
else
{
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_returnU256___boxed(lean_object* v_v_109_, lean_object* v_a_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_Evm_returnU256(v_v_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revert(){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_114_ = lean_evm_revert(v___x_113_, v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_revert___boxed(lean_object* v_a_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_Evm_revert();
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load(lean_object* v_k_117_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_evm_sload(v_k_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_load___boxed(lean_object* v_k_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Evm_Storage_load(v_k_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store(lean_object* v_k_123_, lean_object* v_v_124_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_evm_sstore(v_k_123_, v_v_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_store___boxed(lean_object* v_k_127_, lean_object* v_v_128_, lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_Evm_Storage_store(v_k_127_, v_v_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot(lean_object* v_slot_131_, lean_object* v_key_132_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = lean_evm_mstore(v___x_134_, v_key_132_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec_ref_known(v___x_135_, 1);
v___x_136_ = lean_unsigned_to_nat(32u);
v___x_137_ = lean_evm_mstore(v___x_136_, v_slot_131_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec_ref_known(v___x_137_, 1);
v___x_138_ = lean_unsigned_to_nat(64u);
v___x_139_ = lean_evm_keccak256(v___x_134_, v___x_138_);
return v___x_139_;
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
v_a_140_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_137_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_137_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec(v_slot_131_);
v_a_148_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_135_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_135_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapSlot___boxed(lean_object* v_slot_156_, lean_object* v_key_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Evm_Storage_mapSlot(v_slot_156_, v_key_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad(lean_object* v_slot_160_, lean_object* v_key_161_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_evm_mstore(v___x_163_, v_key_161_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec_ref_known(v___x_164_, 1);
v___x_165_ = lean_unsigned_to_nat(32u);
v___x_166_ = lean_evm_mstore(v___x_165_, v_slot_160_);
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec_ref_known(v___x_166_, 1);
v___x_167_ = lean_unsigned_to_nat(64u);
v___x_168_ = lean_evm_keccak256(v___x_163_, v___x_167_);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_169_; lean_object* v___x_170_; 
v_a_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc(v_a_169_);
lean_dec_ref_known(v___x_168_, 1);
v___x_170_ = lean_evm_sload(v_a_169_);
return v___x_170_;
}
else
{
return v___x_168_;
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
v_a_171_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_166_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_166_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec(v_slot_160_);
v_a_179_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_164_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_164_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapLoad___boxed(lean_object* v_slot_187_, lean_object* v_key_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_Evm_Storage_mapLoad(v_slot_187_, v_key_188_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore(lean_object* v_slot_191_, lean_object* v_key_192_, lean_object* v_val_193_){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_evm_mstore(v___x_195_, v_key_192_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
lean_dec_ref_known(v___x_196_, 1);
v___x_197_ = lean_unsigned_to_nat(32u);
v___x_198_ = lean_evm_mstore(v___x_197_, v_slot_191_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec_ref_known(v___x_198_, 1);
v___x_199_ = lean_unsigned_to_nat(64u);
v___x_200_ = lean_evm_keccak256(v___x_195_, v___x_199_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_202_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_200_, 1);
v___x_202_ = lean_evm_sstore(v_a_201_, v_val_193_);
return v___x_202_;
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec(v_val_193_);
v_a_203_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_200_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_200_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
else
{
lean_dec(v_val_193_);
return v___x_198_;
}
}
else
{
lean_dec(v_val_193_);
lean_dec(v_slot_191_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Storage_mapStore___boxed(lean_object* v_slot_211_, lean_object* v_key_212_, lean_object* v_val_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Evm_Storage_mapStore(v_slot_211_, v_key_212_, v_val_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender(){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_evm_caller();
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_sender___boxed(lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Evm_Env_sender();
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value(){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_evm_callvalue();
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_value___boxed(lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Evm_Env_value();
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp(){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_evm_timestamp();
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockTimestamp___boxed(lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Evm_Env_blockTimestamp();
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber(){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_evm_number();
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_blockNumber___boxed(lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_Evm_Env_blockNumber();
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance(){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_evm_selfbalance();
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Evm_Env_balance___boxed(lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Evm_Env_balance();
return v_res_235_;
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
