module
prelude
import Init.System.FilePath
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for file write, read, and removal by path. -/

def main : IO Unit := do
  let path : System.FilePath := "emitzig-stdlib-file.tmp"
  IO.FS.writeFile path "hello file\n"
  let s ← IO.FS.readFile path
  IO.print s
  IO.FS.removeFile path
