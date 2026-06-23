module

import Lean.Elab.Command
import Lean.Meta.Constructions.CasesOn

/-!
Checks that the standalone Zig `casesOn` generator matches the default C++ implementation.
-/

open Lean Meta Elab Command

private def parityNames : List Name :=
  [``Nat, ``List, ``Option, ``Prod, ``Sum, ``Array]

private def renderDefn (decl : Declaration) : MetaM MessageData := do
  let val := decl.definitionVal!
  return m!"name: {val.name}\nlevelParams: {val.levelParams}\ntype:\n{← ppExpr val.type}\nvalue:\n{← ppExpr val.value}\nall: {val.all}"

private def checkCasesOnParity (declName : Name) : MetaM Unit := do
  let env := (← getEnv).toKernelEnv
  let cppDecl ← ofExceptKernelException (Lean.mkCasesOnImp env declName)
  let zigDecl ← ofExceptKernelException (Lean.mkCasesOnImpZig env declName)
  unless zigDecl == cppDecl do
    throwError m!"casesOn mismatch for {declName}\n\nC++:\n{← renderDefn cppDecl}\n\nZig:\n{← renderDefn zigDecl}"

run_cmd liftTermElabM do
  for declName in parityNames do
    checkCasesOnParity declName
