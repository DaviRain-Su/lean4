/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

EmitYul — compiles LCNF (Lean's compiler IR) to a Yul `Object`.

This is the EVM counterpart of `EmitZig`: where EmitZig lowers LCNF to Zig
source (which Zig then lowers to native code or WASM), EmitYul lowers LCNF to
a Yul AST which `Yul.Printer` renders and `solc --strict-assembly` compiles to
EVM bytecode.

Object model on EVM memory (validated by the Phase 0 feasibility spike):
- Boxed scalars: `lean_box(n) = (n << 1) | 1`; pointers are 32-byte aligned
  (low bit 0), so the low bit distinguishes immediates from heap objects.
- Constructors: header word (tag/size) + N × 32-byte fields, allocated from
  the Solidity free-memory-pointer at `0x40`.
- Reference counting is elided: EVM memory is reclaimed per call, so
  `lean_inc`/`lean_dec`/`lean_del` are no-ops and `isShared` always returns 1
  (every object is treated as shared, so `.reuse` always copies).
- `Nat` is a single U256; values exceeding `2^255` revert.
- Closures use a small integer `fn_id` dispatched via a generated `switch`.

Yul bitop convention: `shl(shift_bits, value)`, i.e. `shl(1, n)` not
`shl(n, 1)`.
-/
module

prelude
import Lean.CoreM
public import Lean.Expr
public import Lean.Compiler.LCNF.Basic
import Lean.Compiler.LCNF.EmitUtil
import Lean.Compiler.LCNF.PhaseExt
public import Lean.Compiler.ExportAttr
public import Lean.Compiler.NameMangling
public import Lean.Compiler.Yul.AST
public import Lean.Compiler.Yul.Printer

public section

namespace Lean.Compiler.LCNF.EmitYul
open Lean


-- Short aliases for Yul types (fully qualified to avoid clashes with Lean.Expr).
abbrev YExpr := Lean.Compiler.Yul.Expr
abbrev YStmt := Lean.Compiler.Yul.Statement
abbrev YBlock := Lean.Compiler.Yul.Block
abbrev YCase := Lean.Compiler.Yul.Case
abbrev YTypedName := Lean.Compiler.Yul.TypedName
abbrev YObject := Lean.Compiler.Yul.Object

-- Yul expression/statement constructors (local helpers so call sites are short).
def yNum (n : Nat) : YExpr := Lean.Compiler.Yul.Expr.lit (Lean.Compiler.Yul.Literal.natLit n)
def yStr (s : String) : YExpr := Lean.Compiler.Yul.Expr.ident s
def yCall (fn : String) (args : Array YExpr) : YExpr := Lean.Compiler.Yul.Expr.call fn args
def yBuiltin (name : String) (args : Array YExpr) : YExpr := Lean.Compiler.Yul.Expr.builtin name args

def sExprStmt (e : YExpr) : YStmt := Lean.Compiler.Yul.Statement.exprStmt e
def sVarDecl (names : Array YTypedName) (value : Option YExpr) : YStmt := Lean.Compiler.Yul.Statement.varDecl names value
def sAssignment (names : Array String) (value : YExpr) : YStmt := Lean.Compiler.Yul.Statement.assignment names value
def sIfStmt (cond : YExpr) (body : YBlock) : YStmt := Lean.Compiler.Yul.Statement.ifStmt cond body
def sSwitch (e : YExpr) (cases : Array YCase) : YStmt := Lean.Compiler.Yul.Statement.switchStmt e cases
def sFuncDef (name : String) (params : Array YTypedName) (returns : Array YTypedName) (body : YBlock) : YStmt :=
  Lean.Compiler.Yul.Statement.funcDef name params returns body
def sLeave : YStmt := Lean.Compiler.Yul.Statement.leave

def tn (s : String) : YTypedName := { name := s }

abbrev Name := Lean.Name

/-- The conventional free-memory-pointer slot used by Solidity. -/
def freeMemPtrSlot : Nat := 0x40

/-- Mangle a Lean binder name into a Yul identifier. -/
def yulIdent (name : Lean.Name) : String :=
  name.mangle (pre := "v_")

/-- Mangle a Lean declaration name into a Yul function name. -/
def yulFnName (name : Lean.Name) : String :=
  name.mangle (pre := "f_")

-- ---------------------------------------------------------------------------
-- Yul expression builders for the Lean runtime
-- ---------------------------------------------------------------------------

/-- `lean_box(n) = (n << 1) | 1` as a Yul expression. -/
def leanBoxExpr (n : YExpr) : YExpr :=
  yBuiltin "or" #[yBuiltin "shl" #[yNum 1, n], yNum 1]

/-- `lean_unbox(o) = o >> 1` as a Yul expression. -/
def leanUnboxExpr (o : YExpr) : YExpr :=
  yBuiltin "shr" #[yNum 1, o]

/-- A boxed zero (the encoding of the natural number 0). -/
def leanBoxZero : YExpr := leanBoxExpr (yNum 0)

/-- Build the ctor header word: `tag | (other << 8) | (cs_sz << 16) | (rc << 32)`.
    `rc` is always 1 (degenerate RC, never decremented). -/
def ctorHeaderExpr (tag : Nat) (other : Nat) (csSz : Nat) : YExpr :=
  yBuiltin "or" #[
    yBuiltin "or" #[
      yBuiltin "or" #[yNum tag, yBuiltin "shl" #[yNum 8, yNum other]],
      yBuiltin "shl" #[yNum 16, yNum csSz]
    ],
    yBuiltin "shl" #[yNum 32, yNum 1]
  ]

/-- `mload(0x40)`. -/
def freeMemPtrExpr : YExpr := yBuiltin "mload" #[yNum freeMemPtrSlot]

/-- Read object field `i` (object fields start at offset 32). -/
def ctorGetExpr (obj : YExpr) (i : Nat) : YExpr :=
  yBuiltin "mload" #[yBuiltin "add" #[obj, yBuiltin "mul" #[yNum (i + 1), yNum 32]]]

/-- Write `value` to object field `i` as a Yul statement. -/
def ctorSetStmt (obj : YExpr) (i : Nat) (value : YExpr) : YStmt :=
  sExprStmt <| yBuiltin "mstore" #[
    yBuiltin "add" #[obj, yBuiltin "mul" #[yNum (i + 1), yNum 32]], value]

/-- Allocate `nwords` fresh words: returns (statements, ptr expr). -/
def allocN (nwords : Nat) : Array YStmt × YExpr :=
  let ptrName := "_alloc_ptr"
  let decl : YStmt := sVarDecl #[tn ptrName] (some freeMemPtrExpr)
  let bump : YStmt := sExprStmt <| yBuiltin "mstore" #[yNum freeMemPtrSlot,
    yBuiltin "add" #[yStr ptrName, yBuiltin "mul" #[yNum nwords, yNum 32]]]
  (#[decl, bump], yStr ptrName)

/-- Render an `Arg` as a Yul expression. -/
def argToExpr : Arg .impure → YExpr
  | .fvar fvarId => yStr (yulIdent fvarId.name)
  | .erased => leanBoxExpr (yNum 0)

-- ---------------------------------------------------------------------------
-- Emitter monad
-- ---------------------------------------------------------------------------

structure Context where
  localDecls : Array (Decl .impure) := #[]
  otherModuleDecls : Array (Signature .impure) := #[]
  modName : Lean.Name := .anonymous
  currFn : Lean.Name := .anonymous
  fvarTypes : NameMap Lean.Expr := {}
  joinDecls : NameMap (FunDecl .impure) := {}

structure State where
  stmts : Array YStmt := #[]
  fresh : Nat := 0

abbrev EmitYulM := ReaderT Context <| StateRefT State CoreM

@[inline] def emit (s : YStmt) : EmitYulM Unit :=
  modify fun st => { st with stmts := st.stmts.push s }

@[inline] def emitMany (ss : Array YStmt) : EmitYulM Unit :=
  modify fun st => { st with stmts := st.stmts ++ ss }

def getStoredType (fvarId : FVarId) : EmitYulM Lean.Expr := do
  let some type := (← read).fvarTypes.find? fvarId.name
    | throwError "unknown EmitYul local type {fvarId.name}"
  return type

def findJoinDecl? (fvarId : FVarId) : EmitYulM (Option (FunDecl .impure)) :=
  return (← read).joinDecls.find? fvarId.name

/-- Filter args to match runtime params (drop void/erased), like EmitZig.runtimeArgs. -/
def runtimeArgs (ps : Array (Param .impure)) (args : Array (Arg .impure)) : Array (Arg .impure) :=
  Id.run do
    let mut filtered := #[]
    for h : i in [0:args.size] do
      let arg := args[i]
      if h : i < ps.size then
        let p := ps[i]
        if p.type.isVoid || p.type.isErased then continue
      filtered := filtered.push arg
    filtered

/-- Run an emitter in a fresh statement buffer and return the statements.
    The captured statements are NOT appended to the outer buffer; the fresh-name
    counter is preserved across the capture. -/
def captureStmts (act : EmitYulM Unit) : EmitYulM (Array YStmt) := do
  let saved ← get
  modify fun _ => { saved with stmts := #[] }
  act
  let st ← get
  -- Restore the outer statement buffer but keep the advanced fresh counter.
  modify fun _ => { saved with fresh := st.fresh }
  pure st.stmts

-- ---------------------------------------------------------------------------
-- Collect join point declarations from a Code tree
-- ---------------------------------------------------------------------------

partial def collectJoinDecls (code : Code .impure) (acc : NameMap (FunDecl .impure) := {}) :
    NameMap (FunDecl .impure) :=
  match code with
  | .jp decl k =>
      let acc := acc.insert decl.fvarId.name decl
      let acc := collectJoinDecls decl.value acc
      collectJoinDecls k acc
  | .let _ k => collectJoinDecls k acc
  | .inc _ _ _ _ k | .dec _ _ _ _ _ k | .del _ k
  | .setTag _ _ k | .oset _ _ _ k | .uset _ _ _ k | .sset _ _ _ _ _ k =>
      collectJoinDecls k acc
  | .cases cs => cs.alts.foldl (init := acc) fun acc alt => collectJoinDecls alt.getCode acc
  | .jmp .. | .return .. | .unreach .. => acc

partial def collectCodeTypes (code : Code .impure) (acc : NameMap Lean.Expr := {}) : NameMap Lean.Expr :=
  match code with
  | .let decl k => collectCodeTypes k (acc.insert decl.fvarId.name decl.type)
  | .jp decl k =>
      let acc := decl.params.foldl (init := acc) fun acc p => acc.insert p.fvarId.name p.type
      let acc := collectCodeTypes decl.value acc
      collectCodeTypes k acc
  | .inc _ _ _ _ k | .dec _ _ _ _ _ k | .del _ k | .setTag _ _ k
  | .oset _ _ _ k | .uset _ _ _ k | .sset _ _ _ _ _ k => collectCodeTypes k acc
  | .cases cs => cs.alts.foldl (init := acc) fun acc alt => collectCodeTypes alt.getCode acc
  | .jmp .. | .return .. | .unreach .. => acc

/-- Check whether a join point is jumped to from within its own body (recursive). -/
partial def codeContainsJmpTo (target : Lean.Name) : Code .impure → Bool
  | .jp decl k =>
      codeContainsJmpTo target decl.value || codeContainsJmpTo target k
  | .let _ k | .inc _ _ _ _ k | .dec _ _ _ _ _ k | .del _ k
  | .setTag _ _ k | .oset _ _ _ k | .uset _ _ _ k | .sset _ _ _ _ _ k =>
      codeContainsJmpTo target k
  | .cases cs => cs.alts.any (codeContainsJmpTo target ·.getCode)
  | .jmp fvarId _ => fvarId.name == target
  | .return .. | .unreach .. => false

-- ---------------------------------------------------------------------------
-- emitLetValue: translate a LetValue into Yul statements defining `lhsId`
-- ---------------------------------------------------------------------------

mutual
  partial def litToExpr : LitValue → EmitYulM YExpr
    | .uint8 v => pure (leanBoxExpr (yNum v.toNat))
    | .uint16 v => pure (leanBoxExpr (yNum v.toNat))
    | .uint32 v => pure (leanBoxExpr (yNum v.toNat))
    | .uint64 v => pure (leanBoxExpr (yNum v.toNat))
    | .usize v => pure (leanBoxExpr (yNum v.toNat))
    | .nat v =>
      if v < UInt32.size then
        pure (leanBoxExpr (yNum v))
      else
        throwError "EmitYul: Nat literal {v} exceeds 32 bits; EVM Nat is U256-capped"
    | .str _ =>
      throwError "EmitYul: string literals not yet supported (need string runtime)"

  /-- Allocate a constructor object and set its fields. -/
  partial def emitCtor (lhsId : String) (info : CtorInfo) (args : Array (Arg .impure)) :
      EmitYulM Unit := do
    if info.size == 0 && info.usize == 0 && info.ssize == 0 then
      emit <| sVarDecl #[tn lhsId] (some (leanBoxExpr (yNum info.cidx)))
      return
    let nwords := info.size + 1
    let (allocStmts, ptr) := allocN nwords
    emitMany allocStmts
    -- Store header at offset 0 (ptr points to it).
    emit <| sExprStmt (yBuiltin "mstore" #[ptr, ctorHeaderExpr info.cidx info.size 0])
    for _h : i in [0:args.size] do
      emit <| ctorSetStmt ptr i (argToExpr args[i]!)
    emit <| sVarDecl #[tn lhsId] (some ptr)

  partial def emitPap (lhsId : String) (fn : Lean.Name) (args : Array (Arg .impure)) :
      EmitYulM Unit := do
    -- Closure object: [header(tag=245), fn_id, arity, num_fixed, args...]
    let nwords := args.size + 4
    let (allocStmts, ptr) := allocN nwords
    emitMany allocStmts
    emit <| sExprStmt (yBuiltin "mstore" #[ptr, ctorHeaderExpr 245 args.size 0])
    emit <| ctorSetStmt ptr 0 (yNum (fn.hash.toNat))
    emit <| ctorSetStmt ptr 1 (yNum 0)
    emit <| ctorSetStmt ptr 2 (yNum args.size)
    for _h : i in [0:args.size] do
      emit <| ctorSetStmt ptr (i + 3) (argToExpr args[i]!)
    emit <| sVarDecl #[tn lhsId] (some ptr)

  partial def emitFap (lhsId : String) (fn : Lean.Name) (args : Array (Arg .impure)) :
      EmitYulM Unit := do
    let env ← getEnv
    -- Filter out void/erased args using the callee signature (like EmitZig's runtimeArgs).
    let sig ← getImpureSignature? fn
    let argExprs := match sig with
      | some s => (runtimeArgs s.params args).map argToExpr
      | none => args.map argToExpr
    -- Check for `lean_evm_*` extern: lower directly to the EVM opcode.
    match getExternAttrData? env fn |>.bind (getExternEntryFor · `c) with
    | some (.standard _ externName) =>
      if externName.startsWith "lean_evm_" then
        let opcode : String := externName.drop "lean_evm_".length |>.toString
        -- EVM externs take/return raw U256; unbox args, box the result.
        let unboxedArgs := argExprs.map leanUnboxExpr
        if opcode == "returnMem" || opcode == "revertMem" then
          -- Terminating builtins: control never returns.
          emit <| sExprStmt (yBuiltin opcode unboxedArgs)
          emit <| sExprStmt (yBuiltin "revert" #[yNum 0, yNum 0])
          emit <| sVarDecl #[tn lhsId] (some leanBoxZero)
        else if opcode == "mstore" || opcode == "sstore" then
          -- Void builtins: emit as statement, lhs = boxed 0.
          emit <| sExprStmt (yBuiltin opcode unboxedArgs)
          emit <| sVarDecl #[tn lhsId] (some leanBoxZero)
        else
          -- Value builtins: box the result.
          emit <| sVarDecl #[tn lhsId] (some (leanBoxExpr (yBuiltin opcode unboxedArgs)))
      else
        emit <| sVarDecl #[tn lhsId] (some (yCall (yulFnName fn) argExprs))
    | _ =>
      emit <| sVarDecl #[tn lhsId] (some (yCall (yulFnName fn) argExprs))

  partial def emitApply (lhsId : String) (fvarId : FVarId) (args : Array (Arg .impure)) :
      EmitYulM Unit := do
    let applyFn := match args.size with
      | 1 => "lean_apply_1"
      | 2 => "lean_apply_2"
      | _ => "lean_apply_n"
    let all := #[yStr (yulIdent fvarId.name)] ++ args.map argToExpr
    emit <| sVarDecl #[tn lhsId] (some (yCall applyFn all))

  partial def emitLetValue (lhs : Lean.Name) (value : LetValue .impure) : EmitYulM Unit := do
    let lhsId := yulIdent lhs
    match value with
    | .lit lit =>
      let e ← litToExpr lit
      emit <| sVarDecl #[tn lhsId] (some e)
    | .erased =>
      emit <| sVarDecl #[tn lhsId] (some leanBoxZero)
    | .box _ fvarId =>
      emit <| sVarDecl #[tn lhsId] (some (leanBoxExpr (yStr (yulIdent fvarId.name))))
    | .unbox fvarId =>
      emit <| sVarDecl #[tn lhsId] (some (leanUnboxExpr (yStr (yulIdent fvarId.name))))
    | .isShared _ =>
      emit <| sVarDecl #[tn lhsId] (some (yNum 1))
    | .ctor info args => emitCtor lhsId info args
    | .oproj i fvarId =>
      emit <| sVarDecl #[tn lhsId] (some (ctorGetExpr (yStr (yulIdent fvarId.name)) i))
    | .uproj i fvarId =>
      emit <| sVarDecl #[tn lhsId] (some (ctorGetExpr (yStr (yulIdent fvarId.name)) i))
    | .sproj _ offset fvarId =>
      -- Scalar projection: read word at byte offset within the scalar region.
      let addr := yBuiltin "add" #[yStr (yulIdent fvarId.name), yNum offset]
      emit <| sVarDecl #[tn lhsId] (some (yBuiltin "mload" #[addr]))
    | .reset _ fvarId =>
      -- RC elided: reset is a no-op alias.
      emit <| sVarDecl #[tn lhsId] (some (yStr (yulIdent fvarId.name)))
    | .reuse _ info _ args =>
      -- Always copy (degenerate RC).
      emitCtor lhsId info args
    | .fap fn args => emitFap lhsId fn args
    | .pap fn args => emitPap lhsId fn args
    | .fvar fvarId args => emitApply lhsId fvarId args
end

-- ---------------------------------------------------------------------------
-- emitCode: walk the Code tree
-- ---------------------------------------------------------------------------

mutual
  partial def emitCode (code : Code .impure) : EmitYulM Unit := do
    match code with
    | .jp _ k => emitCode k
    | .let decl k =>
      emitLetValue decl.fvarId.name decl.value
      emitCode k
    | .inc _ _ _ _ k => emitCode k
    | .dec _ _ _ _ _ k => emitCode k
    | .del _ k => emitCode k
    | .setTag fvarId cidx k =>
      emit <| sExprStmt (yBuiltin "mstore" #[yStr (yulIdent fvarId.name), ctorHeaderExpr cidx 0 0])
      emitCode k
    | .oset fvarId i y k =>
      emit <| ctorSetStmt (yStr (yulIdent fvarId.name)) i (argToExpr y)
      emitCode k
    | .uset fvarId i y k =>
      emit <| ctorSetStmt (yStr (yulIdent fvarId.name)) i (yStr (yulIdent y.name))
      emitCode k
    | .sset fvarId _ offset y _ k =>
      let addr := yBuiltin "add" #[yStr (yulIdent fvarId.name), yNum offset]
      emit <| sExprStmt (yBuiltin "mstore" #[addr, yStr (yulIdent y.name)])
      emitCode k
    | .cases cs => emitCases cs
    | .return fvarId =>
      emit <| sAssignment #["_ret"] (yStr (yulIdent fvarId.name))
      emit Lean.Compiler.Yul.Statement.leave
    | .jmp fvarId args =>
      let some jpDecl ← findJoinDecl? fvarId
        | throwError "EmitYul: jump to unknown join point {fvarId.name}"
      if codeContainsJmpTo fvarId.name jpDecl.value then
        throwError "EmitYul: recursive join point {fvarId.name} not supported on EVM"
      if args.size != jpDecl.params.size then
        throwError "EmitYul: invalid jump arity to {fvarId.name}"
      for _h : i in [0:jpDecl.params.size] do
        let p := jpDecl.params[i]
        if p.type.isVoid || p.type.isErased then continue
        let arg := args[i]!
        emit <| sVarDecl #[tn (yulIdent p.fvarId.name)] (some (argToExpr arg))
      emitCode jpDecl.value
    | .unreach _ =>
      emit <| sExprStmt (yBuiltin "revert" #[yNum 0, yNum 0])

  partial def emitCases (cs : Cases .impure) : EmitYulM Unit := do
    -- The discriminator is a Lean object; read its constructor tag from the
    -- header word. (For boxed scalars, the runtime `lean_obj_tag` helper reads
    -- the low byte of the header; we use it uniformly here.)
    let discrTag : YExpr := yCall "lean_obj_tag" #[yStr (yulIdent cs.discr.name)]
    let mut yulCases : Array YCase := #[]
    for alt in cs.alts do
      let bodyStmts ← captureStmts (emitCode alt.getCode)
      let c ← match alt with
        | .ctorAlt info _ => pure { value := some (Lean.Compiler.Yul.Literal.natLit info.cidx), body := { statements := bodyStmts } : YCase }
        | .default _ => pure { value := none, body := { statements := bodyStmts } : YCase }
        | .alt .. => throwError "EmitYul: pure case alternative in impure code not supported"
      yulCases := yulCases.push c
    emit <| sSwitch discrTag yulCases
end

-- ---------------------------------------------------------------------------
-- emitDecl: compile a single declaration to a Yul function
-- ---------------------------------------------------------------------------

def emitDecl (decl : Decl .impure) : EmitYulM (Option YStmt) := do
  match decl.value with
  | .extern .. => return none
  | .code code =>
    let fnName := yulFnName decl.name
    let params := decl.params.filter (fun p => !(p.type.isVoid || p.type.isErased))
    let paramNames := params.map fun p => tn (yulIdent p.fvarId.name)
    let returnVars := #[tn "_ret"]
    let joinDecls := collectJoinDecls code
    let fvarTypes := collectCodeTypes code <|
      decl.params.foldl (init := ({} : NameMap Lean.Expr)) fun acc p =>
        acc.insert p.fvarId.name p.type
    let bodyStmts ← withReader (fun ctx =>
      { ctx with currFn := decl.name, joinDecls, fvarTypes }) do
      captureStmts do
        emitCode code
        emit Lean.Compiler.Yul.Statement.leave
    return some <| sFuncDef fnName paramNames returnVars { statements := bodyStmts }

-- ---------------------------------------------------------------------------
-- Runtime helper functions prepended to every emitted object
-- ---------------------------------------------------------------------------

def runtimeHelpers : Array YStmt :=
  #[
    sFuncDef "lean_box" #[tn "n"] #[tn "r"]
      { statements := #[sAssignment #["r"] (yBuiltin "or" #[yBuiltin "shl" #[yNum 1, yStr "n"], yNum 1])] },
    sFuncDef "lean_unbox" #[tn "o"] #[tn "r"]
      { statements := #[sAssignment #["r"] (yBuiltin "shr" #[yNum 1, yStr "o"])] },
    sFuncDef "lean_alloc_ctor" #[tn "tag", tn "nfields"] #[tn "obj"]
      { statements := #[
          sVarDecl #[tn "ptr"] (some (yBuiltin "mload" #[yNum freeMemPtrSlot])),
          sExprStmt (yBuiltin "mstore" #[yNum freeMemPtrSlot,
            yBuiltin "add" #[yStr "ptr", yBuiltin "mul" #[yBuiltin "add" #[yStr "nfields", yNum 1], yNum 32]]]),
          sExprStmt (yBuiltin "mstore" #[yStr "ptr",
            yBuiltin "or" #[yBuiltin "or" #[yStr "tag", yBuiltin "shl" #[yNum 8, yStr "nfields"]],
              yBuiltin "shl" #[yNum 32, yNum 1]]]),
          sAssignment #["obj"] (yStr "ptr")
        ] },
    sFuncDef "lean_ctor_get" #[tn "obj", tn "i"] #[tn "v"]
      { statements := #[sAssignment #["v"] (yBuiltin "mload" #[
          yBuiltin "add" #[yStr "obj", yBuiltin "mul" #[yBuiltin "add" #[yStr "i", yNum 1], yNum 32]]])] },
    sFuncDef "lean_ctor_set" #[tn "obj", tn "i", tn "v"] #[]
      { statements := #[sExprStmt (yBuiltin "mstore" #[
          yBuiltin "add" #[yStr "obj", yBuiltin "mul" #[yBuiltin "add" #[yStr "i", yNum 1], yNum 32]], yStr "v"])] },
    sFuncDef "lean_obj_tag" #[tn "o"] #[tn "t"]
      { statements := #[sAssignment #["t"] (yBuiltin "and" #[yBuiltin "mload" #[yStr "o"], yNum 0xff])] },
    -- -----------------------------------------------------------------------
    -- Nat arithmetic (U256-capped scalar domain).
    -- Lean boxed scalars encode n as (n << 1) | 1; unbox is n >> 1.
    -- These are named to match the LCNF-emitted call sites (f_<mangled>).
    -- decEq/decLe/decLt return a Decidable ctor object: isTrue=tag 1, isFalse=tag 0.
    -- -----------------------------------------------------------------------
    sFuncDef "f_Nat_add" #[tn "a", tn "b"] #[tn "r"]
      { statements := #[sAssignment #["r"] (leanBoxExpr (yBuiltin "add" #[leanUnboxExpr (yStr "a"), leanUnboxExpr (yStr "b")]))] },
    sFuncDef "f_Nat_sub" #[tn "a", tn "b"] #[tn "r"]
      { statements := #[
          sVarDecl #[tn "va"] (some (leanUnboxExpr (yStr "a"))),
          sVarDecl #[tn "vb"] (some (leanUnboxExpr (yStr "b"))),
          sIfStmt (yBuiltin "lt" #[yStr "va", yStr "vb"])
            { statements := #[sAssignment #["r"] leanBoxZero] },
          sAssignment #["r"] (leanBoxExpr (yBuiltin "sub" #[yStr "va", yStr "vb"]))
        ] },
    sFuncDef "f_Nat_mul" #[tn "a", tn "b"] #[tn "r"]
      { statements := #[sAssignment #["r"] (leanBoxExpr (yBuiltin "mul" #[leanUnboxExpr (yStr "a"), leanUnboxExpr (yStr "b")]))] },
    sFuncDef "f_Nat_decEq" #[tn "a", tn "b"] #[tn "r"]
      { statements := #[
          sIfStmt (yBuiltin "eq" #[leanUnboxExpr (yStr "a"), leanUnboxExpr (yStr "b")])
            { statements := #[sAssignment #["r"] (leanBoxExpr (yNum 1))  -- isTrue (tag 1)
              ] },
          sAssignment #["r"] leanBoxZero  -- isFalse (tag 0)
        ] },
    sFuncDef "f_Nat_decLe" #[tn "a", tn "b"] #[tn "r"]
      { statements := #[
          sIfStmt (yBuiltin "iszero" #[yBuiltin "gt" #[leanUnboxExpr (yStr "a"), leanUnboxExpr (yStr "b")]])
            { statements := #[sAssignment #["r"] (leanBoxExpr (yNum 1))] },
          sAssignment #["r"] leanBoxZero
        ] },
    sFuncDef "f_Nat_decLt" #[tn "a", tn "b"] #[tn "r"]
      { statements := #[
          sIfStmt (yBuiltin "lt" #[leanUnboxExpr (yStr "a"), leanUnboxExpr (yStr "b")])
            { statements := #[sAssignment #["r"] (leanBoxExpr (yNum 1))] },
          sAssignment #["r"] leanBoxZero
        ] }
  ]

-- ---------------------------------------------------------------------------
-- Entry points
-- ---------------------------------------------------------------------------

def emitYulForDecls (modName : Lean.Name) (decls : Array Lean.Name) : CoreM String := do
  let (localDecls, otherModuleDecls) ← collectUsedDecls decls
  let indexMap := getImpureDeclIndices (← getEnv) decls
  let localDecls := localDecls.qsort fun l r => indexMap[l.name]! < indexMap[r.name]!
  let fns ← localDecls.toList.filterMapM fun decl => do
    let (opt, _) ← (emitDecl decl).run { localDecls, otherModuleDecls, modName } |>.run { stmts := #[], fresh := 0 }
    pure opt
  let codeStmts := runtimeHelpers ++ fns.toArray
  let obj : YObject := { name := "Contract", code := { statements := codeStmts } }
  pure (Lean.Compiler.Yul.Printer.render obj)

public def emitYul (modName : Lean.Name) : CoreM String := do
  emitYulForDecls modName (← getLocalImpureDecls)

end Lean.Compiler.LCNF.EmitYul
