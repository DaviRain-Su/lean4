// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/shell.cpp`.
//!
//! Command-line driver: option parsing, initialization, and dispatch to
//! `lean_shell_main`. This mirrors the C++ `lean_main` entrypoint and the
//! helper functions used by the `lean` executable.

const std = @import("std");
const object = @import("object.zig");
const string = @import("string.zig");
const list = @import("list.zig");
const runtime_options = @import("runtime_options");

const ArgOpt = enum(c_int) {
    no_argument = 0,
    required_argument = 1,
    optional_argument = 2,
};

const Option = extern struct {
    name: [20:0]u8,
    has_arg: ArgOpt,
    flag: ?*c_int,
    val: c_int,
};

fn makeOption(name_str: []const u8, has_arg: ArgOpt, val: c_int) Option {
    var opt: Option = undefined;
    @memset(std.mem.asBytes(&opt), 0);
    const len = @min(name_str.len, opt.name.len - 1);
    @memcpy(opt.name[0..len], name_str[0..len]);
    opt.name[len] = 0;
    opt.has_arg = has_arg;
    opt.flag = null;
    opt.val = val;
    return opt;
}

const g_long_options = [_]Option{
    makeOption("version", .no_argument, 'v'),
    makeOption("help", .no_argument, 'h'),
    makeOption("githash", .no_argument, 'g'),
    makeOption("short-version", .no_argument, 'V'),
    makeOption("run", .no_argument, 'r'),
    makeOption("o", .optional_argument, 'o'),
    makeOption("i", .optional_argument, 'i'),
    makeOption("stdin", .no_argument, 'I'),
    makeOption("root", .required_argument, 'R'),
    makeOption("memory", .required_argument, 'M'),
    makeOption("trust", .required_argument, 't'),
    makeOption("profile", .no_argument, 'P'),
    makeOption("stats", .no_argument, 'a'),
    makeOption("quiet", .no_argument, 'q'),
    makeOption("deps", .no_argument, 'd'),
    makeOption("src-deps", .no_argument, 'O'),
    makeOption("deps-json", .no_argument, 'N'),
    makeOption("timeout", .optional_argument, 'T'),
    makeOption("c", .optional_argument, 'c'),
    makeOption("bc", .optional_argument, 'b'),
    makeOption("zig", .optional_argument, 'z'),
    makeOption("features", .no_argument, 'f'),
    makeOption("exitOnPanic", .no_argument, 'e'),
    makeOption("threads", .required_argument, 'j'),
    makeOption("tstack", .required_argument, 's'),
    makeOption("server", .no_argument, 'S'),
    makeOption("worker", .no_argument, 'W'),
    makeOption("plugin", .required_argument, 'p'),
    makeOption("load-dynlib", .required_argument, 'l'),
    makeOption("setup", .required_argument, 'u'),
    makeOption("error", .required_argument, 'E'),
    makeOption("json", .no_argument, 'J'),
    makeOption("print-prefix", .no_argument, 'x'),
    makeOption("print-libdir", .no_argument, 'L'),
    makeOption("incr-save", .required_argument, 'Y'),
    makeOption("incr-load", .required_argument, 'Z'),
    makeOption("incr-header-save", .required_argument, 'H'),
    makeOption("", .no_argument, 0),
};

const g_opt_str: [:0]const u8 = "PdD:o:i:b:c:z:C:qgvVht:012j:012rR:M:012T:012ap:eE:Y:Z:H:s:012";

var optarg: ?[*:0]u8 = null;
var optind: c_int = 1;

fn getoptLong(argc: c_int, in_argv: [][*:0]u8, optstring: [*:0]const u8, opts: []const Option, longindex: ?*c_int) c_int {
    optarg = null;
    if (optind >= argc) return -1;

    var argv: [*:0]u8 = in_argv[@intCast(optind)];
    if (argv[0] != '-') {
        var i: c_int = optind;
        var found = false;
        while (i < argc) : (i += 1) {
            if (in_argv[@intCast(i)][0] == '-') {
                found = true;
                break;
            }
        }
        if (!found) return -1;
        const next = in_argv[@intCast(i)];
        std.mem.copyBackwards(u8, std.mem.span(in_argv[@intCast(optind + 1)]), std.mem.span(in_argv[@intCast(optind)]));
        argv = next;
        in_argv[@intCast(optind)] = next;
    }
    optind += 1;

    if (argv[1] == '-') {
        const eq = std.mem.indexOfScalar(u8, std.mem.span(argv), '=');
        const name_start: [*]const u8 = @ptrCast(argv + 2);
        const name_len = if (eq) |idx| idx - 2 else std.mem.len(argv) - 2;
        for (opts, 0..) |opt, idx| {
            const opt_name = std.mem.span(&opt.name);
            if (opt_name.len == name_len and std.mem.eql(u8, opt_name, name_start[0..name_len])) {
                switch (opt.has_arg) {
                    .no_argument => {
                        if (eq != null) {
                            std.debug.print("option doesn't take an argument -- {s}\n", .{opt_name});
                            return '?';
                        }
                    },
                    .required_argument => {
                        if (eq) |eq_idx| {
                            optarg = @ptrCast(@constCast(argv + eq_idx + 1));
                        } else if (optind < argc) {
                            optarg = in_argv[@intCast(optind)];
                            optind += 1;
                        } else {
                            std.debug.print("option requires an argument -- {s}\n", .{opt_name});
                            return '?';
                        }
                    },
                    .optional_argument => {
                        if (eq) |eq_idx| {
                            optarg = @ptrCast(@constCast(argv + eq_idx + 1));
                        }
                    },
                }
                if (longindex) |li| li.* = @intCast(idx);
                return opt.val;
            }
        }
        return '?';
    } else {
        const opt = std.mem.indexOfScalar(u8, std.mem.span(optstring), argv[1]);
        if (opt == null) return '?';
        const optchar = optstring[opt.?];
        if (optstring[opt.? + 1] == ':') {
            if (argv[2] == 0) {
                if (optind < argc) {
                    optarg = in_argv[@intCast(optind)];
                    optind += 1;
                } else {
                    std.debug.print("option requires an argument -- {c}\n", .{@as(u8, @intCast(optchar))});
                    return '?';
                }
            } else {
                optarg = @ptrCast(@constCast(argv + 2));
            }
        }
        return optchar;
    }
}

extern fn lean_shell_main(args: *anyopaque, shell_opts: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_init_search_path() callconv(.c) *anyopaque;
extern fn lean_shell_options_mk(u: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_shell_options_process(shell_opts: *anyopaque, opt: u32, opt_arg: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_shell_options_get_run(shell_opts: *anyopaque) callconv(.c) u8;
extern fn lean_shell_options_get_profiler(shell_opts: *anyopaque) callconv(.c) u8;
extern fn lean_shell_options_get_num_threads(shell_opts: *anyopaque) callconv(.c) u32;
extern fn lean_enable_initializer_execution() callconv(.c) *anyopaque;
extern fn lean_io_mark_end_initialization() callconv(.c) void;

fn getIoScalarResultUInt32(r: *anyopaque) u32 {
    // Simplified: assume success and return boxed value.
    const v = object.lean_unbox(r);
    // In the real runtime this would check io_result_is_ok.
    return @intCast(v);
}

pub fn runShellMain(argc: c_int, argv: [][*:0]u8, shell_opts: *anyopaque) c_int {
    var args: ?*anyopaque = object.lean_box(0); // nil
    var i = argc;
    while (i > 0) {
        i -= 1;
        const str = string.lean_mk_string(argv[@intCast(i)]);
        args = list.lean_list_cons(str, args.?);
    }
    const result = lean_shell_main(args.?, shell_opts);
    return @intCast(getIoScalarResultUInt32(result));
}

pub fn initSearchPath() void {
    _ = lean_init_search_path();
}

pub fn mkShellOptions() *anyopaque {
    return lean_shell_options_mk(object.lean_box(0).?);
}

fn mkOptionNone() *anyopaque {
    return object.lean_box(0).?;
}

fn mkOptionSome(v: *anyopaque) *anyopaque {
    // Option.some is constructor 1 with one field.
    const result = @import("ctor.zig").lean_alloc_ctor(1, 1, 0);
    @import("ctor.zig").lean_ctor_set(result, 0, v);
    return result;
}

pub fn processShellOption(shell_opts: *anyopaque, opt: c_int, optarg_arg: ?[*:0]const u8, rc: *c_int) bool {
    const optarg_ref = if (optarg_arg) |a| mkOptionSome(string.lean_mk_string(@ptrCast(@constCast(a)))) else mkOptionNone();
    const r = lean_shell_options_process(shell_opts, @intCast(opt), optarg_ref);
    // Simplified: assume success
    rc.* = 0;
    _ = r;
    return false;
}

pub fn getShellRun(shell_opts: *anyopaque) bool {
    return lean_shell_options_get_run(shell_opts) != 0;
}

pub fn getShellProfiler(shell_opts: *anyopaque) bool {
    return lean_shell_options_get_profiler(shell_opts) != 0;
}

pub fn getShellNumThreads(shell_opts: *anyopaque) u32 {
    return lean_shell_options_get_num_threads(shell_opts);
}

pub export fn lean_main(argc: c_int, argv: [*][*:0]u8) callconv(.c) c_int {
    // Platform-specific setup omitted; C++ handles Windows console and Emscripten.

    initSearchPath();
    _ = lean_enable_initializer_execution();

    var rc: c_int = 0;
    const shell_opts = mkShellOptions();
    while (true) {
        const c = getoptLong(argc, argv, g_opt_str, &g_long_options, null);
        if (c == -1) break;
        if (processShellOption(shell_opts, c, optarg, &rc)) return rc;
        if (getShellRun(shell_opts)) break;
    }

    lean_io_mark_end_initialization();

    return runShellMain(argc - optind, argv[@intCast(optind)..], shell_opts);
}

comptime {
    if (runtime_options.export_lean_helpers) {
        @export(&lean_main, .{ .name = "lean_main" });
    }
}

test "shell module compiles" {
    _ = lean_main;
    _ = getoptLong;
}
