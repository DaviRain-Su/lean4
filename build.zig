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

const StageBuildTarget = enum {
    update_stage0,
    update_stage0_commit,
    clean_stdlib,
    cache_get,
    bench,
    bench_part1,
    bench_part2,

    fn cmakeTargetName(self: StageBuildTarget) []const u8 {
        return switch (self) {
            .update_stage0 => "update-stage0",
            .update_stage0_commit => "update-stage0-commit",
            .clean_stdlib => "clean-stdlib",
            .cache_get => "cache-get",
            .bench => "bench",
            .bench_part1 => "bench-part1",
            .bench_part2 => "bench-part2",
        };
    }
};

const BuildTargetAction = struct {
    stage: StageName,
    target: StageBuildTarget,

    fn stageName(self: BuildTargetAction) ?[]const u8 {
        return self.stage.asString();
    }

    fn targetName(self: BuildTargetAction) []const u8 {
        return self.target.cmakeTargetName();
    }
};

const BuildStageAction = struct {
    stage: StageName,
};

const ConfigureStageAction = struct {
    stage: StageName,
};

const InstallAction = struct {
    stage: StageName,
};

const CTestAction = struct {
    stage: StageName,
    junit_path: ?[]const u8,
};

const PrepareBenchStagesAction = struct {
    source_stage: StageName,
};

const RebootstrapAction = struct {
    update_stage: StageName,
    update_target: StageBuildTarget,
    rebuild_stage: StageName,
    test_stage: StageName,
    git_commit_message: []const u8,
};

const DriverAction = union(enum) {
    configure,
    prepare_host_tools,
    configure_stage0,
    configure_stage: ConfigureStageAction,
    build_target: BuildTargetAction,
    build_stage0,
    build_stage: BuildStageAction,
    install: InstallAction,
    ctest: CTestAction,
    prepare_bench_stages: PrepareBenchStagesAction,
    check_rebootstrap: RebootstrapAction,

    fn asString(self: DriverAction) []const u8 {
        return switch (self) {
            .configure => "configure",
            .prepare_host_tools => "prepare-host-tools",
            .configure_stage0 => "configure-stage0",
            .configure_stage => "configure-stage",
            .build_target => "build-target",
            .build_stage0 => "build-stage0",
            .build_stage => "build-stage",
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
    action: DriverAction,
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

    fn config(self: DriverDefaults, action: DriverAction) DriverConfig {
        return .{
            .action = action,
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
        };
    }

    fn stageBuildTargetConfig(self: DriverDefaults, stage: StageName, target: StageBuildTarget) DriverConfig {
        return self.config(.{ .build_target = .{
            .stage = stage,
            .target = target,
        } });
    }

    fn stageBuildTargetConfigWithJobs(self: DriverDefaults, stage: StageName, target: StageBuildTarget, jobs: usize) DriverConfig {
        var cfg = self.stageBuildTargetConfig(stage, target);
        cfg.jobs = jobs;
        return cfg;
    }

    fn prepareHostToolsConfig(self: DriverDefaults) DriverConfig {
        return self.config(.prepare_host_tools);
    }

    fn configureStage0Config(self: DriverDefaults, cmake_args: []const []const u8) DriverConfig {
        var cfg = self.config(.configure_stage0);
        cfg.cmake_args = cmake_args;
        return cfg;
    }

    fn buildStage0Config(self: DriverDefaults) DriverConfig {
        return self.config(.build_stage0);
    }

    fn buildStageConfig(self: DriverDefaults, stage: StageName) DriverConfig {
        return self.config(.{ .build_stage = .{ .stage = stage } });
    }

    fn configureStageConfig(self: DriverDefaults, stage: StageName, cmake_args: []const []const u8) DriverConfig {
        var cfg = self.config(.{ .configure_stage = .{ .stage = stage } });
        cfg.cmake_args = cmake_args;
        return cfg;
    }

    fn ctestConfig(self: DriverDefaults, stage: StageName, junit_path: ?[]const u8) DriverConfig {
        return self.config(.{ .ctest = .{
            .stage = stage,
            .junit_path = junit_path,
        } });
    }

    fn installConfig(self: DriverDefaults, stage: StageName) DriverConfig {
        return self.config(.{ .install = .{ .stage = stage } });
    }

    fn prepareBenchStagesConfig(self: DriverDefaults) DriverConfig {
        return self.config(.{ .prepare_bench_stages = .{ .source_stage = .stage1 } });
    }

    fn checkRebootstrapConfig(self: DriverDefaults) DriverConfig {
        return self.config(.{ .check_rebootstrap = .{
            .update_stage = .stage1,
            .update_target = .update_stage0,
            .rebuild_stage = .stage1,
            .test_stage = .stage1,
            .git_commit_message = "chore: update-stage0",
        } });
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

    const prepare_host_tools_step = addDriverStep(
        b,
        "prepare-host-tools",
        "Prepare host tools needed by stage-local bootstrap builds",
        runtime_defaults.prepareHostToolsConfig(),
        &.{},
    );

    const stage0_configure_args = buildStage0ConfigureArgs(b, runtime_defaults);

    const stage0_configure_step = addDriverStep(
        b,
        "stage0-configure",
        "Prepare host tools and configure the stage0 sub-build",
        runtime_defaults.configureStage0Config(stage0_configure_args),
        &.{prepare_host_tools_step},
    );

    const stage0_step = addDriverStep(
        b,
        "stage0",
        "Build stage0",
        runtime_defaults.buildStage0Config(),
        &.{stage0_configure_step},
    );

    const stage1_configure_args = buildStageConfigureArgs(b, runtime_defaults, .stage1);

    const stage1_configure_step = addDriverStep(
        b,
        "stage1-configure",
        "Build stage0 and configure the stage1 sub-build",
        runtime_defaults.configureStageConfig(.stage1, stage1_configure_args),
        &.{stage0_step},
    );

    const stage1_step = addBuildStageStep(
        b,
        runtime_defaults,
        "stage1",
        "Build stage1",
        .stage1,
        &.{stage1_configure_step},
    );

    const stage2_configure_args = buildStageConfigureArgs(b, runtime_defaults, .stage2);

    const stage2_configure_step = addDriverStep(
        b,
        "stage2-configure",
        "Build stage1 and configure the stage2 sub-build",
        runtime_defaults.configureStageConfig(.stage2, stage2_configure_args),
        &.{stage1_step},
    );

    const stage2_step = addBuildStageStep(
        b,
        runtime_defaults,
        "stage2",
        "Build stage2",
        .stage2,
        &.{stage2_configure_step},
    );

    const stage3_configure_args = buildStageConfigureArgs(b, runtime_defaults, .stage3);

    const stage3_configure_step = addDriverStep(
        b,
        "stage3-configure",
        "Build stage2 and configure the stage3 sub-build",
        runtime_defaults.configureStageConfig(.stage3, stage3_configure_args),
        &.{stage2_step},
    );

    const stage3_step = addBuildStageStep(
        b,
        runtime_defaults,
        "stage3",
        "Build stage3",
        .stage3,
        &.{stage3_configure_step},
    );

    const stage_configure_steps = StageSteps{
        .stage1 = stage1_configure_step,
        .stage2 = stage2_configure_step,
        .stage3 = stage3_configure_step,
    };
    const stage_build_steps = StageSteps{
        .stage1 = stage1_step,
        .stage2 = stage2_step,
        .stage3 = stage3_step,
    };
    const selected_stage_configure_step = stageStep(selected_stage, stage_configure_steps);
    const selected_stage_step = stageStep(selected_stage, stage_build_steps);
    const default_stage_junit_path = b.pathFromRoot(b.pathJoin(&.{
        runtime_defaults.binary_dir,
        selected_stage.asString(),
        "test-results.xml",
    }));

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

    _ = addStageBuildTargetStep(
        b,
        runtime_defaults,
        "clean-stdlib",
        "Remove generated stdlib artifacts from the selected stage build directory",
        selected_stage,
        .clean_stdlib,
        &.{selected_stage_configure_step},
    );
    _ = addStageBuildTargetStep(
        b,
        runtime_defaults,
        "cache-get",
        "Download the Lake cache for the selected stage build directory",
        selected_stage,
        .cache_get,
        &.{selected_stage_configure_step},
    );
    _ = addCommandStep(
        b,
        "check-stage3",
        "Build stage3 and compare it against stage2",
        &.{
            "diff",
            stageLeanPath(b, runtime_defaults.binary_dir, .stage2),
            stageLeanPath(b, runtime_defaults.binary_dir, .stage3),
        },
        &.{stage3_step},
    );
    _ = addStageBuildTargetStep(b, runtime_defaults, "update-stage0", "Refresh stage0 from the selected stage (default stage1)", selected_stage, .update_stage0, &.{selected_stage_step});
    _ = addStageBuildTargetStep(b, runtime_defaults, "update-stage0-commit", "Refresh stage0 from the selected stage and create the update commit", selected_stage, .update_stage0_commit, &.{selected_stage_step});
    attachInstallStep(b, runtime_defaults, selected_stage, &.{selected_stage_step});

    const prepare_bench_stages_step = addDriverStep(
        b,
        "prepare-bench-stages",
        "Copy stage1 into stage2 and stage3 build directories for benchmark-oriented flows",
        runtime_defaults.prepareBenchStagesConfig(),
        &.{stage1_step},
    );

    const bench_stage2_configure_args = buildStageConfigureArgs(b, runtime_defaults, .stage2);

    const bench_stage2_configure_step = addDriverStep(
        b,
        "bench-stage2-configure",
        "Prepare benchmark staging directories and configure the stage2 sub-build",
        runtime_defaults.configureStageConfig(.stage2, bench_stage2_configure_args),
        &.{prepare_bench_stages_step},
    );

    const bench_stage2_step = addBuildStageStep(
        b,
        runtime_defaults,
        "bench-stage2",
        "Prepare benchmark staging directories, reconfigure stage2, and build stage2",
        .stage2,
        &.{bench_stage2_configure_step},
    );

    _ = addDriverStep(
        b,
        "bench",
        "Run the full benchmark suite from the stage2 sub-build",
        runtime_defaults.stageBuildTargetConfigWithJobs(.stage2, .bench, 1),
        &.{bench_stage2_step},
    );
    _ = addDriverStep(
        b,
        "bench-part1",
        "Run benchmark suite part 1 from the stage2 sub-build",
        runtime_defaults.stageBuildTargetConfigWithJobs(.stage2, .bench_part1, 1),
        &.{bench_stage2_step},
    );
    _ = addDriverStep(
        b,
        "bench-part2",
        "Run benchmark suite part 2 from the stage2 sub-build",
        runtime_defaults.stageBuildTargetConfigWithJobs(.stage2, .bench_part2, 1),
        &.{bench_stage2_step},
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

fn addStageBuildTargetStep(
    b: *Build,
    defaults: DriverDefaults,
    name: []const u8,
    description: []const u8,
    stage: StageName,
    target: StageBuildTarget,
    deps: []const *Step,
) *Step {
    return addDriverStep(b, name, description, defaults.stageBuildTargetConfig(stage, target), deps);
}

fn addBuildStageStep(
    b: *Build,
    defaults: DriverDefaults,
    name: []const u8,
    description: []const u8,
    stage: StageName,
    deps: []const *Step,
) *Step {
    return addDriverStep(b, name, description, defaults.buildStageConfig(stage), deps);
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
        install_cmd.step.dependOn(dep);
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
        cmd.step.dependOn(dep);
    }
    step.dependOn(&cmd.step);
    return step;
}

fn addCommandStep(
    b: *Build,
    name: []const u8,
    description: []const u8,
    argv: []const []const u8,
    deps: []const *Step,
) *Step {
    const cmd = b.addSystemCommand(argv);
    cmd.setCwd(b.path("."));
    return addNamedStep(b, name, description, cmd, deps);
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
    return switch (config.action) {
        .configure => "driver-configure",
        .prepare_host_tools => "driver-prepare-host-tools",
        .configure_stage0 => "driver-configure-stage0",
        .configure_stage => |action| b.fmt("driver-configure-stage-{s}", .{action.stage.asString()}),
        .build_stage0 => "driver-build-stage0",
        .ctest => |action| b.fmt("driver-ctest-{s}", .{action.stage.asString()}),
        .install => |action| b.fmt("driver-install-{s}", .{action.stage.asString()}),
        .build_stage => |action| b.fmt("driver-build-stage-{s}", .{action.stage.asString()}),
        .build_target => |action| b.fmt("driver-stage-{s}-{s}", .{ action.stage.asString(), action.target.cmakeTargetName() }),
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

fn buildStageConfigureArgs(
    b: *Build,
    defaults: DriverDefaults,
    stage: StageName,
) []const []const u8 {
    var args = std.array_list.Managed([]const u8).init(b.allocator);
    defer args.deinit();

    args.appendSlice(profilePresetCmakeArgs(defaults.profile)) catch @panic("OOM");
    args.appendSlice(defaults.cmake_args) catch @panic("OOM");
    args.append(b.fmt("-DSTAGE={d}", .{stageNumber(stage)})) catch @panic("OOM");
    args.append(b.fmt("-DPREV_STAGE={s}", .{previousStagePath(b, defaults.binary_dir, stage)})) catch @panic("OOM");
    args.append(b.fmt("-DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX={s}", .{hostExecutableSuffix()})) catch @panic("OOM");
    if (stage == .stage1) {
        args.append(b.fmt("-DCADICAL={s}", .{cadicalPath(b, defaults.binary_dir)})) catch @panic("OOM");
        args.append(b.fmt("-DLEANTAR={s}", .{leantarPath(b, defaults.binary_dir)})) catch @panic("OOM");
    }
    return args.toOwnedSlice() catch @panic("OOM");
}

fn buildStage0ConfigureArgs(
    b: *Build,
    defaults: DriverDefaults,
) []const []const u8 {
    var args = std.array_list.Managed([]const u8).init(b.allocator);
    defer args.deinit();

    args.appendSlice(filterStage0CmakeArgs(b, defaults.cmake_args)) catch @panic("OOM");
    args.append("-DSTAGE=0") catch @panic("OOM");
    args.append("-DUSE_GITHASH=OFF") catch @panic("OOM");
    args.append(b.fmt("-DLEANTAR={s}", .{leantarPath(b, defaults.binary_dir)})) catch @panic("OOM");
    return args.toOwnedSlice() catch @panic("OOM");
}

fn filterStage0CmakeArgs(
    b: *Build,
    raw_args: []const []const u8,
) []const []const u8 {
    var args = std.array_list.Managed([]const u8).init(b.allocator);
    defer args.deinit();

    for (raw_args) |arg| {
        if (rewriteStage0CmakeArg(b, arg)) |forwarded| {
            args.append(forwarded) catch @panic("OOM");
        }
    }
    return args.toOwnedSlice() catch @panic("OOM");
}

fn rewriteStage0CmakeArg(b: *Build, arg: []const u8) ?[]const u8 {
    const name = cmakeArgName(arg) orelse return null;
    if (mem.startsWith(u8, name, "STAGE0_")) {
        return stripStagePrefixedCmakeArg(b, arg, name, "STAGE0_");
    }
    if (mem.startsWith(u8, name, "STAGE1_")) {
        return null;
    }
    if (mem.startsWith(u8, name, "CMAKE_")) {
        if (mem.eql(u8, name, "CMAKE_BUILD_TYPE") or mem.eql(u8, name, "CMAKE_HOME_DIRECTORY")) {
            return null;
        }
        return arg;
    }
    if (shouldForwardStage0Arg(name)) {
        return arg;
    }
    return null;
}

fn shouldForwardStage0Arg(name: []const u8) bool {
    return mem.eql(u8, name, "USE_GMP") or
        mem.eql(u8, name, "CHECK_OLEAN_VERSION") or
        mem.startsWith(u8, name, "LEAN_VERSION_") or
        mem.eql(u8, name, "LEAN_SPECIAL_VERSION_DESC") or
        mem.startsWith(u8, name, "LLVM") or
        mem.startsWith(u8, name, "PKG_CONFIG") or
        mem.startsWith(u8, name, "USE_LAKE") or
        mem.startsWith(u8, name, "USE_MIMALLOC");
}

fn cmakeArgName(arg: []const u8) ?[]const u8 {
    if (!mem.startsWith(u8, arg, "-D")) return null;

    const body = arg[2..];
    const typed_end = mem.indexOfScalar(u8, body, ':') orelse body.len;
    const value_end = mem.indexOfScalar(u8, body, '=') orelse body.len;
    const end = @min(typed_end, value_end);
    return body[0..end];
}

fn stripStagePrefixedCmakeArg(
    b: *Build,
    arg: []const u8,
    name: []const u8,
    prefix: []const u8,
) []const u8 {
    const body = arg[2..];
    const suffix = body[name.len..];
    return b.fmt("-D{s}{s}", .{ name[prefix.len..], suffix });
}

fn profilePresetCmakeArgs(profile: BuildProfile) []const []const u8 {
    return switch (profile) {
        .release => &.{},
        .@"dev-release" => &.{
            "-DSTRIP_BINARIES=OFF",
            "-DWFAIL=OFF",
        },
        .debug => &.{
            "-DCMAKE_BUILD_TYPE=Debug",
            "-DLEAN_EXTRA_CXX_FLAGS=-DLEAN_DEFAULT_THREAD_STACK_SIZE=16*1024*1024",
            "-DSTRIP_BINARIES=OFF",
        },
        .relwithassert => &.{
            "-DCMAKE_BUILD_TYPE=RelWithAssert",
            "-DSTRIP_BINARIES=OFF",
        },
        .sanitize => &.{
            "-DLEAN_EXTRA_CXX_FLAGS=-fsanitize=address,undefined -DLEAN_DEFAULT_THREAD_STACK_SIZE=16*1024*1024",
            "-DLEANC_EXTRA_CC_FLAGS=-fsanitize=address,undefined",
            "-DLEAN_EXTRA_LINKER_FLAGS=-fsanitize=address,undefined -fsanitize-link-c++-runtime",
            "-DSTRIP_BINARIES=OFF",
            "-DSMALL_ALLOCATOR=OFF",
            "-DUSE_MIMALLOC=OFF",
            "-DBSYMBOLIC=OFF",
            "-DLEAN_TEST_VARS=MAIN_STACK_SIZE=16000 TEST_STACK_SIZE=16000 LSAN_OPTIONS=max_leaks=10",
        },
        .sandebug => &.{
            "-DCMAKE_BUILD_TYPE=Debug",
            "-DLEAN_EXTRA_CXX_FLAGS=-fsanitize=address,undefined -DLEAN_DEFAULT_THREAD_STACK_SIZE=16*1024*1024",
            "-DLEANC_EXTRA_CC_FLAGS=-fsanitize=address,undefined",
            "-DLEAN_EXTRA_LINKER_FLAGS=-fsanitize=address,undefined -fsanitize-link-c++-runtime",
            "-DSTRIP_BINARIES=OFF",
            "-DSMALL_ALLOCATOR=OFF",
            "-DUSE_MIMALLOC=OFF",
            "-DBSYMBOLIC=OFF",
            "-DLEAN_TEST_VARS=MAIN_STACK_SIZE=16000 TEST_STACK_SIZE=16000 LSAN_OPTIONS=max_leaks=10",
        },
    };
}

fn stageNumber(stage: StageName) u8 {
    return switch (stage) {
        .stage1 => 1,
        .stage2 => 2,
        .stage3 => 3,
    };
}

fn previousStagePath(b: *Build, binary_dir: []const u8, stage: StageName) []const u8 {
    const prev_stage_name = switch (stage) {
        .stage1 => "stage0",
        .stage2 => "stage1",
        .stage3 => "stage2",
    };
    return absoluteBuildPath(b, binary_dir, &.{prev_stage_name});
}

fn hostExecutableSuffix() []const u8 {
    const builtin = @import("builtin");
    return if (builtin.os.tag == .windows) ".exe" else "";
}

fn cadicalPath(b: *Build, binary_dir: []const u8) []const u8 {
    return absoluteBuildPath(b, binary_dir, &.{
        "cadical",
        b.fmt("cadical{s}", .{hostExecutableSuffix()}),
    });
}

fn leantarPath(b: *Build, binary_dir: []const u8) []const u8 {
    const builtin = @import("builtin");
    const version = "v0.1.19";
    const target = if (builtin.os.tag == .windows)
        "x86_64-pc-windows-msvc"
    else if (builtin.cpu.arch == .aarch64)
        if (builtin.os.tag == .macos) "aarch64-apple-darwin" else "aarch64-unknown-linux-musl"
    else if (builtin.os.tag == .macos)
        "x86_64-apple-darwin"
    else
        "x86_64-unknown-linux-musl";
    return absoluteBuildPath(b, binary_dir, &.{
        "leantar",
        b.fmt("leantar-{s}-{s}", .{ version, target }),
        b.fmt("leantar{s}", .{hostExecutableSuffix()}),
    });
}

fn absoluteBuildPath(b: *Build, binary_dir: []const u8, parts: []const []const u8) []const u8 {
    var full_parts = std.array_list.Managed([]const u8).init(b.allocator);
    defer full_parts.deinit();
    full_parts.append(binary_dir) catch @panic("OOM");
    full_parts.appendSlice(parts) catch @panic("OOM");
    return b.pathFromRoot(b.pathJoin(full_parts.items));
}

fn stageLeanPath(b: *Build, binary_dir: []const u8, stage: StageName) []const u8 {
    return absoluteBuildPath(b, binary_dir, &.{
        stage.asString(),
        "bin",
        b.fmt("lean{s}", .{hostExecutableSuffix()}),
    });
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

    writeShellAssignment(w, "ACTION", config.action.asString());
    writeShellAssignment(w, "PROFILE", config.profile.presetName());
    writeShellAssignment(w, "BINARY_DIR", config.binary_dir);
    writeShellAssignment(w, "JOBS", b.fmt("{}", .{config.jobs}));
    writeShellAssignment(w, "INSTALL_PREFIX", config.install_prefix);
    writeOptionalShellAssignment(w, "PLATFORM_TARGET", config.platform_target);
    writeOptionalShellAssignment(w, "PREPARE_LLVM_SCRIPT", config.prepare_llvm_script);
    writeOptionalShellAssignment(w, "ACTION_STAGE", actionStage(config.action));
    writeOptionalShellAssignment(w, "ACTION_TARGET", actionTarget(config.action));
    writeOptionalShellAssignment(w, "ACTION_CTEST_JUNIT", actionCtestJunit(config.action));
    writeOptionalShellAssignment(w, "ACTION_UPDATE_STAGE", actionUpdateStage(config.action));
    writeOptionalShellAssignment(w, "ACTION_UPDATE_TARGET", actionUpdateTarget(config.action));
    writeOptionalShellAssignment(w, "ACTION_REBUILD_STAGE", actionRebuildStage(config.action));
    writeOptionalShellAssignment(w, "ACTION_TEST_STAGE", actionTestStage(config.action));
    writeOptionalShellAssignment(w, "ACTION_GIT_COMMIT_MESSAGE", actionGitCommitMessage(config.action));
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

fn actionStage(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .configure_stage0, .build_stage0 => "stage0",
        .configure_stage => |configure_stage| configure_stage.stage.asString(),
        .build_target => |build_target| build_target.stageName(),
        .build_stage => |build_stage| build_stage.stage.asString(),
        .install => |install| install.stage.asString(),
        .ctest => |ctest| ctest.stage.asString(),
        .prepare_bench_stages => |prepare| prepare.source_stage.asString(),
        else => null,
    };
}

fn actionTarget(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .build_target => |build_target| build_target.targetName(),
        else => null,
    };
}

fn actionCtestJunit(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .ctest => |ctest| ctest.junit_path,
        else => null,
    };
}

fn actionUpdateStage(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .check_rebootstrap => |rebootstrap| rebootstrap.update_stage.asString(),
        else => null,
    };
}

fn actionUpdateTarget(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .check_rebootstrap => |rebootstrap| rebootstrap.update_target.cmakeTargetName(),
        else => null,
    };
}

fn actionRebuildStage(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .check_rebootstrap => |rebootstrap| rebootstrap.rebuild_stage.asString(),
        else => null,
    };
}

fn actionTestStage(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .check_rebootstrap => |rebootstrap| rebootstrap.test_stage.asString(),
        else => null,
    };
}

fn actionGitCommitMessage(action: DriverAction) ?[]const u8 {
    return switch (action) {
        .check_rebootstrap => |rebootstrap| rebootstrap.git_commit_message,
        else => null,
    };
}

fn renderMetadataJson(b: *Build, config: DriverConfig) []const u8 {
    const payload: SavedDriverMetadata = .{
        .profile = config.profile,
        .jobs = config.jobs,
        .platform_target = config.platform_target,
        .prepare_llvm_script = config.prepare_llvm_script,
        .prepare_llvm_args = config.prepare_llvm_args,
        .cmake_args = config.cmake_args,
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
