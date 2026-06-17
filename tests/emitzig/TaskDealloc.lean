module
prelude
import Init.System.IO

/-! Regression test for managed task deallocation in the Zig runtime.

Creates IO tasks that are intentionally dropped before they complete. This
used to crash because pending task objects were not deactivated on free. -/

def main : IO Unit := do
  let mut tasks := #[]
  for _ in List.range 10 do
    let t ← IO.asTask do
      IO.sleep 1000
      pure 42
    tasks := tasks.push t
  -- Intentionally drop tasks without waiting to exercise managed task deallocation.
  IO.println "ok"
