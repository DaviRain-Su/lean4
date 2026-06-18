#!/usr/bin/env bash
set -euo pipefail

LEAN="${LEAN:-lean}"
LEAN_BIN="$LEAN"
if [[ "$LEAN_BIN" != /* ]]; then
  LEAN_BIN="$(command -v "$LEAN_BIN")"
fi
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
BUILD_DIR="${BUILD_DIR:-$ROOT/build/release/stage1}"
OUT_DIR="${LEAN_ZIG_OUT_DIR:-$BUILD_DIR/tests/emitzig}"
TEST="$1"
TEST="$(cd "$(dirname "$TEST")" && pwd)/$(basename "$TEST")"
TEST_DIR="$(dirname "$TEST")"
BASENAME="$(basename "$TEST" .lean)"
mkdir -p "$OUT_DIR"
OUT="$OUT_DIR/$BASENAME.zig"
# Emit Zig code for the module.
"$LEAN_BIN" -Dbackward.do.legacy=false "$TEST" -z "$OUT"

# Basic sanity: the file must be non-empty and mention the module.
[[ -s "$OUT" ]] || { echo "Zig output is empty"; exit 1; }
grep -q "module: .*${BASENAME}" "$OUT" || { echo "Missing module marker"; exit 1; }

# Unsupported EmitZig paths must fail the test at generation time, not hide
# behind a generated Zig runtime panic that may only be reached by a later
# execution path.
python3 - "$OUT" <<'PY'
import re
import sys

text = open(sys.argv[1], encoding="utf-8").read()
match = re.search(r'@panic\("[^"\n]*EmitZig[^"\n]*"\)|EmitZig [^"\n]*not implemented[^"\n]*', text)
if match:
    print(f"Unsupported EmitZig placeholder in generated Zig: {match.group(0)}", file=sys.stderr)
    sys.exit(1)
PY


# Syntactic sanity via zig fmt.
if command -v zig &> /dev/null; then
  zig fmt "$OUT"
  zig ast-check "$OUT"
fi

# End-to-end executable smoke test.
if [[ "${LEAN_ZIG_EXE:-0}" == "1" ]] && command -v zig &>/dev/null; then
  LEANC="${LEANC:-$BUILD_DIR/bin/leanc}"
  if [[ -x "$LEANC" ]]; then
    EXE="$OUT_DIR/$BASENAME"
    if [[ "${LEAN_ZIG_STDLIB:-0}" == "1" ]]; then
      STDLIB_ARGS=()
      if [[ -n "${LEAN_ZIG_STDLIB_CACHE_DIR:-}" ]]; then
        STDLIB_ARGS+=(--cache-dir "$LEAN_ZIG_STDLIB_CACHE_DIR")
      fi
      if [[ -n "${LEAN_ZIG_STDLIB_MODULES:-}" ]]; then
        IFS=',' read -ra MODULES <<< "$LEAN_ZIG_STDLIB_MODULES"
        for MODULE in "${MODULES[@]}"; do
          [[ -n "$MODULE" ]] && STDLIB_ARGS+=(--module "$MODULE")
        done
      fi
      if [[ -n "${LEAN_ZIG_STDLIB_JOBS:-}" ]]; then
        STDLIB_ARGS+=(--jobs "$LEAN_ZIG_STDLIB_JOBS")
      fi
      if [[ ${#STDLIB_ARGS[@]} -gt 0 ]]; then
        BUILD_DIR="$BUILD_DIR" "$ROOT/tools/zigc-stdlib" "$TEST" "$EXE" --lean "$LEAN_BIN" --build-dir "$BUILD_DIR" "${STDLIB_ARGS[@]}"
      else
        BUILD_DIR="$BUILD_DIR" "$ROOT/tools/zigc-stdlib" "$TEST" "$EXE" --lean "$LEAN_BIN" --build-dir "$BUILD_DIR"
      fi
    elif [[ "${LEAN_ZIG_ZIGRT:-0}" == "1" ]]; then
      BUILD_DIR="$BUILD_DIR" "$ROOT/tools/zigc-zigrt" "$OUT" "$EXE"
    else
      "$ROOT/tools/zigc" "$OUT" "$EXE"
    fi
    EXPECTED="$TEST_DIR/$BASENAME.expected"
    if [[ -f "$EXPECTED" ]]; then
      ACTUAL="$OUT_DIR/$BASENAME.out.actual"
      "$EXE" > "$ACTUAL"
      diff -u "$EXPECTED" "$ACTUAL"
    else
      "$EXE"
    fi
  fi
fi

echo "ok"
