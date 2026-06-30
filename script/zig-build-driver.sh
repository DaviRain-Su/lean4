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

prepare_leantar() {
  local force=${1:-0}
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
  if [[ "$force" != 1 && -x "$leantar_bin" ]]; then
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
  local force=${1:-0}
  local executable_suffix
  executable_suffix=$(host_executable_suffix)
  local cadical_bin="$BINARY_DIR/cadical/cadical$executable_suffix"
  if [[ "$force" != 1 && -x "$cadical_bin" ]]; then
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

  if [[ "$force" == 1 ]]; then
    rm -f "$cadical_bin"
    find "$source_dir" -maxdepth 1 -type f \( -name '*.o' -o -name "cadical$executable_suffix" \) -delete
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

host_tools_ready() {
  [[ -x "$(leantar_binary_path)" && -x "$(cadical_binary_path)" ]]
}

prepare_host_tools_fingerprint() {
  compute_action_fingerprint "prepare-host-tools" "$CONFIG_PATH" "${BASH_SOURCE[0]}" "$REPO_ROOT/src/cadical.mk"
}

run_prepare_host_tools() {
  local fingerprint
  fingerprint=$(prepare_host_tools_fingerprint)
  local stamp_path
  stamp_path=$(stamp_path_for "prepare-host-tools")
  local force=0

  if host_tools_ready && stamp_matches "$stamp_path" "$fingerprint"; then
    printf '[zig-build-driver] prepare-host-tools is up-to-date; skipping\n'
    return 0
  fi

  if [[ -f "$stamp_path" ]]; then
    force=1
  fi

  prepare_leantar "$force"
  prepare_cadical "$force"
  write_stamp "$stamp_path" "$fingerprint"
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
  fingerprint=$(configure_fingerprint "configure-root" "$REPO_ROOT")
  local stamp_path
  stamp_path=$(stamp_path_for "configure-root")

  if configure_outputs_ready "$BINARY_DIR" && stamp_matches "$stamp_path" "$fingerprint"; then
    printf '[zig-build-driver] configure-root is up-to-date; skipping configure\n'
    cp "$METADATA_PATH" "$BINARY_DIR/.zig-driver.json"
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
  cp "$METADATA_PATH" "$BINARY_DIR/.zig-driver.json"
  write_stamp "$stamp_path" "$fingerprint"
}

case "$ACTION" in
  configure)
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
