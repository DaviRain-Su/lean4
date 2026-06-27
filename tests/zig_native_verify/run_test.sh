lean_bin="$BUILD_DIR/bin/lean"
leanc_bin="$BUILD_DIR/bin/leanc"

mkdir -p build

run "$lean_bin" --c=build/smoke.c -Dcompiler.postponeCompile=false smoke.lean
run "$leanc_bin" -c -o build/smoke.o build/smoke.c
run "$leanc_bin" -o build/smoke.out build/smoke.c
capture_only zig_native_verify ./build/smoke.out
check_out_contains "native zig smoke"
check_exit_is_success
