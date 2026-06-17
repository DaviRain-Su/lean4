module
prelude
import Init.System.FilePath
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for directory creation, directory listing, joined entry paths, and metadata. -/

def main : IO Unit := do
  IO.FS.withTempDir fun dir => do
    let nested := dir / "sub"
    let deep := nested / "child" / "grand"
    IO.FS.createDirAll deep
    IO.FS.writeFile (deep / "note.txt") "dirpath"
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
    IO.println (← nested.pathExists)
    IO.println (← nested.isDir)
    IO.println (← (deep / "note.txt").pathExists)
    let walked ← dir.walkDir
    IO.println walked.size
    IO.FS.removeDirAll nested
    IO.println (← nested.pathExists)
