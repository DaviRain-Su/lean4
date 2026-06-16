module
prelude
import Init.Data.String.Length
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for file-handle IO. -/

def main : IO Unit := do
  IO.FS.withTempFile fun h _path => do
    h.putStr "zig-io"
    h.flush
    h.rewind
    let s ← h.readToEnd
    IO.println s.length
