// Stubs for lean_near_* extern functions used by Lean.Near.Bindings.
// These are linked when building with the C backend (default).
// The real implementations live in src/runtime/zig/host/near/lean_near.zig
// and are used when compiling via the Zig backend for WASM.

#include <stdint.h>
#include <stddef.h>

// Forward declarations matching Lean object ABI.
typedef void lean_object;
typedef lean_object* lean_obj_arg;

// Stub: always returns false/none/0 (no NEAR host on native C backend).
lean_object* lean_near_storage_write(lean_obj_arg key, lean_obj_arg value) { return 0; }
lean_object* lean_near_storage_read(lean_obj_arg key) { return 0; }
lean_object* lean_near_storage_has_key(lean_obj_arg key) { return 0; }
lean_object* lean_near_storage_remove(lean_obj_arg key) { return 0; }
lean_object* lean_near_current_account_id(void) { return 0; }
lean_object* lean_near_predecessor_account_id(void) { return 0; }
lean_object* lean_near_block_timestamp(void) { return 0; }
lean_object* lean_near_block_height(void) { return 0; }
lean_object* lean_near_input(void) { return 0; }
void lean_near_value_return(lean_obj_arg data) { }
void lean_near_log(lean_obj_arg msg) { }
