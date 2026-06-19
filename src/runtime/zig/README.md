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

The Zig runtime is opt-in. Default Lean builds use the C++ runtime.

```bash
# From an existing stage1 build
make -C build/release/stage1 leanrt_zig

# Full release with Zig runtime enabled
cmake --preset release -B build/release -DLEAN_ZIG_RUNTIME=ON
make -j$(sysctl -n hw.logicalcpu) -C build/release
```

Run the opt-in runtime tests:

```bash
ctest --test-dir build/release/stage1 -R 'runtime/zig|emitzig/zigrt|emitzig/zig-symbols'
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

### EmitZig code generator

Supported: constructors, projections, box/unbox, literals, fap/pap, closures,
cases, inc/dec, tail recursion, join points, module init, main wrapper.

Two defensive `throwError` gates exist in `EmitZig.lean` that are unreachable
for valid impure LCNF — all impure `LetValue` variants are covered. The gates
catch compiler bugs that violate the LCNF purity invariant.

### Remaining gaps to production

1. **Full regression**: no stdlib + mathlib full-scale test run yet. This is
   the primary blocker — the code is complete but lacks large-scale validation.
2. **Not default**: opt-in (`-DLEAN_ZIG_RUNTIME=ON`). Switching to default
   requires passing #1.
3. **Windows SEH**: stack overflow detection not available (upstream Zig).
4. **GMP**: links system libgmp (not replaced with `std.math.big.int`).

### External dependencies

- **libgmp**: big-number arithmetic (`mpz_zig.zig`, 95 C API calls)
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C runtime
