module

import Lean.Elab.Command
import Lean.Meta.Constructions.CasesOn

/-!
Checks that the standalone Zig quick expression comparator matches the default implementation on a mixed expression corpus.
-/

open Lean Meta Elab Command Term

private def insertExpr (xs : Array Expr) (e : Expr) : Array Expr :=
  if xs.any (fun e' => e' == e) then xs else xs.push e

private def addExprTree (xs : Array Expr) (e : Expr) : MetaM (Array Expr) := do
  let xs := insertExpr xs e
  Expr.foldlM (fun acc sub => pure <| insertExpr acc sub) xs e

private def addConstInfo (xs : Array Expr) (declName : Name) : MetaM (Array Expr) := do
  let info ← getConstInfo declName
  let mut xs ← addExprTree xs info.type
  if let some value := info.value? (allowOpaque := true) then
    xs ← addExprTree xs value
  return xs
private def addCasesOnDecl (xs : Array Expr) (declName : Name) : MetaM (Array Expr) := do
  let env := (← getEnv).toKernelEnv
  let cppDecl ← ofExceptKernelException (Lean.mkCasesOnImp env declName)
  let zigDecl ← ofExceptKernelException (Lean.mkCasesOnImpZig env declName)
  let xs ← cppDecl.foldExprM (fun acc e => addExprTree acc e) xs
  zigDecl.foldExprM (fun acc e => addExprTree acc e) xs


private def addElabTerm (xs : Array Expr) (stx : TSyntax `term) : TermElabM (Array Expr) := do
  let e ← Term.elabTerm stx none
  addExprTree xs (← instantiateMVars e)

private def mkCorpus : TermElabM (Array Expr) := do
  let mut xs := #[]
  xs ← addElabTerm xs (← `(Nat))
  xs ← addElabTerm xs (← `(Type))
  xs ← addElabTerm xs (← `((
    do
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
      pure ()
  )))
  xs ← addElabTerm xs (← `(List Nat))
  xs ← addElabTerm xs (← `(Array Nat))
  xs ← addElabTerm xs (← `((fun (x : Nat) => x + 1)))
  xs ← addElabTerm xs (← `((fun (α : Type) (x : α) => x)))
  xs ← addElabTerm xs (← `((fun (x : Nat) => let y := x + 1; y)))
  xs ← addElabTerm xs (← `((fun (x : Nat) => match x with | 0 => 1 | Nat.succ n => n)))
  xs ← addElabTerm xs (← `(([1, 2, 3] : List Nat)))
  xs ← addElabTerm xs (← `((#[1, 2, 3] : Array Nat)))
  xs ← addElabTerm xs (← `((show Decidable (1 = 1) from inferInstance)))
  xs ← addElabTerm xs (← `((show OfNat Nat 1 from inferInstance)))
  let pair ← Term.elabTerm (← `(((1, true) : Nat × Bool))) none
  let pair ← instantiateMVars pair
  xs ← addExprTree xs pair
  xs ← addExprTree xs (mkProj ``Prod 0 pair)
  let mdBase := Lean.mkConst ``Nat
  let md1 := mkMData (KVMap.empty.insert `pp.explicit true) mdBase
  let md2 := mkMData (KVMap.empty.insert `pp.explicit true) mdBase
  let md3 := mkMData (KVMap.empty.insert `pp.universes true) mdBase
  xs ← addExprTree xs md1
  xs ← addExprTree xs md2
  xs ← addExprTree xs md3
  xs ← addExprTree xs (mkProj ``Prod 1 pair)
  let xs' ← withLocalDeclD `x (Lean.mkConst ``Nat) fun x => do
    let xs ← addExprTree xs x
    let lam ← mkLambdaFVars #[x] x
    addExprTree xs lam
  xs := xs'
  let mvar ← mkFreshExprMVar (Lean.mkConst ``Nat)
  let umax := mkLevelMax (Level.param `u) (Level.param `v)
  let uimx := mkLevelIMax (mkLevelSucc (Level.param `u)) umax
  xs ← addExprTree xs (mkSort umax)
  xs ← addExprTree xs (mkSort uimx)
  xs ← addExprTree xs (Lean.mkConst ``List.map [uimx, umax])
  xs ← addExprTree xs mvar
  let u := Level.param `u
  xs ← addConstInfo xs ``Nat.add
  xs ← addConstInfo xs ``List.map
  xs ← addConstInfo xs ``Array.map
  xs ← addConstInfo xs ``Prod.fst
  xs ← addCasesOnDecl xs ``Nat
  xs ← addCasesOnDecl xs ``List
  xs ← addCasesOnDecl xs ``Array
  xs ← addExprTree xs (mkSort u)
  xs ← addExprTree xs (Lean.mkConst ``List.map [u, u])
  return xs

private def checkCorpus : TermElabM Unit := do
  let xs ← mkCorpus
  for i in [:xs.size] do
    for j in [:xs.size] do
      let a := xs[i]!
      let b := xs[j]!
      let cpp := Expr.quickLt a b
      let zig := Expr.quickLtZig a b
      unless cpp == zig do
        throwError m!"quickLt mismatch at ({i}, {j})\ncpp={cpp} zig={zig}\n\nrepr(a):\n{repr a}\n\nrepr(b):\n{repr b}\n\na:\n{← ppExpr a}\n\nb:\n{← ppExpr b}"

run_cmd liftTermElabM do
  checkCorpus
