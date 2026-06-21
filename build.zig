const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const lean_zig_runtime = b.option(bool, "lean-zig-runtime", "Build Zig runtime") orelse true;

    // ── Step 1: Build Zig runtime ──────────────────────────────────────────
    if (lean_zig_runtime) {
        const zig_rt = b.addSystemCommand(&.{
            "zig", "build", "--prefix",
            b.fmt("{s}/zig-runtime", .{b.install_path}),
        });
        zig_rt.setCwd(b.path("src/runtime/zig"));
        b.getInstallStep().dependOn(&zig_rt.step);
    }

    // ── Step 2: Generate headers ───────────────────────────────────────────
    const config_h = b.addConfigHeader(.{
        .style = .{ .cmake = b.path("src/config.h.in") },
        .include_path = "lean/config.h",
    }, .{
        .LEAN_MIMALLOC = "#define LEAN_MIMALLOC",
        .LEAN_SMALL_ALLOCATOR = "",
        .LEAN_LAZY_RC = "",
        .LEAN_IS_STAGE0 = "0",
    });

    const write_githash = b.addWriteFiles();
    _ = write_githash.add("githash.h", "#define LEAN_GITHASH \"unknown\"\n");

    const version_h = b.addConfigHeader(.{
        .style = .{ .cmake = b.path("src/version.h.in") },
        .include_path = "lean/version.h",
    }, .{
        .LEAN_VERSION_MAJOR = "4",
        .LEAN_VERSION_MINOR = "33",
        .LEAN_VERSION_PATCH = "0",
        .LEAN_VERSION_IS_RELEASE = "0",
        .LEAN_SPECIAL_VERSION_DESC = "",
        .LEAN_VERSION_STRING = "4.33.0-pre",
        .LEAN_PLATFORM_TARGET = "arm64-apple-darwin",
        .LEAN_MANUAL_ROOT = "",
    });

    // ── C++ flags ──────────────────────────────────────────────────────────
    const is_linux = target.result.os.tag == .linux;
    var cxx_flags: std.ArrayList([]const u8) = .empty;
    cxx_flags.appendSlice(b.allocator, &.{
        "-std=c++20", "-Wall", "-ffp-contract=off",
        "-fdata-sections", "-ffunction-sections", "-fvisibility=hidden",
        "-ftls-model=initial-exec", "-DLEAN_MULTI_THREAD", "-DLEAN_EXPORTING",
        "-Wno-unused-command-line-argument",
    }) catch unreachable;
    if (is_linux) {
        cxx_flags.append(b.allocator, "-fstack-clash-protection") catch unreachable;
    }
    const flags = cxx_flags.toOwnedSlice(b.allocator) catch unreachable;

    // ── Step 3: Build C++ static libraries ─────────────────────────────────
    const LibSpec = struct {
        name: []const u8,
        files: []const []const u8,
        needs_uv: bool = false,
    };

    const libs = [_]LibSpec{
        .{ .name = "leanrt", .needs_uv = true, .files = &.{
            "src/runtime/debug.cpp",       "src/runtime/thread.cpp",
            "src/runtime/mpz.cpp",         "src/runtime/utf8.cpp",
            "src/runtime/object.cpp",      "src/runtime/apply.cpp",
            "src/runtime/exception.cpp",   "src/runtime/interrupt.cpp",
            "src/runtime/stackinfo.cpp",   "src/runtime/compact.cpp",
            "src/runtime/alloc.cpp",       "src/runtime/sharecommon.cpp",
            "src/runtime/object_ref.cpp",  "src/runtime/githash.cpp",
            "src/runtime/io_error_helpers.cpp", "src/runtime/byteslice.cpp",
            "src/runtime/uv/net_addr.cpp", "src/runtime/uv/zig_link_compat.cpp",
        } },
        .{ .name = "kernel", .files = &.{
            "src/kernel/expr.cpp",         "src/kernel/level.cpp",
            "src/kernel/declaration.cpp",  "src/kernel/environment.cpp",
            "src/kernel/type_checker.cpp", "src/kernel/abstract.cpp",
            "src/kernel/instantiate.cpp",  "src/kernel/local_ctx.cpp",
            "src/kernel/for_each_fn.cpp",  "src/kernel/replace_fn.cpp",
            "src/kernel/expr_eq_fn.cpp",   "src/kernel/expr_cache.cpp",
            "src/kernel/equiv_manager.cpp","src/kernel/quot.cpp",
            "src/kernel/inductive.cpp",    "src/kernel/trace.cpp",
            "src/kernel/init_module.cpp",
        } },
        .{ .name = "library", .needs_uv = true, .files = &.{
            "src/library/module.cpp",      "src/library/util.cpp",
            "src/library/constants.cpp",   "src/library/annotation.cpp",
            "src/library/bin_app.cpp",     "src/library/formatter.cpp",
            "src/library/num.cpp",         "src/library/replace_visitor.cpp",
            "src/library/init_module.cpp", "src/library/max_sharing.cpp",
            "src/library/print.cpp",       "src/library/dynlib.cpp",
            "src/library/elab_environment.cpp", "src/library/expr_lt.cpp",
            "src/library/ir_interpreter.cpp", "src/library/instantiate_mvars.cpp",
            "src/library/llvm.cpp",        "src/library/profiling.cpp",
            "src/library/time_task.cpp",   "src/library/init_attribute.cpp",
            "src/library/constructions/cases_on.cpp",
            "src/library/constructions/init_module.cpp",
            "src/library/constructions/util.cpp",
        } },
        .{ .name = "util", .files = &.{
            "src/util/name.cpp",           "src/util/name_set.cpp",
            "src/util/name_generator.cpp", "src/util/path.cpp",
            "src/util/ascii.cpp",          "src/util/bit_tricks.cpp",
            "src/util/escaped.cpp",        "src/util/ffi.cpp",
            "src/util/init_module.cpp",    "src/util/kvmap.cpp",
            "src/util/lbool.cpp",          "src/util/list_fn.cpp",
            "src/util/map_foreach.cpp",    "src/util/option_declarations.cpp",
            "src/util/options.cpp",        "src/util/shell.cpp",
            "src/util/timeit.cpp",         "src/util/timer.cpp",
        } },
    };

    for (libs) |lib| {
        const mod = b.createModule(.{
            .target = target,
            .optimize = optimize,
            .link_libc = true,
            .link_libcpp = true,
            .pic = true,
        });
        mod.addIncludePath(b.path("src/include"));
        mod.addIncludePath(b.path("src"));
        mod.addIncludePath(b.path("build/release/stage1/include"));
        mod.addConfigHeader(config_h);
        mod.addConfigHeader(version_h);
        mod.addIncludePath(write_githash.getDirectory());
        if (lib.needs_uv) {
            mod.linkSystemLibrary("uv", .{});
        }
        mod.addCSourceFiles(.{ .files = lib.files, .flags = flags });

        const static_lib = b.addLibrary(.{
            .name = lib.name,
            .root_module = mod,
            .linkage = .static,
        });
        b.installArtifact(static_lib);
    }

    // ── Test step ──────────────────────────────────────────────────────────
    const test_step = b.step("test", "Run tests");
    _ = test_step;
}
