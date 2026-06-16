module
prelude
import Init.System.FilePath
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for directory creation, directory listing, joined entry paths, and metadata. -/

def main : IO Unit := do
  IO.FS.withTempDir fun dir => do
    let nested := dir / "sub"
    IO.FS.createDir nested
    let entries ← dir.readDir
    IO.println entries.size
    match entries[0]? with
    | some entry =>
      IO.println entry.fileName
      match (← entry.path.metadata).type with
      | .dir => IO.println "dir"
      | _ => IO.println "other"
    | none =>
      IO.println "none"
      IO.println "other"
