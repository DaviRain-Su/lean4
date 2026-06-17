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
