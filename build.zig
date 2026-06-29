const std = @import("std");

const Build = std.Build;
const Step = Build.Step;
const mem = std.mem;

const StageSteps = struct {
    stage1: *Step,
    stage2: *Step,
    stage3: *Step,
};

pub fn build(b: *Build) void {
    const profile = b.option([]const u8, "profile", "Build profile: release, dev-release, debug, relwithassert, sanitize, or sandebug") orelse "dev-release";
    const binary_dir = b.option([]const u8, "binary-dir", "Build directory override. Defaults to the CMake preset's standard output path.") orelse defaultBinaryDir(profile);
    const jobs = b.option(usize, "jobs", "Parallelism for make and ctest. 0 means auto-detect.") orelse 0;
    const selected_stage_name = b.option([]const u8, "stage", "Stage to use for stage-local commands such as test, install, and update-stage0. Default: stage1.") orelse "stage1";

    _ = defaultBinaryDir(profile);

    const configure_cmd = createDriverCommand(b, profile, binary_dir, jobs, "configure", &.{});
    const configure_step = addNamedStep(
        b,
        "configure",
        "Run CMake configure for the selected profile and build directory",
        configure_cmd,
        &.{},
    );

    const stage1_configure_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"stage1-configure"});
    const stage1_configure_step = addNamedStep(
        b,
        "stage1-configure",
        "Build stage0 and configure the stage1 sub-build",
        stage1_configure_cmd,
        &.{configure_step},
    );

    const stage1_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"stage1"});
    const stage1_step = addNamedStep(
        b,
        "stage1",
        "Build stage1",
        stage1_cmd,
        &.{configure_step},
    );

    const stage2_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"stage2"});
    const stage2_step = addNamedStep(
        b,
        "stage2",
        "Build stage2",
        stage2_cmd,
        &.{configure_step},
    );

    const stage3_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"stage3"});
    const stage3_step = addNamedStep(
        b,
        "stage3",
        "Build stage3",
        stage3_cmd,
        &.{configure_step},
    );

    const stages = StageSteps{
        .stage1 = stage1_step,
        .stage2 = stage2_step,
        .stage3 = stage3_step,
    };
    const selected_stage_step = stageStep(selected_stage_name, stages);

    const test_cmd = createDriverCommand(b, profile, binary_dir, jobs, "ctest", &.{selected_stage_name});
    _ = addNamedStep(
        b,
        "test",
        "Run ctest against the selected stage (default stage1)",
        test_cmd,
        &.{selected_stage_step},
    );

    const bench_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"bench"});
    _ = addNamedStep(
        b,
        "bench",
        "Run the full benchmark suite",
        bench_cmd,
        &.{configure_step},
    );

    const bench_part1_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"bench-part1"});
    _ = addNamedStep(
        b,
        "bench-part1",
        "Run benchmark suite part 1",
        bench_part1_cmd,
        &.{configure_step},
    );

    const bench_part2_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"bench-part2"});
    _ = addNamedStep(
        b,
        "bench-part2",
        "Run benchmark suite part 2",
        bench_part2_cmd,
        &.{configure_step},
    );

    const clean_stdlib_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"clean-stdlib"});
    _ = addNamedStep(
        b,
        "clean-stdlib",
        "Remove generated stdlib artifacts from the selected build directory",
        clean_stdlib_cmd,
        &.{configure_step},
    );

    const cache_get_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"cache-get"});
    _ = addNamedStep(
        b,
        "cache-get",
        "Download the Lake cache for the selected build directory",
        cache_get_cmd,
        &.{stage1_configure_step},
    );

    const check_stage3_cmd = createDriverCommand(b, profile, binary_dir, jobs, "root-target", &.{"check-stage3"});
    _ = addNamedStep(
        b,
        "check-stage3",
        "Build stage3 and compare it against stage2",
        check_stage3_cmd,
        &.{stage3_step},
    );

    const update_stage0_cmd = createDriverCommand(b, profile, binary_dir, jobs, "stage-target", &.{ selected_stage_name, "update-stage0" });
    _ = addNamedStep(
        b,
        "update-stage0",
        "Refresh stage0 from the selected stage (default stage1)",
        update_stage0_cmd,
        &.{selected_stage_step},
    );

    const update_stage0_commit_cmd = createDriverCommand(b, profile, binary_dir, jobs, "stage-target", &.{ selected_stage_name, "update-stage0-commit" });
    _ = addNamedStep(
        b,
        "update-stage0-commit",
        "Refresh stage0 from the selected stage and create the update commit",
        update_stage0_commit_cmd,
        &.{selected_stage_step},
    );

    const install_cmd = createDriverCommand(b, profile, binary_dir, jobs, "stage-target", &.{ selected_stage_name, "install" });
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

fn createDriverCommand(
    b: *Build,
    profile: []const u8,
    binary_dir: []const u8,
    jobs: usize,
    command: []const u8,
    extra_args: []const []const u8,
) *Build.Step.Run {
    var argv = std.array_list.Managed([]const u8).init(b.allocator);
    defer argv.deinit();

    argv.appendSlice(&.{
        "bash",
        "-e",
        "-u",
        "-o",
        "pipefail",
        "script/zig-build-driver.sh",
        command,
        profile,
        binary_dir,
        b.fmt("{}", .{jobs}),
    }) catch @panic("OOM");
    argv.appendSlice(extra_args) catch @panic("OOM");

    const cmd = b.addSystemCommand(argv.items);
    cmd.setCwd(b.path("."));
    cmd.setEnvironmentVariable("LEAN_ZIG_INSTALL_PREFIX", b.install_path);
    return cmd;
}

fn defaultBinaryDir(profile: []const u8) []const u8 {
    if (mem.eql(u8, profile, "release") or mem.eql(u8, profile, "dev-release")) return "build/release";
    if (mem.eql(u8, profile, "debug")) return "build/debug";
    if (mem.eql(u8, profile, "relwithassert")) return "build/relwithassert";
    if (mem.eql(u8, profile, "sanitize")) return "build/sanitize";
    if (mem.eql(u8, profile, "sandebug")) return "build/sandebug";
    std.debug.panic(
        "unsupported -Dprofile value '{s}'; expected one of: release, dev-release, debug, relwithassert, sanitize, sandebug",
        .{profile},
    );
}

fn stageStep(name: []const u8, stages: StageSteps) *Step {
    if (mem.eql(u8, name, "stage1")) return stages.stage1;
    if (mem.eql(u8, name, "stage2")) return stages.stage2;
    if (mem.eql(u8, name, "stage3")) return stages.stage3;
    std.debug.panic("unsupported -Dstage value '{s}'; expected one of: stage1, stage2, stage3", .{name});
}
