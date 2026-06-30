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

host_executable_suffix() {
  case "$(uname -s)" in
    CYGWIN*|MINGW*|MSYS*|Windows_NT) printf '.exe' ;;
    *) printf '' ;;
  esac
}

copy_program_if_needed() {
  local source=${1:?missing source program}
  local destination=${2:?missing destination program}
  mkdir -p "$(dirname "$destination")"
  cmake -E copy_if_different "$source" "$destination"
  chmod +x "$destination" || true
}

run_configure_dir() {
  local build_dir=${1:?missing configure build directory}
  local source_dir=${2:?missing configure source directory}
  mkdir -p "$build_dir"
  rm -rf \
    "$build_dir/CMakeCache.txt" \
    "$build_dir/CMakeFiles" \
    "$build_dir/Makefile" \
    "$build_dir/cmake_install.cmake"
  local -a cmake_cmd=(cmake "-GUnix Makefiles" -S "$source_dir" -B "$build_dir")
  if [[ ${#cmake_args[@]} -gt 0 ]]; then
    cmake_cmd+=("${cmake_args[@]}")
  fi
  "${cmake_cmd[@]}"
}

prepare_leantar() {
  local version=v0.1.19
  local executable_suffix
  executable_suffix=$(host_executable_suffix)

  local target archive_suffix
  case "$(uname -s)" in
    CYGWIN*|MINGW*|MSYS*|Windows_NT)
      target=x86_64-pc-windows-msvc
      archive_suffix=.zip
      ;;
    Darwin)
      archive_suffix=.tar.gz
      case "$(uname -m)" in
        arm64|aarch64) target=aarch64-apple-darwin ;;
        *) target=x86_64-apple-darwin ;;
      esac
      ;;
    *)
      archive_suffix=.tar.gz
      case "$(uname -m)" in
        arm64|aarch64) target=aarch64-unknown-linux-musl ;;
        *) target=x86_64-unknown-linux-musl ;;
      esac
      ;;
  esac

  local target_dir="$BINARY_DIR/leantar/leantar-$version-$target"
  local leantar_bin="$target_dir/leantar$executable_suffix"
  [[ -x "$leantar_bin" ]] && return 0

  if command -v leantar >/dev/null 2>&1; then
    copy_program_if_needed "$(command -v leantar)" "$leantar_bin"
    return 0
  fi

  local archive="$BINARY_DIR/leantar$archive_suffix"
  mkdir -p "$BINARY_DIR/leantar"
  curl --fail --location --output "$archive" \
    "https://github.com/digama0/leangz/releases/download/$version/leantar-$version-$target$archive_suffix"

  if [[ "$archive_suffix" == ".zip" ]]; then
    python3 - "$archive" "$BINARY_DIR/leantar" <<'PY'
import pathlib
import sys
import zipfile

archive = pathlib.Path(sys.argv[1])
destination = pathlib.Path(sys.argv[2])
destination.mkdir(parents=True, exist_ok=True)
with zipfile.ZipFile(archive) as zf:
    zf.extractall(destination)
PY
  else
    tar -xzf "$archive" -C "$BINARY_DIR/leantar"
  fi

  [[ -x "$leantar_bin" ]] || {
    echo "failed to prepare leantar at $leantar_bin" >&2
    exit 1
  }
}

prepare_cadical() {
  local executable_suffix
  executable_suffix=$(host_executable_suffix)
  local cadical_bin="$BINARY_DIR/cadical/cadical$executable_suffix"
  [[ -x "$cadical_bin" ]] && return 0

  if command -v cadical >/dev/null 2>&1; then
    copy_program_if_needed "$(command -v cadical)" "$cadical_bin"
    return 0
  fi

  local source_dir="$BINARY_DIR/cadical/src/cadical"
  if [[ ! -d "$source_dir/.git" ]]; then
    rm -rf "$source_dir"
    mkdir -p "$(dirname "$source_dir")"
    git clone --depth 1 --branch rel-2.1.2 https://github.com/arminbiere/cadical "$source_dir"
  fi

  local cadical_cxx=c++
  if command -v ccache >/dev/null 2>&1; then
    cadical_cxx="ccache $cadical_cxx"
  fi

  (
    cd "$source_dir"
    make -f "$REPO_ROOT/src/cadical.mk" "CMAKE_EXECUTABLE_SUFFIX=$executable_suffix" "CXX=$cadical_cxx"
  )

  [[ -x "$cadical_bin" ]] || {
    echo "failed to prepare cadical at $cadical_bin" >&2
    exit 1
  }
}

run_prepare_host_tools() {
  prepare_leantar
  prepare_cadical
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

run_build_stage() {
  local stage=${1:?missing build stage}
  local -a args=(cmake --build "$BINARY_DIR/$stage" --parallel "$JOBS")
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
  run_build_stage "$ACTION_REBUILD_STAGE"
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
  prepare-host-tools)
    run_prepare_host_tools
    ;;
  configure-stage0)
    run_configure_dir "$BINARY_DIR/stage0" "$REPO_ROOT/stage0/src"
    ;;
  configure-stage)
    run_configure_dir "$BINARY_DIR/$ACTION_STAGE" "$REPO_ROOT/src"
    ;;
  build-stage0)
    run_build_stage stage0
    ;;
  build-target)
    run_build_target "$ACTION_STAGE" "$ACTION_TARGET"
    ;;
  build-stage)
    run_build_stage "$ACTION_STAGE"
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
