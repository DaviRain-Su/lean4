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
2. **Phase 3 symbol flip**: 168 of ~436 C++ runtime symbols have been flipped
   to Zig (39%). Flipped groups: platform info (4), internal info (2), pure
   computation (4), float (18), UTF8 (2), string operations (15),
   array/sarray/slice (25), nat/int big arithmetic (23 — previously 5 caused
   SIGSEGV/SIGBUS but the root cause was a lean_alloc_mpz signature mismatch,
   now fixed), internal/debug/panic (25), apply primitives (18), string_utf8
   (10), nat/int conversion (17), array_get_panic (1), max_small_nat (1).
   All pass zigrt + stdlib tests with clean stdlib cache build. Two allocator
   fixes were needed: lean_alloc_mpz now delegates to C++ lean_alloc_object
   when export_allocator_symbols is false (C++ lean_alloc_mpz has a different
   signature), and freeDelegatedCppObject routes through C++ lean_free_object
   for mimalloc compatibility.
3. **Allocator unification**: UV subsystem uses `std.c.malloc/free` directly
   (75 call sites). Functionally correct (default vtable is libc malloc) but
   architecturally inconsistent with the pluggable allocator in `allocator.zig`.
4. **Windows SEH**: stack overflow detection not available (upstream Zig).
5. **GMP**: links system libgmp (not replaced with `std.math.big.int`).

### External dependencies

- **libgmp**: big-number arithmetic (`mpz_zig.zig`, 95 C API calls)
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C runtime
