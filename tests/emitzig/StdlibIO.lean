module
prelude
import Init.Data.Array.GetLit
import Init.Data.ByteArray.Basic
import Init.Data.String.Length
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for file-handle IO. -/

def main : IO Unit := do
  IO.FS.withTempFile fun h _path => do
    IO.println (← h.isTty)
    let locked ← h.tryLock true
    IO.println locked
    h.unlock
    h.putStrLn "zig-io"
    h.putStr "tail"
    h.flush
    h.rewind
    let line ← h.getLine
    IO.println line.length
    let rest ← h.readToEnd
    IO.println rest.length
    h.rewind
    let lines ← h.lines
    IO.println lines.size
    IO.println (lines[0]?.getD "missing")
    IO.println (lines[1]?.getD "missing")
    h.rewind
    let allBytes ← h.readBinToEnd
    IO.println allBytes.size
    IO.println (allBytes.get! 6).toNat
    h.rewind
    let bytes ← h.read 3
    IO.println bytes.size
    IO.println (bytes.get! 0).toNat
    h.truncate
    h.rewind
    let truncated ← h.readToEnd
    IO.println truncated.length
    h.rewind
    let truncatedLines ← h.lines
    IO.println truncatedLines.size
    IO.println (truncatedLines[0]?.getD "missing")
  IO.FS.withTempFile fun h _path => do
    h.write (ByteArray.mk #[65, 10, 66])
    h.flush
    h.rewind
    let bytes ← h.readBinToEnd
    IO.println bytes.size
    IO.println (bytes.get! 1).toNat
