# Zig CC Integration Design

## Overview

This document describes the design for replacing Lean's existing C/C++ compilation
toolchain with `zig cc` / `zig c++` — Zig's built-in C/C++ compiler frontend — and
subsequently integrating the Zig code emission backend (`EmitZig`) into the Lean
compiler pipeline.

The work is split into two phases:

1. **Phase 1 — zig cc/c++ as the C/C++ compiler**: Make `leanc` and the CMake build
   system use `zig cc` and `zig c++` transparently as drop-in replacements for
   `cc`/`clang`/`gcc` and `clang++`/`g++`. This covers **both** C and C++ compilation
   — the entire build toolchain. No changes to code generation; Lean still emits C,
   but the C is compiled by Zig.

2. **Phase 2 — EmitZig backend**: Integrate the LCNF → Zig code emitter and Zig
   runtime into `src/`, enabling `lean -z` to produce Zig source files that are
   compiled and linked via `zig build` or `zig build-obj`/`zig build-exe`.

### Current status

Phase 1 is implemented and validated for the **host target only**. The current
toolchain wrappers execute:

```bash
zig cc "$@"
zig c++ "$@"
```

with no `-target` flag injected. This means each build directory still produces
artifacts for exactly one target: the host platform seen by CMake. On the current
development machine, the validated target is:

- `aarch64-apple-darwin`

A full bootstrap and full test run (`3926 / 3926`) passed for that host target.

Target expansion should therefore be treated as a **follow-on phase** to the
working host-native integration, not as something already implied by the existing
toolchain file.

---

## Phase 1: zig cc/c++ as the C/C++ Compiler

### 1.1 Current Architecture

The C/C++ compilation pipeline has five layers:

```
Lean source (.lean)
    │
    ▼  Compiler.LCNF.EmitC  (in-process, no external call)
C source (.c)
    │
    ▼  leanc wrapper
    │  ├── src/Leanc.lean      — production leanc binary (Lean)
    │  └── src/bin/leanc.in    — bash leanc for building Lean itself
    │
    ▼  IO.Process.spawn → external C compiler
    │  Compiler selection priority:
    │    1. LEAN_CC env var      (Leanc.lean:57)
    │    2. bundled clang in sysroot  (InstallPath.lean:264-265)
    │    3. CC env var           (InstallPath.lean:267)
    │    4. "cc" from PATH        (InstallPath.lean:270)
    │
    ▼  object file / executable
```

In parallel, the CMake build system compiles C++ sources directly:

```
src/{kernel,library,runtime,shell,util}/*.cpp
    │
    ▼  CMAKE_CXX_COMPILER (clang++/g++)
    │  project(LEAN CXX C)  — CMakeLists.txt:9
    │  Compiler ID check:  — CMakeLists.txt:250-270
    │    GNU → version check
    │    Clang → -D__CLANG__
    │    MSVC → MSVC flags
    │    else → FATAL_ERROR
    │
    ▼  object files → libleancpp.a, libleanshared.so, lean binary
```

#### Key files and their roles

| File | Role |
|------|------|
| `src/Leanc.lean` | Production `leanc` binary. Reads `LEAN_CC`, assembles flags, spawns compiler. |
| `src/bin/leanc.in` | Bash `leanc` template for building Lean itself. `${LEAN_CC:-@CMAKE_C_COMPILER@}`. |
| `src/Lean/Compiler/FFI.lean` | Lean bindings to CMake-configured flag strings. |
| `src/util/ffi.cpp` | C++ FFI: `@LEANC_EXTRA_CC_FLAGS@`, `@LEANC_INTERNAL_FLAGS@`, etc. |
| `src/lake/Lake/Config/InstallPath.lean` | Lake's compiler detection: `LEAN_CC` → bundled `clang` → `CC` → `cc`. |
| `src/lake/Lake/Build/Actions.lean` | `compileO`, `compileSharedLib`, `compileExe` — spawn compiler via `IO.Process.output`. |
| `src/lake/Lake/Build/Common.lean` | `buildLeanO`, `buildLeanSharedLib`, `buildLeanExe` — assemble args, call Actions. |
| `src/CMakeLists.txt` | CMake configuration: `project(LEAN CXX C)`, `LEANC_CC`, `LEANC_EXTRA_CC_FLAGS`, linker flags, compiler ID check. |
| `CMakeLists.txt` | Root CMake: stage0/stage1/stage2 orchestration, platform args forwarding. |
| `script/prepare-llvm-*.sh` | Cross-compilation scripts that override `CMAKE_C_COMPILER` and `LEANC_CC`. |

#### Flag assembly in leanc (src/Leanc.lean:62)

```
args = cflags ++ cflagsInternal ++ userArgs ++ ldflagsInternal ++ ldflags ++ ["-Wno-unused-command-line-argument"]
```

When `LEAN_CC` is set, `cflagsInternal` and `ldflagsInternal` are cleared (they are
for the bundled compiler only). This means a custom compiler receives only the
public flags (`cflags` + `ldflags`) plus user args.

### 1.2 Why zig cc / zig c++

Zig ships a C/C++ compiler frontend based on clang. It:

- Accepts gcc/clang-compatible CLI flags (with minor exceptions).
- Bundles its own LLD linker — no external `ld`/`lld` needed.
- Supports cross-compilation via `-target` triples out of the box.
- Ships libc for common targets (musl, mingw).
- Provides `zig cc` for C compilation and `zig c++` for C++ compilation.
- Is identified by CMake as `Clang` (via wrapper scripts), so the existing
  `CMAKE_CXX_COMPILER_ID MATCHES "Clang"` branch in `CMakeLists.txt:255` works
  without modification.

This makes it an ideal single-toolchain replacement for the current system that
requires `cc` + `clang++` + `lld` + platform sysroots.

### 1.3 Design: leanc changes

#### Problem: `IO.Process.spawn` with multi-word commands

`Leanc.lean:66` does:
```lean
let child ← IO.Process.spawn { cmd := cc, args, env }
```

If `LEAN_CC="zig cc"`, `cmd` becomes `"zig cc"` which `IO.Process.spawn` treats as
a single binary name — it fails because there is no binary literally named `"zig cc"`.

#### Solution: command splitting

Add a helper to split `LEAN_CC` into a command + leading args:

```lean
/-- Split a compiler command string into (cmd, extraArgs).
    "zig cc" → ("zig", ["cc"])
    "zig cc -target x86_64-linux" → ("zig", ["cc", "-target", "x86_64-linux"])
    "clang" → ("clang", []) -/
def splitCcCommand (cc : String) : String × Array String :=
  match cc.splitOn " " |>.filter (!·.isEmpty) with
  | [] => ("cc", #[])
  | [cmd] => (cmd, #[])
  | cmd :: rest => (cmd, rest.toArray)
```

Then in `main`:
```lean
if let some cc' ← IO.getEnv "LEAN_CC" then
  let (cmd, extraArgs) := splitCcCommand cc'
  cc := cmd
  -- prepend extraArgs to the final args array
  args := extraArgs ++ args
  cflagsInternal := #[]
  ldflagsInternal := #[]
```

And spawn becomes:
```lean
let child ← IO.Process.spawn { cmd, args := extraArgs ++ args, env }
```

This is fully backward-compatible: `LEAN_CC=clang` still works as before (single word,
no split).

#### macOS deployment target

`Leanc.lean:31-33` sets `MACOSX_DEPLOYMENT_TARGET=99.0` when unset, to suppress
linker warnings about newer system library versions. With `zig cc`, the target
is controlled via `-target` triple, so this env hack should be skipped when the
compiler is `zig`:

```lean
let env := match (← IO.getEnv "MACOSX_DEPLOYMENT_TARGET") with
  | some _ => #[]
  | none =>
    if isZigCc then #[]
    else #[("MACOSX_DEPLOYMENT_TARGET", "99.0")]
```

### 1.4 Design: Lake changes

`InstallPath.lean:260-270` `setCc` currently checks:

1. `LEAN_CC` env → custom CC
2. `leanCcExe sysroot` (bundled `bin/clang`) → internal CC
3. `CC` env → custom CC
4. `"cc"` → custom CC

No change needed here — setting `LEAN_CC="zig cc"` already flows through correctly.
But `Lake.Build.Actions` calls `IO.Process.output { cmd := compiler.toString, ... }`
which has the same multi-word command problem as `leanc`.

#### Fix in Actions.lean

`compileO`, `compileSharedLib`, and `compileExe` all pass `compiler.toString` as `cmd`.
Apply the same `splitCcCommand` logic:

```lean
-- In compileO
let (cmd, extraArgs) := splitCcCommand compiler.toString
proc {
  cmd := cmd,
  args := extraArgs ++ #["-c", "-o", oFile.toString, srcFile.toString] ++ moreArgs
}
```

The same pattern applies to `compileSharedLib` and `compileExe`.

### 1.5 Design: CMake changes — replacing both C and C++ compilers

#### CMake `project(LEAN CXX C)`

`src/CMakeLists.txt:9` declares `project(LEAN CXX C)`, which makes CMake detect both
the C and C++ compilers. The C++ compiler is used to build all of Lean's C++ sources:
the runtime (`src/runtime/*.cpp`), the kernel (`src/kernel/*.cpp`), the library
(`src/library/*.cpp`), the shell (`src/shell/*.cpp`), util (`src/util/*.cpp`),
and the FFI layer (`src/util/ffi.cpp`).

`CMakeLists.txt:250-270` has a hard-coded compiler ID check:

```cmake
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU")       # g++
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang") # clang++
elseif(MSVC)
else()
  message(FATAL_ERROR "Unsupported compiler: ${CMAKE_CXX_COMPILER_ID}")
endif()
```

#### Critical finding: CMake cannot call `zig` directly

CMake invokes the compiler binary with probe flags like `-arch arm64` (on macOS).
`zig` alone does not understand these — it needs the `cc` or `c++` subcommand first.
Setting `CMAKE_C_COMPILER=zig` produces: `error: unknown command: -arch` and fails.

#### Solution: wrapper scripts

Create two wrapper scripts that CMake calls as the C and C++ compilers:

```bash
# zig-cc  — C compiler wrapper
#!/bin/bash
exec zig cc "$@"

# zig-cxx — C++ compiler wrapper
#!/bin/bash
exec zig c++ "$@"
```

**Verified result** (tested with zig 0.16.0 on macOS arm64):

- `CMAKE_CXX_COMPILER_ID = Clang` ✅
- `CMAKE_C_COMPILER_ID = Clang` ✅
- `CMAKE_CXX_COMPILER_VERSION = 21.1.8` (zig 0.16's bundled clang version)
- CMake `project()` detection succeeds
- The `CMAKE_CXX_COMPILER_ID MATCHES "Clang"` branch is taken (line 255-256)
- `-D__CLANG__` is set correctly
- No `FATAL_ERROR`

This means the existing compiler ID check in `CMakeLists.txt:250-270` needs **no
modification** — zig's wrappers appear as Clang to CMake.

#### New CMake option

```cmake
# src/CMakeLists.txt
option(LEAN_USE_ZIG_CC "Use 'zig cc'/'zig c++' as C/C++ compiler instead of system cc/clang" OFF)

if(LEAN_USE_ZIG_CC)
  find_program(ZIG_EXE zig REQUIRED)

  # Create wrapper scripts in the build directory
  set(ZIG_CC_WRAPPER  "${CMAKE_BINARY_DIR}/zig-cc")
  set(ZIG_CXX_WRAPPER "${CMAKE_BINARY_DIR}/zig-cxx")
  file(WRITE "${ZIG_CC_WRAPPER}"  "#!/bin/bash\nexec \"${ZIG_EXE}\" cc \"$@\"\n")
  file(WRITE "${ZIG_CXX_WRAPPER}" "#!/bin/bash\nexec \"${ZIG_EXE}\" c++ \"$@\"\n")
  execute_process(COMMAND chmod +x "${ZIG_CC_WRAPPER}" "${ZIG_CXX_WRAPPER}")

  # Override both C and C++ compilers
  set(CMAKE_C_COMPILER   "${ZIG_CC_WRAPPER}"  CACHE FILEPATH "C compiler" FORCE)
  set(CMAKE_CXX_COMPILER "${ZIG_CXX_WRAPPER}" CACHE FILEPATH "C++ compiler" FORCE)
  set(LEANC_CC "${ZIG_CC_WRAPPER}" CACHE STRING "C compiler to use in leanc" FORCE)

  # zig bundles its own libc++ and lld — adjust linker config
  set(LEAN_CXX_STDLIB "")
  string(REPLACE "-fuse-ld=lld" "" LEAN_EXTRA_LINKER_FLAGS "${LEAN_EXTRA_LINKER_FLAGS}")
  set(LEAN_EXTRA_LINKER_FLAGS "${LEAN_EXTRA_LINKER_FLAGS}" CACHE STRING "" FORCE)
endif()
```

#### What this replaces

| Current compiler | Replaced by | Scope |
|------------------|-------------|-------|
| `CMAKE_C_COMPILER` (system `cc`/`clang`) | `zig-cc` wrapper → `zig cc` | All C compilation (leanc, runtime C files) |
| `CMAKE_CXX_COMPILER` (system `clang++`/`g++`) | `zig-cxx` wrapper → `zig c++` | All C++ compilation (kernel, library, runtime, shell, util) |
| `LEANC_CC` (set to `CMAKE_C_COMPILER`) | `zig-cc` wrapper | User-facing `leanc` after install |
| External `lld` | zig's bundled lld | All linking |
| `LEAN_CXX_STDLIB` (`-lstdc++`/`-lc++`) | empty (zig bundles libc++) | Linker stdlib flags |

#### leanc.in (bash wrapper)

`src/bin/leanc.in:10` uses `${LEAN_CC:-@CMAKE_C_COMPILER@}`. When `LEAN_USE_ZIG_CC=ON`,
`@CMAKE_C_COMPILER@` will be the `zig-cc` wrapper path. Bash handles this correctly
in the array form `(${LEAN_CC:-@CMAKE_C_COMPILER@} ...)` — no change needed.

For end users who don't have the wrapper, they can set `LEAN_CC="zig cc"` and the
`splitCcCommand` fix in `Leanc.lean` handles it.

#### Flag compatibility — C and C++

**C-only flags** (via `LEANC_EXTRA_CC_FLAGS`, used by `leanc` for user code):

| Flag | Source line | zig cc status | Action |
|------|-------------|---------------|--------|
| `-fstack-clash-protection` | :212 | Supported (clang backend) | None |
| `-ffp-contract=off` | :215 | Supported | None |
| `-fdata-sections -ffunction-sections` | :541,544 | Supported | None |
| `-fPIC` | :558,578 | Supported | None |
| `-fvisibility=hidden` | :596 | Supported | None |
| `-Wno-unused-command-line-argument` | Leanc.lean:62 | Supported | None |

**C++ flags** (via `CMAKE_CXX_FLAGS`, used to build Lean itself):

| Flag | Source line | zig c++ status | Action |
|------|-------------|-----------------|--------|
| `-std=c++20` | :274 | Supported | None |
| `-Wall -Wextra` | :274 | Supported | None |
| `-O3` (Release) | :282 | Supported | None |
| `-fPIC -ftls-model=initial-exec` | :557 | Supported | None |
| `-fvisibility=hidden -fvisibility-inlines-hidden` | :595 | Supported | None |
| `-ffp-contract=off` | :216 | Supported | None |
| `-D__CLANG__` | :256 | Set by CMake (Clang branch) | None |

**Linker flags**:

| Flag | Source line | zig/lld status | Action |
|------|-------------|-----------------|--------|
| `-fuse-ld=lld` | :48 | Redundant — zig bundles lld | Strip when zig |
| `-Wl,--start-group ... -Wl,--end-group` | :484 | lld supports it | Verify |
| `-Wl,-Bsymbolic` | :554 | lld supports it | Verify |
| `-Wl,--gc-sections` / `-Wl,-dead_strip` | :542,545 | lld supports it | Verify |
| `-Wl,-rpath=\\$$ORIGIN/..` | :559 | Supported | Verify |
| `-lstdc++` / `-lc++` | :507-514 | Still needed when invoking `zig cc` as the linker driver | Keep platform-specific stdlib flags (`-lc++` on Darwin) |
| `MACOSX_DEPLOYMENT_TARGET` | Leanc.lean / Lake Actions | N/A — zig target selection should come from `-target` | Skip environment hack when zig |

Most flags pass through unchanged. The ones needing conditional handling are:
1. `-fuse-ld=lld` — redundant, strip it.
2. `LEAN_CXX_STDLIB` — **do not** clear it; `zig cc` still needs explicit platform
   stdlib flags when it is used as the linker driver.
3. `MACOSX_DEPLOYMENT_TARGET` — skip the env hack in `leanc` and Lake when zig is active.

#### Native platform rollout

Zig supports many targets, but Lean should not treat that as a mandate to add
foreign-target bootstrap support. Lean's build, test, and packaging logic are still
organized around **host-native** execution on real Darwin/Linux/Windows platforms.

So the practical meaning of "support Zig targets" in Lean is:

1. build Lean **natively** on the target OS / architecture,
2. use `zig cc` / `zig c++` as the host C/C++ compiler there, and
3. verify the produced binaries by actually running them on that host.

That keeps the Phase 1 scope aligned with the work already proven in this branch:
replace the host compiler with Zig, keep the existing bootstrap model, and avoid a
separate cross-compilation project inside the same PR.

##### Current implementation

The current implementation should stay **host-native only**. It supports
`-DLEAN_USE_ZIG_CC=ON` for replacing the host C/C++ compiler with `zig cc` /
`zig c++`.

It should **not** introduce:

- `LEAN_ZIG_TARGET`
- foreign-target `stage1` leaf builds
- target-aware wrapper injection via `-target`
- cross-only CI smoke lanes
- target-specific sysroot / pkg-config / dependency plumbing

##### Why this boundary matters

The repository's bootstrap assumes that:

- `stage0` tools run on the current host,
- `stage1` tools also run on the current host when `stage2+` is built,
- large parts of the test suite execute produced binaries instead of only inspecting artifacts.

That model fits host-native Zig compiler replacement cleanly.

It does **not** cleanly fit a foreign-target bootstrap without additional work in:

- dependency packaging (`GMP`, `libuv`, `OpenSSL`, libc/sysroot),
- tool discovery (`pkg-config`, CMake find modules, archivers),
- platform-specific link/install behavior,
- Lake/downstream propagation,
- CI runner topology.

Those are all real problems, but they belong to a separate design effort.

##### Zig upstream support levels

Zig's upstream platform support table is still the right first filter:

- `x86_64-linux` is Tier 1
- `aarch64-linux` is Tier 2
- `x86_64-macos` is Tier 2
- `aarch64-macos` is Tier 2

Source: <https://ziglang.org/learn/platform-support/>

That should guide **which native runners** Lean prioritizes first, not justify a
generic cross-target rollout.

##### Recommended native rollout order

| Rollout wave | Native host platform | Why this wave comes here |
|--------------|----------------------|---------------------------|
| 1 | `x86_64-linux` | Tier 1 upstream support, cheapest CI, strongest overlap with the current Linux bootstrap path. |
| 2 | `aarch64-linux` | Same Linux/ELF family, but exercises a second ISA on a real host instead of a foreign-target leaf build. |
| 3 | `aarch64-macos` | Matches the primary development machine used in this branch and stays host-native. |
| 4 | `x86_64-macos` | Same Darwin family, but lower urgency than Linux + Apple Silicon. |
| 5 | `x86_64-windows-gnu` | Valuable later, but still the highest native-OS cost among the near-term targets. |

WASM remains separate. It is not "just another native target" in this repository.

##### Minimum OS expectations from Zig

Per Zig's upstream platform support page, the relevant baseline OS versions include:

- Darwin `14.0+`
- Linux kernel `5.10+`
- Windows `10+`

Lean's host-native Zig support should inherit these as lower bounds unless Lean
itself requires stricter ones.

##### First implementation slice

The first PR should stay intentionally narrow:

- host-native `LEAN_USE_ZIG_CC` support only
- native regression coverage for real host runners
- no target selector
- no foreign-target bootstrap logic
- no Lake/downstream target propagation work

The first PR should **not** attempt:

- cross-compilation
- foreign-target `stage1`
- `LEAN_ZIG_TARGET`
- cross-only CI smoke lanes
- target sysroot / pkg-config / dependency repackaging
- any EmitZig backend work

##### Acceptance gates

The host-native Phase 1 slice is done when:

1. the native host Zig bootstrap passes on Linux `x86_64`;
2. the user-facing `lean --c` → `leanc -c` → `leanc link` smoke passes on every Zig-native CI lane;
3. at least one additional non-`x86_64` native lane passes with `LEAN_USE_ZIG_CC=ON`; and
4. the design documentation explicitly states that cross-compilation is out of scope.

##### Out of scope for this phase

The following remain intentionally deferred:

- foreign-target bootstrap
- target-aware Lake propagation
- explicit sysroot / pkg-config cross plumbing
- build-only artifact validation for non-runnable targets
- Tier 3 / Tier 4 / Additional Platforms from Zig's support table

They can come back later as a dedicated cross-target design, but they should not
shape the host-native compiler replacement PR.

### 1.6 Design: Testing

#### Test matrix

| Test | What it verifies |
|------|-----------------|
| `LEAN_CC="zig cc" leanc --print-cflags` | Flag output is correct for host-native Zig builds |
| `LEAN_CC="zig cc" leanc --print-ldflags` | Linker flag output is correct for host-native Zig builds |
| `LEAN_CC="zig cc" leanc -c test.c -o test.o` | Host-native object file compilation |
| `LEAN_CC="zig cc" leanc test.o -o test` | Host-native executable linking |
| `cmake -DLEAN_USE_ZIG_CC=ON .. && make` | Full host-native bootstrap (C + C++ via Zig) |
| `make test` | Full host-native test suite passes |
| `tests/zig_native_verify` smoke | Host-native `lean --c` → `leanc -c` → `leanc link` → execute on the same machine |
| native Linux `x86_64` CI lane | Tier 1 regression gate for Zig compiler replacement |
| native Linux `aarch64` CI lane | Second-ISA native regression gate |
| native macOS `aarch64` CI lane | Darwin host-native regression gate |

#### Regression strategy

1. Keep the current host-native Zig bootstrap green.
2. Add a small executable smoke (`tests/zig_native_verify`) that runs on every Zig-native lane.
3. Prefer real native runners over foreign-target artifact inspection.
4. Scale coverage by platform confidence:
   - Linux `x86_64`: strongest gate, full native bootstrap + smoke
   - Linux `aarch64`: native smoke on real ARM runner
   - macOS `aarch64`: native smoke on real Apple Silicon runner
5. Treat Lake/downstream package builds as a separate verification phase, not as an automatic consequence of bootstrap support.

#### Implementation order

##### Phase 1 (implemented)

1. Add Zig wrapper-based host compiler replacement.
2. Handle multi-word `LEAN_CC` and Zig-specific linker quirks.
3. Build the host-native Zig bootstrap and run the host-native smoke path.

##### Phase 1b (next PR)

1. Remove `LEAN_ZIG_TARGET` and all cross-only plumbing.
2. Add native Zig CI lanes for Linux `x86_64`, Linux `aarch64`, and macOS `aarch64`.
3. Keep the smoke path intentionally small and executable on the host.

##### Phase 1c

1. Strengthen the native Linux `x86_64` lane from smoke-only toward broader test coverage.
2. Add native host coverage for additional Darwin / Windows targets as real runners become worthwhile.
3. Keep Emscripten / WASM on a separate experimental track.

---

## Phase 2: EmitZig Backend

### 2.1 Current State

The Zig code emission backend has been developed on the `zig-backend-codegen` and
related branches. It exists in the build tree (`build/release/stage*/src/lean/...`)
but has not been merged into `src/`. The following components are ready:

#### Code emission

| Component | Location (build tree) | Description |
|-----------|------------------------|-------------|
| `EmitZig.lean` | `Lean/Compiler/LCNF/EmitZig.lean` | 1689 lines. LCNF → Zig source. |
| `EmitZig/InlineHelpers.lean` | Same dir | Inline helper utilities. |
| `EmitZig/RuntimeExterns.lean` | Same dir | ~1260 lines. Auto-generated runtime extern declarations. |

#### Shell integration

`Shell.lean` (build tree) already has:
- `import Lean.Compiler.LCNF.EmitZig` (:16)
- `emitZig` function (:62-65)
- `zigFileName?` option field (:265)
- `-z` / `--zig=fname` CLI flag (:351-352)
- Zig code generation path (:605-611)

#### Zig runtime

`runtime/zig/` contains 120+ `.zig` files implementing the Lean runtime in pure Zig:

- `build.zig` — Zig build system entry point, accepts leanc flags as options.
- `root.zig` / `root_zigrt.zig` — runtime roots (full and zigrt-only).
- `lean_object.zig` — Lean object ABI.
- `allocator.zig` — pluggable allocator (mimalloc compat, libc-backed).
- `kernel.zig`, `inductive.zig`, `type_checker.zig` — kernel ported to Zig.
- `io_min.zig`, `uv_*.zig` — IO and libuv subsystems.
- `object.zig`, `string.zig`, `array.zig` — Lean data structures.
- `task.zig`, `task_manager.zig` — task scheduling.

`build.zig` already accepts CMake flag options:
```
--leanc-extra-cc-flags, --leanc-internal-flags,
--leanc-static-linker-flags, --leanc-shared-linker-flags,
--leanc-internal-linker-flags, --lean-extra-linker-flags
```

#### Tests

20+ emitzig-zigrt tests exist: `Array`, `Cases`, `Closure`, `Exception`, `Float`,
`FloatArray`, `InlineHelpers`, `JoinPoint`, `List`, `Loop`, `LoopControl`,
`MixedScalar`, `Nat`, `Recursion`, `SetStdout`, `Smoke`, `Stderr`, `String`,
`StringEscapes`, `StringHelpers`.

### 2.2 Design: Merge EmitZig into src/

#### Files to add

```
src/Lean/Compiler/LCNF/EmitZig.lean
src/Lean/Compiler/LCNF/EmitZig/InlineHelpers.lean
src/Lean/Compiler/LCNF/EmitZig/RuntimeExterns.lean
src/runtime/zig/                      (120+ .zig files)
src/runtime/zig/build.zig
```

#### Module wiring

`src/Lean/Compiler/LCNF.lean` needs:
```lean
public import Lean.Compiler.LCNF.EmitZig
public import Lean.Compiler.LCNF.EmitZig.InlineHelpers
public import Lean.Compiler.LCNF.EmitZig.RuntimeExterns
```

`src/Lean/Shell.lean` needs:
```lean
import Lean.Compiler.LCNF.EmitZig

def emitZig (mainModuleName : Name) (env : Environment) : IO String := do
  let data ← EmitZig.emitZig mainModuleName
    |>.toIO' { fileName := "<emitZig>", fileMap := default } { env }
  return data
```

And in the option parsing:
```lean
-- -z, --zig=fname
| 'z' => return {opts with zigFileName? := ← checkOptArg "z" optArg?}
```

And in the main compilation flow:
```lean
if let some z := opts.zigFileName? then
  let .ok out ← IO.FS.Handle.mk z .write |>.toBaseIO
    | IO.eprintln s!"failed to create '{z}'"
      return 1
  profileitIO "Zig code generation" opts.leanOpts do
    let data ← emitZig mainModuleName env
    out.write data.toUTF8
```

### 2.3 Design: Zig compilation pipeline

After `lean -z` emits a `.zig` file, it needs to be compiled. Two approaches:

#### Approach A: zig build-obj / build-exe (simple)

```bash
# Compile .zig to object file
zig build-obj -fno-emit-bin -fPIC -c -o output.o input.zig

# Or directly to executable
zig build-exe -lc -lcpp input.zig -lleanrt_zig -L$LEAN_LIB_DIR
```

This mirrors how `leanc` works for C: emit code, then compile with zig.

#### Approach B: zig build system (structured)

Use `runtime/zig/build.zig` which already defines modules, options, and library
targets. This is the approach used by the emitzig test infrastructure.

For user-facing compilation, Approach A is simpler and more compatible with the
existing `leanc` model. The `build.zig` system is used for building the Zig runtime
itself and for the emitzig test suite.

#### New tool: `leanzigc`

Analogous to `leanc`, a `leanzigc` wrapper that:

1. Takes emitted `.zig` files and compiles them using `zig build-obj` / `zig build-exe`.
2. Passes the correct include dirs and library paths.
3. Links against `libleanrt_zig.a` (the Zig runtime archive).

This could be a Lean binary (like `Leanc.lean`) or a shell script (like
`src/bin/leanc.in`). Given that the logic is simpler (zig is self-contained),
a shell script is sufficient initially.

### 2.4 Design: CMake integration for Zig runtime

```cmake
# src/CMakeLists.txt
option(LEAN_ZIG_RUNTIME "Build the Lean runtime in Zig instead of C++" OFF)

if(LEAN_ZIG_RUNTIME)
  find_program(ZIG_EXE zig REQUIRED)
  set(ZIG_BUILD_DIR "${CMAKE_BINARY_DIR}/zig-runtime")

  # Build the Zig runtime archive
  add_custom_command(
    OUTPUT ${ZIG_BUILD_DIR}/libleanrt_zig.a
    COMMAND ${ZIG_EXE} build
      --prefix ${ZIG_BUILD_DIR}
      -Doptimize=ReleaseFast
      -Dlean-include-dir=${CMAKE_SOURCE_DIR}/include
      -Dleanc-extra-cc-flags=${LEANC_EXTRA_CC_FLAGS}
      -Dleanc-internal-flags=${LEANC_INTERNAL_FLAGS}
      -Dleanc-static-linker-flags=${LEANC_STATIC_LINKER_FLAGS}
      -Dleanc-shared-linker-flags=${LEANC_SHARED_LINKER_FLAGS}
      -Dleanc-internal-linker-flags=${LEANC_INTERNAL_LINKER_FLAGS}
      -Dlean-extra-linker-flags=${LEAN_EXTRA_LINKER_FLAGS}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/src/runtime/zig
    DEPENDS ${CMAKE_SOURCE_DIR}/src/runtime/zig/build.zig
  )

  # Replace C++ runtime targets with Zig archive
  set(LEANRT_LIB ${ZIG_BUILD_DIR}/libleanrt_zig.a)
  set(LEANRT_LIB_ZIGRT ${ZIG_BUILD_DIR}/libleanrt_zig_zigrt.a)
endif()
```

### 2.5 Design: Allocator Backend and Object Adapter

The Zig runtime's `alloc.zig` is the single chokepoint through which every Lean
object allocation flows. It must also differ the most across execution
environments: a native desktop wants mimalloc's size-class pools, an embedded
target wants a fixed pre-allocated arena, and a WASM contract wants a
host-imported allocator.

This subsection defines the two-layer split that lets one runtime source tree
serve all of those environments without `#ifdef` slicing or per-target forks.

The design separates two concerns that the current prototype conflates:

- the **Allocator** — the backend that answers "where does raw memory come
  from?" (mimalloc, libc, a fixed buffer, a WASM host import). This is a thin,
  environment-specific vtable.
- the **Adapter** (also referred to as the *Breaker*) — the Lean-side layer
  that answers "how does a Lean object allocation map onto that backend?". It
  owns the small-object free lists, the `AllocationMeta` tracking header, and
  the page/slot segmentation. Its logic is identical across every backend; only
  the raw-memory call at the bottom differs.

Splitting them is what makes "one source tree, many runtimes" cheap: the Adapter
is written once, and swapping an execution environment only swaps the Allocator
beneath it.

#### What the current prototype conflates

The build-tree `alloc.zig` mixes three raw-memory calls with Lean object logic
in the same file:

```zig
// current alloc.zig — these three are the hardcoded backend points:
fn allocSmallFresh(payload_size, slot_idx) *anyopaque {
    ...
    const words = std.heap.page_allocator.alloc(usize, word_count) ...;  // ← backend
    ...
}
fn allocLarge(sz) *anyopaque {
    ...
    const raw = std.c.malloc(total_size) ...;                              // ← backend
    ...
}
fn allocTrackedPayload(payload_size, kind) *anyopaque {
    ...
    const raw = std.c.malloc(total_size) ...;                              // ← backend
    ...
}
```

Around those calls, `g_small_free_lists`, `AllocationMeta`, the 16-byte
tracking header, and the slot indexing are **Adapter logic** — they do not
change when the backend changes. Today they are intermixed with the three
hardcoded points, so changing the backend means editing the file per target,
which is exactly the `#ifdef` slicing this design removes.

The companion `runtime_options.zig` is only a coexistence gate, not a backend
selector:

```zig
pub const export_allocator_symbols: bool = true;
```

It can choose "Zig owns the heap" versus "delegate to external
`lean_alloc_object`" (the C++ runtime). It cannot choose a third backend.

#### Design: the `Allocator` interface (backend vtable)

```zig
// src/runtime/zig/allocator.zig (design)
// Backend interface: "where does raw memory come from?"
// One resolved value per build, selected at comptime (see selection below).
pub const Allocator = struct {
    ctx: *anyopaque,
    alloc: *const fn (ctx: *anyopaque, size: usize, alignment: usize) ?[*]u8,
    free:  *const fn (ctx: *anyopaque, ptr: [*]u8, size: usize, alignment: usize) void,

    // Backend factories. Each returns a value satisfying the interface.
    pub const mimalloc: Allocator = .{ ... };                 // native default
    pub const libc:     Allocator = .{ ... };                  // minimal / freestanding
    pub fn fixed(buf: []u8) Allocator { ... }                 // embedded: FixedBufferAllocator
    pub fn from(a: std.mem.Allocator) Allocator { ... }       // generic host allocator (WASM)
    pub const external_cpp: Allocator = .{ ... };             // delegate to C++ lean_alloc_object
};
```

This is deliberately a value-type vtable (not a trait/typeclass), resolved at
`comptime` so each build compiles exactly one backend with zero runtime
dispatch overhead. The shape `{ ctx, alloc, free }` mirrors the
`ffi/zig_allocator.{h,zig}` interop used in the zml project, which exposes
`std.mem.Allocator` across the C ABI — confirming the shape ports both ways, so
the same Allocator value can be handed to C++ callers if coexistence needs it.

#### Design: the Object Adapter (Breaker)

```zig
// src/runtime/zig/object_adapter.zig (design)
// Lean-side layer: "how does a Lean object map onto the backend?"
// Written once; identical across all backends. Owns:
//   - the small-object free lists (g_small_free_lists today)
//   - the AllocationMeta tracking header (16 bytes per allocation)
//   - page/slot segmentation and the large-object fallback
// The ONLY backend-aware call is `backend.alloc(...)` at the bottom.
pub const ObjectAdapter = struct {
    backend: Allocator,   // injected, never read directly by Lean code

    pub fn allocSmall(self: *ObjectAdapter, payload_size: usize) *anyopaque {
        // slot index from payload_size, check per-thread free list, ...
        // if a fresh page is needed, the ONLY backend touch:
        const page = self.backend.alloc(self.backend.ctx, page_size, page_alignment)
            orelse @panic("out of memory");
        ...
    }
    pub fn allocLarge(self: *ObjectAdapter, sz: usize) *anyopaque {
        const total = @sizeOf(AllocationMeta) + sz;
        const raw = self.backend.alloc(self.backend.ctx, total, .@"16") ...;
        ...
    }
    pub fn free(self: *ObjectAdapter, ptr: *anyopaque) void { ... }
};
```

The three current hardcoded points become three calls through `self.backend`,
and nothing else in the Adapter changes. The public C ABI
(`lean_alloc_small_object` / `lean_alloc_object` / `lean_free_object`) then
forwards into a single process-wide `ObjectAdapter` rather than into scattered
`malloc` calls, which is also what makes the large-object path, the mpz path,
and the small-object path share one backend instead of each having its own.

#### Backend selection (comptime, via build.zig options)

`build.zig` already threads options into `runtime_options.zig` through
`b.addOptions()` + `addOption(bool, ...)`. The design extends that with one
enum the Adapter reads at `comptime`:

```zig
// build.zig (extended)
const backend = b.option(
    .{ mimalloc = {}, libc = {}, fixed = {}, wasi_arena = {}, external_cpp = {} },
    "allocator-backend",
    "Runtime allocator backend",
) orelse .mimalloc;
opts.addOption(Backend, "allocator_backend", backend);
```

```bash
# the user-facing selection (resolved at build time, no runtime branch):
zig build -Dallocator-backend=mimalloc     # native (default)
zig build -Dallocator-backend=libc          # minimal native / freestanding
zig build -Dallocator-backend=fixed         # embedded: FixedBufferAllocator
zig build -Dallocator-backend=wasi-arena    # WASM: host-imported arena
zig build -Dallocator-backend=external-cpp  # coexist with C++ runtime (see 2.8)
```

`external-cpp` subsumes today's `export_allocator_symbols=false` path: instead
of a boolean "delegate", it is just the `external_cpp` Allocator value wired
into the same Adapter. That lets the C++ and Zig runtimes share the free-list
and tracking logic during incremental migration instead of duplicating them.

Because the backend is chosen at build time, each target compiles a distinct
runtime with no dead branches for backends it did not select. This is the
prerequisite for the constrained-runtime targets in the Future section.

#### Reference skeleton (compiled to the real ABI)

The skeleton below maps onto the existing prototype field-for-field, so it is a
faithful refactor target rather than a greenfield sketch. Constants and the
`AllocationMeta` header are taken verbatim from the current `alloc.zig`.

```zig
// src/runtime/zig/object_adapter.zig (design skeleton)
const std = @import("std");
const lean = @import("lean_object.zig");
const allocator_mod = @import("allocator.zig");

// Verbatim from the current prototype — these are Adapter constants, not backend:
pub const LEAN_PAGE_SIZE: usize = 8192;
pub const LEAN_MAX_SMALL_OBJECT_SIZE: usize = 4096;
pub const LEAN_OBJECT_SIZE_DELTA: usize = 8;
const small_slot_count = LEAN_MAX_SMALL_OBJECT_SIZE / LEAN_OBJECT_SIZE_DELTA;
const allocation_magic: u32 = 0x4C45414E;
const allocation_kind_small: u8 = 1;
const allocation_kind_large: u8 = 2;

const AllocationMeta = extern struct {
    payload_size: usize,
    slot_idx: u16,
    kind: u8,
    reserved: u8,
    magic: u32,
};
comptime { if (@sizeOf(AllocationMeta) != 16) @compileError("AllocationMeta must stay 16 bytes"); }

pub const ObjectAdapter = struct {
    backend: allocator_mod.Allocator,           // the ONLY backend touchpoint
    free_lists: [small_slot_count]?*anyopaque = [_]?*anyopaque{null} ** small_slot_count,
    heartbeat: u64 = 0,

    // ---- small-object path: free-list first, backend only on miss ----
    pub fn allocSmall(self: *ObjectAdapter, payload_size: usize, slot_idx: usize) *anyopaque {
        self.heartbeat += 1;
        const aligned = alignObjectSize(payload_size);
        const index = if (slot_idx == slotIndexForSize(aligned)) slot_idx else
            @panic("small allocator slot mismatch");

        if (self.free_lists[index]) |ptr| {              // reuse — no backend call
            self.free_lists[index] = freeListNext(ptr);
            @memset(payloadBytes(ptr, aligned), 0);
            metaOf(ptr).* = .{ .payload_size = aligned, .slot_idx = @intCast(index),
                               .kind = allocation_kind_small, .reserved = 0, .magic = allocation_magic };
            return ptr;
        }
        return self.allocSmallFresh(aligned, index);    // backend touched here only
    }

    fn allocSmallFresh(self: *ObjectAdapter, payload_size: usize, slot_idx: usize) *anyopaque {
        const total = @sizeOf(AllocationMeta) + payload_size;
        // THE single backend call that replaced std.heap.page_allocator:
        const raw = self.backend.alloc(self.backend.ctx, total, LEAN_OBJECT_SIZE_DELTA)
            orelse @panic("out of memory");
        const meta: *AllocationMeta = @ptrCast(@alignCast(raw));
        meta.* = .{ .payload_size = payload_size, .slot_idx = @intCast(slot_idx),
                    .kind = allocation_kind_small, .reserved = 0, .magic = allocation_magic };
        const payload = @as([*]u8, @ptrCast(meta)) + @sizeOf(AllocationMeta);
        @memset(payload[0..payload_size], 0);
        return @ptrCast(payload);
    }

    // ---- large-object path: straight to backend ----
    pub fn allocLarge(self: *ObjectAdapter, sz: usize) *anyopaque {
        self.heartbeat += 1;
        const total = @sizeOf(AllocationMeta) + sz;
        // THE single backend call that replaced std.c.malloc:
        const raw = self.backend.alloc(self.backend.ctx, total, 16)
            orelse @panic("out of memory");
        const meta: *AllocationMeta = @ptrCast(@alignCast(raw));
        meta.* = .{ .payload_size = sz, .slot_idx = 0,
                    .kind = allocation_kind_large, .reserved = 0, .magic = allocation_magic };
        return @ptrCast(@as([*]u8, @ptrCast(meta)) + @sizeOf(AllocationMeta));
    }

    // ---- free: small returns to free-list, large returns to backend ----
    pub fn free(self: *ObjectAdapter, ptr: *anyopaque) void {
        const meta = metaFromPayload(ptr);
        if (meta.magic != allocation_magic) @panic("missing allocation record");
        switch (meta.kind) {
            allocation_kind_small => {
                const idx = meta.slot_idx;
                setFreeListNext(ptr, self.free_lists[idx]);
                self.free_lists[idx] = ptr;          // no backend call
            },
            allocation_kind_large => self.backend.free(self.backend.ctx,
                @ptrCast(metaFromPayload(ptr)), @sizeOf(AllocationMeta) + meta.payload_size, 16),
            else => @panic("unknown allocation kind"),
        }
    }

    // ---- helpers, unchanged from the current prototype ----
    fn alignObjectSize(sz: usize) usize { /* verbatim */ }
    fn slotIndexForSize(sz: usize) usize { /* verbatim */ }
    fn metaOf(ptr: *anyopaque) *AllocationMeta { /* verbatim */ }
    fn freeListNext(ptr: *anyopaque) ?*anyopaque { /* verbatim */ }
    fn setFreeListNext(ptr: *anyopaque, next: ?*anyopaque) void { /* verbatim */ }
    fn payloadBytes(ptr: *anyopaque, len: usize) []u8 { /* verbatim */ }
    fn metaFromPayload(ptr: *anyopaque) *AllocationMeta { /* verbatim */ }
};
```

The migration from the current file is mechanical: the three hardcoded calls
(`std.heap.page_allocator.alloc`, `std.c.malloc` × 2) become the two
`self.backend.alloc` calls shown, and every free-list / `AllocationMeta` /
slot-indexing helper moves into `ObjectAdapter` verbatim. The public C ABI
(`lean_alloc_small` / `lean_alloc_object` / `lean_free_object`) then forwards into
a single process-wide adapter instead of into scattered `malloc` calls.

#### Why this belongs in Phase 2

Without this split, Phase 2 only reproduces the C++ runtime's behavior in Zig —
it does not unlock new execution environments. The Adapter is written once and
is backend-agnostic; the Allocator is the seam at which a constrained runtime
(WASM, embedded, sandbox) plugs in. Defining both as part of the Zig runtime
merge keeps the migration honest about what it buys beyond a language swap: a
single tree that can target a desktop heap, a fixed buffer, or a contract VM
by changing one build option.

### 2.6 Design: Testing for EmitZig

#### In-tree tests

The existing emitzig test suite should be moved to `tests/emitzig/`:

```
tests/emitzig/
  run_test.sh          — test driver
  Array.lean           — test Lean code
  Cases.lean
  Closure.lean
  ...
```

Each test:
1. Runs `lean -z input.zig -c` to emit both C and Zig (or Zig only).
2. Compiles the Zig with `zig build-exe` linking against the Zig runtime.
3. Runs the executable and checks output against expected.

#### CMakeLists.txt integration

```cmake
# tests/CMakeLists.txt
add_test_pile(emitzig emitzig "Lean → Zig codegen tests")
```

### 2.7 Implementation order for Phase 2

1. Copy `EmitZig.lean`, `EmitZig/InlineHelpers.lean`, `EmitZig/RuntimeExterns.lean`
   into `src/Lean/Compiler/LCNF/`.
2. Copy `runtime/zig/` (120+ files) into `src/runtime/zig/`.
3. Add module imports to `src/Lean/Compiler/LCNF.lean`.
4. Add `-z` flag, `zigFileName?`, and `emitZig` to `src/Lean/Shell.lean`.
5. Add `LEAN_ZIG_RUNTIME` CMake option and `add_custom_command` for building the
   Zig runtime.
6. Copy emitzig tests to `tests/emitzig/` and wire into `tests/CMakeLists.txt`.
7. Build with `cmake -DLEAN_ZIG_RUNTIME=ON -DLEAN_USE_ZIG_CC=ON` and run tests.
8. Run `make update-stage0` to snapshot the new source files into `stage0/`.

### 2.8 Design: Incremental Runtime Replacement

The Zig runtime does not need to replace the C++ runtime in one shot. The
`export_allocator_symbols` switch (2.5) is deliberately a coexistence gate, not
just a build option: with it off, the Zig runtime links against the existing
C++ `lean_alloc_object` and only contributes Lean-object logic in Zig; with it
on, the Zig runtime owns the heap. This lets the migration proceed component by
component while the link graph stays valid at every step.

Recommended migration order, each step independently switchable:

1. **mpz wrapper** — small, well-bounded; verifies the C ABI seam end to end.
2. **object / rc** — Lean object layout and reference counting in Zig, allocator
   still delegated to C++ (`export_allocator_symbols=false`).
3. **alloc** — flip the switch: the Zig `AllocatorBackend` (2.5) now owns the
   heap. From this point the C++ allocator is dead code for the Zig-runtime build.
4. **ir_interpreter** — the IR evaluator (`src/library/ir_interpreter.cpp`); the
   most self-contained large C++ unit and the natural execution engine for
   WASM/embedded once it is Zig.

At every step the native test suite must stay green; a step that breaks ABI is
held until the seam is fixed rather than forcing a big-bang replacement.

---

## Combined Build Flow

When both phases are active (`LEAN_USE_ZIG_CC=ON` + `LEAN_ZIG_RUNTIME=ON`):

```
Lean source (.lean)
    │
    ├─ -c flag ──▶ EmitC  ──▶ .c  ──▶ leanc (zig cc) ──▶ .o ──┐
    │                                                         ├──▶ executable
    └─ -z flag ──▶ EmitZig ──▶ .zig ──▶ zig build-exe ──▶ .o ─┘
                                    + libleanrt_zig.a
```

The C and Zig backends can coexist. Users choose via `-c` or `-z`. The runtime
library is either the C++ `libleanrt.a` or the Zig `libleanrt_zig.a`, selected
at CMake configure time.

---

## Risk Assessment

| Risk | Impact | Mitigation |
|------|--------|------------|
| `zig cc`/`zig c++` flag incompatibility | Build failure | Flag compatibility tables above; all critical flags verified |
| `IO.Process.spawn` multi-word cmd | leanc crashes | `splitCcCommand` helper handles this |
| CMake cannot use `zig` directly | CMake configure fails | Wrapper scripts (`zig-cc`, `zig-cxx`) — verified working |
| Zig runtime ABI mismatch | Link failures | Runtime externs auto-generated from C++ headers |
| Bootstrap breakage | Cannot build Lean | Zig features gated behind `LEAN_USE_ZIG_CC`/`LEAN_ZIG_RUNTIME` options; default OFF |
| stage0 incompatibility | Bootstrap fails | stage0 remains C-only; Zig features only in stage1+ |
| ccache incompatibility | Slower rebuilds | `zig cc` works with ccache via `CCACHE_COMPILER` or wrapper |
| C++ stdlib mismatch | Link failures | `LEAN_CXX_STDLIB=""` when zig; zig bundles libc++ |

## Decisions

| Decision | Choice | Rationale |
|----------|--------|-----------|
| zig cc/c++ integration approach | Wrapper scripts + CMake option | CMake cannot call `zig` directly; wrappers make it appear as Clang |
| Wrapper script location | `${CMAKE_BINARY_DIR}/` | Auto-generated; no repo pollution |
| Multi-word command handling (leanc) | `splitCcCommand` helper | Minimal change; backward compatible |
| EmitZig merge strategy | Copy into `src/`, gate behind CMake option | Keeps master clean; opt-in |
| Zig runtime build | `zig build` via `add_custom_command` | Uses existing `build.zig`; no custom CMake for Zig |
| Default state | Both features OFF | No impact on existing builds until explicitly enabled |

---

## Future: Constrained Runtimes & Target Expansion (Design)

The phases above are deliberately **native-host-first**. This section documents
the design direction for execution environments that the native-host rollout does
not cover — primarily WASM (smart-contract VMs) and embedded/freestanding targets.
Nothing here is implemented or scheduled; it is recorded so that later target
work has concrete seams to aim at instead of restarting the design from scratch.

It depends on the Phase 2 `AllocatorBackend` interface (2.5): constrained
runtimes are exactly the backends that interface exists to serve.

### F.1 Why target expansion is gated on dependency availability

Phase 1 deferred cross-compilation not because `zig cc` cannot emit foreign
objects — it can — but because a foreign Lean artifact must still link against
runtime dependencies that are only available for the host today:

| Dependency | Role | Host status | Foreign-target blocker |
|---|---|---|---|
| **GMP** | arbitrary-precision integers (`mpz`) | system package | Hand-written asm; near-impossible to cross-compile to `wasm32` |
| **libuv** | async IO / event loop | system package | Not part of any WASM/embedded libc |
| **OpenSSL** | crypto / TLS | system package | Excluded entirely on the existing Emscripten path |

**GMP is the hardest blocker for WASM.** `src/runtime/mpz.cpp` is a thin wrapper
over GMP, and GMP relies on architecture-specific inline assembly that does not
survive a `wasm32-wasi` build (volume, calling-convention, asm constraints).
Practical WASM support therefore waits on a Zig `mpz` implementation (or a move
to `std.math.big.int`), not on better cross-compilation plumbing. This is the
real reason WASM is a separate track, not merely "platform specialness".

For native cross-target (e.g. `x86_64-linux` built from `aarch64-macos`), GMP /
libuv / OpenSSL can instead be cross-compiled from source via `zig cc`, which is
the cheaper path and the natural follow-on once the native matrix is stable.

### F.2 WASM runtime profile

A WASM target is not "one more native host". It removes or replaces several
runtime assumptions the native code depends on. A WASM runtime profile must
define contracts for three constraints. (These mirror lessons from shipping a
Zig contract SDK on a MVP-only WASM VM, where `@memcpy`/`@memset` generated
illegal `bulk_memory` instructions.)

#### 1. Host imports and the `wasi-arena` Allocator backend

There is no libuv or OpenSSL inside a contract VM, and there is no libc heap
either in the `wasm32-freestanding` case. So a WASM runtime cannot reach `malloc`;
raw memory comes from the host. Concretely this is the `wasi-arena` value of the
`Allocator` interface (2.5): it is one more backend, selected at build time, that
answers "where does raw memory come from?" with "from a host import".

The minimal import surface a WASM host must provide is two functions — a bump
region and its grow — mirroring what a contract SDK binds as `near-sys` host
functions:

```zig
// src/runtime/zig/wasi_host.zig (design)
// Host import surface. Declared here, satisfied by the WASM host at link time.
extern fn lean_wasm_alloc(size: usize, alignment: usize) callconv(.c) ?[*]u8;
extern fn lean_wasm_free(ptr: ?[*]u8, size: usize, alignment: usize) callconv(.c) void;
// (optional, if the host supports reclaim; otherwise free is a no-op and
// the runtime relies on deterministic end-of-call reclamation, as contract
// VMs typically do.)

// wired into the same Allocator vtable as every other backend:
pub const wasi_arena: Allocator = .{
    .ctx = undefined,
    .alloc = &wasiAlloc,
    .free  = &wasiFree,
};
fn wasiAlloc(_: *anyopaque, size: usize, alignment: usize) callconv(.c) ?[*]u8 {
    return lean_wasm_alloc(size, alignment);
}
fn wasiFree(_: *anyopaque, ptr: ?[*]u8, size: usize, alignment: usize) callconv(.c) void {
    lean_wasm_free(ptr, size, alignment);
}
```

Because `wasi_arena` implements the same `Allocator` interface as `mimalloc` /
`libc` / `fixed`, the `ObjectAdapter` from 2.5 runs **unchanged**: its free lists
and `AllocationMeta` tracking sit on top of the host-imported memory exactly as
they sit on top of a native heap. Nothing in `object_adapter.zig` knows it is
talking to a contract VM. That is the payoff of the two-layer split — WASM is
just another backend value, not a fork of the runtime.

The non-allocator host surface (IO, storage, crypto, hashing) is a separate
`host_imports` interface, out of scope for this phase but shaped the same way: a
vtable the host fills, which the runtime's IO/storage modules call instead of
libuv/OpenSSL. When libuv/OpenSSL are absent (the existing Emscripten path
already disables OpenSSL), those modules must degrade to host imports or stubs
rather than link-fail.

#### 2. MVP WASM compatibility layer

VMs such as NEAR support only MVP WASM (WebAssembly 1.0) and reject
`bulk_memory`, `sign_ext`, `simd`, `reference_types`, and `multivalue`. Zig's
`@memcpy`, `@memset`, and `std.mem.eql/copy` lower to `bulk_memory` and must be
replaced by software loops for those targets. A `compat` module (the same shape
as a contract SDK's `wasm_compat.zig`) must shadow these primitives so that
EmitZig output and the runtime stay valid on MVP-only hosts.

#### 3. Execution metering (gas)

Lean's existing `lean_inc_heartbeat` counts allocations only — too coarse for
contract gas accounting, which needs near-instruction-level metering. A WASM
profile needs a `meter` hook injected at allocation and loop backedges, with a
configurable cost table, rather than repurposing the heartbeat.

### F.3 `leanzigc` target / profile propagation

The Phase 1 target selection lives in the `zig-cc` / `zig-cxx` wrapper scripts
(used by `leanc` for C). EmitZig output is compiled by `leanzigc`, which calls
`zig build-exe` **directly** and bypasses those wrappers. So target selection
for the Zig backend is a separate seam:

- When a target/profile is active, `leanzigc` must pass `-Dtarget=<triple>` to
  `zig build-exe`, independent of the C-side wrapper.
- It must also select the matching runtime profile
  (`-Dallocator-backend=...`, WASM `compat`, host imports) so the linked runtime
  matches the target — otherwise the produced WASM is missing symbols or
  contains illegal instructions.

This is the join point between Phase 1's C-side target handling and Phase 2's
Zig-side compilation, and it must be designed together with the allocator and
WASM-profile work above rather than bolted on later.

### F.4 Relationship to the native-first decision

This Future section does **not** contradict the native-host boundary in Phase 1.
The boundary exists because dependency packaging, tool discovery, and executable
test coverage all assume a real host. The work described here is what removes
those assumptions for constrained environments — but only after the `AllocatorBackend`
seam, the `mpz` port, and the WASM contracts are in place. Until then, native
rollout (Phase 1 waves 1–5) remains the only supported path.