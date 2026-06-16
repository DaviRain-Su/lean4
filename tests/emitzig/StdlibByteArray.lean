module
prelude
import Init.Data.ByteArray.Basic
import Init.Data.String.Basic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for ByteArray push, copySlice, size, indexing, and UTF-8 decoding. -/

def main : IO Unit := do
  let a := "hé".toUTF8
  let b := "llo".toUTF8
  let c := a.push 33
  let d := b.copySlice 0 c c.size b.size false
  IO.println d.size
  IO.println (d.get! 3)
  IO.println (String.fromUTF8! d)
