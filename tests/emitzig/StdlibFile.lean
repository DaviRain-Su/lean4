module
prelude
import Init.Data.Array.GetLit
import Init.Data.ByteArray.Basic
import Init.System.FilePath
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for file write, read, and removal by path. -/

def showFileType : IO.FS.FileType → String
  | .dir => "dir"
  | .file => "file"
  | .symlink => "symlink"
  | .other => "other"

def main : IO Unit := do
  IO.FS.withTempDir fun dir => do
    let textPath := dir / "text.txt"
    IO.FS.writeFile textPath "hello file\nsecond\n"
    let lines ← IO.FS.lines textPath
    IO.println lines.size
    IO.println (lines[0]?.getD "missing")
    IO.println (lines[1]?.getD "missing")
    let textMeta ← textPath.metadata
    IO.println textMeta.byteSize
    IO.println (showFileType textMeta.type)
    IO.println (← textPath.pathExists)

    let binPath := dir / "bytes.bin"
    IO.FS.writeBinFile binPath (ByteArray.mk #[0, 1, 2, 255])
    let bytes ← IO.FS.readBinFile binPath
    IO.println bytes.size
    IO.println (bytes.get! 3).toNat

    IO.FS.removeFile textPath
    IO.println (← textPath.pathExists)
