// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
//
// Adapted from near-sdk-zig (https://github.com/DaviRain-Su/near-sdk-zig)
// `near_sys.zig` — NEAR Protocol host function bindings.

//! NEAR VM host imports. These are the syscalls a NEAR contract VM provides.
//! On native they resolve to test stubs; on wasm32-freestanding they are the
//! `extern "env"` imports satisfied by the NEAR runtime.

const builtin = @import("builtin");

// Only declare the imports when building for wasm32; native builds stub them.
pub const is_wasm = builtin.cpu.arch == .wasm32;

pub const REGISTER_NONE: u64 = 0;
pub const REGISTER_STORAGE: u64 = 1;
pub const REGISTER_INPUT: u64 = 2;

// Register / memory ---------------------------------------------------------

pub extern "env" fn read_register(register_id: u64, ptr: u64) void;
pub extern "env" fn register_len(register_id: u64) u64;
pub extern "env" fn write_register(register_id: u64, data_len: u64, data_ptr: u64) void;

// Context -------------------------------------------------------------------

pub extern "env" fn current_account_id(register_id: u64) void;
pub extern "env" fn signer_account_id(register_id: u64) void;
pub extern "env" fn signer_account_pk(register_id: u64) void;
pub extern "env" fn predecessor_account_id(register_id: u64) void;
pub extern "env" fn input(register_id: u64) void;
pub extern "env" fn block_index() u64;
pub extern "env" fn block_timestamp() u64;
pub extern "env" fn epoch_height() u64;
pub extern "env" fn storage_usage() u64;

// Economics -----------------------------------------------------------------

pub extern "env" fn account_balance(balance_ptr: u64) void;
pub extern "env" fn account_locked_balance(balance_ptr: u64) void;
pub extern "env" fn attached_deposit(balance_ptr: u64) void;
pub extern "env" fn prepaid_gas() u64;
pub extern "env" fn used_gas() u64;

// Crypto --------------------------------------------------------------------

pub extern "env" fn random_seed(register_id: u64) void;
pub extern "env" fn sha256(value_len: u64, value_ptr: u64, register_id: u64) void;
pub extern "env" fn keccak256(value_len: u64, value_ptr: u64, register_id: u64) void;
pub extern "env" fn keccak512(value_len: u64, value_ptr: u64, register_id: u64) void;

// Storage (host KV) ---------------------------------------------------------

pub extern "env" fn storage_read(
    key_len: u64,
    key_ptr: u64,
    register_id: u64,
) u64;

pub extern "env" fn storage_write(
    key_len: u64,
    key_ptr: u64,
    value_len: u64,
    value_ptr: u64,
    register_id: u64,
) u64;

pub extern "env" fn storage_remove(
    key_len: u64,
    key_ptr: u64,
    register_id: u64,
) u64;

pub extern "env" fn storage_has_key(key_len: u64, key_ptr: u64) u64;

// Control flow --------------------------------------------------------------

pub extern "env" fn value_return(value_len: u64, value_ptr: u64) void;
pub extern "env" fn panic() noreturn;
pub extern "env" fn panic_utf8(len: u64, ptr: u64) noreturn;
pub extern "env" fn log_utf8(len: u64, ptr: u64) void;
pub extern "env" fn log_utf16(len: u64, ptr: u64) void;
pub extern "env" fn abort(msg_ptr: u32, filename_ptr: u32, line: u32, col: u32) noreturn;

// Promises ------------------------------------------------------------------

pub extern "env" fn promise_create(
    account_id_len: u64,
    account_id_ptr: u64,
    function_name_len: u64,
    function_name_ptr: u64,
    arguments_len: u64,
    arguments_ptr: u64,
    amount_ptr: u64,
    gas: u64,
) u64;

pub extern "env" fn promise_then(
    promise_index: u64,
    account_id_len: u64,
    account_id_ptr: u64,
    function_name_len: u64,
    function_name_ptr: u64,
    arguments_len: u64,
    arguments_ptr: u64,
    amount_ptr: u64,
    gas: u64,
) u64;

pub extern "env" fn promise_and(promise_idx_ptr: u64, promise_idx_count: u64) u64;
pub extern "env" fn promise_batch_create(account_id_len: u64, account_id_ptr: u64) u64;
pub extern "env" fn promise_batch_then(promise_index: u64, account_id_len: u64, account_id_ptr: u64) u64;

pub extern "env" fn promise_batch_action_function_call(
    promise_index: u64,
    function_name_len: u64,
    function_name_ptr: u64,
    arguments_len: u64,
    arguments_ptr: u64,
    amount_ptr: u64,
    gas: u64,
) void;

pub extern "env" fn promise_batch_action_transfer(promise_index: u64, amount_ptr: u64) void;
pub extern "env" fn promise_results_count() u64;
pub extern "env" fn promise_result(result_idx: u64, register_id: u64) u64;
pub extern "env" fn promise_return(promise_id: u64) void;
