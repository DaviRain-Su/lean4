module
prelude
import Init.Data.Fin
import Init.Data.Fin.Bitwise
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Fin` arithmetic, bitwise, fold, and overflow APIs. -/

def main : IO Unit := do
  let a : Fin 7 := 5
  let b : Fin 7 := 4
  IO.println (a + b).val
  IO.println (a - b).val
  IO.println (b - a).val
  IO.println (a * b).val
  IO.println (a / b).val
  IO.println (a % b).val
  IO.println (-a).val
  IO.println (Fin.last 6).val
  IO.println a.rev.val
  IO.println a.succ.val
  IO.println a.castSucc.val
  IO.println (a.addNat 3).val
  IO.println (Fin.natAdd 2 a).val
  IO.println (a.addNat? 1).isSome
  IO.println (a.addNat? 2).isSome

  let c : Fin UInt8.size := 240
  let d : Fin UInt8.size := 31
  IO.println (c &&& d).val
  IO.println (c ||| d).val
  IO.println (c ^^^ d).val
  IO.println (c <<< (2 : Fin UInt8.size)).val
  IO.println (c >>> (3 : Fin UInt8.size)).val
  IO.println ((8 : Fin 16).log2).val

  IO.println (Fin.foldl 5 (fun acc i => acc + i.val) 0)
  IO.println (Fin.foldr 5 (fun i acc => acc + i.val) 0)
  let foldedM ← Fin.foldlM 4 (fun acc i => pure (acc + i.val * 2)) 0
  IO.println foldedM
  let foldedRM ← Fin.foldrM 4 (fun i acc => pure (acc + i.val * 3)) 0
  IO.println foldedRM
