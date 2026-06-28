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
  let archive : System.FilePath := "alpha/beta/archive.tar.gz"
  IO.println (showOption archive.fileStem)
  IO.println (showOption archive.extension)
  IO.println (archive.withExtension "xz").toString
  IO.println (archive.withExtension "").toString
  IO.println (archive.addExtension "").toString
  IO.println (archive.withFileName "renamed.lean").toString
  IO.println (showOption (("/alpha" : System.FilePath).parent.map (·.toString)))
  IO.println (showOption (("alpha/beta/" : System.FilePath).fileName))
  let relative : System.FilePath := "alpha/./beta/../gamma"
  IO.println relative.normalize.toString
  IO.println relative.isRelative
  IO.println relative.isAbsolute
  let absolute : System.FilePath := "/var/tmp/file"
  IO.println absolute.isAbsolute
  IO.println (showOption (absolute.parent.map (·.toString)))
  let search := System.SearchPath.parse "/bin:/usr/bin:."
  IO.println search.length
  IO.println (String.intercalate "|" (search.map (·.toString)))
  IO.println (System.SearchPath.toString search)
