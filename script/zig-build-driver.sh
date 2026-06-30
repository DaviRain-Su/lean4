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

run_build_target() {
  local stage=${1-}
  local target=${2:?missing build target}
  local build_dir="$BINARY_DIR"
  if [[ -n "$stage" ]]; then
    build_dir+="/$stage"
  fi
  local -a args=(cmake --build "$build_dir" --parallel "$JOBS" --target "$target")
  if [[ ${#build_args[@]} -gt 0 ]]; then
    args+=(-- "${build_args[@]}")
  fi
  "${args[@]}"
}

run_install_stage() {
  local stage=${1:?missing install stage}
  local -a args=(cmake --install "$BINARY_DIR/$stage")
  "${args[@]}"
}

run_ctest_stage() {
  local stage=${1:?missing test stage}
  local junit_path=${2-}
  local -a args=(ctest --preset "$PROFILE" --test-dir "$BINARY_DIR/$stage" "-j$JOBS")
  if [[ -n "$junit_path" ]]; then
    args+=(--output-junit "$junit_path")
  fi
  if [[ ${#ctest_args[@]} -gt 0 ]]; then
    args+=("${ctest_args[@]}")
  fi
  "${args[@]}"
}

run_prepare_bench_stages() {
  local source_stage=${1:?missing prepare-bench-stages source stage}
  local source_dir="$BINARY_DIR/$source_stage"
  rm -rf "$BINARY_DIR/stage2"
  cp -r "$source_dir" "$BINARY_DIR/stage2"
  rm -rf "$BINARY_DIR/stage3"
  cp -r "$source_dir" "$BINARY_DIR/stage3"
}

run_check_rebootstrap() {
  run_build_target "$ACTION_UPDATE_STAGE" "$ACTION_UPDATE_TARGET"
  git commit --allow-empty -m "$ACTION_GIT_COMMIT_MESSAGE"
  run_build_target "" "$ACTION_REBUILD_TARGET"
  run_ctest_stage "$ACTION_TEST_STAGE" ""
}

case "$ACTION" in
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
  build-target)
    run_build_target "$ACTION_STAGE" "$ACTION_TARGET"
    ;;
  install)
    run_install_stage "$ACTION_STAGE"
    ;;
  ctest)
    run_ctest_stage "$ACTION_STAGE" "$ACTION_CTEST_JUNIT"
    ;;
  prepare-bench-stages)
    run_prepare_bench_stages "$ACTION_STAGE"
    ;;
  check-rebootstrap)
    run_check_rebootstrap
    ;;
  *)
    echo "unknown action: $ACTION" >&2
    exit 1
    ;;
esac
