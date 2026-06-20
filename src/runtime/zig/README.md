# Zig Runtime

Pure-Zig reimplementation of the Lean 4 runtime. `libleanrt_zig` is compiled
entirely from Zig source files — no C++ code is compiled into it. The runtime
calls libuv (C) and libgmp (C) directly via `@cImport`.

## Layout

- `*.zig`: Runtime subsystems (object model, RC, GMP arithmetic, closures,
  tasks, promises, compact regions, allocation profiler, IO, process
  management, libuv subsystems).
- `io_error_weak_exports.c`: Optional C weak exports for standalone builds
  (`-Dexport-lean-helpers=true`). Omitted in helperless builds so the Lean
  stdlib's `@[export]` definitions are the sole providers.
- `testabi_hidden_shims.c`: Malloc-backed shims for ABI smoke tests.

## Build

The Zig runtime is now built by default (`LEAN_ZIG_RUNTIME=ON`). Lean's own
`libleanshared` still links the C++ runtime until the final cutover (blocked
by allocator unification). To disable the Zig runtime build:

```bash
cmake --preset release -B build/release -DLEAN_ZIG_RUNTIME=OFF
```

Run the opt-in runtime and EmitZig tests:

```bash
ctest --test-dir build/release/stage1 -R 'runtime/zig|emitzig/(zigrt|stdlib|zig-symbols)'
```

## Status

### POSIX (macOS / Linux)

- Object model, RC, GMP big-number arithmetic, closures, tasks, promises
- Full compact region save/read: v2 (no closures), v3 (closure fn-pointer
  relocation), mmap read path with malloc fallback
- Allocation profiler with per-category counters in all alloc entry points
- Process subsystem: spawn/wait/kill, current dir, get_pid, get_tid
- All seven libuv subsystems are pure Zig (event loop, timer, DNS, signal,
  net_addr, TCP, UDP, system) — zero C++ compiled into the runtime
- Stack overflow detection via SIGSEGV/SIGBUS alternate signal stack

### Windows

- Memory RSS queries via `GetProcessMemoryInfo`
- Stack info via `GetCurrentThreadStackLimits`
- Sleep via `kernel32.Sleep`, debug break via `kernel32.DebugBreak`
- Stack overflow detection is a no-op: Zig does not expose SEH frame
  unwinding. Requires upstream Zig SEH support.

### Kernel C-linkage exports

`kernel.zig` contains Zig implementations of all 22 C++-owned kernel
C-linkage functions (expr_eq, for_each, replace, instantiate, abstract,
level_eq, etc.). They are not exported by default; pass
`-Dexport-kernel-symbols=true` for a pure-Zig kernel link that also
provides the `lean_kernel_*_impl` type-checker bridge symbols.
`ir_interpreter.zig` exports `lean_eval_main`, `lean_eval_const`, and
`lean_run_init` — all three IR interpreter entry points are now
Zig-implemented.

### EmitZig code generator

Supported: constructors, projections, box/unbox, literals, fap/pap, closures,
cases, inc/dec, tail recursion, join points, module init, main wrapper.

Two defensive `throwError` gates exist in `EmitZig.lean` that are unreachable
for valid impure LCNF — all impure `LetValue` variants are covered. The gates
catch compiler bugs that violate the LCNF purity invariant.

### Remaining gaps to production

1. **Kernel cutover**: C++ still owns the kernel entrypoints used by
   `libleanshared`; the Zig kernel exports are gated behind
   `-Dexport-kernel-symbols=true`. All 22 kernel C-linkage functions and all
   3 IR interpreter entry points (`lean_eval_main`, `lean_eval_const`,
   `lean_run_init`) have Zig implementations.
2. **Phase 3 symbol flip**: 1024 of ~1360 C++ runtime symbols have been flipped
  to Zig (75%). All 106 non-stdlib emitzig tests and 21/21 zigrt tests pass.
  Key fixes: (1) lean_alloc_mpz delegates to C++ lean_alloc_object when
  export_allocator_symbols is false, (2) freeDelegatedCppObject routes
  through C++ lean_free_object for mimalloc compatibility, (3) allocSmallObject
  uses mi_malloc_small and sets m_cs_sz in mimalloc mode, (4) setHeapHeader
  preserves m_cs_sz in mimalloc mode, (5) ctorScalarBytes subtracts header
  from m_cs_sz, (6) task/promise deactivation: lean_deactivate_task/
  lean_deactivate_promise exported from both C++ (strong) and Zig (weak) —
  C++ overrides in libleanshared, Zig handles deactivation in zigrt mode,
  (7) scoped_task_manager uses volatile function pointers to delegate to
  Zig lean_init_task_manager_using, preventing C++ inlining, (8) deactivateTask
  no longer eagerly frees pending task objects — matches C++ behavior where
  the task is left alive for the scheduler to free later, (9) resolveTaskLocked
  and handleFinishedLocked use atomic stores/loads for m_value and m_imp,
  (10) handleFinishedLocked saves m_next_dep before enqueueing to avoid
  use-after-free from recursive inline resolution, (11) 30 GMP externs
  replaced with pure-Zig big_int implementations, (12) lean_inc_heartbeat
  independently exported (not gated by export_allocator_symbols), (13) 36 UV
  helper symbols exported as aliases from uv_exports.zig pointing to existing
  Zig lean_uv_* implementations.
  Remaining 5 lean_* C ABI symbols cannot be flipped without deeper changes:
  - lean_alloc_object / lean_free_object (2): delegate to mimalloc when
    export_allocator_symbols=false. Flipping requires implementing the full
    mimalloc-equivalent allocator in Zig.
  - lean_alloc_mpz (1): C++ signature uses GMP mpz_t parameter; Zig version
    uses different Mpz type. Signature mismatch prevents flipping.
  - lean_extract_mpz_value (1): C++ copies mpz value into GMP mpz_t output
    parameter; Zig version returns a pointer to internal Mpz. Different
    semantics, only defined under LEAN_USE_GMP.
  - lean_demangle_bt_line_cstr (1): defined as @[export] in Lean source
    (Lean/Compiler/NameDemangling.lean), not a C++ symbol. The C++ version
    is a weak stub that returns empty string when the Lean demangler is not
    linked. Not a C++ → Zig flip candidate.
  The remaining ~863 unflipped symbols are mangled C++ names (namespace lean,
  mimalloc internals, C++ STL) — internal C++ implementation detail without
  C ABI, not callable from Lean code directly.
3. **Allocator unification**: UV subsystem uses `std.c.malloc/free` directly
   (75 call sites). Functionally correct (default vtable is libc malloc) but
   architecturally inconsistent with the pluggable allocator in `allocator.zig`.
4. **Windows SEH**: stack overflow detection not available (upstream Zig).
5. **GMP**: links system libgmp (not replaced with `std.math.big.int`).

### External dependencies

- **libgmp**: big-number arithmetic (`mpz_zig.zig`, 95 C API calls)
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C runtime
