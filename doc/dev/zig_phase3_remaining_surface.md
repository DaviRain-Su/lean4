# Zig Phase 3 Remaining Symbol Surface

This note records the current Phase 3 accounting boundary for the Zig runtime
cutover. It separates the Lean-facing direct duplicate surface from symbols that
are implemented in Zig but are not current same-name flip targets.

At the Task 0 accounting snapshot, before flipping `lean_expr_quick_lt`, the
source flip file was `tools/phase3_flip_symbols.txt` with 1067 non-comment
entries and 1060 unique entries. From the stage1 archives at that point, the
same-name Zig/C++ duplicate surface that was not in the source flip file
contained 20 `lean_*` entries. One of those, `lean_io_result_mk_ok`, was a C++
non-external helper duplicate and is not a Lean-facing direct flip target. The
actionable Lean-facing direct surface was therefore 19 symbols.

After Task 2, the current source flip file has 1071 non-comment entries and
1064 unique entries because `lean_expr_quick_lt`, `lean_expr_equal`,
`lean_expr_eqv`, and `lean_replace_expr` have been added. The remaining
Lean-facing direct surface is therefore 15 symbols. Treat the source flip file
as the source of truth. Archive and dylib binding state can still show weak
symbols such as `lean_eval_const` and `lean_run_init`; these are not current
production flips unless they are present in the source flip file.

## Direct Surface

| symbol | subsystem | Zig impl file | current test coverage | recommended flip order | risk |
|---|---|---|---|---|---|
| `lean_expr_quick_lt` | Expr/runtime ordering | `src/runtime/zig/expr_lt.zig` | flipped in Task 1; covered by `tests/elab/exprQuickLtParity.lean`, `tests/elab/exprQuickLtMDataParity.lean`, and `tests/emitzig/StdlibArray.lean -z` | done | High: ordered containers and metadata ordering are early runtime blockers |
| `lean_expr_equal` | Expr equality | `src/runtime/zig/kernel.zig` | flipped in Task 2; covered by `tests/elab/exprEqualParity.lean` and expr/grind subset | done | High: `grind` and expression caches rely on exact equality semantics |
| `lean_expr_eqv` | Expr equality | `src/runtime/zig/kernel.zig` | flipped in Task 2; covered by `tests/elab/exprEqvParity.lean` and expr/grind subset | done | High: `Expr.quickLt` and many kernel/library paths use structural equality |
| `lean_replace_expr` | Expr traversal/rewrite | `src/runtime/zig/kernel.zig` | flipped in Task 2; covered by `tests/elab/replaceExprParity.lean`, `tests/elab/replace.lean`, and expr/grind subset | done | High: visitor ownership, sharing cache, and closure callback behavior are easy to regress |
| `lean_eval_main_decl` | eval/interpreter | `src/runtime/zig/ir_interpreter.zig` | indirect eval tests such as `tests/elab/eval*.lean` | 5 | Medium: interpreter path and IO result ownership |
| `lean_eval_const` | eval/interpreter | `src/runtime/zig/ir_interpreter.zig` | `tests/elab/evalconst.lean` plus eval family | 6 | Medium: constant lookup, interpreter cache, and exception shape |
| `lean_run_init` | eval/init | `src/runtime/zig/ir_interpreter.zig` | init/eval paths only; needs direct run-init coverage | 7 | Medium-high: persistent marking and symbol-cache update |
| `lean_add_decl` | kernel environment | `src/runtime/zig/kernel.zig` | indirect declaration/environment tests only | 8 | Medium-high: environment update and heartbeat/cancel-token behavior |
| `lean_add_decl_without_checking` | kernel environment | `src/runtime/zig/kernel.zig` | indirect declaration/environment tests only | 9 | Medium-high: unchecked declaration insertion shape |
| `lean_elab_add_decl` | elaborator environment | `src/runtime/zig/elab_environment.zig` | indirect elaborator tests only | 10 | Medium-high: bridges elab environment to kernel environment |
| `lean_elab_add_decl_without_checking` | elaborator environment | `src/runtime/zig/elab_environment.zig` | indirect elaborator tests only | 11 | Medium-high: bridge return shape and declaration insertion |
| `lean_expr_instantiate` | Expr instantiate | `src/runtime/zig/kernel.zig` | instantiate regression files exist, but no direct parity harness | 12 | Medium: loose-bvar range and ownership |
| `lean_expr_instantiate1` | Expr instantiate | `src/runtime/zig/kernel.zig` | instantiate regression files exist, but no direct parity harness | 13 | Medium: single-substitution ownership |
| `lean_expr_instantiate_range` | Expr instantiate | `src/runtime/zig/kernel.zig` | `tests/elab/instantiate_range_slice.lean` is relevant | 14 | Medium: range validation and array slice indexing |
| `lean_expr_instantiate_rev` | Expr instantiate | `src/runtime/zig/kernel.zig` | `tests/elab/instantiateRevBetaS.lean` is relevant | 15 | Medium: reversed substitution indexing |
| `lean_expr_instantiate_rev_range` | Expr instantiate | `src/runtime/zig/kernel.zig` | instantiate regression files exist, but no direct parity harness | 16 | Medium: reversed range validation |
| `lean_instantiate_level_mvars` | mvar instantiate | `src/runtime/zig/instantiate_mvars.zig` | `tests/elab/instantiateMVars*.lean` indirect | 17 | Medium-high: mctx write-back and sharing cache |
| `lean_instantiate_expr_mvars` | mvar instantiate | `src/runtime/zig/instantiate_expr_mvars.zig` | `tests/elab/instantiateMVars*.lean` indirect | 18 | High: delayed assignments and fvar substitution |
| `lean_expr_dbg_to_string` | Expr diagnostics | `src/runtime/zig/compat.zig` | indirect diagnostics only | 19 | Low-medium: debug output fidelity |

## Not Direct Surface

| symbol | status | accounting decision |
|---|---|---|
| `lean_initialize` | Already in `tools/phase3_flip_symbols.txt` | Not remaining direct surface |
| `lean_mk_cases_on` | Zig implementation exists and parity tests exist, but the production symbol is not exported in the current Zig archive surface | Track as production-symbol promotion work, not part of the 19 direct duplicate list |
| `lean_kernel_instantiate_type_lparams` | Zig strong symbol exists; no same-name C++ `lean_*` duplicate in the current archive surface | Track as implemented Zig helper outside same-name Phase 3 flip accounting |
| `lean_kernel_instantiate_value_lparams` | Zig strong symbol exists; no same-name C++ `lean_*` duplicate in the current archive surface | Track as implemented Zig helper outside same-name Phase 3 flip accounting |
| `lean_io_result_mk_ok` | Zig external duplicate, but C++ side appears only as non-external helper symbols in generated objects | Exclude from Lean-facing direct flip targets |

## Expr Regression Set

Use this focused subset after any change to `lean_expr_quick_lt`,
`lean_expr_equal`, `lean_expr_eqv`, or `lean_replace_expr`:

```bash
CTEST_OUTPUT_ON_FAILURE=1 ctest --test-dir build/release/stage1 \
  -R 'elab/(expr_lt_structural_app|expr_maps|replace|grind_eq|grind_eqc_inv_issue|grind_congr_hash_issue|grind_nested_mdata|grind_match_with_eq|grind_def_eq_inv_issue|grind_indexmap)\.lean$' \
  --timeout 180
```

This set covers the four flipped expr blockers plus representative `grind`
paths. It also protects the `lean_replace_expr` sharing-cache behavior: without
memoization, `tests/elab/replace.lean` expands shared expression DAGs
exponentially.

## Remaining Execution Order

The next work should stay in Phase 2 and avoid mixing production-symbol
promotion or implemented-helper items into the direct surface:

1. Eval/init path: `lean_eval_main_decl`, `lean_eval_const`, `lean_run_init`.
2. Environment path: `lean_add_decl`, `lean_add_decl_without_checking`,
   `lean_elab_add_decl`, `lean_elab_add_decl_without_checking`.
3. Expr instantiate path: `lean_expr_instantiate`,
   `lean_expr_instantiate1`, `lean_expr_instantiate_range`,
   `lean_expr_instantiate_rev`, `lean_expr_instantiate_rev_range`.
4. MVar instantiate path: `lean_instantiate_level_mvars`,
   `lean_instantiate_expr_mvars`.
5. Misc direct symbol: `lean_expr_dbg_to_string`.

## Working Conclusion

The current evidence does not support treating "24" as 24 current Lean-facing
direct flip targets. The Task 0 direct list was 19, and after Task 2 the
remaining direct list is 15. If a future "24" list is needed, it must explicitly
name the five extra entries and classify them as already flipped,
production-symbol promotion, implemented helper, or non-facing ABI helper rather
than mixing them into the direct surface.
