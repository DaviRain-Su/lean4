/-!
EmitZig test: imperative `while` lowering and loop-carried state.
-/

def loopSum (n : Nat) : Nat := Id.run do
  let mut i := 0
  let mut acc := 0
  while i < n do
    acc := acc + i
    i := i + 1
  return acc

def main : IO Unit :=
  IO.println s!"{loopSum 5}"
