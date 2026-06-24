module

import Lean

/-!
Checks `Environment.evalConst` parity against the Zig-only interpreter entrypoint.
-/

open Lean

public def evalConstZigNat : Nat := 37

public def evalConstZigFn (x : Nat) : Nat :=
  x + 5

unsafe def checkEvalConstZigParity : CoreM Unit := do
  let env ← getEnv
  let prodNat := env.evalConst Nat {} `evalConstZigNat (checkMeta := false)
  let zigNat := env.evalConstZig Nat {} `evalConstZigNat (checkMeta := false)
  match prodNat, zigNat with
  | .ok prod, .ok zig =>
    unless prod == zig do
      throwError "evalConst Nat parity mismatch: production={prod}, zig={zig}"
  | .error prod, .error zig =>
    unless prod == zig do
      throwError "evalConst Nat error parity mismatch: production={prod}, zig={zig}"
  | _, _ =>
    throwError "evalConst Nat result shape mismatch: production={prodNat}, zig={zigNat}"

  let prodFn ← IO.ofExcept <| env.evalConst (Nat → Nat) {} `evalConstZigFn (checkMeta := false)
  let zigFn ← IO.ofExcept <| env.evalConstZig (Nat → Nat) {} `evalConstZigFn (checkMeta := false)
  unless prodFn 7 == zigFn 7 do
    throwError "evalConst function parity mismatch: production={prodFn 7}, zig={zigFn 7}"

#eval! checkEvalConstZigParity
