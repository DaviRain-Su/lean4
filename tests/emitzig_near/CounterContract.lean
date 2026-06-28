/-! Lean NEAR Counter Contract

A stateful counter contract compiled to NEAR WASM via the Zig backend.
The NEAR host bindings are declared inline via @[extern], resolving to
`lean_near_*` symbols in the Zig runtime (host/near/lean_near.zig).
-/

namespace Near
namespace Storage
@[extern "lean_near_storage_write"]
def write (key : String) (value : String) : IO Bool := pure false
@[extern "lean_near_storage_read"]
def read (key : String) : IO (Option String) := pure none
@[extern "lean_near_storage_has_key"]
def hasKey (key : String) : IO Bool := pure false
end Storage
namespace Env
@[extern "lean_near_value_return"]
def valueReturn (data : String) : IO Unit := pure ⟨⟩
@[extern "lean_near_log"]
def log (msg : String) : IO Unit := pure ⟨⟩
end Env
end Near

open Near Storage Env

/-- Parse a natural number from a string (avoids stdlib extern dependency). -/
def parseNat (s : String) : Nat :=
  s.toList.foldl (fun acc c => acc * 10 + (c.toNat - '0'.toNat)) 0

/-- Contract entry: read count from storage, increment, return new value. -/
def main : IO UInt32 := do
  let current? ← Storage.read "count"
  let current := current?.getD "0"
  let n := parseNat current
  let next := n + 1
  let _ ← Storage.write "count" (toString next)
  Env.log s!"incremented to {next}"
  Env.valueReturn (toString next)
  pure 0
