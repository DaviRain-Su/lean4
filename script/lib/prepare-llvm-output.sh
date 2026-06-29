#!/usr/bin/env bash

prepare_llvm_output_format=shell
declare -a prepare_llvm_positional_args=()
declare -a prepare_llvm_cmake_args=()

prepare_llvm_usage() {
  cat <<'EOF'
usage: prepare-llvm-*.sh [--format=shell|lines] <llvm-tarball> [llvm-host-tarball]

By default the scripts print shell-escaped CMake argv fragments for legacy `eval`
callers. Use `--format=lines` to emit one complete CMake argument per line.
EOF
}

prepare_llvm_parse_cli() {
  prepare_llvm_output_format=shell
  prepare_llvm_positional_args=()
  prepare_llvm_cmake_args=()

  for arg in "$@"; do
    case "$arg" in
      --format=shell)
        prepare_llvm_output_format=shell
        ;;
      --format=lines)
        prepare_llvm_output_format=lines
        ;;
      --help|-h)
        prepare_llvm_usage
        exit 0
        ;;
      *)
        prepare_llvm_positional_args+=("$arg")
        ;;
    esac
  done
}

prepare_llvm_emit_arg() {
  prepare_llvm_cmake_args+=("$1")
}

prepare_llvm_flush_args() {
  case "$prepare_llvm_output_format" in
    shell)
      for arg in "${prepare_llvm_cmake_args[@]}"; do
        printf ' %q' "$arg"
      done
      ;;
    lines)
      printf '%s\n' "${prepare_llvm_cmake_args[@]}"
      ;;
    *)
      echo "unknown output format: $prepare_llvm_output_format" >&2
      exit 1
      ;;
  esac
}
