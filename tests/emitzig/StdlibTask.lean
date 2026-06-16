module
prelude
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for IO task execution. -/

def main : IO Unit := do
  let t ← IO.asTask (pure (20 + 22))
  match t.get with
  | Except.ok n => IO.println n
  | Except.error _ => IO.println "error"
