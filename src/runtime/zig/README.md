# Zig Runtime

This directory contains the Zig reimplementation of the Lean 4 runtime.
It is a work-in-progress shadow tree intended to eventually replace the C++
runtime under `src/runtime/` for selected targets.

## Layout

- `*.zig`: Zig reimplementation of runtime subsystems.
- `io_error_weak_exports.c`: C weak exports bridging C++ callers to Zig
  io_error implementations; emitted only when helper symbols are exported
  (`-Dexport-lean-helpers=true`). The helperless build omits this file so
  the Lean stdlib's own `@[export]` definitions are the sole providers.
- `testabi_hidden_shims.c`: malloc-backed shims for ABI smoke tests that do not
  link mimalloc.

## Build

The Zig runtime is opt-in and experimental. Default Lean builds continue to use
the C++ runtime and do not require Zig.

Build the runtime archive manually from an existing stage1 build:

```bash
make -C build/release/stage1 leanrt_zig
```

Configure the full release build with the Zig runtime path enabled:

```bash
cmake --preset release -B build/release -DLEAN_ZIG_RUNTIME=ON
make -j$(sysctl -n hw.logicalcpu) -C build/release
```

Run the opt-in runtime tests:

```bash
ctest --preset release --test-dir build/release/stage1 -R 'runtime/zig|emitzig/zigrt|emitzig/zig-symbols'
```

## Status

### POSIX (macOS / Linux): production-ready core

- Object model, RC, GMP big-number arithmetic, closures, tasks, promises
- Full compact region save/read with v2 (no closures) and v3 (closure
  fn-pointer relocation) olean formats
- Allocation profiler with per-category counters wired into all alloc entry
  points
- IO subsystem (file, stream, UV TCP/timer/signal/DNS via C++ bridge)
- Stack overflow detection via SIGSEGV/SIGBUS alternate signal stack

### Windows: functional with documented gaps

- Memory RSS queries via `GetProcessMemoryInfo`
- Stack info via `GetCurrentThreadStackLimits`
- Sleep via `kernel32.Sleep`, debug break via `kernel32.DebugBreak`
- Stack overflow detection is a no-op stub: Zig does not expose SEH frame
  unwinding, so Windows structured exception handling for stack overflow
  cannot be implemented until a Zig SEH story exists.

### EmitZig code generator

Supported: constructors, projections, box/unbox, literals, fap/pap, closures,
cases, inc/dec, tail recursion, join points, module init, main wrapper.

Two safety-net `throwError` gates remain in `EmitZig.lean`:

- `unsupported EmitZig let-value in impure LCNF`: triggered when a `LetValue`
  variant is not covered by `renderCoreLetValueLines?` / `renderLetValueLines?`.
  All common variants (ctor, proj, box, unbox, fap, pap, lit, reset, reuse,
  isShared, erased) are handled; the gate catches rare or future variants.
- `unsupported EmitZig function body`: triggered when `supportsCodeSubset`
  rejects a function body containing an unsupported pattern.

Both gates prevent incorrect code generation for patterns the backend has not
been extended to handle; extend `renderCoreLetValueLines?` to lift them.
