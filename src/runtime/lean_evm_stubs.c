// Stubs for lean_evm_* extern functions used by Lean.Evm.
//
// These are linked when building Lean itself with the C backend (native). The
// real "implementations" are EVM opcodes emitted directly by EmitYul when
// targeting EVM bytecode via `lean -y` + `solc --strict-assembly`. On native,
// the EVM environment does not exist, so these stubs return trivial values.
//
// Matching Lean object ABI: IO Nat returns a boxed object, IO Unit returns unit.
#include <stdint.h>
#include <stddef.h>

typedef void lean_object;
typedef lean_object* lean_obj_arg;

// lean_box(0) == unit value for IO Unit returns.
static lean_object* lean_box_unit(void) { return (lean_object*)0; }

// lean_box(n) for IO Nat: low bit set, value shifted left by 1.
static lean_object* lean_box_nat(uintptr_t n) { return (lean_object*)((n << 1) | 1); }

lean_object* lean_evm_calldataload(uintptr_t i) { (void)i; return lean_box_nat(0); }
lean_object* lean_evm_mstore(uintptr_t i, uintptr_t v) { (void)i; (void)v; return lean_box_unit(); }
lean_object* lean_evm_mload(uintptr_t i) { (void)i; return lean_box_nat(0); }
lean_object* lean_evm_sload(uintptr_t k) { (void)k; return lean_box_nat(0); }
lean_object* lean_evm_sstore(uintptr_t k, uintptr_t v) { (void)k; (void)v; return lean_box_unit(); }
lean_object* lean_evm_caller(void) { return lean_box_nat(0); }
lean_object* lean_evm_callvalue(void) { return lean_box_nat(0); }
lean_object* lean_evm_timestamp(void) { return lean_box_nat(0); }
lean_object* lean_evm_number(void) { return lean_box_nat(0); }
lean_object* lean_evm_selfbalance(void) { return lean_box_nat(0); }
lean_object* lean_evm_return(uintptr_t offset, uintptr_t len) { (void)offset; (void)len; return lean_box_unit(); }
lean_object* lean_evm_revert(uintptr_t offset, uintptr_t len) { (void)offset; (void)len; return lean_box_unit(); }
lean_object* lean_evm_keccak256(uintptr_t offset, uintptr_t len) { (void)offset; (void)len; return lean_box_nat(0); }
lean_object* lean_evm_log0(uintptr_t offset, uintptr_t len) { (void)offset; (void)len; return lean_box_unit(); }
lean_object* lean_evm_log1(uintptr_t t, uintptr_t offset, uintptr_t len) { (void)t; (void)offset; (void)len; return lean_box_unit(); }
lean_object* lean_evm_log2(uintptr_t t1, uintptr_t t2, uintptr_t offset, uintptr_t len) { (void)t1; (void)t2; (void)offset; (void)len; return lean_box_unit(); }
lean_object* lean_evm_call(uintptr_t gas, uintptr_t to, uintptr_t value, uintptr_t ioOff, uintptr_t ioLen, uintptr_t outOff, uintptr_t outLen) { (void)gas; (void)to; (void)value; (void)ioOff; (void)ioLen; (void)outOff; (void)outLen; return lean_box_nat(0); }
lean_object* lean_evm_staticcall(uintptr_t gas, uintptr_t to, uintptr_t ioOff, uintptr_t ioLen, uintptr_t outOff, uintptr_t outLen) { (void)gas; (void)to; (void)ioOff; (void)ioLen; (void)outOff; (void)outLen; return lean_box_nat(0); }
lean_object* lean_evm_delegatecall(uintptr_t gas, uintptr_t to, uintptr_t ioOff, uintptr_t ioLen, uintptr_t outOff, uintptr_t outLen) { (void)gas; (void)to; (void)ioOff; (void)ioLen; (void)outOff; (void)outLen; return lean_box_nat(0); }
lean_object* lean_evm_create(uintptr_t value, uintptr_t offset, uintptr_t len) { (void)value; (void)offset; (void)len; return lean_box_nat(0); }
lean_object* lean_evm_create2(uintptr_t value, uintptr_t offset, uintptr_t len, uintptr_t salt) { (void)value; (void)offset; (void)len; (void)salt; return lean_box_nat(0); }
lean_object* lean_evm_selfdestruct(uintptr_t beneficiary) { (void)beneficiary; return lean_box_unit(); }
lean_object* lean_evm_blockhash(uintptr_t bn) { (void)bn; return lean_box_nat(0); }
lean_object* lean_evm_extcodesize(uintptr_t addr) { (void)addr; return lean_box_nat(0); }
lean_object* lean_evm_extcodehash(uintptr_t addr) { (void)addr; return lean_box_nat(0); }
lean_object* lean_evm_gas(void) { return lean_box_nat(0); }
lean_object* lean_evm_origin(void) { return lean_box_nat(0); }
lean_object* lean_evm_gasprice(void) { return lean_box_nat(0); }
lean_object* lean_evm_coinbase(void) { return lean_box_nat(0); }
lean_object* lean_evm_gaslimit(void) { return lean_box_nat(0); }
lean_object* lean_evm_basefee(void) { return lean_box_nat(0); }
lean_object* lean_evm_chainid(void) { return lean_box_nat(1); }
lean_object* lean_evm_balance(uintptr_t addr) { (void)addr; return lean_box_nat(0); }
