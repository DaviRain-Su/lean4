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
  (POSIX) or Vectored Exception Handling via `RtlAddVectoredExceptionHandler`
  (Windows) — matching the C++ implementation.

### Windows

- Memory RSS queries via `GetProcessMemoryInfo`
- Stack info via `GetCurrentThreadStackLimits`
- Sleep via `kernel32.Sleep`, debug break via `kernel32.DebugBreak`
- Stack overflow detection via Vectored Exception Handling (VEH) using
  `RtlAddVectoredExceptionHandler` with `EXCEPTION_STACK_OVERFLOW` — the same
  mechanism the C++ version uses (not SEH `__try/__except`). Zig 0.16.0
  exposes all required VEH APIs via `std.os.windows.ntdll`.

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
  All lean_* C ABI symbols are now provided by Zig. The remaining ~540
  unflipped symbols are C++ internal mangled names (namespace lean, C++ STL)
  without C ABI — not callable from Lean code directly.
3. **C++ file removal**: 23 of 37 C++ runtime source files removed from the
   stage1 build. Removed: byteslice, openssl, allocprof, platform, process,
   mpn, mutex, libuv, 10 uv/*.cpp + zig/uv_*.cpp, init_module, hash,
   memory, stack_overflow. Zig provides C++ mangled shims via cpp_compat.zig
   (lean::hash_str, lean::check_memory, lean::stack_guard ctor/dtor) and
   init.zig (lean::initialize/finalize_runtime_module). Remaining 14 files
   have deep C++ ABI dependencies — removing them requires matching the
   Itanium C++ ABI layout in Zig.
4. **Allocator unification**: completed — all UV subsystem allocations go
   through `lean_allocator.vtable` (pluggable allocator interface). The default
   vtable is libc malloc, so behavior is identical on standard platforms.
5. **GMP reduced**: Zig runtime uses `big_int.zig` (pure Zig, `std.math.big.int`)
   with libc malloc for limb allocation — no libgmp dependency. C++ `mpz.cpp`
   still uses 37 `__gmpz_*` functions from libgmp (linked at final binary
   level, not in Zig library). Removing C++ GMP dependency requires unifying
   the C++ `mpz` struct layout with the GMP `__mpz_struct` layout.
6. **Windows SEH**: resolved — VEH-based stack overflow detection implemented
   in `stack_overflow.zig` using `RtlAddVectoredExceptionHandler` (no
   upstream Zig changes needed).

### External dependencies

- **libgmp**: used by C++ mpz.cpp only (37 __gmpz_* functions). Zig runtime
  uses std.math.big.int (big_int.zig) and libc malloc for limb allocation.
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C runtime
- **mimalloc**: eliminated — replaced by libc malloc via mimalloc_compat.zig
- **openssl**: eliminated — only used for version number (compile-time constant)
