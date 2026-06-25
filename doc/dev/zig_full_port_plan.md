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
1. **Fix `host_lean_env` in `tools/zigc-stdlib`** to set `LEAN_PATH` from the lean binary's sibling `lib/lean` (analogous to `lean.mk.in:53-54`). This eliminates the majority of the 44 failures. **Highest leverage, low risk.**
2. For the residual elaborator errors, investigate whether `zigc-stdlib` can emit stdlib module Zig from the `.olean`-loaded environment (like `lean -z StdlibFin.lean` does for the driver) rather than re-elaborating each source file standalone. This is the `EMITZIG_STDLIB_TESTS` (59 tests including `StdlibFin`, `ReuseClosedTerm`) path.

### B2. Last 2 C++ kernel externs
- `lean_elab_environment_to_kernel_env` and `lean_elab_environment_update_base_after_kernel_add`
- Need Zig to directly read the elab `Environment` internal structure and construct a kernel `Environment`. `kernel_accessors.zig` already has complete Environment read code to reference.

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

1. **Fix `host_lean_env` in `tools/zigc-stdlib`** (B1, Layer 1) — set `LEAN_PATH` from the lean binary's sibling `lib/lean`. Highest leverage: eliminates the majority of the 44 stdlib module failures. Low risk, mirrors `lean.mk.in:53-54`.
2. **Investigate `zigc-stdlib` `.olean`-based emission** (B1, Layer 2) — determine whether the tool can emit Zig for stdlib modules using the prebuilt `.olean` environment instead of re-elaborating each source file standalone. Unblocks `LEAN_ZIG_CODEGEN=ON` and the `EMITZIG_STDLIB_TESTS`.
3. **Port the last 2 C++ kernel externs** (B2) — reach 100% pure Zig kernel.
4. **Fix Stage1 CMake race** (B3) — add proper file-level dependency for `DeclNameGen.c.tmp`.
5. **Build & run stage2** (B4) — verify self-bootstrap reproducibility.
6. **Re-verify `zig build test`** independently (currently relied on from prior docs).

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
