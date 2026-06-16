#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BUILD_DIR="${BUILD_DIR:-$ROOT/build/release/stage1}"
LEAN="${LEAN:-$BUILD_DIR/bin/lean}"

# Locate the Lean runtime shared library.
if [[ "$OSTYPE" == "darwin"* ]]; then
  LIB="$BUILD_DIR/lib/lean/libleanshared.dylib"
else
  LIB="$BUILD_DIR/lib/lean/libleanshared.so"
fi

if [[ ! -f "$LIB" ]]; then
  echo "check-zig-symbols: runtime library not found at $LIB"
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

# Defined symbols exported from the C runtime shared library.
nm -D "$LIB" 2> /dev/null | awk '$2 == "T" || $2 == "t" {print $3}' | sed 's/^_//' | sort -u > "$TMP_DIR/defined.txt" || \
nm "$LIB" | awk '$2 == "T" || $2 == "t" {print $3}' | sed 's/^_//' | sort -u > "$TMP_DIR/defined.txt"

# Symbols provided by the in-tree Zig runtime source files.
grep -rhoE '(export|pub) fn lean_[A-Za-z0-9_]+' "$ROOT/src/runtime/zig" | sed 's/.* fn //' | sort -u > "$TMP_DIR/zig_provided.txt"

sort -u "$TMP_DIR/inline.unsorted.txt" > "$TMP_DIR/inline_provided.txt"

# Combine C runtime, Zig runtime, and emitted inline helper coverage.
sort -u "$TMP_DIR/defined.txt" "$TMP_DIR/zig_provided.txt" "$TMP_DIR/inline_provided.txt" > "$TMP_DIR/available.txt"

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
