module
prelude
import Init.Data.String.Length
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for file-handle IO. -/

def main : IO Unit := do
  IO.FS.withTempFile fun h _path => do
    h.putStrLn "zig-io"
    h.putStr "tail"
    h.flush
    h.rewind
    let line ← h.getLine
    IO.println line.length
    let rest ← h.readToEnd
    IO.println rest.length
    h.rewind
    let bytes ← h.read 3
    IO.println bytes.size
    IO.println (bytes.get! 0).toNat
    h.truncate
    h.rewind
    let truncated ← h.readToEnd
    IO.println truncated.length
