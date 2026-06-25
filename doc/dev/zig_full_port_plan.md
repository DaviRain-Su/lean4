# Zig Full Port Plan

Last updated: 2025-06-25

## Current Status

- **Runtime layer**: 128 Zig files (~45K lines) — fully ported, 232/232 Zig unit tests pass
- **Phase 3 flip list**: ✅ ALL 16 remaining symbols are already flipped (verified 2025-06-25)
- **Kernel layer**: 18 C++ files (~5.6K lines) — still C++; Zig kernel files are ABI wrappers that call back into C++ via `extern fn`
- **C++ bridge files**: 8 thin C++ shims (~270 lines) still needed during Zig build

## Wave 1: Phase 3 Symbol Flips ✅ COMPLETE

All 16 symbols verified to be in `tools/phase3_flip_symbols.txt`. Recent commits show they were flipped incrementally:

| Commit | Symbols |
|---|---|
| `794fd749fb` | `lean_expr_quick_lt`, `lean_expr_equal`, `lean_expr_eqv`, `lean_replace_expr` |
| `cb818875d9` | 8 additional symbols after individual verification |
| `d658427697` | `lean_elab_add_decl`, `lean_elab_add_decl_without_checking` |
| `a67488df01` | `lean_mk_cases_on` (delegates to C++ helper) |
| `3882d652cb` | `lean_instantiate_expr_mvars` (delegates to C++ helper) |
| `d5caa7d5fd` | `lean_add_decl` (delegates to C++ helper) |

Note: some of these "delegate to C++ helper" — the symbol is provided by Zig but calls back into C++ kernel logic. This is the work remaining for Wave 3.

Eval/interpreter symbols (`lean_eval_main_decl`, `lean_eval_const`, `lean_run_init`) are pure Zig implementations (no C++ delegation).

---

## Wave 2: Eliminate C++ Bridge Files

8 thin C++ files (~270 lines total). Depends on Wave 1 completion.

| File | Lines | Absorb into |
|---|---|---|
| `object_shim.cpp` | ~30 | `object.zig` / `lean_object.zig` |
| `net_addr_bridge.cpp` | ~30 | `net_addr.zig` |
| `uv_compat.cpp` | ~40 | `uv_exports.zig` |
| `uv_init.cpp` | ~40 | `uv_event_loop.zig` |
| `uv_loop_thread.cpp` | ~30 | `uv_event_loop.zig` |
| `uv_promise_bridge.cpp` | ~30 | `task.zig` |
| `uv_version.cpp` | ~20 | `uv_stubs.zig` |
| `libcxx_hash_compat.cpp` | ~50 | `hash.zig` |

After completion: remove `compile-cpp-cutover` path from `build.zig`.

---

## Wave 3: Kernel C++ → Zig Port

Current state: Zig kernel files (e.g. `kernel.zig`, `type_checker.zig`) are ABI wrappers that call into C++ via `extern fn`. The actual kernel logic is in 18 C++ files.

### 3a. Expression System

Port the expression construction and traversal layer. Eliminates extern declarations in `kernel.zig`.

| C++ file | Lines | Description |
|---|---|---|
| `expr.cpp` | 538 | Expression constructors, accessors |
| `level.cpp` | ~200 | Universe levels |
| `expr_eq_fn.cpp` | ~100 | Expression equality |
| `for_each_fn.cpp` | ~100 | Traversal |
| `replace_fn.cpp` | ~100 | Replacement |

Externs to eliminate:
```
lean_expr_mk_app, lean_expr_mk_sort, lean_expr_mk_bvar,
lean_expr_mk_lambda, lean_expr_mk_forall, lean_expr_mk_let,
lean_expr_mk_mdata, lean_expr_mk_proj, lean_expr_mk_const,
lean_expr_mk_lit, lean_expr_mk_fvar
```

### 3b. Local Context + Abstract/Instantiate

| C++ file | Lines | Description |
|---|---|---|
| `local_ctx.cpp` | ~150 | Local context |
| `abstract.cpp` | 78 | Expression abstraction |
| `instantiate.cpp` | 266 | Expression instantiation |

### 3c. Declaration System

| C++ file | Lines | Description |
|---|---|---|
| `declaration.cpp` | 326 | Declarations, definitions |

### 3d. Type Checker (largest block)

| C++ file | Lines | Description |
|---|---|---|
| `type_checker.cpp` | 1244 | WHNF, definitional equality, type checking core |

This is the most complex port. Requires bit-for-bit behavioral equivalence with C++.

### 3e. Environment + Inductive Types

| C++ file | Lines | Description |
|---|---|---|
| `environment.cpp` | 304 | Kernel environment |
| `inductive.cpp` | 1252 | Inductive type construction, recursors |

### 3f. Cache + Utilities

| C++ file | Lines | Description |
|---|---|---|
| `equiv_manager.cpp` | ~100 | Equivalence manager |
| `expr_cache.cpp` | ~100 | Expression cache |
| `quot.cpp` | ~100 | Quotations |
| `trace.cpp` | ~50 | Tracing |
| `init_module.cpp` | ~50 | Initialization |

---

## Dependency Graph

```
Wave 1 (Phase 3 flips) ✅ COMPLETE
        │
        ▼
Wave 2 (bridge elimination) — optional, can be done anytime
        │
        ▼
Wave 3 (kernel port)
  ├── 3a expr + level system ──────────────┐
  ├── 3b local_ctx + abstract/instantiate ─┤
  ├── 3c declaration ──────────────────────┤
  ├── 3d type checker ── (depends on 3a-3c) ┤
  ├── 3e env + inductive ── (depends on 3d) ┤
  └── 3f cache/utils ──────────────────────┘
```

## Estimated Timeline

| Wave | Content | Status |
|---|---|---|
| Wave 1 | 15+1 symbol flips | ✅ Complete |
| Wave 2 | 8 bridge file elimination | Pending (2-3 days) |
| Wave 3a-3c | Expression + declaration system | Pending (1-2 weeks) |
| Wave 3d | Type checker | Pending (1-2 weeks) |
| Wave 3e-3f | Environment + inductive + utilities | Pending (1-2 weeks) |

## Current Action Item: Wave 3a — Port Expression System

The first kernel port task is to eliminate the `extern fn` declarations in
`kernel.zig` and `type_checker.zig` that call into C++ for expression
construction and level operations.

### Target externs (kernel.zig lines 433-444; type_checker.zig lines 40-64)

```
lean_expr_mk_app, lean_expr_mk_sort, lean_expr_mk_bvar,
lean_expr_mk_lambda, lean_expr_mk_forall, lean_expr_mk_let,
lean_expr_mk_mdata, lean_expr_mk_proj, lean_expr_mk_const,
lean_expr_mk_lit, lean_expr_mk_fvar,
lean_level_mk_succ, lean_level_mk_imax, lean_level_mk_max,
lean_local_ctx_mk_local_decl,
lean_kernel_instantiate_type_lparams, lean_kernel_instantiate_value_lparams
```

### C++ files to port

| File | Lines |
|---|---|
| `src/kernel/expr.cpp` | 538 |
| `src/kernel/level.cpp` | ~200 |
| `src/kernel/local_ctx.cpp` | ~150 |
| `src/kernel/abstract.cpp` | 78 |
| `src/kernel/instantiate.cpp` | 266 |
| `src/kernel/expr_eq_fn.cpp` | ~100 |
| `src/kernel/for_each_fn.cpp` | ~100 |
| `src/kernel/replace_fn.cpp` | ~100 |

### Approach

1. Read the C++ implementation
2. Write a parity test in `tests/elab/`
3. Implement in corresponding Zig file (extend `kernel.zig`)
4. Remove the `extern fn` declaration
5. Run `zig build test` (232 Zig unit tests must pass)
6. Flip the symbol if not already flipped

## Key Strategy

1. **Test-first**: Before porting each kernel function, write a parity test under `tests/elab/`. Then delete the `extern fn` declaration and replace with a Zig native implementation.
2. **Incremental flip**: Port one function, remove one extern, keep the Zig runtime buildable (232 unit tests must stay green).
3. **Zig unit test guard**: `zig build test` runs 232 unit tests covering the entire runtime. Must pass after every change.
4. **Full build gate**: After each kernel module port, rebuild stage1 and run the expr regression set to catch integration regressions.

## Current Build State

- **Zig unit tests**: ✅ 232/232 pass (`zig build test`)
- **Full stage1 build**: ⚠️ Broken due to stage0 .olean dependency (pre-existing). Need to fix bootstrap before testing kernel ports end-to-end.
- **Workaround**: Use `build/release-nocut` as stage0 source for the stage1 zig cutover build.
