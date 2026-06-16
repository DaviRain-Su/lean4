module
prelude
import Std.Data.Iterators
import Std.Data.Iterators.Consumers.Set
import Init.Data.Iterators.Combinators
import Init.Data.Array.GetLit
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
