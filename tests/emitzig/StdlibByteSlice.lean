module
prelude
import Std.Data.ByteSlice
import Init.Data.Array.GetLit
import Init.Data.String.Basic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `ByteSlice` bounds, slicing, folding, and equality. -/

def sumBytes (s : ByteSlice) : Nat :=
  s.foldr (fun b acc => b.toNat + acc) 0

def main : IO Unit := do
  let bytes := ByteArray.mk #[65, 66, 67, 68, 69, 70, 71]
  let s0 := bytes.toByteSlice 1 6
  IO.println s0.size
  IO.println s0.start
  IO.println s0.stop
  IO.println (s0.get! 0)
  IO.println (s0.getD 10 255)
  IO.println (s0.contains 68)
  IO.println (s0.contains 90)
  let s1 := s0.slice 1 4
  IO.println s1.size
  IO.println (s1.get! 2)
  IO.println (sumBytes s1)
  let s2 := s0.slice 4 99
  IO.println s2.size
  IO.println (String.fromUTF8! s2.toByteArray)
  let s3 := s0.slice 4 2
  IO.println s3.size
  let s3b := bytes.toByteSlice 2 2
  IO.println (s3 == s3b)
  let s4 := "lean!".toUTF8.toByteSlice 1 4
  IO.println s4.size
  IO.println (String.fromUTF8! s4.toByteArray)
