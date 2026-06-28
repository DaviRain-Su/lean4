# Zig Runtime Shadow

This directory contains the Zig reimplementation of the Lean 4 runtime.
It is a work-in-progress shadow tree intended to eventually replace the C++
runtime under `src/runtime/` for selected targets.

## Layout

- `*.zig`: Zig reimplementation of runtime subsystems.
- `box_weak_exports.c`, `io_error_weak_exports.c`: C weak exports used during
  split-runtime linking.
- `testabi_hidden_shims.c`: malloc-backed shims for ABI smoke tests that do not
  link mimalloc.

## Build

The Zig runtime is opt-in and experimental. Default Lean builds continue to use
the C++ runtime and do not require Zig.

Build the runtime archive from a configured stage build:

```bash
make -C build/release/stage1 leanrt_zig
```

Configure a fresh release build with the Zig runtime path enabled:

```bash
cmake --preset release -B build/release -DLEAN_ZIG_RUNTIME=ON
make -C build/release stage1-configure -j$(sysctl -n hw.logicalcpu)
make -C build/release/stage1 leanrt_zig -j$(sysctl -n hw.logicalcpu)
```

Run the opt-in Zig runtime tests:

```bash
make -C build/release/stage1 leanrt_zig_test -j$(sysctl -n hw.logicalcpu)
```

## Status

M1-M6 functionality has been ported from `zig-backend/`. The in-tree CMake path
builds `libleanrt_zig.a` and exposes an opt-in `leanrt_zig_test` target when
`LEAN_ZIG_RUNTIME=ON`.
