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

* `LEAN_ZIG_CMAKE_ARGS`\
  Extra arguments to pass through to `cmake --preset ... -B ...`. Use this for
  lower-level options such as `-DCMAKE_C_COMPILER=...`,
  `-DCMAKE_CXX_COMPILER=...`, `-DUSE_LAKE_CACHE=ON`, or release metadata flags.

* `LEAN_ZIG_MAKE_ARGS`\
  Extra arguments forwarded to the underlying `make` invocations. This is the
  equivalent of appending `VERBOSE=1` or similar knobs to the legacy commands.

* `LEAN_ZIG_CTEST_ARGS`\
  Extra arguments forwarded to `ctest` when running `zig build test`, e.g.
  `--rerun-failed` or `-R '<regex>'`.

Lean will automatically use [CCache](https://ccache.dev/) if available to avoid
redundant builds, especially after stage 0 has been updated.

Troubleshooting
---------------

* Use `LEAN_ZIG_MAKE_ARGS=VERBOSE=1 zig build ...` to print the underlying
  `make` commands.
* If you need to bypass the Zig driver entirely, the legacy `cmake --preset ...`
  and `make -C ...` commands are still supported.
