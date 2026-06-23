module

import Lean.Elab.Command
import Lean.Meta.Constructions.CasesOn

/-!
Smoke tests for the standalone Zig `casesOn` generator entrypoint.
-/

open Lean Meta Elab Command

private def smokeNames : List Name :=
  [``Nat, ``List, ``Option, ``Prod, ``Sum, ``Array]

private def checkCasesOnSmoke (declName : Name) : MetaM Unit := do
  let env := (← getEnv).toKernelEnv
  let decl ← ofExceptKernelException (Lean.mkCasesOnImpZig env declName)
  let val := decl.definitionVal!
  let expected := mkCasesOnName declName
  unless val.name == expected do
    throwError m!"unexpected casesOn name for {declName}: got {val.name}, expected {expected}"

run_cmd liftTermElabM do
  for declName in smokeNames do
    checkCasesOnSmoke declName
