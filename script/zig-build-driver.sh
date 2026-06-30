#!/usr/bin/env bash
set -euo pipefail

if [[ $# -ne 2 ]]; then
  echo "usage: $0 <config-shell> <metadata-json>" >&2
  exit 1
fi

CONFIG_PATH=$1
METADATA_PATH=$2

# shellcheck disable=SC1090
source "$CONFIG_PATH"

REPO_ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"

emit_prepare_llvm_args() {
  [[ -n "$PREPARE_LLVM_SCRIPT" ]] || return 0

  mkdir -p "$BINARY_DIR"
  pushd "$BINARY_DIR" >/dev/null
  local -a prepare_cmd=("$PREPARE_LLVM_SCRIPT")
  if [[ ${#prepare_llvm_args[@]} -gt 0 ]]; then
    prepare_cmd+=("${prepare_llvm_args[@]}")
  fi
  prepare_cmd+=(--format=lines)
  if [[ -n "$PLATFORM_TARGET" ]]; then
    EXTRA_FLAGS="--target=$PLATFORM_TARGET" "${prepare_cmd[@]}"
  else
    "${prepare_cmd[@]}"
  fi
  popd >/dev/null
}

run_build_root_target() {
  local -a args=(cmake --build "$BINARY_DIR" --parallel "$JOBS" --target "$TARGET")
  if [[ ${#build_args[@]} -gt 0 ]]; then
    args+=(-- "${build_args[@]}")
  fi
  "${args[@]}"
}

run_build_stage_target() {
  local -a args=(cmake --build "$BINARY_DIR/$STAGE" --parallel "$JOBS" --target "$STAGE_TARGET")
  if [[ ${#build_args[@]} -gt 0 ]]; then
    args+=(-- "${build_args[@]}")
  fi
  "${args[@]}"
}

run_install_stage() {
  local -a args=(cmake --install "$BINARY_DIR/$STAGE")
  "${args[@]}"
}

run_ctest_stage() {
  local -a args=(ctest --preset "$PROFILE" --test-dir "$BINARY_DIR/$STAGE" "-j$JOBS")
  if [[ -n "$CTEST_JUNIT" ]]; then
    args+=(--output-junit "$CTEST_JUNIT")
  fi
  if [[ ${#ctest_args[@]} -gt 0 ]]; then
    args+=("${ctest_args[@]}")
  fi
  "${args[@]}"
}

run_prepare_bench_stages() {
  local source_dir="$BINARY_DIR/$STAGE"
  rm -rf "$BINARY_DIR/stage2"
  cp -r "$source_dir" "$BINARY_DIR/stage2"
  rm -rf "$BINARY_DIR/stage3"
  cp -r "$source_dir" "$BINARY_DIR/stage3"
}

run_check_rebootstrap() {
  run_build_stage_target
  git commit --allow-empty -m "$GIT_COMMIT_MESSAGE"
  run_build_root_target
  run_ctest_stage
}

case "$COMMAND" in
  configure)
    mkdir -p "$BINARY_DIR"
    cmake_cmd=(cmake --preset "$PROFILE" -B "$BINARY_DIR")
    if [[ -n "$PREPARE_LLVM_SCRIPT" ]]; then
      while IFS= read -r arg; do
        cmake_cmd+=("$arg")
      done < <(emit_prepare_llvm_args)
    fi
    if [[ ${#cmake_args[@]} -gt 0 ]]; then
      cmake_cmd+=("${cmake_args[@]}")
    fi
    "${cmake_cmd[@]}"
    cp "$METADATA_PATH" "$BINARY_DIR/.zig-driver.json"
    ;;
  root-target)
    run_build_root_target
    ;;
  stage-target)
    run_build_stage_target
    ;;
  install)
    run_install_stage
    ;;
  ctest)
    run_ctest_stage
    ;;
  prepare-bench-stages)
    run_prepare_bench_stages
    ;;
  check-rebootstrap)
    run_check_rebootstrap
    ;;
  *)
    echo "unknown command: $COMMAND" >&2
    exit 1
    ;;
esac
