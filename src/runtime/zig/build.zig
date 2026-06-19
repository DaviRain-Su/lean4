const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const export_allocator_symbols = b.option(bool, "export-allocator-symbols", "Export allocator entrypoints") orelse true;
    const export_lean_helpers = b.option(bool, "export-lean-helpers", "Export higher-level Lean helper symbols") orelse true;
    const lean_include_dir = b.option([]const u8, "lean-include-dir", "Path to directory containing lean/lean.h and generated lean/config.h") orelse "../../include";

    const mpz_mod = b.addModule("mpz_zig", .{
        .root_source_file = b.path("mpz_zig.zig"),
    });
    const opts = b.addOptions();
    opts.addOption(bool, "export_allocator_symbols", export_allocator_symbols);
    opts.addOption(bool, "export_lean_helpers", export_lean_helpers);
    const opts_mod = opts.createModule();

    const root_mod = b.createModule(.{
        .root_source_file = b.path("root.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    root_mod.addImport("mpz_zig", mpz_mod);
    root_mod.addImport("runtime_options", opts_mod);
    root_mod.linkSystemLibrary("gmp", .{});
    root_mod.linkSystemLibrary("c++", .{});

    // C++ libuv subsystem used by the Zig runtime. These mirror the sources in
    // src/runtime/CMakeLists.txt but omit libuv.cpp (replaced by Zig-side init)
    // and keep the net_addr.cpp exports (the Zig-side net_addr.zig stubs are
    // test-only). A few small helpers live alongside the Zig sources.
    const uv_cpp_sources = &.{
        "../uv/dns.cpp",
        "../uv/event_loop.cpp",
        "../uv/net_addr.cpp",
        "../uv/signal.cpp",
        "../uv/system.cpp",
        "../uv/tcp.cpp",
        "../uv/timer.cpp",
        "../uv/udp.cpp",
        "uv_init.cpp",
        "uv_loop_thread.cpp",
        "uv_promise_bridge.cpp",
    };
    const uv_cpp_flags = &.{
        "-std=c++17",
        "-O2",
        "-include", "uv_compat.h",
        "-DLEAN_SMALL_ALLOCATOR",
        b.fmt("-I{s}", .{lean_include_dir}),
        "-I../..",
    };
    root_mod.addCSourceFiles(.{
        .files = uv_cpp_sources,
        .flags = uv_cpp_flags,
    });

    // Weak C wrappers that bridge runtime C++ callers (uv_compat.cpp, dns.cpp)
    // to the Zig io_error implementations. Only emit them when helper symbols
    // are exported; in the helperless build (used for stdlib linking) the Lean
    // stdlib's own @[export] definitions are the sole providers, so omitting
    // these avoids duplicate-symbol collisions at link time.
    if (export_lean_helpers) {
        root_mod.addCSourceFiles(.{
            .files = &.{"io_error_weak_exports.c"},
            .flags = &.{
                "-std=c11",
                "-O2",
                b.fmt("-I{s}", .{lean_include_dir}),
                "-I../..",
            },
        });
    }

    root_mod.linkSystemLibrary("uv", .{});

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
