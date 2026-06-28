/-!
EmitZig test: `while` lowering with loop-carried state, `continue`, and `break`.
-/

def scanUntil (n : Nat) : Nat := Id.run do
  let mut i := 0
  let mut acc := 0
  while i < n do
    i := i + 1
    if i == 3 then
      continue
    if i == 6 then
      break
    acc := acc + i
  return acc

def main : IO Unit :=
  IO.println s!"{scanUntil 10}"
