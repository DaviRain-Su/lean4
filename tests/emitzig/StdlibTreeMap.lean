module
prelude
import Std.Data.TreeMap
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.TreeMap` ordered insertion, lookup, erasure, folding, range queries, and transforms. -/

def main : IO Unit := do
  let m0 : Std.TreeMap Nat Nat := Std.TreeMap.empty
  let m1 := m0.insert 3 30 |>.insert 1 10 |>.insert 4 40 |>.insert 1 11
  IO.println m1.size
  IO.println (m1.getD 1 0)
  IO.println (m1.contains 2)
  let (wasPresent, m2) := m1.containsThenInsertIfNew 3 33
  IO.println wasPresent
  IO.println (m2.getD 3 0)
  let (previous, m3) := m2.getThenInsertIfNew? 2 20
  IO.println previous.isSome
  IO.println (m3.getD 2 0)
  IO.println (m3.minKeyD 0)
  IO.println (m3.maxKeyD 0)
  IO.println ((m3.erase 4).contains 4)
  IO.println (m3.foldl (fun acc k v => acc + k + v) 0)
  let m4 := m3.modify 3 (fun v => v + 1)
  IO.println (m4.getD 3 0)
  let m5 := m4.alter 4 (fun _ => none)
  IO.println (m5.contains 4)
  let m6 := m5.alter 5 (fun _ => some 50)
  IO.println (m6.getD 5 0)
  let m7 := m6.insertMany [(0, 1), (5, 55), (6, 60)]
  IO.println m7.size
  IO.println (m7.getD 5 0)
  let ge := m7.getEntryGED 2 (99, 99)
  IO.println ge.1
  IO.println ge.2
  let gt := m7.getEntryGTD 3 (99, 99)
  IO.println gt.1
  IO.println gt.2
  let le := m7.getEntryLED 3 (99, 99)
  IO.println le.1
  IO.println le.2
  let lt := m7.getEntryLTD 1 (99, 99)
  IO.println lt.1
  IO.println lt.2
  IO.println (m7.keyAtIdxD 0 99)
  IO.println (m7.keyAtIdxD 99 99)
  let keys := m7.keysArray
  let values := m7.valuesArray
  IO.println keys.size
  IO.println (keys.getD 0 99)
  IO.println (keys.getD 5 99)
  IO.println values.size
  IO.println (values.getD 0 99)
  IO.println (values.getD 5 99)
  let (small, large) := m7.partition (fun k _ => k ≤ 3)
  IO.println small.size
  IO.println large.size
  let mapped := Std.TreeMap.map (fun k v => k + v) m7
  IO.println (mapped.getD 6 0)
  let filtered := Std.TreeMap.filterMap (fun k v => if k % 2 == 0 then some (k + v) else none) m7
  IO.println filtered.size
  IO.println (filtered.foldl (fun acc _ v => acc + v) 0)
  let merged := m7.mergeWith (fun _ left right => left + right) (Std.TreeMap.ofList [(2, 200), (6, 600), (7, 700)])
  IO.println merged.size
  IO.println (merged.getD 2 0)
  IO.println (merged.getD 6 0)
  IO.println (merged.getD 7 0)
  IO.println (merged.diff m7).size
  IO.println (merged.inter m7).size
  let mut total := 0
  for (k, v) in m7 do
    total := total + k * 10 + v
  IO.println total
