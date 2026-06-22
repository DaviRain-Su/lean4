// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const builtin = @import("builtin");
const std = @import("std");
const alloc = @import("alloc.zig");
const array = @import("array.zig");
const box = @import("box.zig");
const compat = @import("compat.zig");
const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_error = @import("io_error.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const runtime_alloc = @import("alloc.zig");
const string = @import("string.zig");
const allocprof = @import("allocprof.zig");

pub const force_link = true;

const posix = std.posix;
const c = std.c;
const linux = std.os.linux;
const gpa = std.heap.c_allocator;

/// POSIX stat helpers and metadata conversion. This struct is only populated on
/// non-Linux POSIX targets; Linux uses linux.statx directly (see lean_io_metadata).
const PosixStat = if (builtin.target.os.tag != .linux) struct {
    const Stat = c.Stat;

    extern fn stat(path: [*:0]const u8, buf: *Stat) callconv(.c) c_int;
    extern fn lstat(path: [*:0]const u8, buf: *Stat) callconv(.c) c_int;

    fn nativeStatSec(st: *const Stat, comptime base: []const u8) i64 {
        const ts = if (std.mem.eql(u8, base, "st_at")) st.atime() else st.mtime();
        return @intCast(ts.sec);
    }

    fn nativeStatNSec(st: *const Stat, comptime base: []const u8) u32 {
        const ts = if (std.mem.eql(u8, base, "st_at")) st.atime() else st.mtime();
        return @intCast(ts.nsec);
    }

    fn nativeStatMode(st: *const Stat) usize {
        return @intCast(st.mode);
    }

    fn nativeStatSize(st: *const Stat) u64 {
        return @intCast(st.size);
    }

    fn nativeStatNLink(st: *const Stat) u64 {
        return @intCast(st.nlink);
    }

    fn metadataFromStat(st: *const Stat) *anyopaque {
        return metadataFromFields(
            nativeStatSec(st, "st_at"),
            nativeStatNSec(st, "st_at"),
            nativeStatSec(st, "st_mt"),
            nativeStatNSec(st, "st_mt"),
            nativeStatMode(st),
            nativeStatSize(st),
            nativeStatNLink(st),
        );
    }
} else struct {};

extern fn mkstemp(template: [*:0]u8) callconv(.c) c_int;
extern fn mkdtemp(template: [*:0]u8) callconv(.c) ?[*:0]u8;
extern fn lean_mk_string(s: [*:0]const u8) callconv(.c) *anyopaque;
extern fn lean_mk_string_from_bytes_unchecked(s: [*:0]const u8, sz: usize) callconv(.c) *anyopaque;
extern fn lean_array_push(a: *anyopaque, v: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_big_int64_to_int(n: i64) callconv(.c) *anyopaque;

const HandleData = struct {
    fd: posix.fd_t,
};

var g_handle_class: ?*lean.lean_external_class = null;

fn ensureHandleClass() *lean.lean_external_class {
    if (g_handle_class == null) {
        g_handle_class = object.lean_register_external_class(@ptrCast(&handleFinalize), @ptrCast(&handleForeach));
    }
    return g_handle_class.?;
}

fn handleFinalize(data: *anyopaque) callconv(.c) void {
    const h: *HandleData = @ptrCast(@alignCast(data));
    _ = c.close(h.fd);
    gpa.destroy(h);
}

fn handleForeach(_: *anyopaque, _: ?*anyopaque) callconv(.c) void {}

fn wrapFd(fd: posix.fd_t) *anyopaque {
    const h = gpa.create(HandleData) catch @panic("out of memory");
    h.* = .{ .fd = fd };
    return object.lean_alloc_external(ensureHandleClass(), h);
}

fn handleFd(h: *anyopaque) posix.fd_t {
    const data: *HandleData = @ptrCast(@alignCast(object.lean_get_external_data(h).?));
    return data.fd;
}

fn stringObj(s: *anyopaque) *const lean.lean_string_object {
    return @ptrCast(@alignCast(s));
}

fn stringBytes(s: *anyopaque) []const u8 {
    const str = stringObj(s);
    const size = if (str.m_size == 0) 0 else str.m_size - 1;
    const data: [*]const u8 = @ptrCast(&str.m_data);
    return data[0..size];
}

fn stringCStr(s: *anyopaque) [*:0]const u8 {
    return @ptrCast(&stringObj(s).m_data);
}

fn hasEmbeddedNul(s: *anyopaque) bool {
    return std.mem.len(stringCStr(s)) != stringBytes(s).len;
}

fn invalidPath(path: *anyopaque) *anyopaque {
    return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(posix.E.INVAL), path));
}

fn pathArg(path: *anyopaque) ?[*:0]const u8 {
    if (hasEmbeddedNul(path)) return null;
    return stringCStr(path);
}

fn mkOptionNone() *anyopaque {
    return object.lean_box(0).?;
}

fn mkOptionSome(value: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(result, 0, value);
    return result;
}

fn mkPair(a: *anyopaque, b: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(result, 0, a);
    ctor.lean_ctor_set(result, 1, b);
    return result;
}

fn mkUnitResult() *anyopaque {
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn isInterruptedErrno() bool {
    return c._errno().* == @intFromEnum(posix.E.INTR);
}

fn readRetry(fd: posix.fd_t, buf: [*]u8, len: usize) isize {
    while (true) {
        const got = c.read(fd, buf, len);
        if (got < 0 and isInterruptedErrno()) continue;
        return got;
    }
}

fn writeAllRetry(fd: posix.fd_t, bytes: []const u8) c_int {
    var written: usize = 0;
    while (written < bytes.len) {
        const n = c.write(fd, bytes[written..].ptr, bytes.len - written);
        if (n > 0) {
            written += @intCast(n);
        } else if (n < 0 and isInterruptedErrno()) {
            continue;
        } else if (n < 0) {
            return c._errno().*;
        } else {
            return @intFromEnum(posix.E.IO);
        }
    }
    return 0;
}

fn mkStringResult(bytes: []const u8) *anyopaque {
    return io_result.lean_io_result_mk_ok(string.mkAsciiStringBytes(bytes));
}

fn mkOtherIoError(bytes: []const u8) *anyopaque {
    return io_result.lean_io_result_mk_error(io_error.lean_mk_io_error_other_error(0, string.mkAsciiStringBytes(bytes)));
}

fn mkInvalidArgumentIoError(bytes: []const u8) *anyopaque {
    return io_result.lean_io_result_mk_error(io_error.lean_mk_io_error_invalid_argument(@intFromEnum(posix.E.INVAL), string.mkAsciiStringBytes(bytes)));
}

fn int64ToLean(n: i64) *anyopaque {
    const max_small: i64 = if (@sizeOf(usize) == 8) std.math.maxInt(c_int) else std.math.maxInt(c_int) >> 1;
    const min_small: i64 = if (@sizeOf(usize) == 8) std.math.minInt(c_int) else std.math.minInt(c_int) >> 1;
    if (min_small <= n and n <= max_small) {
        const small: c_int = @intCast(n);
        const bits: u32 = @bitCast(small);
        return object.lean_box(bits).?;
    }
    return lean_big_int64_to_int(n);
}

fn durationObj(seconds: i64, nanoseconds: i64) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(result, 0, int64ToLean(seconds));
    ctor.lean_ctor_set(result, 1, int64ToLean(nanoseconds));
    return result;
}

fn systemTimeObj(sec: i64, nsec: u32) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 1, 4);
    ctor.lean_ctor_set(result, 0, int64ToLean(sec));
    ctor.lean_ctor_set_uint32(result, @sizeOf(*anyopaque), nsec);
    return result;
}

fn waitCode(status: c_int) u32 {
    const s: u32 = @bitCast(status);
    if (c.W.IFEXITED(s)) return c.W.EXITSTATUS(s);
    const term = c.W.TERMSIG(s);
    return 128 + switch (@typeInfo(@TypeOf(term))) {
        .@"enum" => @intFromEnum(term),
        else => @as(u32, @intCast(term)),
    };
}

fn metadataFromFields(at_sec: i64, at_nsec: u32, mt_sec: i64, mt_nsec: u32, mode: usize, size: u64, nlink: u64) *anyopaque {
    const ty: u8 = if ((mode & c.S.IFMT) == c.S.IFDIR) 0 else if ((mode & c.S.IFMT) == c.S.IFREG) 1 else if ((mode & c.S.IFMT) == c.S.IFLNK) 2 else 3;
    const result = alloc.lean_alloc_ctor(0, 2, 17);
    ctor.lean_ctor_set(result, 0, systemTimeObj(at_sec, at_nsec));
    ctor.lean_ctor_set(result, 1, systemTimeObj(mt_sec, mt_nsec));
    ctor.lean_ctor_set_uint64(result, 2 * @sizeOf(*anyopaque), size);
    ctor.lean_ctor_set_uint64(result, 2 * @sizeOf(*anyopaque) + @sizeOf(u64), nlink);
    ctor.lean_ctor_set_uint8(result, 2 * @sizeOf(*anyopaque) + 2 * @sizeOf(u64), ty);
    return result;
}

fn metadataFromStatx(st: *const linux.Statx) *anyopaque {
    return metadataFromFields(
        st.atime.sec,
        st.atime.nsec,
        st.mtime.sec,
        st.mtime.nsec,
        @intCast(st.mode),
        st.size,
        st.nlink,
    );
}

fn openFlags(mode: u8) c.O {
    var flags: c.O = .{};
    flags.CLOEXEC = true;
    switch (mode) {
        0 => flags.ACCMODE = .RDONLY,
        1 => {
            flags.ACCMODE = .WRONLY;
            flags.CREAT = true;
            flags.TRUNC = true;
        },
        2 => {
            flags.ACCMODE = .WRONLY;
            flags.CREAT = true;
            flags.TRUNC = true;
            flags.EXCL = true;
        },
        3 => flags.ACCMODE = .RDWR,
        4 => {
            flags.ACCMODE = .WRONLY;
            flags.CREAT = true;
            flags.APPEND = true;
        },
        else => flags.ACCMODE = .RDONLY,
    }
    return flags;
}

fn childPipeMode(stdin_mode: u8, stdout_mode: u8, stderr_mode: u8) bool {
    return stdin_mode == 0 or stdout_mode == 0 or stderr_mode == 0;
}

pub export fn lean_chmod(filename: *anyopaque, mode: u32) callconv(.c) *anyopaque {
    const path = pathArg(filename) orelse return invalidPath(filename);
    return if (c.chmod(path, @intCast(mode)) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, filename));
}

pub export fn lean_io_prim_handle_mk(filename: *anyopaque, mode: u8) callconv(.c) *anyopaque {
    const path = pathArg(filename) orelse return invalidPath(filename);
    const fd = c.open(path, openFlags(mode), @as(c_uint, 0o666));
    if (c.errno(fd) != .SUCCESS) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, filename));
    }
    return io_result.lean_io_result_mk_ok(wrapFd(@intCast(fd)));
}

pub export fn lean_io_prim_handle_lock(h: *anyopaque, exclusive: u8) callconv(.c) *anyopaque {
    const op: c_int = if (exclusive != 0) 2 else 1;
    return if (c.flock(handleFd(h), op) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_prim_handle_try_lock(h: *anyopaque, exclusive: u8) callconv(.c) *anyopaque {
    const base: c_int = if (exclusive != 0) @as(c_int, 2) else @as(c_int, 1);
    const op: c_int = base | @as(c_int, 4);
    if (c.flock(handleFd(h), op) == 0) return io_result.lean_io_result_mk_ok(object.lean_box(1).?);
    return if (c._errno().* == @intFromEnum(posix.E.AGAIN))
        io_result.lean_io_result_mk_ok(object.lean_box(0).?)
    else
        io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_prim_handle_unlock(h: *anyopaque) callconv(.c) *anyopaque {
    return if (c.flock(handleFd(h), 8) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_prim_handle_is_tty(h: *anyopaque) callconv(.c) u8 {
    return @intFromBool(c.isatty(handleFd(h)) != 0);
}

pub export fn lean_io_prim_handle_is_eof(h: *anyopaque) callconv(.c) u8 {
    const fd = handleFd(h);
    const pos = c.lseek(fd, 0, 1);
    if (pos < 0) return 0;
    const end = c.lseek(fd, 0, 2);
    if (end < 0) return 0;
    _ = c.lseek(fd, pos, 0);
    return @intFromBool(pos >= end);
}

pub export fn lean_io_prim_handle_flush(_: *anyopaque) callconv(.c) *anyopaque {
    return mkUnitResult();
}

pub export fn lean_io_prim_handle_rewind(h: *anyopaque) callconv(.c) *anyopaque {
    return if (c.lseek(handleFd(h), 0, 0) >= 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_prim_handle_truncate(h: *anyopaque) callconv(.c) *anyopaque {
    const fd = handleFd(h);
    const pos = c.lseek(fd, 0, 1);
    if (pos < 0) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
    return if (c.ftruncate(fd, @intCast(pos)) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_prim_handle_read(h: *anyopaque, nbytes: usize) callconv(.c) *anyopaque {
    const res = alloc.lean_alloc_sarray(1, 0, nbytes);
    if (nbytes == 0) return io_result.lean_io_result_mk_ok(res);
    const buf: [*]u8 = @ptrCast(&(@as(*lean.lean_sarray_object, @ptrCast(@alignCast(res))).m_data));
    const got = readRetry(handleFd(h), buf, nbytes);
    if (got >= 0) {
        (@as(*lean.lean_sarray_object, @ptrCast(@alignCast(res)))).m_size = @intCast(got);
        return io_result.lean_io_result_mk_ok(res);
    }
    rc.lean_dec(res);
    return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_prim_handle_write(h: *anyopaque, buf_obj: *anyopaque) callconv(.c) *anyopaque {
    const bytes: [*]const u8 = @ptrCast(&(@as(*lean.lean_sarray_object, @ptrCast(@alignCast(buf_obj))).m_data));
    const len = array.lean_sarray_size(buf_obj);
    const err = writeAllRetry(handleFd(h), bytes[0..len]);
    return if (err == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(err, null));
}

pub export fn lean_io_prim_handle_get_line(h: *anyopaque) callconv(.c) *anyopaque {
    var out = std.ArrayList(u8).initCapacity(gpa, 64) catch return mkOtherIoError("out of memory");
    defer out.deinit(gpa);
    var byte: [1]u8 = undefined;
    while (true) {
        const got = readRetry(handleFd(h), &byte, 1);
        if (got == 0) break;
        if (got < 0) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
        out.append(gpa, byte[0]) catch return mkOtherIoError("out of memory");
        if (byte[0] == '\n') break;
    }
    return io_result.lean_io_result_mk_ok(lean_mk_string_from_bytes_unchecked(@ptrCast(out.items.ptr), out.items.len));
}

pub export fn lean_io_prim_handle_put_str(h: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque {
    const bytes = stringBytes(s);
    const err = writeAllRetry(handleFd(h), bytes);
    return if (err == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(err, null));
}
pub export fn lean_io_mono_ms_now() callconv(.c) *anyopaque {
    const ts = std.Io.Clock.awake.now(std.Io.Threaded.global_single_threaded.io());
    return compat.lean_uint64_to_nat(@intCast(@divTrunc(ts.nanoseconds, std.time.ns_per_ms)));
}

pub export fn lean_io_mono_nanos_now() callconv(.c) *anyopaque {
    const ts = std.Io.Clock.awake.now(std.Io.Threaded.global_single_threaded.io());
    return compat.lean_uint64_to_nat(@intCast(ts.nanoseconds));
}

pub export fn lean_io_get_random_bytes(nbytes: usize) callconv(.c) *anyopaque {
    const res = alloc.lean_alloc_sarray(1, nbytes, nbytes);
    const buf: [*]u8 = @ptrCast(&(@as(*lean.lean_sarray_object, @ptrCast(@alignCast(res))).m_data));
    const io = std.Io.Threaded.global_single_threaded.io();
    io.randomSecure(buf[0..nbytes]) catch return io_result.lean_io_result_mk_error(io_error.lean_mk_io_error_resource_exhausted(0, string.mkAsciiStringBytes("entropy unavailable")));
    return io_result.lean_io_result_mk_ok(res);
}

pub export fn lean_get_current_time() callconv(.c) *anyopaque {
    const timestamp = std.Io.Clock.real.now(std.Io.Threaded.global_single_threaded.io()).nanoseconds;
    const seconds: i64 = @intCast(@divTrunc(timestamp, std.time.ns_per_s));
    const nanoseconds: i64 = @intCast(@rem(timestamp, std.time.ns_per_s));
    return io_result.lean_io_result_mk_ok(durationObj(seconds, nanoseconds));
}

pub export fn lean_windows_get_next_transition(_: *anyopaque, _: u64, _: u8) callconv(.c) *anyopaque {
    return mkInvalidArgumentIoError("failed to get timezone, its windows only.");
}

pub export fn lean_get_windows_local_timezone_id_at(_: u64) callconv(.c) *anyopaque {
    return mkInvalidArgumentIoError("timezone retrieval is Windows-only");
}

pub export fn lean_io_timeit(msg: *anyopaque, fn_obj: *anyopaque) callconv(.c) *anyopaque {
    const start = std.Io.Clock.awake.now(std.Io.Threaded.global_single_threaded.io());
    const res = lean_apply_1(fn_obj, object.lean_box(0).?) orelse @panic("lean_io_timeit: apply failed");
    const diff_ns = std.Io.Clock.awake.now(std.Io.Threaded.global_single_threaded.io()).nanoseconds - start.nanoseconds;
    var buf: [256]u8 = undefined;
    const line = if (diff_ns < std.time.ns_per_s)
        std.fmt.bufPrint(&buf, "{s} {d:.3}ms", .{ stringBytes(msg), @as(f64, @floatFromInt(diff_ns)) / @as(f64, std.time.ns_per_ms) }) catch "timeit"
    else
        std.fmt.bufPrint(&buf, "{s} {d:.3}s", .{ stringBytes(msg), @as(f64, @floatFromInt(diff_ns)) / @as(f64, std.time.ns_per_s) }) catch "timeit";
    _ = c.write(2, line.ptr, line.len);
    _ = c.write(2, "\n".ptr, 1);
    return res;
}

pub export fn lean_io_allocprof(msg: *anyopaque, fn_obj: *anyopaque) callconv(.c) *anyopaque {
    const before = allocprof.snapshot();
    const res = lean_apply_1(fn_obj, object.lean_box(0).?) orelse @panic("lean_io_allocprof: apply failed");
    const after = allocprof.snapshot();
    const ctor_n = after.ctor - before.ctor;
    const closure_n = after.closure - before.closure;
    const string_n = after.string - before.string;
    const array_n = after.array - before.array;
    const thunk_n = after.thunk - before.thunk;
    const task_n = after.task - before.task;
    const ext_n = after.ext - before.ext;
    std.debug.print("{s}\n", .{stringBytes(msg)});
    if (ctor_n > 0) std.debug.print("num. constructor: {d}\n", .{ctor_n});
    if (closure_n > 0) std.debug.print("num. closure:     {d}\n", .{closure_n});
    if (string_n > 0) std.debug.print("num. string:      {d}\n", .{string_n});
    if (array_n > 0) std.debug.print("num. array:       {d}\n", .{array_n});
    if (thunk_n > 0) std.debug.print("num. thunk:       {d}\n", .{thunk_n});
    if (task_n > 0) std.debug.print("num. task:        {d}\n", .{task_n});
    if (ext_n > 0) std.debug.print("num. external:    {d}\n", .{ext_n});
    if (ctor_n == 0 and closure_n == 0 and string_n == 0 and array_n == 0 and thunk_n == 0 and task_n == 0 and ext_n == 0) {
        std.debug.print("***no runtime object allocation has occurred**\n", .{});
    }
    std.debug.print("-------------\n", .{});
    return res;
}

pub export fn lean_io_get_num_heartbeats() callconv(.c) *anyopaque {
    return compat.lean_uint64_to_nat(runtime_alloc.heartbeatCount());
}

pub export fn lean_io_set_heartbeats(count: *anyopaque) callconv(.c) *anyopaque {
    runtime_alloc.setHeartbeatCount(compat.lean_uint64_of_nat(count));
    rc.lean_dec(count);
    return object.lean_box(0).?;
}

pub export fn lean_io_getenv(env_var: *anyopaque) callconv(.c) *anyopaque {
    const key = pathArg(env_var) orelse return mkOptionNone();
    const value = c.getenv(key);
    return if (value) |v| mkOptionSome(lean_mk_string(v)) else mkOptionNone();
}

pub export fn lean_io_realpath(filename: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(filename) orelse return invalidPath(filename);
    var buf: [posix.PATH_MAX]u8 = undefined;
    const resolved = c.realpath(path, &buf) orelse return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, filename));
    return io_result.lean_io_result_mk_ok(lean_mk_string(resolved));
}

pub export fn lean_io_read_dir(dirname: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(dirname) orelse return invalidPath(dirname);
    const dir = c.opendir(path) orelse return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, dirname));
    defer _ = c.closedir(dir);
    var arr = array.lean_mk_empty_array();
    while (c.readdir(dir)) |entry| {
        const entry_name: [*:0]const u8 = @ptrCast(&entry.name);
        const name = std.mem.span(entry_name);
        if (std.mem.eql(u8, name, ".") or std.mem.eql(u8, name, "..")) continue;
        const pair = mkPair(dirname, lean_mk_string(entry_name));
        rc.lean_inc(dirname);
        arr = lean_array_push(arr, pair);
    }
    return io_result.lean_io_result_mk_ok(arr);
}

pub export fn lean_io_metadata(filename: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(filename) orelse return invalidPath(filename);
    if (builtin.target.os.tag == .linux) {
        var st: linux.Statx = undefined;
        const rc_statx = linux.statx(linux.AT.FDCWD, path, 0, linux.STATX.BASIC_STATS, &st);
        const err = linux.errno(rc_statx);
        if (err != .SUCCESS) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(err), filename));
        return io_result.lean_io_result_mk_ok(metadataFromStatx(&st));
    }
    var st: PosixStat.Stat = undefined;
    if (PosixStat.stat(path, &st) != 0) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, filename));
    return io_result.lean_io_result_mk_ok(PosixStat.metadataFromStat(&st));
}

pub export fn lean_io_symlink_metadata(filename: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(filename) orelse return invalidPath(filename);
    if (builtin.target.os.tag == .linux) {
        var st: linux.Statx = undefined;
        const rc_statx = linux.statx(linux.AT.FDCWD, path, linux.AT.SYMLINK_NOFOLLOW, linux.STATX.BASIC_STATS, &st);
        const err = linux.errno(rc_statx);
        if (err != .SUCCESS) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(err), filename));
        return io_result.lean_io_result_mk_ok(metadataFromStatx(&st));
    }
    var st: PosixStat.Stat = undefined;
    if (PosixStat.lstat(path, &st) != 0) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, filename));
    return io_result.lean_io_result_mk_ok(PosixStat.metadataFromStat(&st));
}

pub export fn lean_io_create_dir(path_obj: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(path_obj) orelse return invalidPath(path_obj);
    return if (c.mkdir(path, 0o777) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, path_obj));
}

pub export fn lean_io_remove_dir(path_obj: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(path_obj) orelse return invalidPath(path_obj);
    return if (c.rmdir(path) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, path_obj));
}

pub export fn lean_io_rename(from_obj: *anyopaque, to_obj: *anyopaque) callconv(.c) *anyopaque {
    const from = pathArg(from_obj) orelse return invalidPath(from_obj);
    const to = pathArg(to_obj) orelse return invalidPath(to_obj);
    return if (c.rename(from, to) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, from_obj));
}

pub export fn lean_io_hard_link(orig_obj: *anyopaque, link_obj: *anyopaque) callconv(.c) *anyopaque {
    const orig = pathArg(orig_obj) orelse return invalidPath(orig_obj);
    const link = pathArg(link_obj) orelse return invalidPath(link_obj);
    return if (c.link(orig, link) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, orig_obj));
}

pub export fn lean_io_create_tempfile(_: *anyopaque) callconv(.c) *anyopaque {
    var template: [64]u8 = undefined;
    const path = std.fmt.bufPrintZ(&template, "/tmp/tmp.XXXXXXXX", .{}) catch unreachable;
    const fd = mkstemp(path);
    if (c.errno(fd) != .SUCCESS) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
    return io_result.lean_io_result_mk_ok(mkPair(wrapFd(@intCast(fd)), lean_mk_string(path)));
}

pub export fn lean_io_create_tempdir(_: *anyopaque) callconv(.c) *anyopaque {
    var template: [64]u8 = undefined;
    const path = std.fmt.bufPrintZ(&template, "/tmp/tmp.XXXXXXXX", .{}) catch unreachable;
    const created = mkdtemp(path) orelse return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
    return io_result.lean_io_result_mk_ok(lean_mk_string(created));
}

pub export fn lean_io_remove_file(filename: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(filename) orelse return invalidPath(filename);
    return if (c.unlink(path) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, filename));
}

pub export fn lean_io_app_path() callconv(.c) *anyopaque {
    if (builtin.target.os.tag == .macos) {
        var buf: [posix.PATH_MAX]u8 = undefined;
        var size: u32 = buf.len;
        if (c._NSGetExecutablePath(@ptrCast(&buf), &size) != 0) return mkOtherIoError("failed to locate application");
        var resolved: [posix.PATH_MAX]u8 = undefined;
        const path = c.realpath(@ptrCast(&buf), &resolved) orelse return mkOtherIoError("failed to resolve symbolic links when locating application");
        return io_result.lean_io_result_mk_ok(lean_mk_string(path));
    }
    var link_path: [64]u8 = undefined;
    const proc_path = std.fmt.bufPrintZ(&link_path, "/proc/{d}/exe", .{c.getpid()}) catch unreachable;
    var dest: [posix.PATH_MAX]u8 = undefined;
    const n = c.readlink(proc_path, &dest, dest.len - 1);
    if (n < 0) return mkOtherIoError("failed to locate application");
    dest[@intCast(n)] = 0;
    return io_result.lean_io_result_mk_ok(lean_mk_string(@ptrCast(&dest)));
}

pub export fn lean_io_current_dir() callconv(.c) *anyopaque {
    var buf: [posix.PATH_MAX]u8 = undefined;
    const cwd = c.getcwd(&buf, buf.len) orelse return mkOtherIoError("failed to retrieve current working directory");
    return io_result.lean_io_result_mk_ok(lean_mk_string(@ptrCast(cwd)));
}

pub export fn lean_io_process_get_current_dir() callconv(.c) *anyopaque {
    return lean_io_current_dir();
}

pub export fn lean_io_process_set_current_dir(path_obj: *anyopaque) callconv(.c) *anyopaque {
    const path = pathArg(path_obj) orelse return invalidPath(path_obj);
    return if (c.chdir(path) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, path_obj));
}

pub export fn lean_io_process_get_pid() callconv(.c) u32 {
    return @intCast(c.getpid());
}

pub export fn lean_io_get_tid() callconv(.c) u64 {
    if (builtin.target.os.tag == .macos) {
        var tid: u64 = 0;
        _ = c.pthread_threadid_np(null, &tid);
        return tid;
    } else if (builtin.target.os.tag == .linux) {
        return @intCast(linux.gettid());
    }
    return @intCast(c.getpid());
}

pub export fn lean_io_exit(code: u8) callconv(.c) *anyopaque {
    std.process.exit(code);
}

pub export fn lean_io_force_exit(code: u8) callconv(.c) *anyopaque {
    c._exit(code);
}

extern fn lean_apply_1(f: *anyopaque, a1: *anyopaque) callconv(.c) ?*anyopaque;

fn stringSliceArg(s: *anyopaque) ![]const u8 {
    if (hasEmbeddedNul(s)) return error.InvalidString;
    return stringBytes(s);
}

fn mkChild(stdin_h: *anyopaque, stdout_h: *anyopaque, stderr_h: *anyopaque, pid: u32, do_setsid: bool) *anyopaque {
    const child = alloc.lean_alloc_ctor(0, 3, @sizeOf(u32) + @sizeOf(u8));
    ctor.lean_ctor_set(child, 0, stdin_h);
    ctor.lean_ctor_set(child, 1, stdout_h);
    ctor.lean_ctor_set(child, 2, stderr_h);
    ctor.lean_ctor_set_uint32(child, 3 * @sizeOf(*anyopaque), pid);
    ctor.lean_ctor_set_uint8(child, 3 * @sizeOf(*anyopaque) + @sizeOf(u32), @intFromBool(do_setsid));
    return child;
}

fn childPid(child: *anyopaque) c.pid_t {
    return @intCast(ctor.lean_ctor_get_uint32(child, 3 * @sizeOf(*anyopaque)));
}

fn childSetsid(child: *anyopaque) bool {
    const ctor_obj: *lean.lean_ctor_object = @ptrCast(@alignCast(child));
    return ctor_obj.m_header.m_cs_sz > @sizeOf(u32) and ctor.lean_ctor_get_uint8(child, 3 * @sizeOf(*anyopaque) + @sizeOf(u32)) != 0;
}

// ── process spawn helpers (fork+execvp, avoiding std.process.spawn OOM) ──

extern var environ: ?[*:null]?[*:0]u8;
extern fn setenv(name: [*:0]const u8, value: [*:0]const u8, overwrite: c_int) callconv(.c) c_int;
extern fn unsetenv(name: [*:0]const u8) callconv(.c) c_int;
extern fn execvp(file: [*:0]const u8, argv: [*:null]const ?[*:0]u8) callconv(.c) c_int;
extern fn fork() callconv(.c) c_int;
extern fn setsid() callconv(.c) c_int;
extern fn chdir(path: [*:0]const u8) callconv(.c) c_int;
extern fn dup2(old: c_int, new: c_int) callconv(.c) c_int;
extern fn close(fd: c_int) callconv(.c) c_int;
extern fn pipe(fds: [*]c_int) callconv(.c) c_int;
extern fn _exit(code: c_int) callconv(.c) noreturn;

fn dupZ(allocator: std.mem.Allocator, s: []const u8) ![:0]u8 {
    return allocator.dupeZ(u8, s);
}

fn setCloexec(fd: c_int) void {
    _ = c.fcntl(fd, @as(c_int, 2), @as(c_int, 1)); // F_SETFD=2, FD_CLOEXEC=1
}

fn openDevNull(flags: c_int) c_int {
    var oflags: c.O = .{};
    oflags.CLOEXEC = true;
    oflags.ACCMODE = if (flags == 0) .RDONLY else .WRONLY;
    const fd = c.open("/dev/null", oflags, @as(c_uint, 0o666));
    if (c.errno(fd) != .SUCCESS) return -1;
    return @intCast(fd);
}

fn mkSpawnErrno() *anyopaque {
    return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

fn setEnvZ(key: []const u8, val: []const u8) void {
    var key_buf: [4096]u8 = undefined;
    var val_buf: [4096]u8 = undefined;
    if (key.len >= key_buf.len or val.len >= val_buf.len) return;
    @memcpy(key_buf[0..key.len], key);
    @memcpy(val_buf[0..val.len], val);
    key_buf[key.len] = 0;
    val_buf[val.len] = 0;
    _ = setenv(@ptrCast(&key_buf), @ptrCast(&val_buf), 1);
}

fn unsetEnvZ(key: []const u8) void {
    var key_buf: [4096]u8 = undefined;
    if (key.len >= key_buf.len) return;
    @memcpy(key_buf[0..key.len], key);
    key_buf[key.len] = 0;
    _ = unsetenv(@ptrCast(&key_buf));
}

fn mkSpawnError(err: anyerror) *anyopaque {
    return io_result.lean_io_result_mk_error(io_error.lean_mk_io_error_other_error(0, string.mkAsciiStringBytes(@errorName(err))));
}

fn parentEnvironSlice() []const [*:0]const u8 {
    const env = c.environ;
    var count: usize = 0;
    while (env[count] != null) : (count += 1) {}
    return @ptrCast(env[0..count]);
}

pub export fn lean_io_process_spawn(args_obj: *anyopaque) callconv(.c) *anyopaque {
    const stdio_cfg = ctor.lean_ctor_get(args_obj, 0).?;
    const stdin_mode = ctor.lean_ctor_get_uint8(stdio_cfg, 0);
    const stdout_mode = ctor.lean_ctor_get_uint8(stdio_cfg, 1);
    const stderr_mode = ctor.lean_ctor_get_uint8(stdio_cfg, 2);
    const cmd_obj = ctor.lean_ctor_get(args_obj, 1).?;
    const argv_arr = ctor.lean_ctor_get(args_obj, 2).?;
    const cwd_opt = ctor.lean_ctor_get(args_obj, 3).?;
    const env_arr = ctor.lean_ctor_get(args_obj, 4).?;
    const inherit_env = ctor.lean_ctor_get_uint8(args_obj, 5 * @sizeOf(*anyopaque)) != 0;
    const use_setsid = ctor.lean_ctor_get_uint8(args_obj, 5 * @sizeOf(*anyopaque) + 1) != 0;

    // Build argv as null-terminated C strings (strdup'd, freed after fork)
    const nargs = array.lean_array_size(argv_arr);
    var pargs: [*:null]?[*:0]u8 = gpa.allocSentinel(?[*:0]u8, nargs + 1, null) catch return mkOtherIoError("out of memory");
    defer gpa.free(pargs[0..nargs + 1]);
    pargs[0] = dupZ(gpa, stringSliceArg(cmd_obj) catch return invalidPath(cmd_obj)) catch return mkOtherIoError("out of memory");
    for (0..nargs) |i| {
        const arg = array.lean_array_uget(argv_arr, i).?;
        defer rc.lean_dec(arg);
        pargs[i + 1] = dupZ(gpa, stringSliceArg(arg) catch return invalidPath(arg)) catch return mkOtherIoError("out of memory");
    }

    // Collect env overrides
    const nenv = array.lean_array_size(env_arr);
    var env_keys = gpa.alloc([]const u8, nenv) catch return mkOtherIoError("out of memory");
    defer gpa.free(env_keys);
    var env_vals = gpa.alloc(?[]const u8, nenv) catch return mkOtherIoError("out of memory");
    defer gpa.free(env_vals);
    for (0..nenv) |i| {
        const pair = array.lean_array_uget(env_arr, i).?;
        defer rc.lean_dec(pair);
        const key_obj = ctor.lean_ctor_get(pair, 0).?;
        const val_opt = ctor.lean_ctor_get(pair, 1).?;
        env_keys[i] = stringSliceArg(key_obj) catch return invalidPath(key_obj);
        if (object.lean_is_scalar(val_opt)) {
            env_vals[i] = null; // unset
        } else {
            const val = ctor.lean_ctor_get(val_opt, 0).?;
            env_vals[i] = stringSliceArg(val) catch return invalidPath(val);
        }
    }

    // Resolve cwd
    const cwd_slice: ?[]const u8 = if (object.lean_is_scalar(cwd_opt))
        null
    else
        stringSliceArg(ctor.lean_ctor_get(cwd_opt, 0).?) catch return invalidPath(ctor.lean_ctor_get(cwd_opt, 0).?);

    // Setup pipes for piped stdio (PIPED=0, INHERIT=1, NUL=2)
    var stdin_fds: [2]c_int = .{ -1, -1 };
    var stdout_fds: [2]c_int = .{ -1, -1 };
    var stderr_fds: [2]c_int = .{ -1, -1 };
    if (stdin_mode == 0)  if (pipe(&stdin_fds)  == -1) return mkSpawnErrno();
    if (stdout_mode == 0) if (pipe(&stdout_fds) == -1) return mkSpawnErrno();
    if (stderr_mode == 0) if (pipe(&stderr_fds) == -1) return mkSpawnErrno();

    // Set CLOEXEC on pipe write/read ends so they don't leak into child
    if (stdin_mode == 0)  { setCloexec(stdin_fds[0]);  setCloexec(stdin_fds[1]);  }
    if (stdout_mode == 0) { setCloexec(stdout_fds[0]); setCloexec(stdout_fds[1]); }
    if (stderr_mode == 0) { setCloexec(stderr_fds[0]); setCloexec(stderr_fds[1]); }

    const pid = fork();
    if (pid == -1) return mkSpawnErrno();

    if (pid == 0) {
        // ── child process ──
        // Do NOT allocate between fork and execvp (ASAN-safe)

        // Stdio redirection
        if (stdin_mode == 0) {
            _ = dup2(stdin_fds[0], 0); // stdin read end
            _ = close(stdin_fds[1]);  // close write end
        } else if (stdin_mode == 2) {
            const fd = openDevNull(0); // O_RDONLY=0
            if (fd >= 0) _ = dup2(fd, 0);
        }
        if (stdout_mode == 0) {
            _ = dup2(stdout_fds[1], 1); // stdout write end
            _ = close(stdout_fds[0]);  // close read end
        } else if (stdout_mode == 2) {
            const fd = openDevNull(1); // O_WRONLY=1
            if (fd >= 0) _ = dup2(fd, 1);
        }
        if (stderr_mode == 0) {
            _ = dup2(stderr_fds[1], 2); // stderr write end
            _ = close(stderr_fds[0]);  // close read end
        } else if (stderr_mode == 2) {
            const fd = openDevNull(1); // O_WRONLY=1
            if (fd >= 0) _ = dup2(fd, 2);
        }

        // Environment
        if (!inherit_env) {
            // Clear environment (matches C++ behavior: environ = NULL on macOS)
            environ = null;
        }
        for (0..nenv) |i| {
            if (env_vals[i]) |val| {
                setEnvZ(env_keys[i], val);
            } else {
                unsetEnvZ(env_keys[i]);
            }
        }

        // Working directory
        if (cwd_slice) |cwd| {
            const cwd_z = dupZ(gpa, cwd) catch _exit(1);
            if (chdir(cwd_z) < 0) _exit(1);
        }

        // setsid
        if (use_setsid) {
            if (setsid() < 0) _exit(1);
        }

        // execvp searches PATH
        _ = execvp(pargs[0].?, @ptrCast(pargs));
        // execvp only returns on error
        _exit(1);
    }

    // ── parent process ──
    // Free duplicated argv strings
    for (pargs[0 .. nargs + 1]) |p| if (p) |str| gpa.free(std.mem.span(str));

    // Close child-side fds and wrap parent-side fds
    var parent_stdin: *anyopaque = object.lean_box(0).?;
    var parent_stdout: *anyopaque = object.lean_box(0).?;
    var parent_stderr: *anyopaque = object.lean_box(0).?;

    if (stdin_mode == 0) {
        _ = close(stdin_fds[0]); // close read end (child side)
        parent_stdin = wrapFd(stdin_fds[1]); // write end
    }
    if (stdout_mode == 0) {
        _ = close(stdout_fds[1]); // close write end (child side)
        parent_stdout = wrapFd(stdout_fds[0]); // read end
    }
    if (stderr_mode == 0) {
        _ = close(stderr_fds[1]); // close write end (child side)
        parent_stderr = wrapFd(stderr_fds[0]); // read end
    }

    return io_result.lean_io_result_mk_ok(mkChild(parent_stdin, parent_stdout, parent_stderr, @intCast(pid), use_setsid));
}

pub export fn lean_io_process_child_wait(_: *anyopaque, child: *anyopaque) callconv(.c) *anyopaque {
    var status: c_int = 0;
    if (c.waitpid(childPid(child), &status, 0) == -1) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
    }
    return io_result.lean_io_result_mk_ok(box.lean_box_uint32(waitCode(status)).?);
}

pub export fn lean_io_process_child_try_wait(_: *anyopaque, child: *anyopaque) callconv(.c) *anyopaque {
    var status: c_int = 0;
    const ret = c.waitpid(childPid(child), &status, c.W.NOHANG);
    if (ret == -1) return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
    if (ret == 0) return io_result.lean_io_result_mk_ok(mkOptionNone());
    return io_result.lean_io_result_mk_ok(mkOptionSome(box.lean_box_uint32(waitCode(status)).?));
}

pub export fn lean_io_process_child_kill(_: *anyopaque, child: *anyopaque) callconv(.c) *anyopaque {
    const pid = childPid(child);
    const target: c.pid_t = if (childSetsid(child)) -pid else pid;
    return if (c.kill(target, c.SIG.KILL) == 0) mkUnitResult() else io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(c._errno().*, null));
}

pub export fn lean_io_process_child_pid(_: *anyopaque, child: *anyopaque) callconv(.c) u32 {
    return @intCast(childPid(child));
}

pub export fn lean_io_process_child_take_stdin(_: *anyopaque, lchild: *anyopaque) callconv(.c) *anyopaque {
    defer rc.lean_dec(lchild);
    const stdin_h = ctor.lean_ctor_get(lchild, 0).?;
    const stdout_h = ctor.lean_ctor_get(lchild, 1).?;
    const stderr_h = ctor.lean_ctor_get(lchild, 2).?;
    rc.lean_inc(stdin_h);
    rc.lean_inc(stdout_h);
    rc.lean_inc(stderr_h);
    const child2 = mkChild(object.lean_box(0).?, stdout_h, stderr_h, @intCast(childPid(lchild)), childSetsid(lchild));
    return io_result.lean_io_result_mk_ok(mkPair(stdin_h, child2));
}

test "retrying POSIX read and write helpers round-trip pipe bytes" {
    var fds: [2]c_int = undefined;
    try std.testing.expectEqual(@as(c_int, 0), c.pipe(&fds));
    defer _ = c.close(fds[0]);
    defer _ = c.close(fds[1]);

    const msg = "partial-safe";
    try std.testing.expectEqual(@as(c_int, 0), writeAllRetry(@intCast(fds[1]), msg));

    var buf: [msg.len]u8 = undefined;
    const got = readRetry(@intCast(fds[0]), &buf, buf.len);
    try std.testing.expectEqual(@as(isize, @intCast(msg.len)), got);
    try std.testing.expectEqualStrings(msg, &buf);
}
