module
prelude
import Std.Data.ByteSlice
import Init.Data.Array.GetLit
import Init.Data.String.Basic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `ByteSlice` bounds, slicing, folding, and equality. -/

def sumBytes (s : ByteSlice) : Nat :=
  s.foldr (fun b acc => b.toNat + acc) 0

def sumBytesM (s : ByteSlice) : Option Nat :=
  s.foldrM (fun b acc => some (b.toNat + acc)) 0

def sumUntilD (s : ByteSlice) : Option Nat :=
  s.foldrM (fun b acc => if b == 68 then none else some (b.toNat + acc)) 0

def main : IO Unit := do
  let bytes := ByteArray.mk #[65, 66, 67, 68, 69, 70, 71]
  let full := ByteSlice.ofByteArray bytes
  IO.println full.size
  IO.println full.byteArray.size
  IO.println (String.fromUTF8! (full.slice 0 3).toByteArray)
  let s0 := bytes.toByteSlice 1 6
  IO.println s0.byteArray.size
  IO.println s0.size
  IO.println s0.start
  IO.println s0.stop
  IO.println (s0.get! 0)
  IO.println (s0.getD 10 255)
  IO.println (s0.contains 68)
  IO.println (s0.contains 90)
  IO.println (s0 == bytes.toByteSlice 1 6)
  IO.println (s0 == bytes.toByteSlice 1 5)
  let s1 := s0.slice 1 4
  IO.println s1.size
  IO.println (s1.get! 2)
  IO.println (sumBytes s1)
  match sumBytesM s1 with
  | some n => IO.println n
  | none => IO.println "none"
  let s2 := s0.slice 4 99
  IO.println s2.size
  IO.println (String.fromUTF8! s2.toByteArray)
  let s3 := s0.slice 4 2
  IO.println s3.size
  IO.println (s3 == ByteSlice.empty)
  let s4 := "lean!".toUTF8.toByteSlice 1 4
  IO.println s4.size
  IO.println (String.fromUTF8! s4.toByteArray)
  IO.println ByteSlice.empty.size
  IO.println (ByteSlice.empty == bytes.toByteSlice 2 2)
  let clampedStop := bytes.toByteSlice 5 99
  IO.println clampedStop.size
  IO.println clampedStop.start
  IO.println clampedStop.stop
  IO.println (String.fromUTF8! clampedStop.toByteArray)
  let clampedStart := bytes.toByteSlice 99 100
  IO.println clampedStart.size
  IO.println clampedStart.start
  IO.println clampedStart.stop
  let inverted := bytes.toByteSlice 5 3
  IO.println inverted.size
  IO.println inverted.start
  IO.println inverted.stop
  let nestedEmpty := s0.slice 2 2
  IO.println nestedEmpty.size
  IO.println nestedEmpty.start
  IO.println nestedEmpty.stop
  let nestedClamp := s0.slice 3 99
  IO.println nestedClamp.size
  IO.println (String.fromUTF8! nestedClamp.toByteArray)
  match sumUntilD s1 with
  | some n => IO.println n
  | none => IO.println "none"
  let closedRange : ByteSlice := bytes[2...=4]
  IO.println closedRange.size
  IO.println (String.fromUTF8! closedRange.toByteArray)
  let halfOpenRange : ByteSlice := s0[1...<4]
  IO.println halfOpenRange.size
  IO.println (String.fromUTF8! halfOpenRange.toByteArray)
  let tailRange : ByteSlice := s0[3...*]
  IO.println tailRange.size
  IO.println (String.fromUTF8! tailRange.toByteArray)
  let fullRange : ByteSlice := s0[*...*]
  IO.println (fullRange == s0)
