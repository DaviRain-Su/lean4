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
    build_target,
    install,
    ctest,
    prepare_bench_stages,
    check_rebootstrap,

    fn asString(self: DriverCommand) []const u8 {
        return switch (self) {
            .configure => "configure",
            .build_target => "build-target",
            .install => "install",
            .ctest => "ctest",
            .prepare_bench_stages => "prepare-bench-stages",
            .check_rebootstrap => "check-rebootstrap",
        };
    }
};

const StageSteps = struct {
    stage1: *Step,
    stage2: *Step,
    stage3: *Step,
};

const CollectedArgs = struct {
    values: []const []const u8,
    specified: bool,
};

const DriverConfig = struct {
    command: DriverCommand,
    profile: BuildProfile,
    binary_dir: []const u8,
    jobs: usize,
    install_prefix: []const u8,
    platform_target: ?[]const u8,
    prepare_llvm_script: ?[]const u8,
    prepare_llvm_args: []const []const u8,
    cmake_args: []const []const u8,
    build_args: []const []const u8,
    ctest_args: []const []const u8,
    ctest_junit: ?[]const u8,
    target: ?[]const u8,
    stage: ?StageName,
    stage_target: ?[]const u8,
    git_commit_message: ?[]const u8,
};

const DriverFiles = struct {
    shell: Build.LazyPath,
    metadata: Build.LazyPath,
};

const SavedDriverMetadata = struct {
    profile: ?BuildProfile = null,
    jobs: ?usize = null,
    platform_target: ?[]const u8 = null,
    prepare_llvm_script: ?[]const u8 = null,
    prepare_llvm_args: []const []const u8 = &.{},
    cmake_args: []const []const u8 = &.{},
};

const DriverDefaults = struct {
    profile: BuildProfile,
    binary_dir: []const u8,
    jobs: usize,
    install_prefix: []const u8,
    platform_target: ?[]const u8,
    prepare_llvm_script: ?[]const u8,
    prepare_llvm_args: []const []const u8,
    cmake_args: []const []const u8,
    build_args: []const []const u8,
    ctest_args: []const []const u8,
    ctest_junit: ?[]const u8,

    fn config(self: DriverDefaults, command: DriverCommand) DriverConfig {
        return .{
            .command = command,
            .profile = self.profile,
            .binary_dir = self.binary_dir,
            .jobs = self.jobs,
            .install_prefix = self.install_prefix,
            .platform_target = self.platform_target,
            .prepare_llvm_script = self.prepare_llvm_script,
            .prepare_llvm_args = self.prepare_llvm_args,
            .cmake_args = self.cmake_args,
            .build_args = self.build_args,
            .ctest_args = self.ctest_args,
            .ctest_junit = self.ctest_junit,
            .target = null,
            .stage = null,
            .stage_target = null,
            .git_commit_message = null,
        };
    }

    fn buildTargetConfig(self: DriverDefaults, stage: ?StageName, target: []const u8) DriverConfig {
        var cfg = self.config(.build_target);
        cfg.stage = stage;
        cfg.target = target;
        return cfg;
    }

    fn ctestConfig(self: DriverDefaults, stage: StageName, junit_path: ?[]const u8) DriverConfig {
        var cfg = self.config(.ctest);
        cfg.stage = stage;
        cfg.ctest_junit = junit_path;
        return cfg;
    }

    fn installConfig(self: DriverDefaults, stage: StageName) DriverConfig {
        var cfg = self.config(.install);
        cfg.stage = stage;
        return cfg;
    }

    fn prepareBenchStagesConfig(self: DriverDefaults) DriverConfig {
        var cfg = self.config(.prepare_bench_stages);
        cfg.stage = .stage1;
        return cfg;
    }

    fn checkRebootstrapConfig(self: DriverDefaults) DriverConfig {
        var cfg = self.config(.check_rebootstrap);
        cfg.target = "stage1";
        cfg.stage = .stage1;
        cfg.stage_target = "update-stage0";
        cfg.git_commit_message = "chore: update-stage0";
        return cfg;
    }
};

pub fn build(b: *Build) void {
    const requested_profile = b.option(BuildProfile, "profile", "Build profile: release, dev-release, debug, relwithassert, sanitize, or sandebug");
    const bootstrap_profile = requested_profile orelse .@"dev-release";
    const binary_dir = b.option([]const u8, "binary-dir", "Build directory override. Defaults to the CMake preset's standard output path.") orelse bootstrap_profile.defaultBinaryDir();
    const saved_metadata = loadSavedDriverMetadata(b, binary_dir);
    const profile = requested_profile orelse resolveSavedProfile(saved_metadata) orelse .@"dev-release";
    const requested_jobs = b.option(usize, "jobs", "Parallelism for cmake --build and ctest. 0 means auto-detect.");
    const jobs = resolveJobs(requested_jobs, saved_metadata);
    const selected_stage = b.option(StageName, "stage", "Stage to use for stage-local commands such as test, install, and update-stage0. Default: stage1.") orelse .stage1;
    const ctest_junit = b.option([]const u8, "ctest-junit", "Path passed to ctest --output-junit.");
    const requested_platform_target = b.option([]const u8, "platform-target", "Target triple forwarded to prepare-llvm via EXTRA_FLAGS and to CMake as -DLEAN_PLATFORM_TARGET.");
    const requested_prepare_llvm_script = b.option([]const u8, "prepare-llvm-script", "Optional helper invoked from the build directory during configure to append platform-specific CMake flags.");
    const prepare_llvm_args_request = collectArgs(
        b,
        "prepare-llvm-arg",
        "Extra positional argv passed to the prepare-llvm helper. Repeat once per argument.",
        "prepare-llvm-args-json",
        "JSON array of extra positional argv passed to the prepare-llvm helper.",
    );
    const cmake_args_request = collectArgs(
        b,
        "cmake-arg",
        "Extra argv element passed to cmake --preset. Repeat once per argument.",
        "cmake-args-json",
        "JSON array of extra argv elements passed to cmake --preset.",
    );
    const build_args_request = collectArgsWithLegacy(
        b,
        "build-arg",
        "Extra native-build-tool argv element passed after cmake --build --. Repeat once per argument.",
        "build-args-json",
        "JSON array of extra native-build-tool argv elements passed after cmake --build --.",
        "make-arg",
        "Legacy alias for -Dbuild-arg.",
        "make-args-json",
        "Legacy alias for -Dbuild-args-json.",
    );
    const ctest_args_request = collectArgs(
        b,
        "ctest-arg",
        "Extra argv element passed to ctest. Repeat once per argument.",
        "ctest-args-json",
        "JSON array of extra argv elements passed to ctest.",
    );

    const platform_target = resolvePlatformTarget(requested_platform_target, saved_metadata);
    const prepare_llvm_script = resolvePrepareLlvmScript(requested_prepare_llvm_script, saved_metadata);
    const prepare_llvm_args = resolvePrepareLlvmArgs(requested_prepare_llvm_script, prepare_llvm_args_request, saved_metadata);
    const configure_cmake_args = normalizeCmakeArgs(b, cmake_args_request.values, b.install_path, platform_target);
    const inherited_cmake_args = resolveInheritedCmakeArgs(cmake_args_request, configure_cmake_args, saved_metadata);
    const configure_defaults: DriverDefaults = .{
        .profile = profile,
        .binary_dir = binary_dir,
        .jobs = jobs,
        .install_prefix = b.install_path,
        .platform_target = platform_target,
        .prepare_llvm_script = prepare_llvm_script,
        .prepare_llvm_args = prepare_llvm_args,
        .cmake_args = configure_cmake_args,
        .build_args = build_args_request.values,
        .ctest_args = ctest_args_request.values,
        .ctest_junit = ctest_junit,
    };
    const runtime_defaults: DriverDefaults = .{
        .profile = profile,
        .binary_dir = binary_dir,
        .jobs = jobs,
        .install_prefix = b.install_path,
        .platform_target = platform_target,
        .prepare_llvm_script = prepare_llvm_script,
        .prepare_llvm_args = prepare_llvm_args,
        .cmake_args = inherited_cmake_args,
        .build_args = build_args_request.values,
        .ctest_args = ctest_args_request.values,
        .ctest_junit = ctest_junit,
    };

    _ = addDriverStep(
        b,
        "configure",
        "Run CMake configure for the selected profile and build directory",
        configure_defaults.config(.configure),
        &.{},
    );

    const configure_dependency_cmd = createDriverCommand(b, runtime_defaults.config(.configure));

    const stage1_configure_step = addRootTargetStep(
        b,
        runtime_defaults,
        "stage1-configure",
        "Build stage0 and configure the stage1 sub-build",
        "stage1-configure",
        &.{&configure_dependency_cmd.step},
    );

    const stage1_step = addRootTargetStep(
        b,
        runtime_defaults,
        "stage1",
        "Build stage1",
        "stage1",
        &.{&configure_dependency_cmd.step},
    );

    const stage2_step = addRootTargetStep(
        b,
        runtime_defaults,
        "stage2",
        "Build stage2",
        "stage2",
        &.{&configure_dependency_cmd.step},
    );

    const stage3_step = addRootTargetStep(
        b,
        runtime_defaults,
        "stage3",
        "Build stage3",
        "stage3",
        &.{&configure_dependency_cmd.step},
    );

    const stages = StageSteps{
        .stage1 = stage1_step,
        .stage2 = stage2_step,
        .stage3 = stage3_step,
    };
    const selected_stage_step = stageStep(selected_stage, stages);
    const default_stage_junit_path = b.fmt("{s}/{s}/test-results.xml", .{ runtime_defaults.binary_dir, selected_stage.asString() });

    _ = addCTestStep(
        b,
        runtime_defaults,
        "test",
        "Run ctest against the selected stage (default stage1)",
        selected_stage,
        runtime_defaults.ctest_junit,
        &.{selected_stage_step},
    );

    _ = addCTestStep(
        b,
        runtime_defaults,
        "test-junit",
        "Run ctest against the selected stage and write JUnit output to the standard stage-local path",
        selected_stage,
        runtime_defaults.ctest_junit orelse default_stage_junit_path,
        &.{selected_stage_step},
    );

    _ = addRootTargetStep(b, runtime_defaults, "bench", "Run the full benchmark suite", "bench", &.{&configure_dependency_cmd.step});
    _ = addRootTargetStep(b, runtime_defaults, "bench-part1", "Run benchmark suite part 1", "bench-part1", &.{&configure_dependency_cmd.step});
    _ = addRootTargetStep(b, runtime_defaults, "bench-part2", "Run benchmark suite part 2", "bench-part2", &.{&configure_dependency_cmd.step});
    _ = addRootTargetStep(b, runtime_defaults, "clean-stdlib", "Remove generated stdlib artifacts from the selected build directory", "clean-stdlib", &.{&configure_dependency_cmd.step});
    _ = addRootTargetStep(b, runtime_defaults, "cache-get", "Download the Lake cache for the selected build directory", "cache-get", &.{stage1_configure_step});
    _ = addRootTargetStep(b, runtime_defaults, "check-stage3", "Build stage3 and compare it against stage2", "check-stage3", &.{stage3_step});
    _ = addStageTargetStep(b, runtime_defaults, "update-stage0", "Refresh stage0 from the selected stage (default stage1)", selected_stage, "update-stage0", &.{selected_stage_step});
    _ = addStageTargetStep(b, runtime_defaults, "update-stage0-commit", "Refresh stage0 from the selected stage and create the update commit", selected_stage, "update-stage0-commit", &.{selected_stage_step});
    attachInstallStep(b, runtime_defaults, selected_stage, &.{selected_stage_step});

    const prepare_bench_stages_step = addDriverStep(
        b,
        "prepare-bench-stages",
        "Copy stage1 into stage2 and stage3 build directories for benchmark-oriented flows",
        runtime_defaults.prepareBenchStagesConfig(),
        &.{stage1_step},
    );

    _ = addRootTargetStep(
        b,
        runtime_defaults,
        "bench-stage2",
        "Prepare benchmark staging directories and then build stage2",
        "stage2",
        &.{prepare_bench_stages_step},
    );

    _ = addDriverStep(
        b,
        "check-rebootstrap",
        "Update stage0 from stage1, create the checkpoint commit, rebuild stage1, and rerun stage1 tests",
        runtime_defaults.checkRebootstrapConfig(),
        &.{stage1_configure_step},
    );

    b.default_step = stage1_step;
}

fn addDriverStep(
    b: *Build,
    name: []const u8,
    description: []const u8,
    config: DriverConfig,
    deps: []const *Step,
) *Step {
    return addNamedStep(b, name, description, createDriverCommand(b, config), deps);
}

fn addRootTargetStep(
    b: *Build,
    defaults: DriverDefaults,
    name: []const u8,
    description: []const u8,
    target: []const u8,
    deps: []const *Step,
) *Step {
    return addDriverStep(b, name, description, defaults.buildTargetConfig(null, target), deps);
}

fn addStageTargetStep(
    b: *Build,
    defaults: DriverDefaults,
    name: []const u8,
    description: []const u8,
    stage: StageName,
    stage_target: []const u8,
    deps: []const *Step,
) *Step {
    return addDriverStep(b, name, description, defaults.buildTargetConfig(stage, stage_target), deps);
}

fn addCTestStep(
    b: *Build,
    defaults: DriverDefaults,
    name: []const u8,
    description: []const u8,
    stage: StageName,
    junit_path: ?[]const u8,
    deps: []const *Step,
) *Step {
    return addDriverStep(b, name, description, defaults.ctestConfig(stage, junit_path), deps);
}

fn attachInstallStep(
    b: *Build,
    defaults: DriverDefaults,
    stage: StageName,
    deps: []const *Step,
) void {
    const install_cmd = createDriverCommand(b, defaults.installConfig(stage));
    const install_step = b.getInstallStep();
    for (deps) |dep| {
        install_step.dependOn(dep);
    }
    install_step.dependOn(&install_cmd.step);
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
        .install => b.fmt("driver-install-{s}", .{config.stage.?.asString()}),
        .build_target => if (config.stage) |stage|
            b.fmt("driver-stage-{s}-{s}", .{ stage.asString(), config.target.? })
        else
            b.fmt("driver-root-{s}", .{config.target.?}),
        .prepare_bench_stages => "driver-prepare-bench-stages",
        .check_rebootstrap => "driver-check-rebootstrap",
    };
}

fn normalizeCmakeArgs(
    b: *Build,
    raw_args: []const []const u8,
    install_prefix: []const u8,
    platform_target: ?[]const u8,
) []const []const u8 {
    const needs_install_prefix = !hasArgPrefix(raw_args, "-DLEAN_INSTALL_PREFIX=");
    const needs_platform_target = platform_target != null and !hasArgPrefix(raw_args, "-DLEAN_PLATFORM_TARGET=");

    if (!needs_install_prefix and !needs_platform_target) {
        return raw_args;
    }

    var args = std.array_list.Managed([]const u8).init(b.allocator);
    defer args.deinit();
    args.appendSlice(raw_args) catch @panic("OOM");
    if (needs_install_prefix) {
        args.append(b.fmt("-DLEAN_INSTALL_PREFIX={s}", .{install_prefix})) catch @panic("OOM");
    }
    if (needs_platform_target) {
        args.append(b.fmt("-DLEAN_PLATFORM_TARGET={s}", .{platform_target.?})) catch @panic("OOM");
    }
    return args.toOwnedSlice() catch @panic("OOM");
}

fn resolveInheritedCmakeArgs(
    requested_args: CollectedArgs,
    configured_args: []const []const u8,
    saved_metadata: ?SavedDriverMetadata,
) []const []const u8 {
    if (requested_args.specified) return configured_args;
    if (saved_metadata) |metadata| {
        if (metadata.cmake_args.len != 0) return metadata.cmake_args;
    }
    return configured_args;
}

fn loadSavedDriverMetadata(b: *Build, binary_dir: []const u8) ?SavedDriverMetadata {
    const metadata_path = b.pathFromRoot(b.pathJoin(&.{ binary_dir, ".zig-driver.json" }));
    const contents = std.Io.Dir.cwd().readFileAlloc(
        b.graph.io,
        metadata_path,
        b.allocator,
        .limited(1024 * 1024),
    ) catch |err| switch (err) {
        error.FileNotFound => return null,
        else => std.debug.panic("failed to read saved Zig driver metadata at {s}: {s}", .{
            metadata_path,
            @errorName(err),
        }),
    };

    return json.parseFromSliceLeaky(SavedDriverMetadata, b.allocator, contents, .{
        .ignore_unknown_fields = true,
    }) catch |err| {
        std.debug.panic("failed to parse saved Zig driver metadata at {s}: {s}", .{
            metadata_path,
            @errorName(err),
        });
    };
}

fn resolveSavedProfile(saved_metadata: ?SavedDriverMetadata) ?BuildProfile {
    if (saved_metadata) |metadata| return metadata.profile;
    return null;
}

fn resolvePrepareLlvmScript(requested_script: ?[]const u8, saved_metadata: ?SavedDriverMetadata) ?[]const u8 {
    if (requested_script) |script| return script;
    if (saved_metadata) |metadata| return metadata.prepare_llvm_script;
    return null;
}

fn resolvePlatformTarget(requested_target: ?[]const u8, saved_metadata: ?SavedDriverMetadata) ?[]const u8 {
    if (requested_target) |target| return target;
    if (saved_metadata) |metadata| return metadata.platform_target;
    return null;
}

fn resolvePrepareLlvmArgs(
    requested_script: ?[]const u8,
    requested_args: CollectedArgs,
    saved_metadata: ?SavedDriverMetadata,
) []const []const u8 {
    if (requested_script != null or requested_args.specified) return requested_args.values;
    if (saved_metadata) |metadata| {
        if (metadata.prepare_llvm_script != null) return metadata.prepare_llvm_args;
    }
    return &.{};
}

fn resolveJobs(requested_jobs: ?usize, saved_metadata: ?SavedDriverMetadata) usize {
    if (requested_jobs) |jobs| {
        return if (jobs == 0) defaultJobs() else jobs;
    }
    if (saved_metadata) |metadata| {
        if (metadata.jobs) |jobs| return jobs;
    }
    return defaultJobs();
}

fn hasArgPrefix(args: []const []const u8, prefix: []const u8) bool {
    for (args) |arg| {
        if (mem.startsWith(u8, arg, prefix)) return true;
    }
    return false;
}

fn collectArgs(
    b: *Build,
    repeated_name: []const u8,
    repeated_help: []const u8,
    json_name: []const u8,
    json_help: []const u8,
) CollectedArgs {
    const repeated = b.option([]const []const u8, repeated_name, repeated_help) orelse &.{};
    const json_source = b.option([]const u8, json_name, json_help);
    const json_values = if (json_source) |source| parseJsonStringArray(b, json_name, source) else &.{};

    if (json_values.len == 0) {
        return .{
            .values = repeated,
            .specified = json_source != null or repeated.len != 0,
        };
    }
    if (repeated.len == 0) {
        return .{
            .values = json_values,
            .specified = true,
        };
    }

    var merged = std.array_list.Managed([]const u8).init(b.allocator);
    defer merged.deinit();
    merged.appendSlice(json_values) catch @panic("OOM");
    merged.appendSlice(repeated) catch @panic("OOM");
    return .{
        .values = merged.toOwnedSlice() catch @panic("OOM"),
        .specified = true,
    };
}

fn collectArgsWithLegacy(
    b: *Build,
    repeated_name: []const u8,
    repeated_help: []const u8,
    json_name: []const u8,
    json_help: []const u8,
    legacy_repeated_name: []const u8,
    legacy_repeated_help: []const u8,
    legacy_json_name: []const u8,
    legacy_json_help: []const u8,
) CollectedArgs {
    const primary = collectArgs(b, repeated_name, repeated_help, json_name, json_help);
    const legacy = collectArgs(b, legacy_repeated_name, legacy_repeated_help, legacy_json_name, legacy_json_help);

    if (!legacy.specified) return primary;
    if (!primary.specified) return legacy;
    if (legacy.values.len == 0) return primary;
    if (primary.values.len == 0) return legacy;

    var merged = std.array_list.Managed([]const u8).init(b.allocator);
    defer merged.deinit();
    merged.appendSlice(legacy.values) catch @panic("OOM");
    merged.appendSlice(primary.values) catch @panic("OOM");
    return .{
        .values = merged.toOwnedSlice() catch @panic("OOM"),
        .specified = true,
    };
}

fn parseJsonStringArray(b: *Build, option_name: []const u8, source: []const u8) []const []const u8 {
    const parsed = json.parseFromSliceLeaky(?[]const []const u8, b.allocator, source, .{}) catch |err| {
        std.debug.panic("failed to parse -D{s} as a JSON string array: {s}", .{
            option_name,
            @errorName(err),
        });
    };
    return parsed orelse &.{};
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
    writeOptionalShellAssignment(w, "PLATFORM_TARGET", config.platform_target);
    writeOptionalShellAssignment(w, "PREPARE_LLVM_SCRIPT", config.prepare_llvm_script);
    writeOptionalShellAssignment(w, "TARGET", config.target);
    writeOptionalShellAssignment(w, "STAGE", if (config.stage) |stage| stage.asString() else null);
    writeOptionalShellAssignment(w, "STAGE_TARGET", config.stage_target);
    writeOptionalShellAssignment(w, "CTEST_JUNIT", config.ctest_junit);
    writeOptionalShellAssignment(w, "GIT_COMMIT_MESSAGE", config.git_commit_message);
    writeShellArray(w, "prepare_llvm_args", config.prepare_llvm_args);
    writeShellArray(w, "cmake_args", config.cmake_args);
    writeShellArray(w, "build_args", config.build_args);
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
        .build_args = config.build_args,
        .cmake_args = config.cmake_args,
        .command = config.command.asString(),
        .ctest_args = config.ctest_args,
        .ctest_junit = config.ctest_junit,
        .install_prefix = config.install_prefix,
        .jobs = config.jobs,
        .make_args = config.build_args,
        .platform_target = config.platform_target,
        .prepare_llvm_args = config.prepare_llvm_args,
        .prepare_llvm_script = config.prepare_llvm_script,
        .profile = config.profile.presetName(),
        .stage = stage_name,
        .stage_target = config.stage_target,
        .target = config.target,
        .git_commit_message = config.git_commit_message,
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
