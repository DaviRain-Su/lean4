#!/usr/bin/env nix
#! nix develop ..#oldGlibc --command /usr/bin/env bash

# This script must be called from the repo root.
# The radar environment variables must be provided.
# See also the https://github.com/leanprover/radar readme.

LLVM_RELEASE=22.1.4
LLVM_TARBALL="$RADAR_CACHE/llvm/$LLVM_RELEASE.tar.zst"

if [ ! -f "$LLVM_TARBALL" ]; then
    mkdir -p "$RADAR_CACHE/llvm"
    curl --location -o "$LLVM_TARBALL" "https://github.com/leanprover/lean-llvm/releases/download/$LLVM_RELEASE/lean-llvm-x86_64-linux-gnu.tar.zst"
fi

export LEAN_ZIG_CMAKE_ARGS
LEAN_ZIG_CMAKE_ARGS="$(./script/prepare-llvm-linux.sh "$LLVM_TARBALL") -DWFAIL=OFF"

zig build configure -Dprofile=release -Dbinary-dir=build/release -Djobs="$(nproc)"
rm -rf build/release/stage2
cp -r build/release/stage1 build/release/stage2
rm -rf build/release/stage3
cp -r build/release/stage1 build/release/stage3
zig build bench-part2 -Dprofile=release -Dbinary-dir=build/release -Djobs="$(nproc)"
mv tests/part2.measurements.jsonl "$RADAR_OUT"
