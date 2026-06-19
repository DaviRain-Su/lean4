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

`kernel.zig` contains experimental Zig implementations for C++-owned kernel
entrypoints. They are not exported by default; pass `-Dexport-kernel-symbols=true`
only for a pure-Zig kernel link that also provides the `lean_kernel_*_impl`
type-checker bridge symbols.

### EmitZig code generator

Supported: constructors, projections, box/unbox, literals, fap/pap, closures,
cases, inc/dec, tail recursion, join points, module init, main wrapper.

Two defensive `throwError` gates exist in `EmitZig.lean` that are unreachable
for valid impure LCNF — all impure `LetValue` variants are covered. The gates
catch compiler bugs that violate the LCNF purity invariant.

### Remaining gaps to production

1. **Kernel cutover**: C++ still owns the kernel entrypoints used by
   `libleanshared`; the Zig kernel exports are gated behind
   `-Dexport-kernel-symbols=true`. The `instantiate_lparams` bridge in
   `inductive.zig` is a placeholder (returns expr unchanged).
2. **Allocator unification**: Zig internal functions use Zig's own allocator
   while C++ kernel/library code expects mimalloc. Until all Zig internal
   allocation goes through the external `lean_alloc_object`/`lean_free_object`,
   linking both runtimes causes crashes.
3. **Windows SEH**: stack overflow detection not available (upstream Zig).
4. **GMP**: links system libgmp (not replaced with `std.math.big.int`).

### External dependencies

- **libgmp**: big-number arithmetic (`mpz_zig.zig`, 95 C API calls)
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C runtime
