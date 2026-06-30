These are instructions to set up a working development environment for those who wish to make changes to Lean itself. It is part of the [Development Guide](../dev/index.md).

We strongly suggest that new users instead follow the [Installation Instructions](https://lean-lang.org/install/) to get started using Lean, since this sets up an environment that can automatically manage multiple Lean toolchain versions, which is necessary when working within the Lean ecosystem.

Requirements
------------

- [Zig](https://ziglang.org/) 0.16.0 or newer
- C++14 compatible compiler
- [CMake](http://www.cmake.org)
- [GMP (GNU multiprecision library)](http://gmplib.org/)
- [LibUV](https://libuv.org/)
- [OpenSSL](https://www.openssl.org/)

Platform-Specific Setup
-----------------------

- [Linux (Ubuntu)](ubuntu.md)
- [Windows (msys2)](msys2.md)
- [Windows (WSL)](wsl.md)
- [macOS (homebrew)](osx-10.9.md)
- Linux/macOS/WSL via [Nix](https://nixos.org/nix/): Call `nix develop` in the project root. That's it.

Generic Build Instructions
--------------------------

The primary developer entrypoint is now `zig build`, which orchestrates the existing
multi-stage CMake/Make bootstrap pipeline. A basic parallelized development build is:

```bash
git clone https://github.com/leanprover/lean4
cd lean4
zig build -Djobs=$(nproc || sysctl -n hw.logicalcpu)
```

This defaults to the `dev-release` profile and reuses the `build/release`
directory. To force a release-profile build instead, run:

```bash
zig build -Dprofile=release -Djobs=$(nproc || sysctl -n hw.logicalcpu)
```

The legacy CMake/Make entrypoints still work and remain useful for low-level
debugging, but the rest of this guide assumes `zig build`.
If you specifically need the top-level preset build directory configured for a
legacy `make -C <binary-dir> ...` flow, use `zig build root-configure`;
`zig build configure` remains as a compatibility alias. Otherwise the
stage-local `zig build` steps are the preferred entrypoints.

You can replace `$(nproc || sysctl -n hw.logicalcpu)` with the desired parallelism amount.

The above commands will compile the Lean library and binaries into the
`stage1` subfolder; see below for details.

You should not usually run `zig build install` after a successful build unless
you are specifically testing the install tree.
See [Dev setup using elan](../dev/index.md#dev-setup-using-elan) on how to properly set up your editor to use the correct stage depending on the source directory.

Useful Build Configuration Settings
-----------------------------------

Pass these along with `zig build`. The driver forwards them into the existing
CMake/Make/CTest layers.

* `-Dprofile=`\
  Select the CMake preset to drive. Valid values are `release`, `dev-release`
  (default), `debug`, `relwithassert`, `sanitize`, and `sandebug`.

* `-Dbinary-dir=`\
  Override the build directory. By default this follows the selected preset,
  e.g. `build/release` for `release` and `dev-release`.

* `-Dcmake-arg=`\
  Extra argv elements passed through to `cmake --preset ... -B ...`. Repeat
  this option once per argument, for example
  `-Dcmake-arg=-DUSE_LAKE_CACHE=ON` or
  `-Dcmake-arg=-DCMAKE_CXX_COMPILER=clang++`.
  For CI- or script-generated argument lists, you can instead pass a JSON array
  via `-Dcmake-args-json='["-DUSE_LAKE_CACHE=ON","-DCMAKE_CXX_COMPILER=clang++"]'`.
  Any successful `zig build` driver step saves the most recent configure-time
  argv in `<binary-dir>/.zig-driver.json`, and later `zig build stage1`,
  `zig build test`, `zig build install`, `zig build prepare-host-tools`, or
  benchmark-helper invocations against that same `-Dbinary-dir` will reuse
  those saved `cmake` arguments unless you override them again on the command
  line. In particular, any saved `CMAKE_CXX_COMPILER` or `CMAKE_CXX_FLAGS`
  settings are also reused when `prepare-host-tools` recompiles `cadical`.
  Stage-local injected flags such as `STAGE`, `PREV_STAGE`, `CADICAL`, and
  `LEANTAR` are regenerated per step and are not persisted in that metadata.
  Passing `-Dcmake-args-json=[]` counts as an explicit override and clears any
  previously saved extra `cmake` arguments for that `-Dbinary-dir`.
  The same metadata also restores the configured profile and parallelism defaults,
  so repeated stage/test/install invocations usually only need `-Dbinary-dir=...`
  plus any step-specific flags.

* `-Dbuild-arg=`\
  Extra argv elements forwarded to the native build tool launched by
  `cmake --build -- ...`. Repeat this option once per argument, for example
  `-Dbuild-arg=VERBOSE=1`.
  CI-style JSON arrays are also accepted via
  `-Dbuild-args-json='["VERBOSE=1"]'`.
  The legacy spellings `-Dmake-arg=` and `-Dmake-args-json=` are still accepted
  as compatibility aliases.

* `-Dctest-arg=`\
  Extra argv elements forwarded to `ctest` when running `zig build test`.
  The Zig driver runs `ctest` directly inside the selected stage build
  directory and enables `--output-on-failure --progress` by default.
  Repeat this option once per argument, for example
  `-Dctest-arg=--rerun-failed` or
  `-Dctest-arg=-R "-Dctest-arg=<regex>"`.
  CI-style JSON arrays are also accepted via
  `-Dctest-args-json='["-R","<regex>"]'`.

* `-Dctest-junit=`\
  Path forwarded to `ctest --output-junit` when running `zig build test`.

* `-Dprepare-llvm-arg=`\
  Extra positional argv passed to the `prepare-llvm` helper. Repeat this once
  per argument, or pass a JSON array via
  `-Dprepare-llvm-args-json='["lean-llvm*"]'`.
  The helper's emitted CMake arguments are reused both by `zig build
  root-configure` and by the stage-local `zig build stage0-configure` /
  `stage1-configure` / `stage2-configure` / `stage3-configure` steps.
  Passing `-Dprepare-llvm-args-json=[]` explicitly clears any saved helper argv
  for that `-Dbinary-dir`.

* `-Dplatform-target=`\
  Target triple forwarded both to CMake as `-DLEAN_PLATFORM_TARGET=...` and to
  `prepare-llvm` helpers via `EXTRA_FLAGS=--target=...`. This is the preferred
  Zig-driver entrypoint for cross-target configure flows.

Lean will automatically use [CCache](https://ccache.dev/) if available to avoid
redundant builds, especially after stage 0 has been updated.

Composite Helper Steps
----------------------

Some higher-level workflows are now exposed directly through `zig build` as
well:

* `zig build prepare-bench-stages`\
  Build `stage1` if needed, then copy it into `stage2` and `stage3` build
  directories. This is the benchmark-oriented staging flow used by CI and the
  radar helper scripts. Like other successful driver steps, it also refreshes
  `<binary-dir>/.zig-driver.json` for follow-up benchmark invocations.

* `zig build bench-stage2`\
  Run the benchmark-oriented `stage1 -> copied stage2/stage3 -> build stage2`
  preparation as one step. This is the CI helper used before the benchmark suite.

* `zig build check-rebootstrap`\
  Mirror the CI rebootstrap check locally: refresh `stage0` from `stage1`,
  create the `chore: update-stage0` checkpoint commit, rebuild `stage1`, and
  rerun `stage1` tests. Because this command creates a commit, use it only when
  you are ready for that mutation.

* `zig build test-junit -Dstage=stage2`\
  Run `ctest` like `zig build test`, but write JUnit XML to the standard
  `<binary-dir>/<stage>/test-results.xml` path expected by CI.

Troubleshooting
---------------

* Use `zig build -Dbuild-arg=VERBOSE=1 ...` to print verbose native build-tool
  commands when the selected generator supports it (for example Unix
  Makefiles).
* If you need to bypass the Zig driver entirely, the legacy `cmake --preset ...`
  and `make -C ...` commands are still supported.
