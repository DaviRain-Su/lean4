const std = @import("std");

fn resolveRootedPath(b: *std.Build, root: []const u8, rel: []const u8) []const u8 {
    return std.fs.path.join(b.allocator, &.{ root, rel }) catch unreachable;
}

fn requireExistingPath(path: []const u8, what: []const u8) void {
    const io = std.Io.Threaded.global_single_threaded.io();
    std.Io.Dir.accessAbsolute(io, path, .{}) catch {
        std.debug.panic("missing required {s}: {s}", .{ what, path });
    };
}

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const root = b.pathFromRoot(".");
    const prev_stage_dir_rel = b.option([]const u8, "prev-stage-dir", "Path to the previously built stage used for helperless cutover inputs") orelse "build/release/stage1";
    const prev_stage_dir = resolveRootedPath(b, root, prev_stage_dir_rel);
    const bootstrap_stage_dir_rel = b.option([]const u8, "bootstrap-stage-dir", "Path to the bootstrap stage used for leanmake/lean/lean.mk inputs") orelse "build/release/stage0";
    const bootstrap_stage_dir = resolveRootedPath(b, root, bootstrap_stage_dir_rel);

    const lean_zig_runtime = b.option(bool, "lean-zig-runtime", "Build Zig runtime") orelse true;
    const lean_zig_rt_cutover = b.option(bool, "lean-zig-rt-cutover", "Link Zig helperless runtime into leanshared") orelse true;
    const skip_zig_rt_rebuild = b.option(bool, "skip-zig-rt-rebuild", "Reuse prev-stage weakened Zig runtime archive") orelse true;
    const skip_leanshared_rebuild = b.option(bool, "skip-leanshared-rebuild", "Reuse prev-stage libleanshared dylibs for lean-exe") orelse true;
    const use_gmp = b.option(bool, "use-gmp", "Link libgmp (off under Zig cutover)") orelse false;
    const zig_rt_prefix = b.fmt("{s}/zig-runtime", .{b.install_path});
    const zig_rt_lib = b.fmt("{s}/lib/libleanrt_zig.a", .{zig_rt_prefix});
    const zig_rt_helperless_prefix = b.fmt("{s}/zig-runtime-helperless", .{b.install_path});
    const zig_rt_helperless_lib = b.fmt("{s}/lib/libleanrt_zig.a", .{zig_rt_helperless_prefix});
    const zig_rt_kernel_entrypoints_lib = b.fmt("{s}/lib/libkernel_entrypoints.a", .{zig_rt_helperless_prefix});
    const stage1_rt_archive = resolveRootedPath(b, prev_stage_dir, "runtime/libleanrt_initial-exec.a");
    const stage1_cpp_archive = resolveRootedPath(b, prev_stage_dir, "lib/lean/libleancpp.a");
    const stage1_cpp_1_archive = resolveRootedPath(b, prev_stage_dir, "lib/temp/libleancpp_1.a");
    const stage1_shell_archive = resolveRootedPath(b, prev_stage_dir, "lib/temp/libleanshell.a");
    const stage1_leanmain_archive = resolveRootedPath(b, prev_stage_dir, "lib/temp/libleanmain.a");
    const stage1_zig_rt_lib = resolveRootedPath(b, prev_stage_dir, "runtime/zig/zig-out-helperless/lib/libleanrt_zig.a");
    const stage1_kernel_entrypoints_lib = resolveRootedPath(b, prev_stage_dir, "runtime/zig/zig-out-helperless/lib/libkernel_entrypoints.a");
    const stage1_leanshared_dylib = resolveRootedPath(b, prev_stage_dir, "lib/lean/libleanshared.dylib");
    const stage1_leanshared_1_dylib = resolveRootedPath(b, prev_stage_dir, "lib/lean/libleanshared_1.dylib");
    const stage1_leanshared_2_dylib = resolveRootedPath(b, prev_stage_dir, "lib/lean/libleanshared_2.dylib");
    const stage1_init_shared_dylib = resolveRootedPath(b, prev_stage_dir, "lib/lean/libInit_shared.dylib");
    const stage1_leanc_sh = resolveRootedPath(b, prev_stage_dir, "leanc.sh");
    const prev_stage_include_dir = resolveRootedPath(b, prev_stage_dir, "include");

    requireExistingPath(stage1_rt_archive, "previous-stage runtime archive");
    requireExistingPath(stage1_cpp_archive, "previous-stage libleancpp.a");
    requireExistingPath(stage1_cpp_1_archive, "previous-stage libleancpp_1.a");
    requireExistingPath(stage1_shell_archive, "previous-stage libleanshell.a");
    requireExistingPath(prev_stage_include_dir, "previous-stage include directory");

    // ── Step 1: Build Zig runtime ──────────────────────────────────────────
    var zig_rt_step: ?*std.Build.Step.Run = null;
    var zig_rt_link_lib: ?[]const u8 = null;
    if (lean_zig_runtime) {
        if (lean_zig_rt_cutover and skip_zig_rt_rebuild) {
            requireExistingPath(stage1_zig_rt_lib, "previous-stage libleanrt_zig.a");
            requireExistingPath(stage1_kernel_entrypoints_lib, "previous-stage libkernel_entrypoints.a");
            zig_rt_link_lib = stage1_zig_rt_lib;
        } else if (lean_zig_rt_cutover) {
            const zig_rt = b.addSystemCommand(&.{
                "zig",                         "build",                                                    "--prefix",                     zig_rt_helperless_prefix,
                "-Dexport-lean-helpers=false", "-Dexport-allocator-symbols=false",                         "-Dexport-kernel-symbols=true", "-Dcompile-cpp-cutover=true",
                "-Duse-gmp=false",             b.fmt("-Dlean-include-dir={s}", .{prev_stage_include_dir}),
            });
            zig_rt.setCwd(b.path("src/runtime/zig"));

            const weaken = b.addSystemCommand(&.{
                "zig",                 "run",             "tools/macho_symbols.zig", "--",                 "weaken",
                zig_rt_helperless_lib, stage1_rt_archive, stage1_cpp_archive,        stage1_cpp_1_archive,
            });
            weaken.step.dependOn(&zig_rt.step);
            weaken.setCwd(b.path("."));

            const stage1_init_archive = resolveRootedPath(b, prev_stage_dir, "lib/lean/libInit.a");
            const flip = b.addSystemCommand(&.{
                "zig",                 "run",                         "tools/macho_symbols.zig",       "--",              "flip",
                zig_rt_helperless_lib, zig_rt_kernel_entrypoints_lib, "tools/phase3_flip_symbols.txt", stage1_rt_archive, stage1_cpp_archive,
                stage1_cpp_1_archive,  stage1_init_archive,
            });
            flip.step.dependOn(&weaken.step);
            flip.setCwd(b.path("."));

            b.getInstallStep().dependOn(&flip.step);
            zig_rt_step = flip;
            zig_rt_link_lib = zig_rt_helperless_lib;
        } else {
            const zig_rt = b.addSystemCommand(&.{
                "zig",                        "build",                            "--prefix", zig_rt_prefix,
                "-Dexport-lean-helpers=true", "-Dexport-allocator-symbols=false",
            });
            zig_rt.setCwd(b.path("src/runtime/zig"));
            b.getInstallStep().dependOn(&zig_rt.step);
            zig_rt_step = zig_rt;
            zig_rt_link_lib = zig_rt_lib;
        }
    }

    // ── Step 2: Generate headers ───────────────────────────────────────────
    const config_h = b.addConfigHeader(.{
        .style = .{ .cmake = b.path("src/config.h.in") },
        .include_path = "lean/config.h",
    }, .{
        .LEAN_MIMALLOC = "",
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
        "-std=c++20",                        "-Wall",               "-ffp-contract=off",
        "-fdata-sections",                   "-ffunction-sections", "-fvisibility=hidden",
        "-ftls-model=initial-exec",          "-DLEAN_MULTI_THREAD", "-DLEAN_EXPORTING",
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

    const cutover_rt_files = [_][]const u8{"src/runtime/runtime_cutover_stub.c"};
    const full_rt_files = [_][]const u8{
        "src/runtime/debug.cpp",       "src/runtime/thread.cpp",
        "src/runtime/mpz.cpp",         "src/runtime/utf8.cpp",
        "src/runtime/object.cpp",      "src/runtime/apply.cpp",
        "src/runtime/exception.cpp",   "src/runtime/interrupt.cpp",
        "src/runtime/stackinfo.cpp",   "src/runtime/compact.cpp",
        "src/runtime/alloc.cpp",       "src/runtime/sharecommon.cpp",
        "src/runtime/object_ref.cpp",  "src/runtime/io_error_helpers.cpp",
        "src/runtime/uv/net_addr.cpp", "src/runtime/uv/zig_link_compat.cpp",
    };
    const initial_exec_rt_files = [_][]const u8{
        "src/runtime/alloc.cpp",       "src/runtime/compact.cpp",
        "src/runtime/object.cpp",      "src/runtime/object_ref.cpp",
        "src/runtime/apply.cpp",       "src/runtime/exception.cpp",
        "src/runtime/interrupt.cpp",   "src/runtime/stackinfo.cpp",
        "src/runtime/mpz.cpp",         "src/runtime/utf8.cpp",
        "src/runtime/sharecommon.cpp", "src/runtime/debug.cpp",
        "src/runtime/thread.cpp",      "src/runtime/io_error_helpers.cpp",
        "src/runtime/uv/net_addr.cpp", "src/runtime/uv/zig_link_compat.cpp",
    };
    const libs = [_]LibSpec{
        .{ .name = "leanrt", .needs_uv = true, .files = if (lean_zig_rt_cutover) &cutover_rt_files else &full_rt_files },
        .{ .name = "leanrt_initial-exec", .needs_uv = true, .files = if (lean_zig_rt_cutover) &cutover_rt_files else &initial_exec_rt_files },
        .{ .name = "kernel", .files = &.{
            "src/kernel/level.cpp",        "src/kernel/expr.cpp",
            "src/kernel/expr_eq_fn.cpp",   "src/kernel/for_each_fn.cpp",
            "src/kernel/replace_fn.cpp",   "src/kernel/abstract.cpp",
            "src/kernel/instantiate.cpp",  "src/kernel/local_ctx.cpp",
            "src/kernel/declaration.cpp",  "src/kernel/environment.cpp",
            "src/kernel/type_checker.cpp", "src/kernel/init_module.cpp",
            "src/kernel/expr_cache.cpp",   "src/kernel/equiv_manager.cpp",
            "src/kernel/quot.cpp",         "src/kernel/inductive.cpp",
            "src/kernel/trace.cpp",
        } },
        .{ .name = "library", .needs_uv = true, .files = &.{
            "src/library/module.cpp",                    "src/library/util.cpp",
            "src/library/constants.cpp",                 "src/library/annotation.cpp",
            "src/library/bin_app.cpp",                   "src/library/formatter.cpp",
            "src/library/num.cpp",                       "src/library/replace_visitor.cpp",
            "src/library/init_module.cpp",               "src/library/max_sharing.cpp",
            "src/library/print.cpp",                     "src/library/dynlib.cpp",
            "src/library/elab_environment.cpp",          "src/library/expr_lt.cpp",
            "src/library/ir_interpreter.cpp",            "src/library/instantiate_mvars.cpp",
            "src/library/profiling.cpp",                 "src/library/time_task.cpp",
            "src/library/init_attribute.cpp",            "src/library/constructions/cases_on.cpp",
            "src/library/constructions/init_module.cpp", "src/library/constructions/util.cpp",
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
        } },
        .{ .name = "leanshell", .files = &.{
            "src/util/shell.cpp",
        } },
        .{ .name = "leaninitialize", .files = &.{
            "src/initialize/init.cpp",
        } },
        .{ .name = "leanmain", .files = &.{
            "src/shell/lean.cpp",
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
        mod.addIncludePath(.{ .cwd_relative = prev_stage_include_dir });
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

    // ── Step 4: Lean bootstrap (.lean → .olean + .c → .o) ─────────────────
    // Uses make + lean.mk for dependency tracking via lean --deps.
    const lean_bin = resolveRootedPath(b, bootstrap_stage_dir, "bin/lean");
    const lean_mk_dir = resolveRootedPath(b, bootstrap_stage_dir, "share/lean");
    const leanc_bin = std.fs.path.join(b.allocator, &.{ root, b.option([]const u8, "leanc-bin", "Path to leanc (C compiler for .c→.o)") orelse "build/zig-out/bin/zigleanc" }) catch unreachable;
    const stdlib_out = b.option([]const u8, "stdlib-out", "Output root for stdlib build") orelse prev_stage_dir;
    const olean_out = std.fmt.allocPrint(b.allocator, "{s}/lib/lean", .{stdlib_out}) catch unreachable;
    const temp_out = std.fmt.allocPrint(b.allocator, "{s}/lib/temp", .{stdlib_out}) catch unreachable;

    const skip_stdlib_build = b.option(bool, "skip-stdlib-build", "Skip stdlib rebuild and reuse prev-stage-dir artifacts") orelse true;
    const lean_compile_step = b.step("lean-compile", "Compile .lean stdlib to .olean/.c/.o using lean.mk");

    // Package build order: Init → Std → Lean → Lake
    // Init builds with EXTRA_SRC_ROOTS for parallel .olean generation of downstream packages
    const StdlibPkg = struct {
        name: []const u8,
        src_dir: ?[]const u8, // null = current dir (Init/Std/Lean use src/)
        extra_src_roots: []const u8,
        deps: []const []const u8, // package names this depends on
    };
    const stdlib_pkgs = [_]StdlibPkg{
        .{ .name = "Init", .src_dir = null, .extra_src_roots = "", .deps = &.{} },
        .{ .name = "Std", .src_dir = null, .extra_src_roots = "", .deps = &.{"Init"} },
        .{ .name = "Lean", .src_dir = null, .extra_src_roots = "", .deps = &.{"Std"} },
        .{ .name = "Lake", .src_dir = "src/lake", .extra_src_roots = "LakeMain.lean", .deps = &.{"Lean"} },
    };

    // Track step per package for dependency wiring
    var pkg_steps: std.StringHashMap(*std.Build.Step) = .init(b.allocator);
    defer pkg_steps.deinit();

    if (!skip_stdlib_build) {
        for (stdlib_pkgs) |pkg| {
            const make_cmd = b.addSystemCommand(&.{
                "make",
                "-f",
                std.fmt.allocPrint(b.allocator, "{s}/lean.mk", .{lean_mk_dir}) catch unreachable,
            });

            // If package has a src_dir, change to it (like CMake does for Lake: -C lake)
            if (pkg.src_dir) |src_dir| {
                make_cmd.setCwd(b.path(src_dir));
                // Lake uses relative paths from within src_dir
                // Absolute output paths keep the lean.mk invocation independent
                // of the package cwd.
                make_cmd.addArgs(&.{ "objs", "lib", "lib.export" });
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "LEAN={s}", .{lean_bin}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "LEANC={s}", .{leanc_bin}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "{s}/LakeMain.o.export", .{temp_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "PKG={s}", .{pkg.name}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "OUT={s}", .{stdlib_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "LIB_OUT={s}", .{olean_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "TEMP_OUT={s}", .{temp_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "OLEAN_OUT={s}", .{olean_out}) catch unreachable);
            } else {
                // Init/Std/Lean: run from src/ directory
                make_cmd.setCwd(b.path("src"));
                make_cmd.addArgs(&.{ "objs", "lib", "lib.export" });
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "LEAN={s}", .{lean_bin}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "LEANC={s}", .{leanc_bin}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "PKG={s}", .{pkg.name}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "OUT={s}", .{stdlib_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "LIB_OUT={s}", .{olean_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "TEMP_OUT={s}", .{temp_out}) catch unreachable);
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "OLEAN_OUT={s}", .{olean_out}) catch unreachable);
            }
            if (pkg.extra_src_roots.len > 0) {
                make_cmd.addArg(std.fmt.allocPrint(b.allocator, "EXTRA_SRC_ROOTS={s}", .{pkg.extra_src_roots}) catch unreachable);
            }

            // Environment: LEAN, LEANC, LEAN_PATH
            make_cmd.setEnvironmentVariable("LEAN", lean_bin);
            make_cmd.setEnvironmentVariable("LEANC", leanc_bin);
            // LEAN_PATH is set by lean.mk (line 49: export LEAN_PATH += :$(OLEAN_OUT)).

            // Wire dependencies on prior package steps
            for (pkg.deps) |dep| {
                if (pkg_steps.get(dep)) |dep_step| {
                    make_cmd.step.dependOn(dep_step);
                }
            }

            lean_compile_step.dependOn(&make_cmd.step);
            pkg_steps.put(pkg.name, &make_cmd.step) catch {};
        }
    }
    const install_stdlib_dir = b.addInstallDirectory(.{
        .source_dir = .{ .cwd_relative = olean_out },
        .install_dir = .lib,
        .install_subdir = "lean",
    });
    if (!skip_stdlib_build) {
        install_stdlib_dir.step.dependOn(lean_compile_step);
    }

    // ── Step 5: Link libleanshared ─────────────────────────────────────────
    // Combines the stage1 stdlib archives with the cutover runtime.
    const link_step = b.step("link", "Link libleanshared from all static libraries");
    const mkdir_lib = b.addSystemCommand(&.{ "mkdir", "-p" });
    mkdir_lib.addArg(std.fmt.allocPrint(b.allocator, "{s}/lib", .{b.install_path}) catch unreachable);
    link_step.dependOn(&mkdir_lib.step);

    // On macOS: link all archives into a shared library
    const link_cmd = b.addSystemCommand(&.{ "zig", "c++", "-shared" });
    link_cmd.step.dependOn(&mkdir_lib.step);
    link_cmd.addArg("-o");
    link_cmd.addArg(std.fmt.allocPrint(b.allocator, "{s}/lib/libleanshared.dylib", .{b.install_path}) catch unreachable);
    link_cmd.addArg("-Wl,-install_name,@rpath/libleanshared.dylib");
    if (lean_zig_runtime) {
        const rt_lib = zig_rt_link_lib orelse unreachable;
        if (lean_zig_rt_cutover) {
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}", .{stage1_shell_archive}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libInit.a", .{stdlib_out}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libStd.a", .{stdlib_out}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libLean.a", .{stdlib_out}));
            link_cmd.addArg(stage1_cpp_archive);
            link_cmd.addArg(rt_lib);
            link_cmd.addArg(if (skip_zig_rt_rebuild) stage1_kernel_entrypoints_lib else zig_rt_kernel_entrypoints_lib);
            link_cmd.addArg(stage1_rt_archive);
        } else {
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}", .{rt_lib}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libInit.a", .{stdlib_out}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libStd.a", .{stdlib_out}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libLean.a", .{stdlib_out}));
            link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/lean/libLake.a", .{stdlib_out}));
        }
    } else {
        link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/libleanshell.a", .{b.install_path}));
        link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/libleaninitialize.a", .{b.install_path}));
        link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/libleanrt.a", .{b.install_path}));
        link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/libkernel.a", .{b.install_path}));
        link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/libutil.a", .{b.install_path}));
        link_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/liblibrary.a", .{b.install_path}));
    }
    var link_libs: std.ArrayList([]const u8) = .empty;
    defer link_libs.deinit(b.allocator);
    link_libs.appendSlice(b.allocator, &.{ "-L/opt/homebrew/lib", "-luv", "-lpthread", "-lm", "-lc++" }) catch unreachable;
    if (use_gmp) {
        link_libs.append(b.allocator, "-lgmp") catch unreachable;
    }
    link_cmd.addArgs(link_libs.items);
    link_step.dependOn(&link_cmd.step);
    if (!skip_stdlib_build) {
        link_cmd.step.dependOn(lean_compile_step);
    }
    if (zig_rt_step) |rt| link_cmd.step.dependOn(&rt.step);

    // ── Step 6: Build lean executable ───────────────────────────────────────
    const lean_exe_step = b.step("lean-exe", "Build lean executable");
    const mkdir_bin = b.addSystemCommand(&.{ "mkdir", "-p" });
    mkdir_bin.addArg(std.fmt.allocPrint(b.allocator, "{s}/bin", .{b.install_path}) catch unreachable);
    lean_exe_step.dependOn(&mkdir_bin.step);

    if (skip_leanshared_rebuild) {
        requireExistingPath(stage1_leanmain_archive, "previous-stage libleanmain.a");
        requireExistingPath(stage1_leanshared_dylib, "previous-stage libleanshared.dylib");
        requireExistingPath(stage1_leanshared_1_dylib, "previous-stage libleanshared_1.dylib");
        requireExistingPath(stage1_leanshared_2_dylib, "previous-stage libleanshared_2.dylib");
        requireExistingPath(stage1_init_shared_dylib, "previous-stage libInit_shared.dylib");

        const mkdir_lib_lean = b.addSystemCommand(&.{ "mkdir", "-p" });
        mkdir_lib_lean.addArg(std.fmt.allocPrint(b.allocator, "{s}/lib/lean", .{b.install_path}) catch unreachable);
        lean_exe_step.dependOn(&mkdir_lib_lean.step);

        const copy_shared_libs = b.addSystemCommand(&.{"cp"});
        copy_shared_libs.step.dependOn(&mkdir_lib_lean.step);
        copy_shared_libs.addArgs(&.{
            stage1_leanshared_dylib,
            stage1_leanshared_1_dylib,
            stage1_leanshared_2_dylib,
            std.fmt.allocPrint(b.allocator, "{s}/lib", .{b.install_path}) catch unreachable,
        });
        lean_exe_step.dependOn(&copy_shared_libs.step);

        const copy_init_shared = b.addSystemCommand(&.{"cp"});
        copy_init_shared.step.dependOn(&mkdir_lib_lean.step);
        copy_init_shared.addArgs(&.{
            stage1_init_shared_dylib,
            std.fmt.allocPrint(b.allocator, "{s}/lib/lean", .{b.install_path}) catch unreachable,
        });
        lean_exe_step.dependOn(&copy_init_shared.step);

        const lean_exe_cmd = b.addSystemCommand(&.{ "bash", stage1_leanc_sh });
        lean_exe_cmd.step.dependOn(&mkdir_bin.step);
        lean_exe_cmd.step.dependOn(&copy_shared_libs.step);
        lean_exe_cmd.step.dependOn(&copy_init_shared.step);
        lean_exe_cmd.addArg(stage1_leanmain_archive);
        const install_lib = std.fmt.allocPrint(b.allocator, "{s}/lib", .{b.install_path}) catch unreachable;
        lean_exe_cmd.addArg(b.fmt("-L{s}", .{install_lib}));
        lean_exe_cmd.addArg(b.fmt("-L{s}/lean", .{install_lib}));
        lean_exe_cmd.addArgs(&.{
            "-lInit_shared",                      "-lleanshared_2",                          "-lleanshared_1", "-lleanshared",
            "-Wl,-rpath,@executable_path/../lib", "-Wl,-rpath,@executable_path/../lib/lean", "-o",
        });
        lean_exe_cmd.addArg(std.fmt.allocPrint(b.allocator, "{s}/bin/lean", .{b.install_path}) catch unreachable);
        lean_exe_step.dependOn(&lean_exe_cmd.step);
        lean_exe_cmd.step.dependOn(&install_stdlib_dir.step);
    } else {
        const lean_exe_cmd = b.addSystemCommand(&.{ "zig", "c++" });
        lean_exe_cmd.step.dependOn(&mkdir_bin.step);
        lean_exe_cmd.addArg("-o");
        lean_exe_cmd.addArg(std.fmt.allocPrint(b.allocator, "{s}/bin/lean", .{b.install_path}) catch unreachable);
        lean_exe_cmd.addArg(std.fmt.allocPrint(b.allocator, "{s}/lib/libleanshared.dylib", .{b.install_path}) catch unreachable);
        lean_exe_cmd.addArg(b.fmt("-Wl,-force_load,{s}/lib/libleanmain.a", .{b.install_path}));
        var exe_libs: std.ArrayList([]const u8) = .empty;
        defer exe_libs.deinit(b.allocator);
        exe_libs.appendSlice(b.allocator, &.{ "-L/opt/homebrew/lib", "-luv", "-lpthread", "-lm", "-lc++", "-Wl,-rpath,@loader_path/../lib" }) catch unreachable;
        if (use_gmp) {
            exe_libs.append(b.allocator, "-lgmp") catch unreachable;
        }
        lean_exe_cmd.addArgs(exe_libs.items);
        lean_exe_step.dependOn(&lean_exe_cmd.step);
        lean_exe_cmd.step.dependOn(link_step);
        lean_exe_cmd.step.dependOn(&install_stdlib_dir.step);
    }
    b.getInstallStep().dependOn(lean_exe_step);

    // ── Test step ──────────────────────────────────────────────────────────
    const test_step = b.step("test", "Run Zig runtime tests");
    const test_cmd = b.addSystemCommand(&.{ "zig", "build", "test" });
    test_cmd.setCwd(b.path("src/runtime/zig"));
    test_step.dependOn(&test_cmd.step);

    // ── Transitional stage wrappers ─────────────────────────────────────────
    //
    // These keep `zig build <target>` aligned with the existing top-level
    // bootstrap targets until the unified build fully owns stage orchestration.
    const release_make_dir = b.pathFromRoot("build/release");

    inline for ([_]struct { name: []const u8, desc: []const u8 }{
        .{ .name = "stage0", .desc = "Build stage0 via the existing bootstrap make target" },
        .{ .name = "stage1", .desc = "Build stage1 via the existing bootstrap make target" },
        .{ .name = "stage2", .desc = "Build stage2 via the existing bootstrap make target" },
        .{ .name = "stage3", .desc = "Build stage3 via the existing bootstrap make target" },
        .{ .name = "update-stage0", .desc = "Update stage0 via the existing bootstrap make target" },
        .{ .name = "bench", .desc = "Run the existing benchmark target" },
    }) |bootstrap_target| {
        const step = b.step(bootstrap_target.name, bootstrap_target.desc);
        const cmd = b.addSystemCommand(&.{ "make", "-C", release_make_dir, bootstrap_target.name });
        step.dependOn(&cmd.step);
    }

    const check_stage3_step = b.step("check-stage3", "Diff stage2 and stage3 lean binaries");
    const check_stage3_cmd = b.addSystemCommand(&.{
        "diff",
        "build/release/stage2/bin/lean",
        "build/release/stage3/bin/lean",
    });
    check_stage3_cmd.setCwd(b.path("."));
    check_stage3_step.dependOn(&check_stage3_cmd.step);
}
