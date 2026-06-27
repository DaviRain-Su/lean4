target="${LEAN_ZIG_TARGET:-}"
[[ -n "$target" ]] || fail "LEAN_ZIG_TARGET not set"

host_lean="$PREV_STAGE/bin/lean${PREV_STAGE_CMAKE_EXECUTABLE_SUFFIX:-}"
leanc_sh="$BUILD_DIR/leanc.sh"

mkdir -p build

run "$host_lean" --c=build/smoke.c -Dcompiler.postponeCompile=false smoke.lean
run "$leanc_sh" -c -o build/smoke.o build/smoke.c
run "$leanc_sh" build/smoke.o -o build/smoke.out

capture_only cross_verify file build/smoke.o build/smoke.out
case "$target" in
  x86_64-linux-gnu|x86_64-linux-musl)
    check_out_contains "ELF 64-bit"
    check_out_contains "x86-64"
    ;;
  aarch64-linux-gnu|aarch64-linux-musl)
    check_out_contains "ELF 64-bit"
    check_out_matches "aarch64|ARM aarch64|ARM64"
    ;;
  x86_64-macos)
    check_out_contains "Mach-O 64-bit"
    check_out_contains "x86_64"
    ;;
  aarch64-macos)
    check_out_contains "Mach-O 64-bit"
    check_out_matches "arm64|aarch64"
    ;;
  *)
    fail "Unexpected LEAN_ZIG_TARGET: $target"
    ;;
esac
check_exit_is_success
