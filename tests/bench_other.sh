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

zig_args=(
    -Dprofile=release
    -Dbinary-dir=build/release
    "-Djobs=$(nproc)"
    -Dprepare-llvm-script=./script/prepare-llvm-linux.sh
    "-Dprepare-llvm-arg=$LLVM_TARBALL"
    -Dcmake-arg=-DWFAIL=OFF
)

zig build configure "${zig_args[@]}"
zig build prepare-bench-stages -Dbinary-dir=build/release
zig build bench-part2 -Dbinary-dir=build/release
mv tests/part2.measurements.jsonl "$RADAR_OUT"
