#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 4 ]]; then
  echo "usage: $0 <command> <profile> <binary-dir> <jobs> [args...]" >&2
  exit 1
fi

COMMAND=$1
PROFILE=$2
BINARY_DIR=$3
JOBS=$4
shift 4

REPO_ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"

if [[ "$JOBS" == "0" ]]; then
  JOBS="$(nproc 2>/dev/null || sysctl -n hw.logicalcpu 2>/dev/null || echo 1)"
fi

split_shell_words() {
  local raw="$1"
  local var_name="$2"
  if [[ -n "$raw" ]]; then
    eval "$var_name=($raw)"
  else
    eval "$var_name=()"
  fi
}

cmake_args=()
make_args=()
ctest_args=()
split_shell_words "${LEAN_ZIG_CMAKE_ARGS:-}" cmake_args
split_shell_words "${LEAN_ZIG_MAKE_ARGS:-}" make_args
split_shell_words "${LEAN_ZIG_CTEST_ARGS:-}" ctest_args

write_metadata() {
  local metadata_path="$BINARY_DIR/.zig-driver.json"
  mkdir -p "$BINARY_DIR"
  ZIG_DRIVER_PROFILE="$PROFILE" \
  ZIG_DRIVER_BINARY_DIR="$BINARY_DIR" \
  ZIG_DRIVER_JOBS="$JOBS" \
  ZIG_DRIVER_CMAKE_ARGS="${LEAN_ZIG_CMAKE_ARGS:-}" \
  ZIG_DRIVER_MAKE_ARGS="${LEAN_ZIG_MAKE_ARGS:-}" \
  ZIG_DRIVER_CTEST_ARGS="${LEAN_ZIG_CTEST_ARGS:-}" \
  python3 - "$metadata_path" <<'PY'
import json
import os
import shlex
import subprocess
import sys

out_path = sys.argv[1]

payload = {
    "binary_dir": os.environ["ZIG_DRIVER_BINARY_DIR"],
    "cmake_args": shlex.split(os.environ.get("ZIG_DRIVER_CMAKE_ARGS", "")),
    "ctest_args": shlex.split(os.environ.get("ZIG_DRIVER_CTEST_ARGS", "")),
    "jobs": int(os.environ["ZIG_DRIVER_JOBS"]),
    "make_args": shlex.split(os.environ.get("ZIG_DRIVER_MAKE_ARGS", "")),
    "profile": os.environ["ZIG_DRIVER_PROFILE"],
    "zig_version": subprocess.run(
        ["zig", "version"],
        check=True,
        capture_output=True,
        text=True,
    ).stdout.strip(),
}

with open(out_path, "w", encoding="utf-8") as handle:
    json.dump(payload, handle, indent=2, sort_keys=True)
    handle.write("\n")
PY
}

run_make_root_target() {
  local target="$1"
  local -a args=(make -C "$BINARY_DIR" "-j$JOBS" "$target")
  if [[ ${#make_args[@]} -gt 0 ]]; then
    args+=("${make_args[@]}")
  fi
  "${args[@]}"
}

run_make_stage_target() {
  local stage="$1"
  local target="$2"
  local -a args=(make -C "$BINARY_DIR/$stage" "-j$JOBS" "$target")
  if [[ ${#make_args[@]} -gt 0 ]]; then
    args+=("${make_args[@]}")
  fi
  "${args[@]}"
}

run_ctest_stage() {
  local stage="$1"
  local -a args=(ctest --preset "$PROFILE" --test-dir "$BINARY_DIR/$stage" "-j$JOBS")
  if [[ -n "${LEAN_ZIG_CTEST_JUNIT:-}" ]]; then
    args+=(--output-junit "$LEAN_ZIG_CTEST_JUNIT")
  fi
  if [[ ${#ctest_args[@]} -gt 0 ]]; then
    args+=("${ctest_args[@]}")
  fi
  "${args[@]}"
}

case "$COMMAND" in
  configure)
    mkdir -p "$BINARY_DIR"
    cmake_cmd=(cmake --preset "$PROFILE" -B "$BINARY_DIR")
    if [[ ${#cmake_args[@]} -gt 0 ]]; then
      cmake_cmd+=("${cmake_args[@]}")
    fi
    if [[ " ${LEAN_ZIG_CMAKE_ARGS:-} " != *" -DLEAN_INSTALL_PREFIX="* ]]; then
      cmake_cmd+=("-DLEAN_INSTALL_PREFIX=${LEAN_ZIG_INSTALL_PREFIX:-$REPO_ROOT/zig-out}")
    fi
    "${cmake_cmd[@]}"
    write_metadata
    ;;
  root-target)
    if [[ $# -ne 1 ]]; then
      echo "root-target expects exactly one make target" >&2
      exit 1
    fi
    run_make_root_target "$1"
    ;;
  stage-target)
    if [[ $# -ne 2 ]]; then
      echo "stage-target expects <stage> <target>" >&2
      exit 1
    fi
    run_make_stage_target "$1" "$2"
    ;;
  ctest)
    if [[ $# -ne 1 ]]; then
      echo "ctest expects exactly one stage name" >&2
      exit 1
    fi
    run_ctest_stage "$1"
    ;;
  *)
    echo "unknown command: $COMMAND" >&2
    exit 1
    ;;
esac
