module
prelude
import Init.Data.Array.Basic
import Init.Data.Array.Extract
import Init.Data.Array.GetLit
import Init.Data.Array.Set
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for Array operations. -/

def main : IO Unit := do
  let xs := #[3, 1, 4]
  IO.println xs.size
  IO.println xs[2]!
  IO.println (xs.push 1).size
  let ys := xs.map (fun x => x + 1)
  IO.println ys[0]!
  IO.println (ys.foldl (fun acc x => acc + x) 0)
  IO.println (xs.any (fun x => x == 1))
  IO.println (xs.all (fun x => x > 0))
  let evens := xs.filter (fun x => x % 2 == 0)
  IO.println evens.size
  IO.println (xs.extract 1 3).size
  IO.println (xs.setIfInBounds 1 9)[1]!
  IO.println (xs.setIfInBounds 9 7)[2]!
  IO.println (xs[9]?).isNone
  match xs.back? with
  | some n => IO.println n
  | none => IO.println "none"
  IO.println xs.pop.size
  let swapped := xs.swap 0 2
  IO.println swapped[0]!
  IO.println swapped[2]!
  let modified := xs.modify 2 (fun n => n * 10)
  IO.println modified[2]!
  IO.println (xs.count 1)
  IO.println (xs.contains 4)
  IO.println (xs.contains 9)
  match xs.find? (fun n => n > 2) with
  | some n => IO.println n
  | none => IO.println "none"
  match xs.findIdx? (fun n => n == 4) with
  | some i => IO.println i
  | none => IO.println "none"
  let indexed := xs.mapIdx (fun i n => i + n)
  IO.println indexed[2]!
  let zippedIdx := xs.zipIdx 10
  IO.println (zippedIdx.foldl (fun acc p => acc + p.1 + p.2) 0)
  let appended := xs ++ #[5, 9]
  IO.println appended.size
  IO.println appended[4]!
  let flatMapped := xs.flatMap (fun n => #[n, n + 10])
  IO.println flatMapped.size
  IO.println flatMapped[5]!
  let flattened := #[#[1, 2], #[3], #[4, 5]].flatten
  IO.println flattened.size
  IO.println flattened[3]!
  let reversed := appended.reverse
  IO.println reversed[0]!
  IO.println reversed[4]!
  let mappedSome := appended.filterMap (fun n => if n % 2 == 1 then some (n * 2) else none)
  IO.println mappedSome.size
  IO.println mappedSome[2]!
  let erased := appended.eraseIdxIfInBounds 1
  IO.println erased.size
  IO.println erased[1]!
  let erasedValue := appended.erase 5
  IO.println erasedValue.size
  IO.println erasedValue[3]!
  let inserted := erased.insertIdxIfInBounds 1 7
  IO.println inserted.size
  IO.println inserted[1]!
  let zipped := xs.zip #[10, 20, 30, 40]
  IO.println zipped.size
  IO.println (zipped.foldl (fun acc p => acc + p.1 + p.2) 0)
  let padded := xs.zipWithAll (fun a b => a.getD 0 + b.getD 100) #[10]
  IO.println padded.size
  IO.println padded[2]!
  let pairArrays := (#[("a", 1), ("b", 2), ("c", 3)]).unzip
  IO.println pairArrays.1.size
  IO.println pairArrays.1[1]!
  IO.println pairArrays.2[2]!
  let noReps := #[1, 2, 1, 3, 2].eraseReps
  IO.println noReps.size
  IO.println noReps[2]!
