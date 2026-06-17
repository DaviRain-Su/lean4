module
prelude
import Init.Data.Array.GetLit
import Init.Data.ByteArray.Basic
import Init.Data.String.Basic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for ByteArray push, copySlice, size, indexing, and UTF-8 decoding. -/

def showNatOption : Option Nat → String
  | some n => toString n
  | none => "none"

def sumBytes (bytes : ByteArray) : Nat :=
  bytes.foldl (fun acc byte => acc + byte.toNat) 0

def main : IO Unit := do
  let a := "hé".toUTF8
  let b := "llo".toUTF8
  let c := a.push 33
  let d := b.copySlice 0 c c.size b.size false
  IO.println d.size
  IO.println (d.get! 3)
  IO.println (String.fromUTF8! d)
  let base := ByteArray.mk #[65, 66, 67, 68]
  IO.println (String.fromUTF8! (base.extract 1 3))
  let patched := base.set! 2 90
  IO.println (String.fromUTF8! patched)
  IO.println (showNatOption (patched.findIdx? (· == 90)))
  IO.println (patched.findIdx? (· == 88)).isNone
  IO.println (sumBytes patched)
  let appended := "++".toUTF8 ++ patched.extract 1 4
  IO.println (String.fromUTF8! appended)
  IO.println (appended == ByteArray.mk #[43, 43, 66, 90, 68])
  let iter := patched.iter.next.next
  IO.println iter.remainingBytes
  IO.println iter.curr
  IO.println iter.hasPrev
  IO.println iter.toEnd.atEnd
  IO.println (String.fromUTF8! (patched.copySlice 1 patched 2 2))
  IO.println ByteArray.empty.isEmpty
  IO.println base.isEmpty
  IO.println base.toList.length
  IO.println (base.toList.foldl (fun acc byte => acc + byte.toNat) 0)
  let safeSet := base.set 0 81
  IO.println (String.fromUTF8! safeSet)
  let exactCopy := base.copySlice 1 (ByteArray.mk #[120, 121, 122, 123]) 2 2 true
  IO.println (String.fromUTF8! exactCopy)
  IO.println (showNatOption (patched.findIdx? (· == 90) 3))
  match patched.findFinIdx? (· == 68) 1 with
  | some idx => IO.println idx.val
  | none => IO.println "none"
  IO.println (patched.foldl (fun acc byte => acc + byte.toNat) 0 1 3)
  match patched.foldlM (fun acc byte => some (acc + byte.toNat)) 0 1 4 with
  | some n => IO.println n
  | none => IO.println "none"
  let mid := patched.iter.next
  IO.println mid.hasNext
  IO.println mid.prev.curr
  IO.println (mid.nextn 2).curr
  IO.println (mid.nextn 3).atEnd
  IO.println (mid.toEnd.prevn 2).curr
