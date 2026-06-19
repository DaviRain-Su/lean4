const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const export_allocator_symbols = b.option(bool, "export-allocator-symbols", "Export allocator entrypoints") orelse true;
    const export_lean_helpers = b.option(bool, "export-lean-helpers", "Export higher-level Lean helper symbols") orelse true;
    const export_kernel_symbols = b.option(bool, "export-kernel-symbols", "Export pure-Zig kernel entrypoints") orelse false;
    const lean_include_dir = b.option([]const u8, "lean-include-dir", "Path to directory containing lean/lean.h and generated lean/config.h") orelse "../../include";
    const use_gmp = b.option(bool, "use-gmp", "Use libgmp for big integers instead of std.math.big.int") orelse false;

    const mpz_mod = b.addModule("mpz_zig", .{
        .root_source_file = b.path(if (use_gmp) "mpz_zig.zig" else "big_int.zig"),
    });
    const opts = b.addOptions();
    opts.addOption(bool, "export_allocator_symbols", export_allocator_symbols);
    opts.addOption(bool, "export_lean_helpers", export_lean_helpers);
    opts.addOption(bool, "export_kernel_symbols", export_kernel_symbols);
    const opts_mod = opts.createModule();

    const root_mod = b.createModule(.{
        .root_source_file = b.path("root.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    root_mod.addImport("mpz_zig", mpz_mod);
    root_mod.addImport("runtime_options", opts_mod);
    if (use_gmp) {
        root_mod.linkSystemLibrary("gmp", .{});
    }
    root_mod.linkSystemLibrary("c++", .{});

    // All UV subsystems (event_loop, timer, dns, signal, net_addr, tcp, udp,
    // system) are now pure Zig. No C++ sources are compiled into libleanrt_zig.

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
