/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.VCGen.SuggestInvariant
public import Lean.Elab.Tactic.Do.VCGen
public import Lean.Elab.Tactic.Do.Internal.VCGen.Context
public import Lean.Elab.Tactic.Do.Internal.VCGen.Driver
public import Lean.Meta.Sym.Simp.Attr
public import Lean.Meta.Sym.Simp.ControlFlow
public import Lean.Meta.Sym.Simp.EvalGround
public import Lean.Meta.Sym.Simp.Forall
public import Lean.Meta.Sym.Simp.Rewrite
public import Lean.Meta.Sym.Simp.Simproc
public import Lean.Elab.Tactic.Grind.Main
public import Lean.Elab.Tactic.Grind.Basic

open Lean Parser Meta Elab Tactic Sym
open Lean.Elab.Tactic.Do Lean.Elab.Tactic.Do.SpecAttr
open Std.Do

namespace Lean.Elab.Tactic.Do.Internal

/-!
`mvcgen'` tactic frontend: parse the user-facing argument syntax into a
`VCGen.Context`, run `VCGen.run`, and replace the main goal with the
resulting invariants and VCs.
-/

namespace VCGen

/--
Parse the optional `[...]` argument list for `mvcgen'`, partitioning entries into
spec theorems and simp lemmas. Follows the same approach as
`Lean.Elab.Tactic.Do.VCGen.mkSpecContext`: each entry is first tried as a spec theorem,
and on failure falls back to a simp/unfold lemma processed via `mkSimpContext`.
-/
public def mkSpecContext (lemmas : Syntax) (ignoreStarArg := false) : TacticM VCGen.Context := do
  let mut specThms ← getSpecTheorems
  let mut simpStuff := #[]
  let mut starArg := false
  for arg in lemmas[1].getSepArgs do
    if arg.getKind == ``simpErase then
      try
        -- Try to interpret as a spec theorem erasure; fall back to simp erasure.
        let specThm ←
          if let some fvar ← Term.isLocalIdent? arg[1] then
            mkSpecTheoremFromLocal fvar.fvarId!
          else
            let id := arg[1]
            if let .ok declName ← observing (realizeGlobalConstNoOverloadWithInfo id) then
              mkSpecTheoremFromConst declName
            else
              withRef id <| throwUnknownConstant id.getId.eraseMacroScopes
        specThms := specThms.erase specThm.proof
      catch _ =>
        simpStuff := simpStuff.push ⟨arg⟩ -- simp tracks its own erase stuff
    else if arg.getKind == ``simpLemma then
      unless arg[0].isNone && arg[1].isNone do
        -- When there is ←, →, ↑ or ↓ then this is for simp
        simpStuff := simpStuff.push ⟨arg⟩
        continue
      let term := arg[2]
      match ← Term.resolveId? term (withInfo := true) <|> Term.elabCDotFunctionAlias? ⟨term⟩ with
      | some (.const declName _) =>
        try
          let thm ← mkSpecTheoremFromConst declName
          specThms := specThms.insert thm
        catch _ =>
          simpStuff := simpStuff.push ⟨arg⟩
      | some (.fvar fvar) =>
        try
          let thm ← mkSpecTheoremFromLocal fvar
          specThms := specThms.insert thm
        catch _ =>
          simpStuff := simpStuff.push ⟨arg⟩
      | _ => withRef term <| throwError "Could not resolve spec theorem `{term}`"
    else if arg.getKind == ``simpStar then
      starArg := true
      simpStuff := simpStuff.push ⟨arg⟩
    else
      throwUnsupportedSyntax
  -- Build a simp context from the collected simp/unfold arguments, seeded with the
  -- spec simp theorems database (which contains `@[spec]`-registered simp equations
  -- and definitions to unfold).
  let stx ← `(tactic| simp +unfoldPartialApp -zeta [$(Syntax.TSepArray.ofElems simpStuff),*])
  let res ← mkSimpContext stx.raw
    (eraseLocal := false)
    (simpTheorems := getSpecSimpTheorems)
    (ignoreStarArg := ignoreStarArg)
  let simpThms := res.ctx.simpTheorems[0]?.getD {}
  -- Add local spec hypotheses when `*` is used.
  if starArg && !ignoreStarArg then
    let fvars ← getPropHyps
    for fvar in fvars do
      unless specThms.isErased (.local fvar) do
        try
          let thm ← mkSpecTheoremFromLocal fvar
          specThms := specThms.insert thm
        catch _ => continue
  let entailsConsIntroRule ← mkBackwardRuleFromDecl ``SPred.entails_cons_intro
  let entailsNilPureIntroRule ← mkBackwardRuleFromDecl ``SPred.entails_nil_pure_intro
  let entailsNilIntroRule ← mkBackwardRuleFromDecl ``SPred.entails_nil_intro
  let applyPureConsEntailsLRule ← mkBackwardRuleFromDecl ``SPred.apply_pure_cons_entails_l
  let applyPureConsEntailsRRule ← mkBackwardRuleFromDecl ``SPred.apply_pure_cons_entails_r
  let downPureIntroRule ← mkBackwardRuleFromDecl ``SPred.down_pure_intro
  let pureElimRule ← mkBackwardRuleFromDecl ``SPred.pure_elim'
  let pureIntroRule ← mkBackwardRuleFromDecl ``SPred.pure_intro
  let postCondEntailsRflRule ← mkBackwardRuleFromDecl ``PostCond.entails.rfl
  let postCondEntailsMkRule ← mkBackwardRuleFromDecl ``PostCond.entails.mk
  let exceptCondsEntailsRflRule ← mkBackwardRuleFromDecl ``ExceptConds.entails.rfl
  let exceptCondsEntailsPureRule ← mkBackwardRuleFromDecl ``ExceptConds.entails.pure
  let exceptCondsEntailsFalseRule ← mkBackwardRuleFromDecl ``ExceptConds.entails_false
  let exceptCondsEntailsTrueRule ← mkBackwardRuleFromDecl ``ExceptConds.entails_true
  let tripleOfEntailsWPRule ← mkBackwardRuleFromDecl ``Triple.of_entails_wp
  let andIntroRule ← mkBackwardRuleFromDecl ``And.intro
  let specThmsNew ← SymM.run <| migrateSpecTheoremsDatabase specThms simpThms
  return {
    specThms := specThmsNew,
    entailsConsIntroRule,
    entailsNilPureIntroRule,
    entailsNilIntroRule,
    applyPureConsEntailsLRule,
    applyPureConsEntailsRRule,
    downPureIntroRule,
    pureElimRule,
    pureIntroRule,
    postCondEntailsRflRule,
    postCondEntailsMkRule,
    exceptCondsEntailsRflRule,
    exceptCondsEntailsPureRule,
    exceptCondsEntailsFalseRule,
    exceptCondsEntailsTrueRule,
    tripleOfEntailsWPRule,
    andIntroRule,
  }

end VCGen

/-- Warn about `mvcgen'` config options that are accepted by the parser but currently
ignored at runtime. As more options gain implementation support, drop their checks
here. Options with implemented semantics (`trivial`, `elimLets`, `stepLimit`,
`invariants?`) are silently accepted. -/
private def warnIgnoredConfig (config : VCGen.Config) : TacticM Unit := do
  let default : VCGen.Config := {}
  if config.leave != default.leave then
    logWarning "mvcgen': the `leave` config option is currently ignored."

/-- Parse grind configuration from the `with grind ...` clause and build `Grind.Params`.
Overrides the internal simp step limit to accommodate large unrolled goals. -/
private def elabGrindParams (grindStx : Syntax) (goal : MVarId) : TacticM Grind.Params := do
  let `(tactic| grind $config:optConfig $[only%$only]? $[ [$grindParams:grindParam,*] ]? $[=> $_:grindSeq]?) := grindStx
    | throwUnsupportedSyntax
  let grindConfig ← elabGrindConfig config
  mkGrindParams grindConfig only.isSome (grindParams.getD {}).getElems goal

/--
Build `Sym.Simp.Methods` from a variant name and extra theorems.
Supports the anonymous (default) variant. Named variants require a public
`elabSimpMethods` API in `Lean.Elab.Tactic.Grind.Sym` (see TODO below).
-/
private def elabSymSimpParts
    (variantId? : Option (TSyntax `ident))
    (extraIds? : Option (Array (TSyntax `ident)))
    : TacticM Sym.Simp.Methods := do
  let variantName := variantId?.map (·.getId) |>.getD .anonymous
  if !variantName.isAnonymous then
    -- TODO: `resolveExtraTheorems`, `elabVariant`, and `elabSymSimproc` in
    -- `Lean.Elab.Tactic.Grind.Sym` are module-private (non-`public section`).
    -- To support named variants here, we need a public API such as:
    --   `public def elabSymSimp (syn : Syntax) : GrindTacticM (Sym.Simp.Methods × ...)`
    -- exposed from that module, plus a lightweight `GrindTacticM` runner
    -- (the simproc elaborators only use `CoreM`/`MetaM` capabilities).
    throwError "named Sym.simp variants are not yet supported in `mvcgen'`; \
      use `mvcgen' simplifying_assumptions [thm₁, thm₂, ...]` with the default variant instead"
  -- Resolve extra theorems (local hypotheses first, then global constants)
  let mut extraThms : Array Sym.Simp.Theorem := #[]
  if let some ids := extraIds? then
    let lctx ← getLCtx
    for id in ids do
      if let some decl := lctx.findFromUserName? id.getId then
        extraThms := extraThms.push (← Sym.Simp.mkTheoremFromExpr decl.toExpr)
      else
        let declName ← realizeGlobalConstNoOverload id
        extraThms := extraThms.push (← Sym.Simp.mkTheoremFromDecl declName)
  -- Build default variant methods
  let symThms ← Sym.Simp.getSymSimpTheorems
  let pre := Sym.Simp.simpControl >> Sym.Simp.simpArrowTelescope
  let mut post : Sym.Simp.Simproc := Sym.Simp.evalGround >> symThms.rewrite
  if !extraThms.isEmpty then
    let mut thms : Sym.Simp.Theorems := {}
    for thm in extraThms do thms := thms.insert thm
    post := post >> thms.rewrite
  return { pre, post }

private def elabSimplifyingAssumptions (simpClause : Syntax) : TacticM (Option Sym.Simp.Methods) := do
  if simpClause.getNumArgs == 0 then return none
  let variantId? := if simpClause[1].getNumArgs != 0 then some ⟨simpClause[1][0]⟩ else none
  let extraIds? := if simpClause[2].getNumArgs != 0
    then some (simpClause[2][1].getSepArgs.map (⟨·⟩)) else none
  pure (some (← elabSymSimpParts variantId? extraIds?))

private def elabPreTac (goal : MVarId) (withPreTac : Syntax) : TacticM (VCGen.PreTac × Grind.Params) := do
  let mut params ← Grind.mkDefaultParams {}
  if withPreTac.getNumArgs == 0 then return (.none, params)
  let preTac := withPreTac[1]
  -- Look through `try` so `with (try grind)` still uses the `.grind` path.
  let (silent, preTac) :=
    if preTac.getKind == ``Lean.Parser.Tactic.tacticTry_ then
      (true, preTac[1][0][0][0])
    else
      (false, preTac)
  if preTac.getKind == ``Lean.Parser.Tactic.grind then
    params ← elabGrindParams preTac goal
    return (.grind silent, params)
  else
    return (.tactic preTac, params)

/--
Pre-parse the optional `invariantAlts` syntax into a map from invariant number
to alt syntax. Bullet form `· $rhs` is positional (1-based: bullet at index `i`
maps to key `i+1`); labelled form `| inv<n> $args* => $rhs` is keyed by the
parsed `n`, so out-of-order labels are supported.

Returns `none` for the `invariants?` form (delegated to upstream `elabInvariants`)
and `none` when no `invariants` clause is provided. Errors on mixed bullet/labelled
forms (one or the other is enforced by the `dotOrCase` flag in the upstream
elaborator; we replicate that check here).
-/
private def parseInvariantMap (stx : Syntax) :
    TacticM (Option (Std.HashMap Nat Syntax)) := do
  let some altsStx := stx.getOptional? | return none
  -- The `invariants?` (suggest) form is handled separately by upstream's `elabInvariants`.
  match altsStx with
  | `(invariantAlts| invariants? $_*) => return none
  | _ => pure ()
  let stx' : TSyntax ``invariantAlts := ⟨altsStx⟩
  match stx' with
  | `(invariantAlts| $_invariantsKW $alts*) =>
    if alts.isEmpty then return some {}
    let mut map : Std.HashMap Nat Syntax := {}
    let mut dotOrCase := LBool.undef
    for h : i in 0...alts.size do
      let alt := alts[i]
      match alt with
      | `(invariantDotAlt| · $_rhs) =>
        if dotOrCase matches .false then
          throwErrorAt alt "Alternation between labelled and bulleted invariants is not supported."
        dotOrCase := .true
        map := map.insert (i + 1) alt
      | `(invariantCaseAlt| | $tag $_args* => $_rhs) =>
        if dotOrCase matches .true then
          throwErrorAt alt "Alternation between labelled and bulleted invariants is not supported."
        dotOrCase := .false
        let n? : Option Nat := do
          let `(binderIdent| $tag:ident) := tag | some (i + 1) -- positional fallback
          let .str .anonymous s := tag.getId | none
          s.dropPrefix? "inv" >>= String.Slice.toNat?
        let some n := n? | throwErrorAt tag s!"Could not parse invariant label; expected `inv<n>`."
        if map.contains n then
          throwErrorAt tag s!"Duplicate invariant alternative for `inv{n}`."
        map := map.insert n alt
      | _ => throwErrorAt alt "Expected `invariantDotAlt` or `invariantCaseAlt`."
    return some map
  | _ => return none

/--
Run after VC generation: iterate the (unfiltered) `invariants` array returned by
`VCGen.run`, look up each entry in the pre-parsed `alts` map by its 1-based
position (which equals the `inv<n>` tag the entry carries — `VCGen.run` assigns
tags consecutively), and elaborate the matching alt. Invariants that were already
elaborated inline by `Driver.emitVC` (tracked in `inlineHandled`) are skipped, so
we don't warn about alts that were already consumed there. -/
private def elabRemainingInvariants (alts : Std.HashMap Nat Syntax)
    (invariants : Array MVarId) (inlineHandled : Std.HashSet Nat) : TacticM Unit := do
  let mut handled := inlineHandled
  for h : i in 0...invariants.size do
    let n := i + 1
    if handled.contains n then continue
    let some alt := alts[n]? | continue
    handled := handled.insert n
    let tac ← match alt with
      | `(invariantDotAlt| · $rhs) => `(tactic| exact $rhs)
      | `(invariantCaseAlt| | $_tag $args* => $rhs) => `(tactic| (rename_i $args*; exact $rhs))
      | _ => continue
    withRef alt <| discard <| evalTacticAt tac invariants[i]
  -- Warn on user-provided alts that matched no invariant goal (neither inline nor post-hoc).
  for (n, alt) in alts.toArray do
    unless handled.contains n do
      logWarningAt alt s!"Invariant alternative `inv{n}` does not match any invariant goal."

/-- Parsed `mvcgen'` arguments shared by the two entry points. -/
private structure ParsedArgs where
  config : VCGen.Config
  ctx : VCGen.Context
  params : Grind.Params
  invariantAlts? : Option (Std.HashMap Nat Syntax)

/-- Parse `mvcgen'` arguments. Lives in `TacticM` because the elaboration
helpers it calls do; `evalMVCGen'Grind` reaches it via a `Tactic.run`
excursion. -/
private def parseArgs (stx : Syntax) : TacticM ParsedArgs := withMainContext do
  if mvcgen.warning.get (← getOptions) then
    logWarningAt stx "The `mvcgen'` tactic is an experimental drop-in replacement for `mvcgen` \
      that will eventually replace it. Avoid using it in production projects."
  let config ← elabConfig stx[1]
  warnIgnoredConfig config
  let goal ← getMainGoal
  -- `elimLets` defaults to `false` in `mvcgen'` (vs. `true` in upstream `mvcgen`):
  -- existing tests rely on let-bindings being preserved in VC local contexts so that
  -- `case vcN bs* =>` patterns line up. Re-enabling on opt-in would require detecting
  -- explicit `(elimLets := true)` at the syntax level (upstream `Config` can't
  -- distinguish "default true" from "user-set true"); not yet wired.
  let ctx ← VCGen.mkSpecContext stx[2]
  let hypSimpMethods ← elabSimplifyingAssumptions stx[4]
  let (preTac, params) ← elabPreTac goal stx[5]
  let invariantAlts? ← parseInvariantMap stx[3]
  let ctx := { ctx with
    preTac, hypSimpMethods,
    trivial := config.trivial,
    useJP := config.jp,
    errorOnMissingSpec := config.errorOnMissingSpec,
    debug := config.debug,
    invariantAlts := invariantAlts?.getD {} }
  return { config, ctx, params, invariantAlts? }

/-- `mvcgen'` step inside `sym => …` blocks; the `invariants?` suggester
form is unsupported here. -/
@[builtin_grind_tactic Lean.Parser.Tactic.Grind.mvcgen']
def evalMVCGen'Grind : Lean.Elab.Tactic.Grind.GrindTactic := fun stx => do
  let goal ← Lean.Elab.Tactic.Grind.getMainGoal
  -- `TacticM` excursion to parse args; capture via `IO.Ref` since `Tactic.run`
  -- only propagates leftover `MVarId`s.
  let argsRef : IO.Ref (Option ParsedArgs) ← IO.mkRef none
  let _ ← Lean.Elab.Tactic.run goal.mvarId do
    argsRef.set (some (← parseArgs stx))
  let some args ← argsRef.get
    | throwError "internal error: `mvcgen'` parsing produced no args"
  let result ← Lean.Elab.Tactic.Grind.liftGrindM <|
    VCGen.run goal args.ctx args.config.stepLimit
  match args.invariantAlts? with
  | some alts =>
    let _ ← Lean.Elab.Tactic.run goal.mvarId <|
      elabRemainingInvariants alts result.invariants result.inlineHandledInvariants
  | none =>
    if !stx[3].isNone then
      throwError "`mvcgen' invariants?` (suggest mode) is not supported inside `sym => …` blocks"
  let invariants ← result.invariants.filterM (not <$> ·.isAssigned)
  let newGoals ← Lean.Elab.Tactic.Grind.liftGrindM do
    -- VCs inherit the parent's E-graph; `processHypotheses` internalizes
    -- fvars introduced during VC generation. Invariants are discharged via
    -- term values, so a fresh `mkGoalCore` is enough.
    let invGoals ← invariants.toList.mapM Grind.mkGoalCore
    let vcGoals ← result.vcs.toList.mapM Grind.processHypotheses
    return invGoals ++ vcGoals
  Lean.Elab.Tactic.Grind.replaceMainGoal newGoals
  if result.preTacFailed then
    throwError "pre-tactic failed on at least one VC; see errors above"

/-- Tactic-level `mvcgen'`. Cannot wrap `evalMVCGen'Grind` because routing
through `runAtGoal`/`withProtectedMCtx` wraps the proof in an aux theorem,
which rejects unsolved leftover VCs. -/
@[builtin_tactic Lean.Parser.Tactic.mvcgen']
public def elabMVCGen' : Tactic := fun stx => withMainContext do
  let args ← parseArgs stx
  let mvarId ← getMainGoal
  let result ← Grind.GrindM.run (do
    VCGen.run (← Grind.mkGoalCore mvarId) args.ctx args.config.stepLimit) args.params
  if let some alts := args.invariantAlts? then
    elabRemainingInvariants alts result.invariants result.inlineHandledInvariants
  else
    elabInvariants stx[3] result.invariants (suggestInvariant (result.vcs.map (·.mvarId)))
  let invariants ← result.invariants.filterM (not <$> ·.isAssigned)
  replaceMainGoal (invariants.toList ++ result.vcs.toList.map (·.mvarId))
  if result.preTacFailed then
    throwError "pre-tactic failed on at least one VC; see errors above"

end Lean.Elab.Tactic.Do.Internal
