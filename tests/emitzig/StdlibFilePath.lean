module
prelude
import Init.System.FilePath
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `System.FilePath.parent` and `System.FilePath.extension`. -/

def main : IO Unit := do
  let p : System.FilePath := "alpha/beta.txt"
  IO.println p.toString
  IO.println (p.fileName.getD "")
  IO.println (p.extension.getD "")
  match p.parent with
  | some parent => IO.println parent.toString
  | none => IO.println "none"
