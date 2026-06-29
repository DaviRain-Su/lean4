const std = @import("std");

const Build = std.Build;
const Step = Build.Step;
const json = std.json;
const mem = std.mem;

const BuildProfile = enum {
    release,
    @"dev-release",
    debug,
    relwithassert,
    sanitize,
    sandebug,

    fn presetName(self: BuildProfile) []const u8 {
        return switch (self) {
            .release => "release",
            .@"dev-release" => "dev-release",
            .debug => "debug",
            .relwithassert => "relwithassert",
            .sanitize => "sanitize",
            .sandebug => "sandebug",
        };
    }

    fn defaultBinaryDir(self: BuildProfile) []const u8 {
        return switch (self) {
            .release, .@"dev-release" => "build/release",
            .debug => "build/debug",
            .relwithassert => "build/relwithassert",
            .sanitize => "build/sanitize",
            .sandebug => "build/sandebug",
        };
    }
};

const StageName = enum {
    stage1,
    stage2,
    stage3,

    fn asString(self: StageName) []const u8 {
        return @tagName(self);
    }
};

const DriverCommand = enum {
    configure,
    root_target,
    stage_target,
    ctest,

    fn asString(self: DriverCommand) []const u8 {
        return switch (self) {
            .configure => "configure",
            .root_target => "root-target",
            .stage_target => "stage-target",
            .ctest => "ctest",
        };
    }
};

const StageSteps = struct {
    stage1: *Step,
    stage2: *Step,
    stage3: *Step,
};

const DriverConfig = struct {
    command: DriverCommand,
    profile: BuildProfile,
    binary_dir: []const u8,
    jobs: usize,
    install_prefix: []const u8,
    cmake_args: []const []const u8,
    make_args: []const []const u8,
    ctest_args: []const []const u8,
    ctest_junit: ?[]const u8,
    target: ?[]const u8,
    stage: ?StageName,
    stage_target: ?[]const u8,
};

const DriverFiles = struct {
    shell: Build.LazyPath,
    metadata: Build.LazyPath,
};

pub fn build(b: *Build) void {
    const profile = b.option(BuildProfile, "profile", "Build profile: release, dev-release, debug, relwithassert, sanitize, or sandebug") orelse .@"dev-release";
    const binary_dir = b.option([]const u8, "binary-dir", "Build directory override. Defaults to the CMake preset's standard output path.") orelse profile.defaultBinaryDir();
    const requested_jobs = b.option(usize, "jobs", "Parallelism for make and ctest. 0 means auto-detect.") orelse 0;
    const jobs = if (requested_jobs == 0) defaultJobs() else requested_jobs;
    const selected_stage = b.option(StageName, "stage", "Stage to use for stage-local commands such as test, install, and update-stage0. Default: stage1.") orelse .stage1;
    const ctest_junit = b.option([]const u8, "ctest-junit", "Path passed to ctest --output-junit.");
    const raw_cmake_args = b.option([]const []const u8, "cmake-arg", "Extra argv element passed to cmake --preset. Repeat once per argument.") orelse &.{};
    const make_args = b.option([]const []const u8, "make-arg", "Extra argv element passed to make. Repeat once per argument.") orelse &.{};
    const ctest_args = b.option([]const []const u8, "ctest-arg", "Extra argv element passed to ctest. Repeat once per argument.") orelse &.{};

    const cmake_args = normalizeCmakeArgs(b, raw_cmake_args, b.install_path);

    const configure_step = addNamedStep(
        b,
        "configure",
        "Run CMake configure for the selected profile and build directory",
        createDriverCommand(
            b,
            .{
                .command = .configure,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = null,
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{},
    );

    const stage1_configure_step = addNamedStep(
        b,
        "stage1-configure",
        "Build stage0 and configure the stage1 sub-build",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "stage1-configure",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    const stage1_step = addNamedStep(
        b,
        "stage1",
        "Build stage1",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "stage1",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    const stage2_step = addNamedStep(
        b,
        "stage2",
        "Build stage2",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "stage2",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    const stage3_step = addNamedStep(
        b,
        "stage3",
        "Build stage3",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "stage3",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    const stages = StageSteps{
        .stage1 = stage1_step,
        .stage2 = stage2_step,
        .stage3 = stage3_step,
    };
    const selected_stage_step = stageStep(selected_stage, stages);

    _ = addNamedStep(
        b,
        "test",
        "Run ctest against the selected stage (default stage1)",
        createDriverCommand(
            b,
            .{
                .command = .ctest,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = null,
                .stage = selected_stage,
                .stage_target = null,
            },
        ),
        &.{selected_stage_step},
    );

    _ = addNamedStep(
        b,
        "bench",
        "Run the full benchmark suite",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "bench",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    _ = addNamedStep(
        b,
        "bench-part1",
        "Run benchmark suite part 1",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "bench-part1",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    _ = addNamedStep(
        b,
        "bench-part2",
        "Run benchmark suite part 2",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "bench-part2",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    _ = addNamedStep(
        b,
        "clean-stdlib",
        "Remove generated stdlib artifacts from the selected build directory",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "clean-stdlib",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{configure_step},
    );

    _ = addNamedStep(
        b,
        "cache-get",
        "Download the Lake cache for the selected build directory",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "cache-get",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{stage1_configure_step},
    );

    _ = addNamedStep(
        b,
        "check-stage3",
        "Build stage3 and compare it against stage2",
        createDriverCommand(
            b,
            .{
                .command = .root_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = "check-stage3",
                .stage = null,
                .stage_target = null,
            },
        ),
        &.{stage3_step},
    );

    _ = addNamedStep(
        b,
        "update-stage0",
        "Refresh stage0 from the selected stage (default stage1)",
        createDriverCommand(
            b,
            .{
                .command = .stage_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = null,
                .stage = selected_stage,
                .stage_target = "update-stage0",
            },
        ),
        &.{selected_stage_step},
    );

    _ = addNamedStep(
        b,
        "update-stage0-commit",
        "Refresh stage0 from the selected stage and create the update commit",
        createDriverCommand(
            b,
            .{
                .command = .stage_target,
                .profile = profile,
                .binary_dir = binary_dir,
                .jobs = jobs,
                .install_prefix = b.install_path,
                .cmake_args = cmake_args,
                .make_args = make_args,
                .ctest_args = ctest_args,
                .ctest_junit = ctest_junit,
                .target = null,
                .stage = selected_stage,
                .stage_target = "update-stage0-commit",
            },
        ),
        &.{selected_stage_step},
    );

    const install_cmd = createDriverCommand(
        b,
        .{
            .command = .stage_target,
            .profile = profile,
            .binary_dir = binary_dir,
            .jobs = jobs,
            .install_prefix = b.install_path,
            .cmake_args = cmake_args,
            .make_args = make_args,
            .ctest_args = ctest_args,
            .ctest_junit = ctest_junit,
            .target = null,
            .stage = selected_stage,
            .stage_target = "install",
        },
    );
    const install_step = b.getInstallStep();
    install_step.dependOn(selected_stage_step);
    install_step.dependOn(&install_cmd.step);

    b.default_step = stage1_step;
}

fn addNamedStep(
    b: *Build,
    name: []const u8,
    description: []const u8,
    cmd: *Build.Step.Run,
    deps: []const *Step,
) *Step {
    const step = b.step(name, description);
    for (deps) |dep| {
        step.dependOn(dep);
    }
    step.dependOn(&cmd.step);
    return step;
}

fn createDriverCommand(b: *Build, config: DriverConfig) *Build.Step.Run {
    const files = createDriverFiles(b, config);
    const cmd = b.addSystemCommand(&.{ "bash", "-e", "-u", "-o", "pipefail" });
    cmd.addFileArg(b.path("script/zig-build-driver.sh"));
    cmd.addFileArg(files.shell);
    cmd.addFileArg(files.metadata);
    cmd.setCwd(b.path("."));
    return cmd;
}

fn createDriverFiles(b: *Build, config: DriverConfig) DriverFiles {
    const write_files = b.addWriteFiles();
    const stem = driverFileStem(b, config);
    const shell = write_files.add(b.fmt("{s}.sh", .{stem}), renderShellConfig(b, config));
    const metadata = write_files.add(b.fmt("{s}.json", .{stem}), renderMetadataJson(b, config));
    return .{
        .shell = shell,
        .metadata = metadata,
    };
}

fn driverFileStem(b: *Build, config: DriverConfig) []const u8 {
    return switch (config.command) {
        .configure => "driver-configure",
        .ctest => b.fmt("driver-ctest-{s}", .{config.stage.?.asString()}),
        .root_target => b.fmt("driver-root-{s}", .{config.target.?}),
        .stage_target => b.fmt("driver-stage-{s}-{s}", .{ config.stage.?.asString(), config.stage_target.? }),
    };
}

fn normalizeCmakeArgs(b: *Build, raw_args: []const []const u8, install_prefix: []const u8) []const []const u8 {
    if (hasArgPrefix(raw_args, "-DLEAN_INSTALL_PREFIX=")) {
        return raw_args;
    }

    var args = std.array_list.Managed([]const u8).init(b.allocator);
    defer args.deinit();
    args.appendSlice(raw_args) catch @panic("OOM");
    args.append(b.fmt("-DLEAN_INSTALL_PREFIX={s}", .{install_prefix})) catch @panic("OOM");
    return args.toOwnedSlice() catch @panic("OOM");
}

fn hasArgPrefix(args: []const []const u8, prefix: []const u8) bool {
    for (args) |arg| {
        if (mem.startsWith(u8, arg, prefix)) return true;
    }
    return false;
}

fn defaultJobs() usize {
    return std.Thread.getCpuCount() catch 1;
}

fn stageStep(name: StageName, stages: StageSteps) *Step {
    return switch (name) {
        .stage1 => stages.stage1,
        .stage2 => stages.stage2,
        .stage3 => stages.stage3,
    };
}

fn renderShellConfig(b: *Build, config: DriverConfig) []const u8 {
    var out: std.Io.Writer.Allocating = .init(b.allocator);
    const w = &out.writer;

    writeShellAssignment(w, "COMMAND", config.command.asString());
    writeShellAssignment(w, "PROFILE", config.profile.presetName());
    writeShellAssignment(w, "BINARY_DIR", config.binary_dir);
    writeShellAssignment(w, "JOBS", b.fmt("{}", .{config.jobs}));
    writeShellAssignment(w, "INSTALL_PREFIX", config.install_prefix);
    writeOptionalShellAssignment(w, "TARGET", config.target);
    writeOptionalShellAssignment(w, "STAGE", if (config.stage) |stage| stage.asString() else null);
    writeOptionalShellAssignment(w, "STAGE_TARGET", config.stage_target);
    writeOptionalShellAssignment(w, "CTEST_JUNIT", config.ctest_junit);
    writeShellArray(w, "cmake_args", config.cmake_args);
    writeShellArray(w, "make_args", config.make_args);
    writeShellArray(w, "ctest_args", config.ctest_args);

    return out.toOwnedSlice() catch @panic("OOM");
}

fn writeShellAssignment(w: *std.Io.Writer, name: []const u8, value: []const u8) void {
    w.print("{s}=", .{name}) catch @panic("OOM");
    writeShellQuoted(w, value);
    w.writeByte('\n') catch @panic("OOM");
}

fn writeOptionalShellAssignment(w: *std.Io.Writer, name: []const u8, maybe_value: ?[]const u8) void {
    writeShellAssignment(w, name, maybe_value orelse "");
}

fn writeShellArray(w: *std.Io.Writer, name: []const u8, values: []const []const u8) void {
    w.print("{s}=(\n", .{name}) catch @panic("OOM");
    for (values) |value| {
        w.writeAll("  ") catch @panic("OOM");
        writeShellQuoted(w, value);
        w.writeByte('\n') catch @panic("OOM");
    }
    w.writeAll(")\n") catch @panic("OOM");
}

fn writeShellQuoted(w: *std.Io.Writer, value: []const u8) void {
    w.writeByte('\'') catch @panic("OOM");
    var start: usize = 0;
    while (mem.indexOfScalarPos(u8, value, start, '\'')) |idx| {
        if (idx > start) {
            w.writeAll(value[start..idx]) catch @panic("OOM");
        }
        w.writeAll("'\"'\"'") catch @panic("OOM");
        start = idx + 1;
    }
    if (start < value.len) {
        w.writeAll(value[start..]) catch @panic("OOM");
    }
    w.writeByte('\'') catch @panic("OOM");
}

fn renderMetadataJson(b: *Build, config: DriverConfig) []const u8 {
    const stage_name = if (config.stage) |stage| stage.asString() else null;
    const payload = .{
        .binary_dir = config.binary_dir,
        .cmake_args = config.cmake_args,
        .command = config.command.asString(),
        .ctest_args = config.ctest_args,
        .ctest_junit = config.ctest_junit,
        .install_prefix = config.install_prefix,
        .jobs = config.jobs,
        .make_args = config.make_args,
        .profile = config.profile.presetName(),
        .stage = stage_name,
        .stage_target = config.stage_target,
        .target = config.target,
        .zig_version = @import("builtin").zig_version_string,
    };

    var out: std.Io.Writer.Allocating = .init(b.allocator);
    var stringify: json.Stringify = .{
        .writer = &out.writer,
        .options = .{ .whitespace = .indent_2 },
    };
    stringify.write(payload) catch @panic("OOM");
    out.writer.writeByte('\n') catch @panic("OOM");
    return out.toOwnedSlice() catch @panic("OOM");
}
