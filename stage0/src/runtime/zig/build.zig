const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const export_allocator_symbols = b.option(bool, "export-allocator-symbols", "Export allocator entrypoints") orelse true;
    const export_lean_helpers = b.option(bool, "export-lean-helpers", "Export higher-level Lean helper symbols") orelse true;
    // NOTE: allocator_backend is a comptime constant in runtime_options.zig, not
    // injected here, because Zig 0.16 addOptions exposes values as runtime.
    const lean_include_dir = b.option([]const u8, "lean-include-dir", "Path to directory containing lean/lean.h and generated lean/config.h") orelse "../../include";
    const gmp_include_dir = b.option([]const u8, "gmp-include-dir", "Resolved GMP include directory from CMake") orelse "";
    const gmp_library_dir = b.option([]const u8, "gmp-library-dir", "Resolved GMP library directory from CMake") orelse "";
    const gmp_library_name = b.option([]const u8, "gmp-library-name", "Resolved GMP library name from CMake") orelse "gmp";
    const libuv_include_dirs = b.option([]const u8, "libuv-include-dirs", "Resolved libuv include directories from CMake, separated by |") orelse "";
    const libuv_library_dirs = b.option([]const u8, "libuv-library-dirs", "Resolved libuv library directories from CMake, separated by |") orelse "";
    const libuv_libraries = b.option([]const u8, "libuv-libraries", "Resolved libuv library names from CMake, separated by |") orelse "uv";

    // WASM/freestanding targets have no GMP, libuv, pthreads, or POSIX networking.
    // The runtime degrades to the zig-bigint mpz backend, host imports, and a
    // single-threaded task scheduler there (see doc F.2). Native builds link
    // the full C++ libuv subsystem and GMP as below.
    const is_wasm = target.result.os.tag == .wasi or target.result.os.tag == .freestanding;


    const mpz_mod = b.addModule("mpz_zig", .{
        .root_source_file = b.path("mpz_zig.zig"),
    });
    const runtime_c = b.addTranslateC(.{
        .root_source_file = b.path("runtime_c.h"),
        .target = target,
        .optimize = optimize,
    });
    const opts = b.addOptions();
    opts.addOption(bool, "export_allocator_symbols", export_allocator_symbols);
    opts.addOption(bool, "export_lean_helpers", export_lean_helpers);
    // allocator_backend lives in runtime_options.zig (comptime source const).
    const opts_mod = opts.createModule();

    const root_mod = b.createModule(.{
        .root_source_file = b.path("root.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
        // WASM targets are single-threaded; std.Thread is unavailable there.
        .single_threaded = is_wasm,
    });
    root_mod.addImport("mpz_zig", mpz_mod);
    root_mod.addImport("runtime_c", runtime_c.createModule());
    root_mod.addImport("runtime_options", opts_mod);
    if (!is_wasm) {
        // Native: link GMP and libc++.
        if (gmp_include_dir.len != 0) root_mod.addSystemIncludePath(.{ .cwd_relative = gmp_include_dir });
        if (gmp_library_dir.len != 0) root_mod.addLibraryPath(.{ .cwd_relative = gmp_library_dir });
        root_mod.linkSystemLibrary(gmp_library_name, .{ .use_pkg_config = .no });
        root_mod.linkSystemLibrary("c++", .{});
        var libuv_include_it = std.mem.tokenizeScalar(u8, libuv_include_dirs, '|');
        while (libuv_include_it.next()) |dir| root_mod.addSystemIncludePath(.{ .cwd_relative = dir });
        var libuv_library_dir_it = std.mem.tokenizeScalar(u8, libuv_library_dirs, '|');
        while (libuv_library_dir_it.next()) |dir| root_mod.addLibraryPath(.{ .cwd_relative = dir });
    }



    // C++ libuv subsystem used by the Zig runtime. These mirror the sources in
    // src/runtime/CMakeLists.txt but omit libuv.cpp (replaced by Zig-side init)
    // and keep the net_addr.cpp exports (the Zig-side net_addr.zig stubs are
    // test-only). A few small helpers (uv_error.cpp, uv_loop_thread.cpp,
    // uv_version.cpp) live alongside the Zig sources.
    // Skipped on WASM: no libuv, no pthreads, no POSIX networking.
    if (!is_wasm) {
        const uv_cpp_sources = &.{
        "../uv/dns.cpp",
        "../uv/event_loop.cpp",
        "../uv/net_addr.cpp",
        "../uv/signal.cpp",
        "../uv/system.cpp",
        "../uv/tcp.cpp",
        "../uv/timer.cpp",
        "../uv/udp.cpp",
        "uv_compat.cpp",
        "uv_init.cpp",
        "uv_loop_thread.cpp",
        "uv_promise_bridge.cpp",
        "uv_version.cpp",
    };
    var uv_cpp_flags = std.ArrayList([]const u8).empty;
    defer uv_cpp_flags.deinit(b.allocator);
    uv_cpp_flags.appendSlice(b.allocator, &.{
        "-std=c++17",
        "-O2",
        "-include", "uv_compat.h",
        "-DLEAN_SMALL_ALLOCATOR",
        b.fmt("-I{s}", .{lean_include_dir}),
        "-I../..",
    }) catch @panic("OOM");
    root_mod.addCSourceFiles(.{
        .files = uv_cpp_sources,
        .flags = uv_cpp_flags.items,
    });

    // Weak exports that let C++ code call lean_mk_io_error_* while the real
    // implementations live in the Zig runtime (io_error.zig).
    const uv_c_sources = &.{
        "io_error_weak_exports.c",
    };
    const uv_c_flags = &.{
        "-std=c11",
        "-O2",
        b.fmt("-I{s}", .{lean_include_dir}),
        "-I../..",
    };
    root_mod.addCSourceFiles(.{
        .files = uv_c_sources,
        .flags = uv_c_flags,
    });

    var libuv_library_it = std.mem.tokenizeScalar(u8, libuv_libraries, '|');
    while (libuv_library_it.next()) |lib_name| root_mod.linkSystemLibrary(lib_name, .{ .use_pkg_config = .no });
    } // end if (!is_wasm)

    const lib = b.addLibrary(.{
        .name = "leanrt_zig",
        .root_module = root_mod,
        .linkage = .static,
    });
    b.installArtifact(lib);

    const tests = b.addTest(.{
        .root_module = root_mod,
    });

    const run_tests = b.addRunArtifact(tests);
    const test_step = b.step("test", "Run library tests");
    test_step.dependOn(&run_tests.step);
}
