module
prelude
import Init.Data.Vector
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Vector` array-backed operations. -/

def main : IO Unit := do
  let xs : Vector Nat 4 := #v[3, 1, 4, 1]
  IO.println xs.size
  IO.println xs[2]
  IO.println (xs.push 5).size
  let ys := xs.set 1 9
  IO.println ys[1]
  IO.println (ys.foldl (fun acc n => acc + n) 0)
  let doubled := ys.map (fun n => n * 2)
  IO.println doubled[1]
  let indexed := ys.mapIdx (fun i n => i + n)
  IO.println indexed[2]
  let zipped := ys.zip #v[10, 20, 30, 40]
  IO.println (zipped.foldl (fun acc p => acc + p.1 + p.2) 0)
  let flat := (#v[#v[1, 2], #v[3, 4], #v[5, 6]] : Vector (Vector Nat 2) 3).flatten
  IO.println flat.size
  IO.println flat[4]
  let flatMapped := (#v[1, 2, 3] : Vector Nat 3).flatMap fun n => #v[n, n + 10]
  IO.println flatMapped.size
  IO.println flatMapped[5]
  let swapped := xs.swap 0 2
  IO.println swapped[0]
  IO.println swapped[2]
  let erased := xs.eraseIdx 1
  IO.println erased.size
  IO.println erased[1]
  let inserted := erased.insertIdx 1 7
  IO.println inserted.size
  IO.println inserted[1]
  match inserted.find? (fun n => n > 6) with
  | some n => IO.println n
  | none => IO.println 0
  IO.println (inserted.findFinIdx? (fun n => n == 4)).isSome
  IO.println (inserted.count 1)
  IO.println (inserted.any (fun n => n == 7))
  IO.println (inserted.all (fun n => n > 0))
  let mut total := 0
  for n in inserted do
    total := total + n
  IO.println total
  let range := Vector.range' 5 4 3
  IO.println range[3]
  let reversed := inserted.reverse
  IO.println reversed[0]
  let mappedM ← xs.mapM (fun n => pure (n + 1))
  IO.println mappedM[0]
