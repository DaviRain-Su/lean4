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
2. **Phase 3 symbol flip**: 1028 of ~1360 C++ runtime symbols have been flipped
  to Zig (76%). All 106 non-stdlib emitzig tests and 21/21 zigrt tests pass.
  All lean_* C ABI symbols exported from the C++ runtime are now provided by
  Zig. Key fixes: (1) lean_alloc_mpz and lean_extract_mpz_value — C++ GMP-
  signature versions marked weak, Zig versions always exported (EmitZig
  codegen uses the Zig signature); lean_gmp.h is never included by any file,
  and C++ code uses internal alloc_mpz() instead, (2) lean_alloc_object and
  mimalloc behavior) instead of recursing through external_allocator;
  alloc.zig now calls libc malloc/free directly (mimalloc removed).
  (3) lean_demangle_bt_line_cstr — Zig weak stub in debug.zig, overridden
  by Lean's @[export] in libleanshared mode, provides empty-string
  fallback in zigrt mode, (4) lean_inc_heartbeat independently exported
  (not gated by export_allocator_symbols), (5) 36 UV helper symbols
  exported as aliases from uv_exports.zig, (6) 30 GMP externs replaced
  with pure-Zig big_int implementations, (7) task manager:
  scoped_task_manager uses volatile function pointers, deactivateTask
  matches C++ non-eager-free behavior, resolveTaskLocked/handleFinishedLocked
  use atomic stores/loads, (8) allocSmallObject uses mi_malloc_small and
  sets m_cs_sz, setHeapHeader preserves m_cs_sz, ctorScalarBytes
  subtracts header. Remaining unflipped symbols: ~540 mangled C++ names
  (namespace lean, C++ STL) — internal C++ implementation detail without
  C ABI, not callable from Lean code directly. The only unflipped lean_*
  symbol is lean_demangle_bt_line_cstr, which is @[export] from Lean source
  (not a C++ symbol) and is already covered by the Zig weak stub.
3. **C++ file removal**: 19 of 37 C++ runtime source files removed from the
   stage1 build (byteslice, openssl, allocprof, platform, process, mpn,
   mutex, libuv, 10 uv/*.cpp + zig/uv_*.cpp). Remaining 18 files have real
   cross-file dependencies (lean::throwable, lean::mpz, lean::stack_guard)
   used by libleancpp directly — removing them requires Zig reimplementing
   the C++ class hierarchy.
4. **Mimalloc eliminated**: mimalloc's static.c (~100KB, 323 symbols) removed
   from the build. mimalloc_compat.zig provides 5 mi_* C ABI shims
   (mi_malloc, mi_free, mi_free_size, mi_malloc_small, mi_new_n) backed by
   libc malloc/free. alloc.zig uses std.c.malloc/free directly.
5. **GMP reduced**: Zig runtime no longer links libgmp. big_int.zig uses
   std.math.big.int with libc malloc for limb allocation. gmp_alloc_compat.zig
   provides __gmp_default_* shims. C++ mpz.cpp still uses 37 __gmpz_*
   functions from libgmp (linked at final binary level, not in Zig library).
6. **Allocator unification**: UV subsystem uses `std.c.malloc/free` directly.
   Functionally correct (default vtable is libc malloc) but architecturally
   inconsistent with the pluggable allocator in `allocator.zig`.
7. **Windows SEH**: stack overflow detection not available (upstream Zig).

### External dependencies

- **libgmp**: used by C++ mpz.cpp only (37 __gmpz_* functions). Zig runtime
  uses std.math.big.int (big_int.zig) and libc malloc for limb allocation.
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C runtime
- **mimalloc**: eliminated — replaced by libc malloc via mimalloc_compat.zig
