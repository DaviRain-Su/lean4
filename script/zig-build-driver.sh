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

zig_driver_state_dir() {
  printf '%s\n' "$BINARY_DIR/.zig-driver"
}

zig_driver_stamp_dir() {
  printf '%s/stamps\n' "$(zig_driver_state_dir)"
}

ensure_zig_driver_stamp_dir() {
  mkdir -p "$(zig_driver_stamp_dir)"
}

sha256_of_file() {
  local path=${1:?missing path to hash}
  if command -v sha256sum >/dev/null 2>&1; then
    sha256sum "$path" | awk '{print $1}'
  elif command -v shasum >/dev/null 2>&1; then
    shasum -a 256 "$path" | awk '{print $1}'
  else
    python3 - "$path" <<'PY'
import hashlib
import pathlib
import sys

path = pathlib.Path(sys.argv[1])
print(hashlib.sha256(path.read_bytes()).hexdigest())
PY
  fi
}

compute_action_fingerprint() {
  local label=${1:?missing fingerprint label}
  shift

  local tmp
  tmp=$(mktemp "${TMPDIR:-/tmp}/zig-driver-fingerprint.XXXXXX")
  {
    printf 'label=%s\n' "$label"
    printf 'action=%s\n' "${ACTION:-}"
    printf 'stage=%s\n' "${ACTION_STAGE:-}"
    printf 'target=%s\n' "${ACTION_TARGET:-}"
    printf 'profile=%s\n' "${PROFILE:-}"
    printf 'binary_dir=%s\n' "${BINARY_DIR:-}"
    printf 'jobs=%s\n' "${JOBS:-}"
    while [[ $# -gt 0 ]]; do
      local item=$1
      shift
      [[ -n "$item" ]] || continue
      if [[ -f "$item" ]]; then
        printf 'file=%s\n' "$item"
        cat "$item"
        printf '\n'
      else
        printf 'text=%s\n' "$item"
      fi
    done
  } >"$tmp"

  sha256_of_file "$tmp"
  rm -f "$tmp"
}

stamp_path_for() {
  local name=${1:?missing stamp name}
  printf '%s/%s.sha256\n' "$(zig_driver_stamp_dir)" "$name"
}

stamp_matches() {
  local stamp_path=${1:?missing stamp path}
  local expected=${2:?missing expected stamp}
  [[ -f "$stamp_path" ]] || return 1
  [[ "$(cat "$stamp_path")" == "$expected" ]]
}

write_stamp() {
  local stamp_path=${1:?missing stamp path}
  local value=${2:?missing stamp value}
  ensure_zig_driver_stamp_dir
  printf '%s\n' "$value" >"$stamp_path"
}

persist_driver_metadata() {
  mkdir -p "$BINARY_DIR"
  cp "$METADATA_PATH" "$BINARY_DIR/.zig-driver.json"
}

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

effective_cmake_args=()

refresh_effective_cmake_args() {
  effective_cmake_args=()

  if [[ -n "$PREPARE_LLVM_SCRIPT" ]]; then
    while IFS= read -r arg; do
      effective_cmake_args+=("$arg")
    done < <(emit_prepare_llvm_args)
  fi
  if [[ ${#cmake_args[@]} -gt 0 ]]; then
    effective_cmake_args+=("${cmake_args[@]}")
  fi
}

cmake_define_value() {
  local name=${1:?missing CMake define name}
  shift

  local prefix="-D${name}="
  local value=
  while [[ $# -gt 0 ]]; do
    local arg=$1
    shift
    if [[ "$arg" == "$prefix"* ]]; then
      value=${arg#"$prefix"}
    fi
  done

  [[ -n "${value:-}" ]] || return 1
  printf '%s\n' "$value"
}

host_executable_suffix() {
  case "$(uname -s)" in
    CYGWIN*|MINGW*|MSYS*|Windows_NT) printf '.exe' ;;
    *) printf '' ;;
  esac
}

compiler_supports_closefrom() {
  local compiler=${1:?missing compiler}
  local compiler_flags=${2-}
  local tmp_dir
  tmp_dir=$(mktemp -d "${TMPDIR:-/tmp}/cadical-closefrom.XXXXXX")
  local source_path="$tmp_dir/closefrom.cpp"
  local output_path="$tmp_dir/closefrom$(host_executable_suffix)"
  local -a compiler_parts=()
  local -a compiler_flag_parts=()

  read -r -a compiler_parts <<<"$compiler"
  if [[ -n "$compiler_flags" ]]; then
    read -r -a compiler_flag_parts <<<"$compiler_flags"
  fi

  cat >"$source_path" <<'EOF'
extern "C" {
#include <unistd.h>
}

int main() {
  closefrom(0);
  return 0;
}
EOF

  if [[ -n "$compiler_flags" ]]; then
    if "${compiler_parts[@]}" -std=c++11 "${compiler_flag_parts[@]}" -o "$output_path" "$source_path" >/dev/null 2>&1; then
      rm -rf "$tmp_dir"
      return 0
    fi
  elif "${compiler_parts[@]}" -std=c++11 -o "$output_path" "$source_path" >/dev/null 2>&1; then
    rm -rf "$tmp_dir"
    return 0
  fi

  rm -rf "$tmp_dir"
  return 1
}

staged_binary_path() {
  local tool=${1:?missing staged tool name}
  local executable_suffix
  executable_suffix=$(host_executable_suffix)
  local stage
  for stage in stage1 stage2 stage3; do
    local path="$BINARY_DIR/$stage/bin/$tool$executable_suffix"
    if [[ -x "$path" ]]; then
      printf '%s\n' "$path"
      return 0
    fi
  done
  return 1
}

copy_program_if_needed() {
  local source=${1:?missing source program}
  local destination=${2:?missing destination program}
  mkdir -p "$(dirname "$destination")"
  cmake -E copy_if_different "$source" "$destination"
  chmod +x "$destination" || true
}

configure_fingerprint() {
  local label=${1:?missing configure fingerprint label}
  local source_dir=${2:?missing configure source directory}
  if [[ -n "$PREPARE_LLVM_SCRIPT" ]]; then
    compute_action_fingerprint "$label" "$CONFIG_PATH" "${BASH_SOURCE[0]}" "$source_dir/CMakeLists.txt" "$PREPARE_LLVM_SCRIPT"
  else
    compute_action_fingerprint "$label" "$CONFIG_PATH" "${BASH_SOURCE[0]}" "$source_dir/CMakeLists.txt"
  fi
}

configure_outputs_ready() {
  local build_dir=${1:?missing configure build directory}
  [[ -f "$build_dir/CMakeCache.txt" && -f "$build_dir/Makefile" ]]
}

run_configure_dir() {
  local build_dir=${1:?missing configure build directory}
  local source_dir=${2:?missing configure source directory}
  local stamp_name=${3:?missing configure stamp name}
  local fingerprint
  fingerprint=$(configure_fingerprint "$stamp_name" "$source_dir")
  local stamp_path
  stamp_path=$(stamp_path_for "$stamp_name")

  if configure_outputs_ready "$build_dir" && stamp_matches "$stamp_path" "$fingerprint"; then
    printf '[zig-build-driver] %s is up-to-date; skipping configure\n' "$stamp_name"
    return 0
  fi

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
  write_stamp "$stamp_path" "$fingerprint"
}

leantar_target_dir() {
  local version=v0.1.19
  local target
  case "$(uname -s)" in
    CYGWIN*|MINGW*|MSYS*|Windows_NT)
      target=x86_64-pc-windows-msvc
      ;;
    Darwin)
      case "$(uname -m)" in
        arm64|aarch64) target=aarch64-apple-darwin ;;
        *) target=x86_64-apple-darwin ;;
      esac
      ;;
    *)
      case "$(uname -m)" in
        arm64|aarch64) target=aarch64-unknown-linux-musl ;;
        *) target=x86_64-unknown-linux-musl ;;
      esac
      ;;
  esac

  printf '%s/leantar/leantar-%s-%s\n' "$BINARY_DIR" "$version" "$target"
}

leantar_binary_path() {
  printf '%s/leantar%s\n' "$(leantar_target_dir)" "$(host_executable_suffix)"
}

cadical_binary_path() {
  printf '%s/cadical/cadical%s\n' "$BINARY_DIR" "$(host_executable_suffix)"
}

resolved_cadical_cxx=
resolved_cadical_cxxflags=

resolve_cadical_toolchain() {
  refresh_effective_cmake_args

  resolved_cadical_cxx=c++
  resolved_cadical_cxxflags=

  if cmake_define_value CMAKE_CXX_COMPILER "${effective_cmake_args[@]}" >/dev/null; then
    resolved_cadical_cxx=$(cmake_define_value CMAKE_CXX_COMPILER "${effective_cmake_args[@]}")
  fi
  if cmake_define_value CMAKE_CXX_FLAGS "${effective_cmake_args[@]}" >/dev/null; then
    resolved_cadical_cxxflags=$(cmake_define_value CMAKE_CXX_FLAGS "${effective_cmake_args[@]}")
  fi
  if command -v ccache >/dev/null 2>&1 && [[ "$resolved_cadical_cxx" != ccache\ * ]]; then
    resolved_cadical_cxx="ccache $resolved_cadical_cxx"
  fi
  if ! compiler_supports_closefrom "$resolved_cadical_cxx" "$resolved_cadical_cxxflags"; then
    if [[ "$resolved_cadical_cxxflags" != *-DNCLOSEFROM* ]]; then
      if [[ -n "$resolved_cadical_cxxflags" ]]; then
        resolved_cadical_cxxflags+=" "
      fi
      resolved_cadical_cxxflags+="-DNCLOSEFROM"
    fi
  fi
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
  if [[ -x "$leantar_bin" ]]; then
    return 0
  fi

  local staged_leantar=
  staged_leantar=$(staged_binary_path leantar) || true
  if [[ -n "$staged_leantar" ]]; then
    copy_program_if_needed "$staged_leantar" "$leantar_bin"
    return 0
  fi

  if command -v leantar >/dev/null 2>&1; then
    copy_program_if_needed "$(command -v leantar)" "$leantar_bin"
    return 0
  fi

  if [[ -x "$leantar_bin" ]]; then
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
  if [[ -x "$cadical_bin" ]]; then
    return 0
  fi

  local staged_cadical=
  staged_cadical=$(staged_binary_path cadical) || true
  if [[ -n "$staged_cadical" ]]; then
    copy_program_if_needed "$staged_cadical" "$cadical_bin"
    return 0
  fi

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

  resolve_cadical_toolchain

  (
    cd "$source_dir"
    make -j"$JOBS" -f "$REPO_ROOT/src/cadical.mk" "CMAKE_EXECUTABLE_SUFFIX=$executable_suffix" "CXX=$resolved_cadical_cxx" "CXXFLAGS=$resolved_cadical_cxxflags"
  )

  [[ -x "$cadical_bin" ]] || {
    echo "failed to prepare cadical at $cadical_bin" >&2
    exit 1
  }
}

host_tools_ready() {
  [[ -x "$(leantar_binary_path)" && -x "$(cadical_binary_path)" ]]
}

prepare_host_tools_fingerprint() {
  compute_action_fingerprint "prepare-host-tools" "$CONFIG_PATH" "${BASH_SOURCE[0]}" "$REPO_ROOT/src/cadical.mk"
}

prepare_host_tools_artifact_fingerprint() {
  resolve_cadical_toolchain
  compute_action_fingerprint \
    "prepare-host-tools-artifacts" \
    "$REPO_ROOT/src/cadical.mk" \
    "leantar_version=v0.1.19" \
    "leantar_target_dir=$(leantar_target_dir)" \
    "cadical_git_ref=rel-2.1.2" \
    "cadical_cxx=$resolved_cadical_cxx" \
    "cadical_cxxflags=$resolved_cadical_cxxflags"
}

run_prepare_host_tools() {
  local fingerprint artifact_fingerprint
  fingerprint=$(prepare_host_tools_fingerprint)
  artifact_fingerprint=$(prepare_host_tools_artifact_fingerprint)
  local stamp_path artifact_stamp_path
  stamp_path=$(stamp_path_for "prepare-host-tools")
  artifact_stamp_path=$(stamp_path_for "prepare-host-tools-artifacts")

  if host_tools_ready && stamp_matches "$stamp_path" "$fingerprint" && stamp_matches "$artifact_stamp_path" "$artifact_fingerprint"; then
    printf '[zig-build-driver] prepare-host-tools is up-to-date; skipping\n'
    return 0
  fi

  if host_tools_ready && stamp_matches "$artifact_stamp_path" "$artifact_fingerprint"; then
    printf '[zig-build-driver] prepare-host-tools inputs changed; refreshing stamp without rebuilding existing tools\n'
    write_stamp "$stamp_path" "$fingerprint"
    write_stamp "$artifact_stamp_path" "$artifact_fingerprint"
    return 0
  fi

  prepare_leantar
  prepare_cadical
  write_stamp "$stamp_path" "$fingerprint"
  write_stamp "$artifact_stamp_path" "$artifact_fingerprint"
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

run_root_configure() {
  local fingerprint
  fingerprint=$(configure_fingerprint "root-configure" "$REPO_ROOT")
  local stamp_path
  stamp_path=$(stamp_path_for "root-configure")

  if configure_outputs_ready "$BINARY_DIR" && stamp_matches "$stamp_path" "$fingerprint"; then
    printf '[zig-build-driver] root-configure is up-to-date; skipping root configure\n'
    return 0
  fi

  mkdir -p "$BINARY_DIR"
  local -a cmake_cmd=(cmake --preset "$PROFILE" -B "$BINARY_DIR")
  if [[ -n "$PREPARE_LLVM_SCRIPT" ]]; then
    while IFS= read -r arg; do
      cmake_cmd+=("$arg")
    done < <(emit_prepare_llvm_args)
  fi
  if [[ ${#cmake_args[@]} -gt 0 ]]; then
    cmake_cmd+=("${cmake_args[@]}")
  fi
  "${cmake_cmd[@]}"
  write_stamp "$stamp_path" "$fingerprint"
}

case "$ACTION" in
  root-configure)
    run_root_configure
    ;;
  prepare-host-tools)
    run_prepare_host_tools
    ;;
  configure-stage0)
    run_configure_dir "$BINARY_DIR/stage0" "$REPO_ROOT/stage0/src" "configure-stage0"
    ;;
  configure-stage)
    run_configure_dir "$BINARY_DIR/$ACTION_STAGE" "$REPO_ROOT/src" "configure-$ACTION_STAGE"
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

persist_driver_metadata
