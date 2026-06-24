const std = @import("std");



pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const export_allocator_symbols = b.option(bool, "export-allocator-symbols", "Export allocator entrypoints") orelse true;
    const export_lean_helpers = b.option(bool, "export-lean-helpers", "Export higher-level Lean helper symbols") orelse true;
    const export_kernel_symbols = b.option(bool, "export-kernel-symbols", "Export pure-Zig kernel entrypoints") orelse true;
    const lean_include_dir = b.option([]const u8, "lean-include-dir", "Path to directory containing lean/lean.h and generated lean/config.h") orelse "../../include";
    const use_gmp = b.option(bool, "use-gmp", "Use libgmp for big integers instead of std.math.big.int") orelse false;
    const compile_cpp_cutover = b.option(bool, "compile-cpp-cutover", "Compile remaining C++ runtime shims into the Zig archive") orelse false;
    // When true, C++ compact.cpp provides lean_compacted_region_*; Zig must not alias them.
    const cpp_use_mimalloc = b.option(bool, "cpp-use-mimalloc", "Whether the C++/generated-code side uses LEAN_MIMALLOC layout and mi_* allocators") orelse false;
    const cpp_build_type = b.option([]const u8, "cpp-build-type", "C++ CMAKE_BUILD_TYPE for .olean compatibility (Debug, Release, RelWithDebInfo, MinSizeRel)") orelse "Release";
    const leanc_extra_cc_flags = b.option([]const u8, "leanc-extra-cc-flags", "Extra CC flags for leanc") orelse "";
    const leanc_internal_flags = b.option([]const u8, "leanc-internal-flags", "Internal flags for leanc") orelse "";
    const leanc_static_linker_flags = b.option([]const u8, "leanc-static-linker-flags", "Static linker flags") orelse "";
    const leanc_shared_linker_flags = b.option([]const u8, "leanc-shared-linker-flags", "Shared linker flags") orelse "";
    const leanc_internal_linker_flags = b.option([]const u8, "leanc-internal-linker-flags", "Internal linker flags") orelse "";
    const lean_extra_linker_flags = b.option([]const u8, "lean-extra-linker-flags", "Extra Lean linker flags") orelse "";

    const opts = b.addOptions();
    opts.addOption(bool, "export_allocator_symbols", export_allocator_symbols);
    opts.addOption(bool, "export_lean_helpers", export_lean_helpers);
    opts.addOption(bool, "export_kernel_symbols", export_kernel_symbols);
    opts.addOption(bool, "compile_cpp_cutover", compile_cpp_cutover);
    opts.addOption(bool, "cpp_init_modules_available", compile_cpp_cutover);
    opts.addOption(bool, "cpp_use_mimalloc", cpp_use_mimalloc);
    opts.addOption([]const u8, "cpp_build_type", cpp_build_type);
    opts.addOption([]const u8, "leanc_extra_cc_flags", leanc_extra_cc_flags);
    opts.addOption([]const u8, "leanc_internal_flags", leanc_internal_flags);
    opts.addOption([]const u8, "leanc_static_linker_flags", leanc_static_linker_flags);
    opts.addOption([]const u8, "leanc_shared_linker_flags", leanc_shared_linker_flags);
    opts.addOption([]const u8, "leanc_internal_linker_flags", leanc_internal_linker_flags);
    opts.addOption([]const u8, "lean_extra_linker_flags", lean_extra_linker_flags);
    const opts_mod = opts.createModule();

    const zigrt_opts = b.addOptions();
    zigrt_opts.addOption(bool, "export_allocator_symbols", export_allocator_symbols);
    zigrt_opts.addOption(bool, "export_lean_helpers", export_lean_helpers);
    zigrt_opts.addOption(bool, "export_kernel_symbols", export_kernel_symbols);
    zigrt_opts.addOption(bool, "compile_cpp_cutover", compile_cpp_cutover);
    zigrt_opts.addOption(bool, "cpp_init_modules_available", false);
    zigrt_opts.addOption(bool, "cpp_use_mimalloc", cpp_use_mimalloc);
    zigrt_opts.addOption([]const u8, "cpp_build_type", cpp_build_type);
    zigrt_opts.addOption([]const u8, "leanc_extra_cc_flags", leanc_extra_cc_flags);
    zigrt_opts.addOption([]const u8, "leanc_internal_flags", leanc_internal_flags);
    zigrt_opts.addOption([]const u8, "leanc_static_linker_flags", leanc_static_linker_flags);
    zigrt_opts.addOption([]const u8, "leanc_shared_linker_flags", leanc_shared_linker_flags);
    zigrt_opts.addOption([]const u8, "leanc_internal_linker_flags", leanc_internal_linker_flags);
    zigrt_opts.addOption([]const u8, "lean_extra_linker_flags", lean_extra_linker_flags);
    const zigrt_opts_mod = zigrt_opts.createModule();

    const allocator_mod = b.addModule("lean_allocator", .{
        .root_source_file = b.path("allocator.zig"),
    });
    allocator_mod.addImport("runtime_options", opts_mod);

    const mpz_mod = b.addModule("mpz_zig", .{
        .root_source_file = b.path(if (use_gmp) "mpz_zig.zig" else "big_int.zig"),
    });
    mpz_mod.addImport("lean_allocator", allocator_mod);

    const root_mod = b.createModule(.{
        .root_source_file = b.path("root.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    root_mod.addImport("mpz_zig", mpz_mod);
    root_mod.addImport("lean_allocator", allocator_mod);
    root_mod.addImport("runtime_options", opts_mod);
    if (use_gmp) {
        root_mod.linkSystemLibrary("gmp", .{});
    }
    // When not using GMP (default), big_int.zig uses std.math.big.int
    // and gmp_alloc_compat.zig provides __gmp_default_* shims backed by
    // libc. GMP is only needed if use-gmp=true or by C++ mpz.cpp at
    // final link time (handled by the CMake build, not the Zig build).
    root_mod.linkSystemLibrary("c++", .{});

    if (compile_cpp_cutover) {
        var cpp_flags: [12][]const u8 = undefined;
        var cpp_n: usize = 0;
        cpp_flags[cpp_n] = "-std=c++17";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-stdlib=libc++";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-O2";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-DLEAN_MULTI_THREAD";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-DLEAN_ZIG_RT_CUTOVER";
        cpp_n += 1;
        if (use_gmp) {
            cpp_flags[cpp_n] = "-DLEAN_USE_GMP";
            cpp_n += 1;
        }
        if (cpp_use_mimalloc) {
            cpp_flags[cpp_n] = "-DLEAN_MIMALLOC";
            cpp_n += 1;
        }
        cpp_flags[cpp_n] = b.fmt("-I{s}", .{lean_include_dir});
        cpp_n += 1;
        cpp_flags[cpp_n] = "-I../..";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-I../../util";
        cpp_n += 1;
        root_mod.addCSourceFiles(.{
            .files = &.{
                "../compact.cpp",
                "../sharecommon.cpp",
                "../thread.cpp",
                "../mpz.cpp",
                "../exception.cpp",
                "../object_ref.cpp",
                "../io_error_helpers.cpp",
                "object_shim.cpp",
                "libcxx_hash_compat.cpp",
            },
            .flags = cpp_flags[0..cpp_n],
        });
        if (use_gmp) {
            root_mod.linkSystemLibrary("gmp", .{});
        }
        root_mod.linkSystemLibrary("c++abi", .{});
    }

    // All UV subsystems (event_loop, timer, dns, signal, net_addr, tcp, udp,
    // system) are now pure Zig.

    // Weak C wrappers that bridge runtime C++ callers (uv_compat.cpp, dns.cpp)
    // to the Zig io_error implementations. Only emit them when helper symbols
    // are exported; in the helperless build (used for stdlib linking) the Lean
    // stdlib's own @[export] definitions are the sole providers, so omitting
    // these avoids duplicate-symbol collisions at link time.
    if (export_lean_helpers) {
        root_mod.addCSourceFiles(.{
            .files = &.{ "io_error_weak_exports.c", "rc_barrier.c" },
            .flags = &.{
                "-std=c11",
                "-O2",
                b.fmt("-I{s}", .{lean_include_dir}),
                "-I../..",
            },
        });
    }

    // RC barrier and env barrier must always be compiled (even in helperless
    // builds) because the ZCU optimizer eliminates inc/dec pairs and env
    // conversion calls otherwise. These C files are compiled by cc separately
    // from the Zig compilation unit, preventing the ZCU optimizer from
    // inlining and eliminating the calls.
    root_mod.addCSourceFile(.{
        .file = b.path("rc_barrier.c"),
        .flags = &.{
            "-std=c11",
            "-O2",
            b.fmt("-I{s}", .{lean_include_dir}),
            "-I../..",
        },
    });
    // kernel_entrypoints.zig is compiled as a SEPARATE Zig module (not part
    // of the ZCU) to prevent the ZCU optimizer from inlining and eliminating
    // the lean_elab_environment_to_kernel_env conversion call. The ZCU
    // optimizer inlines rc.lean_inc/lean_dec (ZCU functions), sees inc+dec=0,
    // then eliminates the extern fn call as "unused". By compiling in a
    // separate module, the optimizer cannot see through the extern fn
    // boundary and the conversion is preserved.
    //
    // This module exports lean_kernel_check, lean_kernel_whnf, and
    // lean_kernel_is_def_eq. It does NOT link to the ZCU module — it only
    // uses extern fn declarations. The symbols are resolved at final link
    // time by CMake.
    const kernel_entrypoints_mod = b.createModule(.{
        .root_source_file = b.path("kernel_entrypoints.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    const kernel_entrypoints_lib = b.addLibrary(.{
        .name = "kernel_entrypoints",
        .root_module = kernel_entrypoints_mod,
        .linkage = .static,
    });
    b.installArtifact(kernel_entrypoints_lib);

    // add_decl_bridge.zig — separate module that provides an opaque wrapper
    // for lean_add_decl_without_checking. The ZCU optimizer cannot see through
    // the extern fn boundary, preventing it from eliminating rc.lean_inc(env)
    // in callers. This module exports only lean_add_decl_bridge (no conflicts).
    const add_decl_bridge_mod = b.createModule(.{
        .root_source_file = b.path("add_decl_bridge.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    const add_decl_bridge_lib = b.addLibrary(.{
        .name = "add_decl_bridge",
        .root_module = add_decl_bridge_mod,
        .linkage = .static,
    });
    b.installArtifact(add_decl_bridge_lib);

    root_mod.linkSystemLibrary("uv", .{});

    const lib = b.addLibrary(.{
        .name = "leanrt_zig",
        .root_module = root_mod,
        .linkage = .static,
    });
    b.installArtifact(lib);

    const zigrt_mod = b.createModule(.{
        .root_source_file = b.path("root_zigrt.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    zigrt_mod.addImport("mpz_zig", mpz_mod);
    zigrt_mod.addImport("lean_allocator", allocator_mod);
    zigrt_mod.addImport("runtime_options", zigrt_opts_mod);
    if (use_gmp) {
        zigrt_mod.linkSystemLibrary("gmp", .{});
    }
    zigrt_mod.linkSystemLibrary("c++", .{});
    if (compile_cpp_cutover) {
        var cpp_flags: [12][]const u8 = undefined;
        var cpp_n: usize = 0;
        cpp_flags[cpp_n] = "-std=c++17";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-stdlib=libc++";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-O2";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-DLEAN_MULTI_THREAD";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-DLEAN_ZIG_RT_CUTOVER";
        cpp_n += 1;
        if (use_gmp) {
            cpp_flags[cpp_n] = "-DLEAN_USE_GMP";
            cpp_n += 1;
        }
        if (cpp_use_mimalloc) {
            cpp_flags[cpp_n] = "-DLEAN_MIMALLOC";
            cpp_n += 1;
        }
        cpp_flags[cpp_n] = b.fmt("-I{s}", .{lean_include_dir});
        cpp_n += 1;
        cpp_flags[cpp_n] = "-I../..";
        cpp_n += 1;
        cpp_flags[cpp_n] = "-I../../util";
        cpp_n += 1;
        zigrt_mod.addCSourceFiles(.{
            .files = &.{
                "../compact.cpp",
                "../sharecommon.cpp",
                "../thread.cpp",
                "../mpz.cpp",
                "../exception.cpp",
                "../object_ref.cpp",
                "../io_error_helpers.cpp",
                "object_shim.cpp",
                "libcxx_hash_compat.cpp",
            },
            .flags = cpp_flags[0..cpp_n],
        });
        if (use_gmp) {
            zigrt_mod.linkSystemLibrary("gmp", .{});
        }
        zigrt_mod.linkSystemLibrary("c++abi", .{});
    }
    if (export_lean_helpers) {
        zigrt_mod.addCSourceFiles(.{
            .files = &.{ "io_error_weak_exports.c", "rc_barrier.c" },
            .flags = &.{
                "-std=c11",
                "-O2",
                b.fmt("-I{s}", .{lean_include_dir}),
                "-I../..",
            },
        });
    }

    // RC barrier and env barrier must always be compiled (even in helperless builds).
    zigrt_mod.addCSourceFile(.{
        .file = b.path("rc_barrier.c"),
        .flags = &.{
            "-std=c11",
            "-O2",
            b.fmt("-I{s}", .{lean_include_dir}),
            "-I../..",
        },
    });
    // kernel_entrypoints.a is linked by CMake, not here (prevents ZCU visibility)
    zigrt_mod.linkSystemLibrary("uv", .{});

    const zigrt_lib = b.addLibrary(.{
        .name = "leanrt_zigrt",
        .root_module = zigrt_mod,
        .linkage = .static,
    });
    b.installArtifact(zigrt_lib);

    const zigrt_test_mod = b.createModule(.{
        .root_source_file = b.path("root_test_zigrt.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    zigrt_test_mod.addImport("mpz_zig", mpz_mod);
    zigrt_test_mod.addImport("lean_allocator", allocator_mod);
    zigrt_test_mod.addImport("runtime_options", zigrt_opts_mod);
    if (use_gmp) {
        zigrt_test_mod.linkSystemLibrary("gmp", .{});
    }
    zigrt_test_mod.linkSystemLibrary("c++", .{});
    if (export_lean_helpers) {
        zigrt_test_mod.addCSourceFiles(.{
            .files = &.{"io_error_weak_exports.c"},
            .flags = &.{
                "-std=c11",
                "-O2",
                b.fmt("-I{s}", .{lean_include_dir}),
                "-I../..",
            },
        });
    }
    // Stubs for stdlib-only symbols pulled in by init.zig and name hashing tests.
    zigrt_test_mod.addCSourceFile(.{
        .file = b.path("zigrt_stubs.c"),
        .flags = &.{
            "-std=c11",
            "-O2",
            b.fmt("-I{s}", .{lean_include_dir}),
            "-I../..",
        },
    });
    zigrt_test_mod.linkSystemLibrary("uv", .{});

    const tests = b.addTest(.{
        .root_module = zigrt_test_mod,
    });

    const run_tests = b.addRunArtifact(tests);
    const test_step = b.step("test", "Run library tests");
    test_step.dependOn(&run_tests.step);
}
