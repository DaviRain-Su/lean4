module
prelude
import Std.Data.Iterators
import Std.Data.Iterators.Consumers.Set
import Init.Data.Iterators.Combinators
import Init.Data.Array.GetLit
import Init.Data.Hashable
import Init.Data.Range.Polymorphic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.Data.Iterators` producers, combinators, and consumers. -/

def main : IO Unit := do
  let xs := #[1, 2, 3, 4, 5, 6]
  let doubled := xs.iter.drop 1 |>.takeWhile (fun n => n < 6) |>.map (fun n => n * 2) |>.toArray
  IO.println doubled.size
  IO.println doubled[0]!
  IO.println doubled[3]!
  let evens := xs.iter.filter (fun n => n % 2 == 0) |>.toList
  IO.println evens.length
  IO.println (evens.foldl (fun acc n => acc + n) 0)
  let odds := xs.iter.filterMap (fun n => if n % 2 == 1 then some (n + 10) else none) |>.toArray
  IO.println odds.size
  IO.println odds[2]!
  let zipped := (#[10, 20, 30].iter.zip #[1, 2].iter).toList
  IO.println zipped.length
  IO.println (zipped.foldl (fun acc p => acc + p.1 + p.2) 0)
  let folded := xs.iter.dropWhile (fun n => n < 3) |>.fold (init := 0) (fun acc n => acc + n)
  IO.println folded
  let mut total := 0
  for n in xs.iter.drop 2 do
    total := total + n
  IO.println total
  let tree := xs.iter.filter (fun n => n > 3) |>.toTreeSet
  IO.println tree.size
  IO.println (tree.contains 4)
  IO.println (tree.contains 2)
  let taken := xs.iter.take 3 |>.toArray
  IO.println taken.size
  IO.println taken[2]!
  let appended := (#[1, 2].iter.append #[8, 9, 10].iter).toList
  IO.println appended.length
  IO.println (appended.foldl (fun acc n => acc + n) 0)
  let flattened := #[1, 3, 5].iter.flatMap (fun n => #[n, n + 1].iter) |>.toArray
  IO.println flattened.size
  IO.println flattened[5]!
  let revList := xs.iter.drop 3 |>.toListRev
  IO.println revList.length
  IO.println (revList.foldl (fun acc n => acc * 10 + n) 0)
  let accessRange := (0...=8 : Std.Rcc Nat).iter
  match accessRange.atIdx? 4 with
  | some n => IO.println n
  | none => IO.println "none"
  IO.println (accessRange.atIdx? 9).isNone
  let repeated := (Std.Iter.repeat (fun n => n + 3) 1).take 4 |>.toArray
  IO.println repeated.size
  IO.println repeated[3]!
  let stepped := ((0...=10 : Std.Rcc Nat).iter.stepSize 3).toArray
  IO.println stepped.size
  IO.println stepped[3]!
  let hashSet := xs.iter.filter (fun n => n ≤ 3) |>.toHashSet
  IO.println hashSet.size
  IO.println (hashSet.contains 2)
  IO.println (hashSet.contains 5)
