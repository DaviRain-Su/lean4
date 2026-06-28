module

prelude
import Init.Data.String.Basic
import Init.Data.Bool
import Init.Data.Option

/-!
# Lean NEAR SDK — host function bindings

This module provides Lean bindings to the NEAR Protocol host functions via
`@[extern]` declarations. The extern implementations live in
`src/runtime/zig/host/near/lean_near.zig` and are linked when compiling to
the NEAR WASM target via `tools/zigc-near`.

When compiled via `lean -z` (EmitZig) and `tools/zigc-near`, these calls
resolve to NEAR VM host imports (`extern "env"`). On native / C backend,
the fallback implementations are used (no-op stubs).
-/

namespace Near

namespace Storage

@[extern "lean_near_storage_write"]
def write (key : String) (value : String) : Bool := false

@[extern "lean_near_storage_read"]
def read (key : String) : Option String := none

@[extern "lean_near_storage_has_key"]
def hasKey (key : String) : Bool := false

@[extern "lean_near_storage_remove"]
def remove (key : String) : Bool := false

end Storage

namespace Env

@[extern "lean_near_current_account_id"]
def currentAccountId : String := ""

@[extern "lean_near_predecessor_account_id"]
def predecessorAccountId : String := ""

@[extern "lean_near_block_timestamp"]
def blockTimestamp : UInt64 := 0

@[extern "lean_near_block_height"]
def blockHeight : UInt64 := 0

@[extern "lean_near_input"]
def input : String := ""

@[extern "lean_near_value_return"]
def valueReturn (data : String) : Unit := ⟨⟩

@[extern "lean_near_log"]
def log (msg : String) : Unit := ⟨⟩

end Env

end Near
