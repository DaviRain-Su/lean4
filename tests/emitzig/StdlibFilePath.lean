module
prelude
import Init.System.FilePath
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `System.FilePath.parent` and `System.FilePath.extension`. -/

def showOption (x : Option String) : String :=
  x.getD "missing"

def main : IO Unit := do
  let p : System.FilePath := "alpha/beta.txt"
  IO.println p.toString
  IO.println (p.fileName.getD "")
  IO.println (p.extension.getD "")
  match p.parent with
  | some parent => IO.println parent.toString
  | none => IO.println "none"
  IO.println (showOption p.fileStem)
  IO.println (p.withExtension "json").toString
  IO.println (p.addExtension "bak").toString
  let hidden : System.FilePath := ".profile"
  IO.println (showOption hidden.extension)
  IO.println (showOption hidden.fileStem)
  let joined := System.mkFilePath ["alpha", "gamma", "delta.log"]
  IO.println joined.toString
  IO.println (String.intercalate "|" joined.components)
  IO.println (("alpha" : System.FilePath) / "/tmp/rooted").toString
  IO.println (("/" : System.FilePath).parent).isNone
  IO.println (("alpha/.." : System.FilePath).fileName).isNone
