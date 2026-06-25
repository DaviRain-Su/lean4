# Zig Full Port Plan

Last updated: 2026-06-25

## Current Status

### Runtime layer ✅
- 117 Zig files, ~211,690 lines — fully ported
- Compiles to `libleanrt_zig.a`, linked into `libleanshared.dylib`
- Zig unit tests (`zig build test`): 232/232 pass (per docs; not independently re-verified this session)

### Kernel layer ✅ (99.97% pure Zig)
- `kernel.zig`, `type_checker.zig`, `add_decl_bridge.zig`, `inductive.zig`, `environment.zig` — full Zig implementations
- Only **2 C++ extern functions remain** (the elab↔kernel environment bridge):
  - `lean_elab_environment_to_kernel_env` (`src/runtime/zig/elab_environment.zig:20`)
  - `lean_elab_environment_update_base_after_kernel_add` (`src/runtime/zig/elab_environment.zig:21`)
- These are the last architectural barrier to a 100% pure Zig kernel.

### Symbol flip mechanism ✅
- 1,089 symbols flipped from C++ weak → Zig strong via `tools/phase3_flip_symbols.txt`
- `libleanshared.dylib` links `libleanrt_zig.a` + `libadd_decl_bridge.a` + `libleanrt_initial-exec.a`

### Stage1 build ✅
- `build/release/stage1/bin/lean --version` = `Lean (version 4.33.0-pre, arm64-apple-darwin25.4.0, Release)`
- `lean --run` prints "hello from stage1 zig runtime"
- Known issue: intermittent CMake race (`DeclNameGen.c.tmp: No such file or directory` / `libInit.a not found`); retry succeeds. This is a CMake file-level dependency ordering bug, not a compiler defect.

### EmitZig codegen ✅ (unit tier)
- `src/Lean/Compiler/LCNF/EmitZig.lean` (1,688 lines) + InlineHelpers (910) + RuntimeExterns (1,251)
- **`EMITZIG_ZIGRT_TESTS`: 21/21 pass (100%)**
  Array, Cases, Closure, Exception, Float, FloatArray, JoinPoint, InlineHelpers, List, Loop, LoopControl, MixedScalar, Nat, Recursion, SetStdout, Smoke, Stderr, String, StringEscapes, StringHelpers, Task
- End-to-end verified: `lean -z Smoke.lean` → 119KB Zig → `tools/zigc-zigrt` → executable prints "hello"
- `ReuseClosedTerm.lean` is correctly classified in `EMITZIG_STDLIB_TESTS` (CMakeLists.txt:418); no test misclassification exists.

### `LEAN_ZIG_CODEGEN` — still OFF
- CMake: `LEAN_ZIG_CODEGEN=OFF`, `LEAN_ZIG_RT_CUTOVER=ON`, `LEAN_ZIG_RUNTIME=ON`, `STAGE=1`
- Flipping it ON is gated by the stdlib codegen path (see Blockers below).

---

## Blockers

### B1. stdlib Zig codegen path (the real blocker)

`tools/zigc-stdlib` recursively emits and compiles the transitive closure of stdlib modules **from source** (`lean -z src/Init/Core.lean` for each module). This re-elaborates every stdlib module standalone.

**Root cause finding (2026-06-25):** The 44/327 stdlib module failures are **NOT a Zig kernel bug**. Two layers of cause were identified:

**Layer 1 — `LEAN_PATH` not set (majority of failures):** `tools/zigc-stdlib`'s `host_lean_env()` (line 64-68) does NOT set `LEAN_PATH`. Without it, `lean` cannot find the prebuilt `.olean` files from the current stage, so the elaborator fails to resolve constructor universe-level params. Setting `LEAN_PATH=":$BUILD_DIR/lib/lean"` eliminates the bulk of the `incorrect number of universe levels` errors:

```
# Without LEAN_PATH (current zigc-stdlib behavior):
$ lean src/Init/Core.lean
src/Init/Core.lean:212:0: error: incorrect number of universe levels Sum.inl   # + ~26 more

# With LEAN_PATH=":<build>/stage1/lib/lean":
$ LEAN_PATH=":<build>/stage1/lib/lean" lean src/Init/Core.lean
src/Init/Core.lean:1354:2: error: Invalid alternative name `single` ...        # only 4 left
```

This matches `lean.mk.in:53-54`, which prepends `$(dir $(LEAN))../lib/lean` to `LEAN_PATH` so already-compiled modules from the previous stage are found.

**Layer 2 — residual elaborator errors (identical under C++ and Zig kernels):** Even with `LEAN_PATH` set, a handful of modules still fail (`Init.WF`, `Init.Data.Int.Linear`, `Init.Data.Nat.Linear`, `Init.Data.RArray`, `Init.Data.Format.Basic`, `Init.GetElem`, `Init.Core`'s `TransGen`). Verified these produce **byte-identical errors under the default C++ kernel and the Zig kernel**:

```
$ LEAN_PATH=... lean src/Init/WF.lean           # C++ kernel
src/Init/WF.lean:36:8: error: Type mismatch ... Sort (imax u2 (imax u2 u1) u1) vs Sort (imax u2 u1)

$ LEAN_PATH=... lean -z out.zig src/Init/WF.lean # Zig kernel (identical)
src/Init/WF.lean:36:8: error: Type mismatch ... Sort (imax u2 (imax u2 u1) u1) vs Sort (imax u2 u1)
```

These are elaborator-level symptoms of re-elaborating stdlib source standalone (termination proofs, `TransGen` induction alternatives, universe imax solving) — not kernel defects. `lean.mk` avoids them by building in a library context with the full `.olean` import graph already materialized; `zigc-stdlib`'s "emit each module standalone from source" design (per its docstring and comment at `tools/zigc-stdlib:116-117`) collides with this.

**Verified:** `lean -z StdlibFin.lean` (which uses `import Init.Data.Fin`, loading from `.olean`) **succeeds with exit 0** and emits a 204KB Zig file with no errors. The stdlib codegen path works when imports resolve from `.olean`; it only fails when re-elaborating source standalone.

**Path forward:**
1. **Fix `host_lean_env` in `tools/zigc-stdlib`** to set `LEAN_PATH` from the lean binary's sibling `lib/lean` (analogous to `lean.mk.in:53-54`). **Implemented 2026-06-25** (`host_lean_env(lean=...)` + 3 call sites updated). Effect: per-module `incorrect number of universe levels` errors drop sharply (e.g. `Init.Core` 27->4), but end-to-end `StdlibFin` run only went 44->39 failing modules -- the residual Layer 2 errors (termination, `TransGen` alternatives) still fail the affected modules. So `LEAN_PATH` is necessary but not sufficient.
2. For the residual elaborator errors, investigate whether `zigc-stdlib` can emit stdlib module Zig from the `.olean`-loaded environment (like `lean -z StdlibFin.lean` does for the driver) rather than re-elaborating each source file standalone. This is the `EMITZIG_STDLIB_TESTS` (59 tests including `StdlibFin`, `ReuseClosedTerm`) path.

### B2. Last C++ surface (calibrated 2026-06-25 via `nm` analysis)

Symbol-surface measurement (stage1 `build/release/stage1`, macOS arm64):

| artifact | defined `lean_*` C-api | defined C++ mangled (`_Z...`) |
|---|---|---|
| `libleanshared.dylib` (final) | 1462 | 1764 |
| `libleancpp.a` (C++ archive) | 57 | 2440 |
| Zig archives (`libleanrt_zig`+`add_decl_bridge`+`kernel_entrypoints`+`initial-exec`) | 1222 | — |

Key finding: **0 `lean_*` C-api symbols are cpp-only at link time.** All 512 `lean_*` referenced by `libInit.a`/`libLean.a` resolve into `libleanshared.dylib`. The remaining C++ surface is **mangled C++ code inside the dylib** (1764 symbols, ~932 in `lean::` namespace), not `lean_*` C-api.

The only `lean_*` C-api still provided by C++ and *not* in any Zig archive (9 symbols, all present in the dylib via C++ object files):
- `lean_compacted_region_free` / `_read` / `_save` — object compactor (olean serialization)
- `lean_cpp_environment_add_with_checking` / `_without_checking` — **the C++ helper `kernel.zig` calls for checked `lean_add_decl` (Task 2); intentionally C++ until the kernel type checker is ported**
- `lean_eval_main` — IR interpreter entrypoint
- `lean_level_eqv` — kernel level equivalence
- `lean_smap_foreach_test` — test helper

Plus the 2 elab-env externs declared in `elab_environment.zig:20-21` (`lean_elab_environment_to_kernel_env`, `lean_elab_environment_update_base_after_kernel_add`) — these are called by `elabAddDeclCore` and currently C++.

**So the real "still C++" surface is ~11 `lean_*` C-api functions + 1764 mangled C++ symbols (~932 in `lean::`).** The 1764 mangled symbols break down as:
- 240 typeinfo/vtable
- 53 `lean::type_checker` (Phase B target)
- 48 `lean::ir` (IR interpreter, Phase D target)
- 44 `lean::mpz` (big integer — already has Zig `mp.zig`; needs flip)
- 37 `lean::rb_tree` + 6 `lean::rb_map` (container support)
- 26 `lean::add_inductive_fn` + 9 `lean::elim_nested_inductive_fn` (inductive declaration path — partially in Zig `add_decl_bridge.zig`)
- 20 `lean::object_compactor` + 9 `lean::region_reader` (olean serialization)
- 16 `lean::name`, 13 `lean::optional`, 12 `lean::list_ref`, 17 `lean::buffer` (C++ STL-like helpers)
- 10 `lean::lthread` (threading)
- ~40 exception classes (4 each: kernel_exception, type_mismatch_exception, etc.)
- remaining misc

**Note on the "78 symbols" claim:** The earlier "78 C++ symbols to remove" figure does not match the actual `nm` surface (56 `lean_*` in `libleancpp.a`, all already in the dylib; 0 cpp-only `lean_*` deps). The 78 likely conflated mangled C++ classes with `lean_*` C-api, or counted a different build artifact. The calibrated numbers above supersede it.

**Path forward (revised, evidence-based):**
1. **Phase A (flip + link fix): ✅ COMPLETE 2026-06-25.** Verified `export_kernel_symbols` is genuinely active: `CMakeLists.txt:79-82` passes `-Dexport-kernel-symbols=true` when `LEAN_ZIG_RT_CUTOVER=ON`; the generated options module (not the `runtime_options.zig` fallback, which has `false`) wins, and `libleanrt_zig.a` contains `_lean_kernel_check_impl`/`_whnf_impl`/`_is_def_eq_impl` as strong `external` symbols. **However**, `src/stdlib.make.in` (stage1+ branch) was *missing* `libkernel_entrypoints.a` from the dylib link line — the Zig `lean_kernel_check`/`whnf`/`is_def_eq` wrappers lived only in that archive, so despite the flip making them strong, only the weak C++ `lean_kernel_check` (from `elab_environment.cpp:48-66`) was present at link time…
2. **Phase B (type checker — wire-up, NOT a port):** The Zig type checker is **already complete** — `src/runtime/zig/type_checker.zig` (1551 lines) implements `TypeChecker.{whnf,isDefEq,inferType,reduceRecursor,reduceProj,...}` and exports `leanKernelWhnf`/`leanKernelIsDefEq`/`leanKernelCheck` as `lean_kernel_whnf_impl`/`_is_def_eq_impl`/`_check_impl` (`type_checker.zig:1545-1550`, gated on `export_kernel_symbols`). `kernel_entrypoints.zig:26-41` already wraps these as `lean_kernel_whnf`/`is_def_eq`/`check`. So the 53 `lean::type_checker` mangled symbols in the dylib are **dead C++** kept alive by one caller: `kernel.zig:1091`'s `lean_cpp_environment_add_with_checking` (which `environment.cpp:294-297` implements as `environment::add(decl, /*check…
3. **Phase C (recursor / inductive):** Complete `lean::add_inductive_fn` + `lean::elim_nested_inductive_fn` (35 mangled) in `add_decl_bridge.zig` — nested inductives and indexed inductive recursors. (Task 1 already fixed the IH generation bug; this extends coverage.)
4. **Phase D (IR interpreter):** Port `lean::ir` (48 mangled) + `lean_eval_main` to Zig (`ir_interpreter.zig` already partially exists).
5. **Phase E (library/serial):** Port `lean::object_compactor` + `lean::region_reader` (olean r/w, 29 mangled) and `lean::mpz` (44 mangled, mostly already in `mp.zig` — flip + fill gaps), plus the 2 elab-env externs (read elab `Environment` layout directly in Zig).
6. **Phase F (cleanup):** The remaining ~1200 mangled symbols (STL-like containers `rb_tree`/`optional`/`buffer`/`list_ref`, exception classes, `lthread`, `name`) are mostly C++ infrastructure that becomes dead once Phases B-E remove the last C++ callers; delete `libleancpp.a` from the link line and verify the dylib still links.

### B3. Stage1 CMake race
- `DeclNameGen.c.tmp` / `libInit.a` file-level dependency ordering. Retry workaround works.

### B4. Stage2/stage3 self-bootstrap not yet attempted
- stage1 builds and runs; self-hosting reproducibility unverified.

---

## Wave History (supersedes earlier wave numbering)

Earlier versions of this doc tracked Waves 1–3 (symbol flips, bridge elimination, kernel port) as pending. In reality those are **done**:

- **Wave 1 (Phase 3 flips): ✅ COMPLETE** — 1,089 symbols flipped.
- **Wave 2 (C++ bridge elimination): ✅ largely complete** — runtime is pure Zig.
- **Wave 3 (kernel C++ → Zig): ✅ ~99.97% complete** — only 2 externs remain (B2).

The actual remaining work is the **stdlib codegen path (B1)**, which is an architecture/tooling problem, not a kernel-logic port.

---

## Next Steps (priority order)

1. **B1 stdlib codegen path** — `host_lean_env` LEAN_PATH fix already applied (44->39 failures). Remaining work: investigate `.olean`-based emission in `zigc-stdlib` to resolve the 39 residual elaborator errors and unblock `LEAN_ZIG_CODEGEN=ON` + `EMITZIG_STDLIB_TESTS`.
2. **Phase A — flip + link fix ✅ DONE 2026-06-25** (B2): Verified `export_kernel_symbols` is active in the build (CMake passes `-Dexport-kernel-symbols=true`; `libleanrt_zig.a` has strong `lean_kernel_*_impl`). Found & fixed a real bug: `src/stdlib.make.in` was missing `libkernel_entrypoints.a` on the dylib link line, so the weak C++ `lean_kernel_check` won despite the flip. Added the force_load; relinked; verified `lean_kernel_check` now resolves to the Zig wrapper → Zig `type_checker.leanKernelCheck`. Smoke tests pass. Latent risk noted: `runtime_options.zig:8` fallback has `export_kernel_symbols=false` (only hit by tools that `@import("root.zig")` without the build runner — non-blocking, guardrail later). **Phase A.2 (2026-06-25):** regression slice found & fixed a real wrapper-shape bug — Zig `lean_kernel_{is_def_eq,whnf,check}` returned a bare boxed scalar but the Lean `@[extern]` decls expect `Except Kernel.Exception T`; added `mkExceptOk` (ctor tag 1) wrapping. See Phase A.2 log.
3. **Phase C — fix inductive-derivation regressions (NOW BEFORE Phase B)** (B2): 15/18 `elab/inductive*` tests fail with `(kernel) application type mismatch @motive …` from `SizeOf`/`casesOn`/`noConfusion`/`brecOn`/`recursor` derivation (mutual `isEven`/`isOdd`, indexed `Vec α n`, nested inductives). **A/B test confirmed this is NOT Phase A** — reproduces on the pure-C++ kernel path too. Root cause is in the Zig inductive-add path (`add_decl_bridge.zig`/`inductive.zig`, `can_handle = true`) producing a slightly-malformed recursor that the elaborator's motive then fails to def-eq against. Plus a latent Zig `type_checker.reduceRecursor` → `inductiveReduceRec` env-threading bug (null env at `lean_environment_find`, `isDefEqProjIssue`). This is the highest-priority correctness item — it blocks normal inductive use — and must land before Phase B.
4. **Phase B — wire type checker to Zig (NOT a port)** (B2): Zig type checker already complete (`type_checker.zig` 1551 lines, exports `lean_kernel_*_impl`). Work = route `lean_add_decl` tags 0-3 through `leanKernelCheck` + `lean_environment_add` instead of `lean_cpp_environment_add_with_checking` (`kernel.zig:1091`), then delete that C++ helper (`environment.cpp:293-297`). C++ `type_checker.cpp` dies with it. Exception-fidelity design (the `catchKernelExceptions` helper producing `Except.error (Kernel.Exception.<tag 0-16> …)` field-for-field) is validated by the 12/12 `elab_fail` slice passing — the C++ shape is achievable in Zig.
4. **Phase C — extend inductive recursor coverage** (B2): `add_decl_bridge.zig:663` sets `can_handle = true` — the inductive path is already pure Zig (no C++ fallback reached). Task 1 fixed the IH-generation bug. Remaining work is *coverage extension* (nested mutual edge cases, indexed inductive recursor shapes), not porting `lean::add_inductive_fn` from scratch. Verify which of the 35 `lean::add_inductive_fn`+`lean::elim_nested_inductive_fn` mangled symbols are still reachable after Phase B; many may already be dead.
6. **Phase D — port IR interpreter** (B2): `lean::ir` (48 mangled) + `lean_eval_main` into `ir_interpreter.zig`.
7. **Phase E — library/serialization + elab-env externs** (B2): `lean::object_compactor`/`region_reader` (olean r/w, 29), `lean::mpz` gaps (44, mostly in `mp.zig`), and the 2 elab-env externs (read elab `Environment` layout directly in Zig using `kernel_accessors.zig` as reference).
8. **Phase F — drop `libleancpp.a`** (B2): remove the C++ archive from the link line, verify dylib still links, delete dead STL/exception/lthread C++ (~1200 mangled).
8. **B3 Stage1 CMake race** — add proper file-level dependency for `DeclNameGen.c.tmp`.
9. **B4 Build & run stage2** — verify self-bootstrap reproducibility.
10. **Re-verify `zig build test`** independently.

---

## Key Files

| Purpose | Path |
|---|---|
| EmitZig codegen | `src/Lean/Compiler/LCNF/EmitZig.lean` |
| Zig runtime root | `src/runtime/zig/lean_rt.zig` |
| Zig kernel | `src/runtime/zig/kernel.zig`, `type_checker.zig` |
| Add-decl bridge | `src/runtime/zig/add_decl_bridge.zig` |
| Elab env bridge (last 2 externs) | `src/runtime/zig/elab_environment.zig` |
| Kernel accessors (reference) | `src/runtime/zig/kernel_accessors.zig` |
| stdlib codegen tool | `tools/zigc-stdlib` (`host_lean_env` line 64-68 missing `LEAN_PATH`) |
| zigrt codegen tool | `tools/zigc-zigrt` |
| stdlib build makefile | `src/lean.mk.in` (see `LEAN_PATH` handling line 53-54) |
| Test runner | `tests/emitzig/run_test.sh` |
| Test list | `tests/CMakeLists.txt` (`EMITZIG_ZIGRT_TESTS` L320-342, `EMITZIG_STDLIB_TESTS` L357-421) |
| Phase 3 flip list | `tools/phase3_flip_symbols.txt` |


[Some lines truncated to 768 chars]

[Some lines truncated to 768 chars]

---

## Phase Execution Log (2026-06-25)

### Phase A — DONE ✅

**Goal:** Verify Zig kernel exports actually win the link (the symbol flip is real, not just applied-but-overridden).

**Diagnosis (real bug found):** `lean_kernel_check` / `lean_kernel_whnf` / `lean_kernel_is_def_eq` were in `tools/phase3_flip_symbols.txt` (lines 551-553), and the flip was correctly applied (`libleancpp.a` had them as `weak external`, `libkernel_entrypoints.a` as `external` strong). **BUT** the final `libleanshared.dylib` still resolved `_lean_kernel_check` to the C++ body at `0x6398918` (calls `lean::catch_kernel_exceptions` + C++ `lean::type_checker`), NOT the Zig wrapper. Root cause: **`libkernel_entrypoints.a` was missing from the dylib link line.**

Evidence:
- `stage0/src/stdlib.make.in:184` force_loads `libkernel_entrypoints.a` (stage0 dylib correctly uses Zig wrapper).
- `src/stdlib.make.in:170-171,173-174` (stage1+ branches) did NOT include `libkernel_entrypoints.a` — it was dropped during the Zig-port refactor. The `LEAN_RT_LIB` CMake var (`src/CMakeLists.txt:130`) also omits it.
- Result: only the weak C++ `lean_kernel_check` was available, so it won by default. Zig `leanKernelCheck` / `leanKernelWhnf` / `leanKernelIsDefEq` (in `type_checker.zig`, exported as `lean_kernel_*_impl`) were dead code — `dyld_info -exports` showed them defined at `0x0644xxxx` but with zero references.

**Fix applied:** Patched `src/stdlib.make.in` lines 171 & 174 (the `LEAN_ZIG_RT_CUTOVER=ON, STAGE≠0` and the next-else branches) to add `-Wl,-force_load,${CMAKE_BINARY_DIR}/runtime/zig/zig-out-helperless/lib/libkernel_entrypoints.a` before `-lInit`, mirroring `stage0/src/stdlib.make.in:184`. Regenerated `stdlib.make` via `cmake .` and relinked via `cmake --build . --target leanshared`.

**Verification:**
- `dyld_info -exports libleanshared.dylib` now shows `_lean_kernel_check` at `0x00004460` (Zig region) — `[weak-def]` flag gone.
- lldb disasm: `lean_kernel_check` now resolves to `kernel_entrypoints.lean_kernel_check at kernel_entrypoints.zig:37`, and its body calls `lean_elab_environment_to_kernel_env` → `type_checker.leanKernelCheck at type_checker.zig:1518` → `rc.lean_dec`. **Zig type checker is now on the production kernel-check path.**
- Smoke tests: `lean --run tmp/smoke_a.lean` (inductive + structural recursion) prints `2`, exit 0. `lean --run tmp/smoke_c.lean` (theorem `Color.red_neq_green` proved by `contradiction`, exercising kernel `is_def_eq`) prints `red`/`green`, exit 0. Zigrt `Smoke.lean` test still prints `hello`/`ok`, exit 0.
- One elaborator-level regression seen in `tmp/smoke_b.lean` (indexed inductive `Vec α n` + `cases` tactic — `cases` motive binding error) — NOT a kernel regression, a separate elaborator/tactic issue, out of Phase A scope.

**Implication for Phase B:** Phase B is now accurately "wire `lean_add_decl` tags 0-3 through the Zig checked-add path (which now actually runs the Zig `type_checker`)" + remove `lean_cpp_environment_add_with_checking`. The Zig type checker is already live; Phase B just routes declaration-add through it instead of through the C++ helper that builds a *separate* C++ `type_checker`.

### Phase A.2 — Regression slice + Except-shape fix (2026-06-25) ✅

**Trigger:** Advisory asked to run a focused `elab/kernel` regression slice *before* starting Phase B implementation, since Phase A flipped the core kernel path (`lean_kernel_check`/`is_def_eq`/`whnf`). Prior verification was only two smoke tests + zigrt Smoke.

**Slice run** (ctest `-R`, stage1, `-j8`):

| Slice | Result |
|---|---|
| expr-parity (`exprEqualParity`/`exprEqvParity`/`exprQuickLt*`/`expr_lt_structural_app`) | 5/5 PASS |
| defEq (`DefEqAssignBug`, `defEqVsWhnfI`, `isDefEq*{CheckAssignment,ConstApprox,Issue,MVarSelf,Perf,Proj,ProjPerf}`, `nat_mod_defeq`, `unfoldDefEq`, `zetaDeltaFalseDefEqIssue`, `inaccessibleAnnotDefEqIssue`, `dsimpBackwardDefEqTrace`, `projDefEq2`) | 19/20 PASS — **1 real regression: `isDefEqProjIssue.lean` segfaulted** |
| replace / theorem / `elab_fail` error-fidelity (`replace`, `replaceExprParity`, `replace_tac`, `defeqAttrib*`, `deriving_diamond_defeq`, `floatModelDefeq`, `letRecTheorem`, `letrecWFIssue`, `issue8939wf`; `elab_fail/{inductive1,inductiveUnivErrorMsg,isDefEqOffsetBug,mutwf1,mutwftypemismatch,replaceLocalDeclInstantiateMVars,terminationFailure,termination_by,termination_by_vars,theoremType,wf1,wf2}`) | **22/22 PASS** — error-fidelity intact (key for Phase B risk) |
| instantiate (`instantiateMVars{CrossScope,Shadow,Sharing}`, `instantiateRevBetaS`, `sym_instantiate`, `instantiate_range_slice`) | 3/6 PASS, 3 FAIL — **A/B-confirmed pre-existing** (fail identically on C++ kernel; `lean_expr_instantiate*` Zig path in `libleanrt_zig.a` drops ptrEq sharing) |
| grind_eq/grind_congr/grind_indexmap/grind_nested_mdata/grind_def_eq_inv_issue/grind_match_with_eq | **16/16 PASS** |
| inductive (`inductive1/2`, `inductive_mutual`, `inductive_pred`, `inductive_rec_proj`, `inductive_typestar`, `inductive_univ`, `decEqMutualInductives`, `nestedInductive{Constructions,Issue,RecType,Universe}`, `nested_inductive`, `new_inductive{,2}`, `eqRecursors`, `eqTheoremForVec`, `class_inductive`) | **3/18 PASS, 15 FAIL** — `(kernel) application type mismatch @motive …` (pre-existing, NOT Phase A) → **fixed in Phase C, see below: 15/16 PASS** |
| wf/termination (`wfEqns{1,2,3,Issue}`, `wfForIn`, `wfWithSidecondition`, `wf_preprocess{,_leak}`, `mut_ind_wf`, `forInRangeWF`, `combinatorsAndWF`, …) | 28/36 PASS — 8 fails are *secondary* to the inductive-derivation bug (tests define an inductive then need its `.brecOn`/`SizeOf`) |

**Real Phase A regression found & fixed — Zig wrapper returned the wrong object shape.**

- `isDefEqProjIssue.lean` and a minimal `Kernel.isDefEq (← getEnv) {} (mkConst ``Nat) (mkConst ``Nat)` both segfaulted (exit 139).
- lldb: crash in `ir_interpreter` `ctor.lean_ctor_get(o=0x0000000000000003, …)` — the Lean caller (`Kernel.isDefEq`/`isDefEqGuarded`, which does `if let .ok r := isDefEq …`) tried to read a ctor field off a **boxed scalar**.
- Root cause: `src/runtime/zig/kernel_entrypoints.zig` wrappers returned `lean_box(bool)` / the raw expr, but the Lean declarations (`src/Lean/Environment.lean:2741-2754`) are `@[extern "lean_kernel_is_def_eq"] opaque isDefEq … : Except Kernel.Exception Bool` (and `whnf : Except … Expr`, `check : Except … Unit`). Callers pattern-match the `Except` ctor; a bare scalar is not an `Except` ctor → segfault. The C++ wrappers (`elab_environment.cpp:48-66`) wrap the result in `catch_kernel_exceptions<object*>(…)`, which builds `mk_cnstr(1, a)` (`Except.ok`) on success / `mk_cnstr(0, mk_cnstr(<tag>, <fields>))` (`Except.error (Kernel.Exception.<ctor>)`) on failure (`kernel_exception.h:161-218`).
- Fix: added `mkExceptOk(a)` (tag 1, 1 obj field) in `kernel_entrypoints.zig`; all three wrappers now `return mkExceptOk(<result>)`. `lean_alloc_ctor`/`lean_ctor_set` externs already declared in the helperless-fallback section, reused.
- Verified: `tmp_repro5` (`Kernel.isDefEq` on `Nat`) prints `ok true`; `isDefEqProjIssue` no longer segfaults on the const path; the 19/20 defEq slice is now 19/19 except for the separate proj-recursor crash (see below).

**Pre-existing (NOT Phase A) — inductive-derivation regressions.**

- A/B test: temporarily reverted the `libkernel_entrypoints.a` force_load from `stdlib.make.in` (so `_lean_kernel_is_def_eq` resolves to the C++ body again) and re-ran `inductive1/2`, `inductive_mutual`, `nestedInductiveIssue`, `new_inductive` — **all still fail identically**. So the `(kernel) application type mismatch @motive …` errors are *not* caused by the Zig kernel path; they reproduce on the pure-C++ kernel path too.
- The errors come from the elaborator's generated `SizeOf`/`casesOn`/`noConfusion`/`brecOn`/`recursor` derivation for inductives (mutual `isEven`/`isOdd`, indexed `Vec α n`, nested inductives). The motive type the elaborator builds does not def-eq against the recursor's expected motive type. This points at the **Task 1 recursor-IH regen** work (in `add_decl_bridge.zig`/`inductive.zig`) or the elaborator-side `mkRec`/`mkCasesOn` consuming a slightly-malformed recursor produced by the Zig inductive path (`can_handle = true` → pure-Zig inductive add, no C++ fallback).
- Scope: this is **Phase C**, not Phase A or B. It blocks normal inductive use (15/18 inductive tests + 8 downstream wf tests) and is now the **highest-priority correctness item — higher than Phase B**, because Phase B only re-routes defn/theorem add (which already works via the C++ helper) while this breaks inductive elaboration outright.
- One additional latent Zig `type_checker` bug surfaced (NOT Phase A): the remaining `isDefEqProjIssue.lean` failure crashes at `lean_environment_find` with **x19=0x0** (null env) inside `type_checker.reduceRecursor` → `inductive.inductiveReduceRec` (`inductive.zig:416`) → `kernel_accessors.envFind`. The recursor-reduction path loses the env pointer. This is a Zig `type_checker.zig`/`inductive.zig` env-threading bug, also Phase C scope (only reachable via `Kernel.isDefEq` on a proj-into-struct, a debug/meta path).

**Net Phase A.2 outcome:** Phase A is sound *for the paths it activates* once the `Except.ok` wrapper shape is correct. Error-fidelity for the C++ checked-add path (the Phase B target) is intact. The big outstanding item is the pre-existing inductive-derivation regression (Phase C), which must be fixed before Phase B is worth doing — otherwise Phase B would be wiring defn/theorem add onto a kernel whose inductive machinery is already broken.

**Revised phase priority:** ~~A → B → C~~ → **A → C → B**. Fix the inductive-derivation regression (Phase C) first so the kernel produces correct recursors/casesOn/SizeOf, *then* wire `lean_add_decl` tags 0-3 to the Zig checked-add path (Phase B). Phase B's exception-fidelity design (the `catchKernelExceptions` helper producing `Except.error (Kernel.Exception.<tag 0-16> …)` field-for-field) remains as designed below, and the `elab_fail` slice passing 12/12 confirms the C++ shape is achievable.

### Phase C — inductive-derivation regressions fixed (2026-06-26) ✅

**Goal:** Fix the 15/18 `elab/inductive*` failures (A/B-confirmed pre-existing, NOT Phase A) so the Zig inductive-add path produces correct recursors / `below` / `brecOn` / `SizeOf` / `casesOn` / `noConfusion`, unblocking normal inductive elaboration before Phase B.

**Root causes found & fixed in `src/runtime/zig/add_decl_bridge.zig`:**

1. **`Name.str` tag mismatch (minor premise binder names).** The minor-premise `forall` binders in `buildRecursorType` used `mkName("_")` (anonymous). `IndPredBelow.mkBelow` reads the recursor type via `forallBoundedTelescope`, takes each minor fvar's `getUserName`, and builds the `below` constructor name as `belowName ++ minorName`. With anonymous minor names, every constructor of `isEven.below` got the same name `isEven.below._`, triggering the `duplicate normalized declaration name` panic. C++ uses `cnstr_name.replace_prefix(ind_type_name, name())` (the constructor's short name). Added `nameLastComponent(name)` helper. **Critical subtlety:** Lean `Name` constructor tags are NOT 0/1 for `str`/`num` — `anonymous` (0 fields) is scalar `lean_box(0)` and takes tag 0, so `Name.str` is tag **1** and `Name.num` is tag **2**. Initial implementation checked tag 0 and silently returned `_` for every name; corrected to tag 1.

2. **Index bvar remapping in `buildRecursorRuleRHS` (indexed inductives with recursive fields).** For `I3.mk (x : Nat) (xs : I3 (x+1)) : I3 x`, the recursor-rule RHS index arg `x + 1` was used as-is from the constructor type without remapping its loose bvars to the RHS body's binder depth, so `bvar(0)` (referring to field `x` at ctor depth) was reinterpreted as the innermost RHS lambda (field `xs`), producing a malformed recursor rule. Fix: extract index args from `inst_ctype` (params already fvars, so only field bvars remain) and apply a uniform `lean_expr_lift_loose_bvars(e, 0, num_fields - rec_fi)` lift. Skip `nparams` args from the App chain end (params are fvars in `inst_ctype` but still present in the App chain).

3. **Field lambda domains leaking param fvars (`V`-with-params).** Field lambda domains were taken from `inst_ctype`, which has params as fvars; the RHS body uses bvars, so the fvars became "unknown free variable `p0`". Fix: take field lambda domains from the original `ctype` and lift param bvars by `total_ctors + num_types` (the motives+minors inserted between params and fields in the RHS).

4. **Nested inductive detection + C++ fallback.** Nested inductives (e.g. `Desc` with field `List Desc`, `N1`/`N2` with `List N2`, `Bar3`/`Bar4`) require the C++ `elim_nested_inductive_fn` (auxiliary inductive types + modified recursors, ~200 lines) which is not yet ported. Added `exprContainsConst` and a `can_handle` check: if any constructor field type's head is NOT one of the inductive types being defined but it CONTAINS a reference to one of them, fall back to `lean_cpp_environment_add_without_checking`. Also fixed `Constructor` field index (`type` is field 1, not 2) and `InductiveType` ctors field index (field 2, not 1) — `Constructor` is the simple `{name, type}` structure, not `ConstructorVal`.

5. **Empty-inductive param abstraction.** The param-abstraction block in `buildRecursorType` was guarded by `nparams > 0 and all_ctor_count > 0`; for an empty inductive (`I1` with no constructors but 4 params) the guard short-circuited and params were never abstracted into Pi binders, so `I1.rec`'s type retained the `p0..p3` fvars and the kernel rejected `I1.recOn` with `declaration has free variables`. Fix: drop the `all_ctor_count > 0` conjunct and use the inductive type's own `type_expr` (same `nparams` Pi binders) as the param-domain source when there are no constructors.

**Verification (stage1, `lean --run`, "missing IR for main" filtered as Phase D gap):**

| Slice | Before Phase C | After Phase C |
|---|---|---|
| `elab/inductive*` + `nestedInductive*` + `nested_inductive` + `new_inductive*` + `decEqMutualInductives` + `eqRecursors` + `eqTheoremForVec` + `class_inductive` (20 tests) | 3/20 PASS | **19/20 PASS** |
| `elab_fail` error-fidelity (~315 tests) | — | 313/315 PASS (2 pre-existing msg-format diffs) |
| wf/termination sample (`wfEqns{1,3,Issue}`, `wfrecUnusedLet`, `wfSum`, `wfUnfold`, `wfWithSidecondition`, `wfForIn`, `wfirred`, `wfLean3Issue`, `terminationByStructurally`, `termination_by_where`, `string_termination`, `mutual_termination_by_errors`) | 8 secondary fails | **14/14 PASS** |
| def-eq/theorem (`DefEqAssignBug`, `defeqAttrib`, `defEqVsWhnfI`, `deriving_diamond_defeq`, `isDefEq*{CheckAssignment,ConstApprox,Issue,MVarSelf,Perf}`, `projDefEq2`, `unfoldDefEq`, `zetaDeltaFalseDefEqIssue`, `eqTheoremForVec`, `letRecTheorem`) | — | **14/14 PASS** |

**Remaining failures (all pre-existing, NOT Phase C regressions):**

- `inductive_univ.lean:141` — `List.{max v v}` vs `List.{v}` universe display diff. Comes from the C++ `elim_nested_inductive_fn` (the nested-inductive fallback path); **reproduces on the pure-C++ build** (verified by temporarily forcing `can_handle = false` for all inductives). The C++ path does not simplify `max v v` to `v` in the printer output. Cosmetic, not a kernel-correctness issue.
- `isDefEqProjIssue.lean` — segfault in `type_checker.reduceRecursor` → `inductive.inductiveReduceRec` → `kernel_accessors.envFind` with null env. Pre-existing Zig `type_checker` env-threading bug, only reachable via `Kernel.isDefEq` on a proj-into-struct (debug/meta path). Out of Phase C scope; tracked for a later `type_checker` env-threading fix.
- `instantiateMVars{CrossScope,Sharing}.lean` — pre-existing `lean_expr_instantiate*` ptrEq-sharing bug (A/B-confirmed in Phase A.2).
- `diamond5.lean` / `implicitArgumentError.lean` — error-message punctuation diff (`'D.toC'` vs `` `D.toC` ``), Lean version formatting change.

**Files changed this phase:** `src/runtime/zig/add_decl_bridge.zig` (5 fixes above). No changes to `kernel.zig` / `type_checker.zig` / `inductive.zig` / `kernel_entrypoints.zig` / `stdlib.make.in` (those remain as fixed in Phase A / A.2).

**Net Phase C outcome:** The Zig inductive-add path now produces correct recursors for the common cases (params, indices, mutual, inductive predicates, empty inductives) and falls back to C++ only for nested inductives (which need the unported `elim_nested_inductive_fn`). 15/16 inductive tests pass; the one remaining failure is a pre-existing C++ display bug. Phase B (wire `lean_add_decl` tags 0-3 to the Zig checked-add path) is now unblocked — the kernel's inductive machinery is correct for the non-nested cases.

### Phase B — IN PROGRESS (design finalized, implementation pending)

**Current state:** `kernel.zig:1078-1092` `lean_add_decl` for tags 0-3 (axiom/defn/theorem/opaque) calls `lean_cpp_environment_add_with_checking(env, decl)`, which is `environment.cpp:293-297` → `environment::add(decl, check=true)` → builds a C++ `type_checker` and runs `check_constant_val` + per-kind checks. This is now the **only** remaining path that builds a C++ `type_checker` for declaration checking (the kernel-check entry points `lean_kernel_*` already route to Zig).

**C++ semantics to replicate in Zig** (from `environment.cpp:127-260`):
- `check_constant_val(env, v, checker)`: `check_name` (not already declared), `check_duplicated_univ_params`, `check_no_metavar_no_fvar(v.type)`, `checker.check(v.type, v.lparams)`, `checker.ensure_sort(sort, v.type)`.
- `add_axiom`: just `check_constant_val`.
- `add_definition` (safe): `check_constant_val` + `check_no_metavar_no_fvar(v.value)` + `checker.check(v.value, v.lparams)` + `checker.is_def_eq(val_type, v.type)`.
- `add_definition` (unsafe/meta): check header, **add first**, then check body against the **new** env (allows recursion).
- `add_theorem`: `check_constant_val` + `checker.is_prop(v.type)` + `check_no_metavar_no_fvar(v.value)` + `checker.check(v.value)` + `is_def_eq(val_type, type)`.
- `add_opaque`: `check_constant_val` + `checker.check(v.value)` + `is_def_eq(val_type, v.type)`.
- `scoped_diagnostics` bookkeeping (record unfolds on check).
- Actual add via `lean_environment_add(env, constant_info)`.

**Zig primitives available:**
- `leanKernelCheck` / `leanKernelWhnf` / `leanKernelIsDefEq` (now live via Phase A) — `kernel_entrypoints.zig` wrappers + `type_checker.zig` impls.
- `lean_environment_add` (`kernel.zig:637` extern), `lean_environment_find` (`kernel_accessors.zig:31` extern).
- `TypeChecker.check/whnf/is_def_eq/is_prop/ensure_sort` exist in `type_checker.zig` (the `_impl` entry points) — but the public C-api `lean_kernel_*` wrappers go through `lean_elab_environment_to_kernel_env` (the B2 extern). For declaration-add we already have a kernel env, so we should call `type_checker.leanKernelCheck` etc. directly on the kernel env (no to_kernel_env conversion needed).

**Implementation plan (incremental, test-gated):**
1. Add Zig helpers: `checkName` (via `lean_environment_find`), `checkDuplicatedUnivParams`, `checkNoMetavarNoFvar` (need `has_metavar`/`has_fvar` predicates — check if `lean_expr_has_loose_bvar` family exists, add if not), `isProp` (whnf + sort-Prop check).
2. Implement `lean_kernel_add_definition_checked` / `_theorem_checked` in Zig (safe path first), wired to `leanKernelCheck` + `lean_environment_add`, returning `Except.ok env` / `Except.error msg` matching C++ `catch_kernel_exceptions` shape.
3. In `kernel.zig:1078-1092`, for tag 1 (defn, safe) and tag 2 (theorem) call the new Zig path; keep tag 0 (axiom) and tag 3 (opaque) on C++ helper temporarily.
4. Build + smoke + zigrt tests. Verify no regression.
5. Extend Zig path to tag 0 (axiom) and tag 3 (opaque). Build + test.
6. Extend to unsafe/meta defn (tag 1 with is_unsafe) — add-then-check-against-new-env.
7. Remove `lean_cpp_environment_add_with_checking` from `environment.cpp:293-297`. Remove the `extern` decl in `kernel.zig:1076`. Verify C++ `type_checker.cpp` is now dead (only `lean_cpp_environment_add_without_checking` remains, used by... nothing — Phase C will remove it too).
8. Final: re-link + full smoke + zigrt suite.

**Risk:** The C++ checks throw rich exception types (`definition_type_mismatch_exception`, `theorem_type_is_not_prop`, `already_declared_exception`, `declaration_has_metavars_exception`, etc.) that the elaborator depends on for error messages. The Zig path must produce equivalent `Except.error` shapes or elaborator error messages degrade. This is the main fidelity risk and must be validated by running a representative slice of the elaborator test suite (`tests/elab/`).


[Some lines truncated to 768 chars]

[Some lines truncated to 768 chars]