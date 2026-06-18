#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${BUILD_DIR:-$ROOT/build/release/stage1}"
LEAN="${LEAN:-$BUILD_DIR/bin/lean}"
ZIGRT_LIB="${ZIGRT_LIB:-$BUILD_DIR/runtime/zig/zig-out/lib/libleanrt_zig.a}"

if [[ ! -f "$ZIGRT_LIB" ]]; then
  echo "check-zig-symbols: Zig runtime library not found at $ZIGRT_LIB"
  echo "check-zig-symbols: run 'make -C \"$BUILD_DIR\" leanrt_zig' first"
  exit 1
fi

TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

if [[ "$#" -gt 0 ]]; then
  TESTS=("$@")
else
  TESTS=()
  for TEST_PATH in "$ROOT"/tests/emitzig/*.lean; do
    TESTS+=("$(basename "$TEST_PATH")")
  done
fi

: > "$TMP_DIR/needed.unsorted.txt"
: > "$TMP_DIR/inline.unsorted.txt"

# Emit Zig for the full emitzig corpus. The test pile already requires all of
# these files to be valid EmitZig inputs; scanning the same set keeps the symbol
# gate aligned as new stdlib-linked runtime tests are added.
for TEST in "${TESTS[@]}"; do
  if [[ "$TEST" == /* ]]; then
    TEST_PATH="$TEST"
  else
    TEST_PATH="$ROOT/tests/emitzig/$TEST"
  fi
  OUT="$TMP_DIR/$(basename "$TEST_PATH" .lean).zig"
  "$LEAN" -Dbackward.do.legacy=false "$TEST_PATH" -z "$OUT"

  # Extract runtime symbols actually invoked by emitted Zig. Do not count
  # declarations or local definitions such as `_lean_main__def`.
  python3 - "$OUT" >> "$TMP_DIR/needed.unsorted.txt" <<'PY'
import re, sys
text = open(sys.argv[1]).read().splitlines()
syms = set()
for line in text:
    if re.match(r"\s*(extern fn|inline fn)", line):
        continue
    for m in re.finditer(r"(?<![A-Za-z0-9_])lean_[A-Za-z0-9_]+\(", line):
        syms.add(m.group(0)[:-1])
for sym in sorted(syms):
    print(sym)
PY

  # Inline helpers emitted into generated Zig are satisfied at compile time.
  command grep -oE 'inline fn lean_[A-Za-z0-9_]+' "$OUT" | sed 's/inline fn //' >> "$TMP_DIR/inline.unsorted.txt" || true
done

sort -u "$TMP_DIR/needed.unsorted.txt" > "$TMP_DIR/needed.txt"

# Defined symbols exported by the actual Zig runtime archive. This intentionally
# avoids source grep so plain `pub fn` declarations do not mask missing exports.
nm -g "$ZIGRT_LIB" | awk 'NF >= 2 && ($(NF - 1) == "T" || $(NF - 1) == "t") {print $NF}' | sed 's/^_//' | sort -u > "$TMP_DIR/zig_defined.txt"

# Shared EmitZig inline helpers are defined in lean_rt.zig and are satisfied at
# compile time rather than by archive symbols.
grep -hoE 'pub inline fn lean_[A-Za-z0-9_]+' "$ROOT/src/runtime/zig/lean_rt.zig" | sed 's/.* fn //' | sort -u > "$TMP_DIR/lean_rt_inline_provided.txt" || true

sort -u "$TMP_DIR/inline.unsorted.txt" > "$TMP_DIR/inline_provided.txt"

# Combine Zig runtime archive symbols and inline helper coverage.
sort -u "$TMP_DIR/zig_defined.txt" "$TMP_DIR/lean_rt_inline_provided.txt" "$TMP_DIR/inline_provided.txt" > "$TMP_DIR/available.txt"

# Symbols referenced but not covered by either runtime.
comm -23 "$TMP_DIR/needed.txt" "$TMP_DIR/available.txt" > "$TMP_DIR/missing.txt"


COUNT="$(grep -c '^lean_' "$TMP_DIR/missing.txt" || true)"

echo "Checked tests: ${#TESTS[@]}"
if [[ "$COUNT" -eq 0 ]]; then
  echo "Missing symbols: 0"
  exit 0
else
  echo "Missing symbols: $COUNT"
  cat "$TMP_DIR/missing.txt"
  exit 1
fi
