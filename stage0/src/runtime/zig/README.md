# Zig Runtime

Pure-Zig reimplementation of the Lean 4 runtime. The main `libleanrt_zig`
artifacts are built from Zig sources plus small C ABI shims; they do not compile
C++ code unless the explicit `compile-cpp-cutover` Zig build option is enabled.
The runtime calls libuv (C) directly via `@cImport`. Big integers use the
GMP-compatible, Zig-backed `big_int.zig` path by default; `mpz_zig.zig` remains
available behind the `use-gmp=true` Zig build option.

## Layout

- `*.zig`: Runtime subsystems (object model, RC, big-number arithmetic,
  closures, tasks, promises, compact regions, allocation profiler, IO, process
  management, libuv subsystems).
- `io_error_weak_exports.c`: Optional C weak exports for standalone builds
  (`-Dexport-lean-helpers=true`). Omitted in helperless builds so the Lean
  stdlib's `@[export]` definitions are the sole providers.
- `testabi_hidden_shims.c`: Malloc-backed shims for ABI smoke tests.

## Build

There are two relevant CMake entry points:

- The top-level bootstrap project defaults `LEAN_ZIG_RUNTIME=OFF` and
  `LEAN_ZIG_CODEGEN=OFF`.
- The stage `src/` project defaults `LEAN_ZIG_RUNTIME=ON` and
  `LEAN_ZIG_RT_CUTOVER=ON`, but the top-level bootstrap explicitly forces
  stage0 to use `LEAN_ZIG_RT_CUTOVER=OFF` unless the caller overrides
  `STAGE0_LEAN_ZIG_RT_CUTOVER`.

This keeps stage0 as a self-contained C++ bootstrap compiler. For stage1 and
later, when both `LEAN_ZIG_RUNTIME` and `LEAN_ZIG_RT_CUTOVER` are enabled, the
helperless Zig runtime archive is linked into `libleanshared` alongside the
cutover runtime archive.

Enable the Zig runtime from the top-level build with:

```bash
cmake --preset release -B build/release -DLEAN_ZIG_RUNTIME=ON
```

Run the runtime and EmitZig tests after building:

```bash
CTEST_PARALLEL_LEVEL="$(sysctl -n hw.logicalcpu)" CTEST_OUTPUT_ON_FAILURE=1 \
  make -C build/release -j "$(sysctl -n hw.logicalcpu)" test \
  ARGS="-R 'runtime/zig|emitzig/(zigrt|zig-symbols)'"
```

For stdlib coverage, run the prewarm test before the full stdlib set:

```bash
CTEST_PARALLEL_LEVEL="$(sysctl -n hw.logicalcpu)" CTEST_OUTPUT_ON_FAILURE=1 \
  make -C build/release -j "$(sysctl -n hw.logicalcpu)" test \
  ARGS="-R 'emitzig/stdlib/prewarm'"

CTEST_PARALLEL_LEVEL="$(sysctl -n hw.logicalcpu)" CTEST_OUTPUT_ON_FAILURE=1 \
  make -C build/release -j "$(sysctl -n hw.logicalcpu)" test \
  ARGS="-R 'emitzig/stdlib'"
```

## Status

### POSIX (macOS / Linux)

- Object model, RC, big-number arithmetic, closures, tasks, promises
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
`-Dexport-kernel-symbols=true` for a pure-Zig kernel link that also provides the
`lean_kernel_*_impl` type-checker bridge symbols. `ir_interpreter.zig` exports
`lean_eval_main`, `lean_eval_const`, and `lean_run_init` — all three IR
interpreter entry points are now Zig-implemented.

### EmitZig code generator

Supported: constructors, projections, box/unbox, literals, fap/pap, closures,
cases, inc/dec, tail recursion, join points, module init, main wrapper.

Two defensive `throwError` gates exist in `EmitZig.lean` that are unreachable
for valid impure LCNF — all impure `LetValue` variants are covered. The gates
catch compiler bugs that violate the LCNF purity invariant.

### Verification status

This file records the intended implementation state. Do not treat a branch as
complete unless it has a clean build and the relevant runtime, EmitZig, symbol,
and stdlib tests have passed in the current checkout. Linux CI remains an
important gate because the symbol weakening/flipping tools have separate Mach-O
and ELF64 paths.

### Remaining gaps to production

1. **Kernel cutover**: C++ still owns the kernel entrypoints used by
   `libleanshared`; the Zig kernel exports are gated behind
   `-Dexport-kernel-symbols=true`. All 22 kernel C-linkage functions and all
   3 IR interpreter entry points (`lean_eval_main`, `lean_eval_const`,
   `lean_run_init`) have Zig implementations.
2. **Phase 3 symbol flip**: `tools/phase3_flip_symbols.txt` currently lists
   1057 symbols to flip to Zig. The remaining unflipped symbols are primarily
   C++ internal mangled names (namespace `lean`, C++ STL) without a direct Lean
   C ABI surface. Any count or pass/fail claim must be refreshed from the
   current build and test run.
3. **C++ file removal**: many C++ runtime source files have been removed from
   the stage1+ cutover build, with remaining files kept for C++ ABI-dependent
   paths. Removing the rest requires matching the relevant Itanium C++ ABI
   layouts and entrypoints in Zig.
4. **Allocator unification**: UV subsystem allocations go through
   `lean_allocator.vtable` (pluggable allocator interface). Constructor
   allocation must continue to use the size-prefixed small-object layout so the
   constructor free path matches the allocation layout.
5. **GMP reduction**: the default Zig runtime uses `big_int.zig` with libc
   allocation for GMP-compatible limbs. C++ `mpz.cpp` may still require libgmp
   on non-cutover paths; removing that dependency everywhere requires keeping
   the C++ `mpz` struct layout compatible with the GMP `__mpz_struct` layout.

### External dependencies

- **libgmp**: not required by the default Zig big-int path; still used by
  optional `use-gmp=true` Zig builds and by C++ `mpz.cpp` on non-cutover paths
- **libuv**: async IO — called directly from Zig via `@cImport`, no C++ bridge
- **libc/libc++**: standard C and C++ runtime support for mixed Lean builds
- **mimalloc**: eliminated — replaced by libc malloc via mimalloc compatibility
- **openssl**: eliminated — only used for version number (compile-time constant)
