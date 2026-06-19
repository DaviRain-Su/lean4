// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `system` libuv subsystem exports.
//!
//! All functions listed in `src/runtime/uv/system.h` are implemented here,
//! including `lean_uv_random` which uses a libuv C callback for async random
//! byte generation.

const std = @import("std");
const c = @cImport({
    @cInclude("uv.h");
    @cInclude("stdlib.h");
});

const alloc = @import("alloc.zig");
const array = @import("array.zig");
const box = @import("box.zig");
const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_error = @import("io_error.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const nat_constructors = @import("nat_constructors.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");

pub const force_link = true;

extern fn lean_event_loop_lock() callconv(.c) void;
extern fn lean_event_loop_unlock() callconv(.c) void;
extern fn lean_event_loop_loop() callconv(.c) *anyopaque;

extern fn lean_io_promise_new() callconv(.c) *anyopaque;
extern fn lean_io_promise_resolve(value: *anyopaque, promise: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mark_mt(obj: *anyopaque) callconv(.c) void;

// ============================================================================
// String helpers
// ============================================================================

fn leanStringCStr(s: *anyopaque) [*:0]const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(s));
    return @ptrCast(&str.m_data);
}

fn leanStringSize(s: *anyopaque) usize {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(s));
    return str.m_size;
}

fn hasEmbeddedNul(s: *anyopaque) bool {
    const cstr = leanStringCStr(s);
    const size = leanStringSize(s);
    return std.mem.len(cstr) != size - 1;
}

fn mkEmbeddedNulError(str: *anyopaque) *anyopaque {
    const details = string.lean_mk_string("string contains NUL bytes");
    rc.lean_inc(str);
    return io_result.lean_io_result_mk_error(
        io_error.lean_mk_io_error_invalid_argument_file(str, @intCast(@intFromEnum(std.posix.E.INVAL)), details),
    );
}

fn mkOptionNone() *anyopaque {
    return object.lean_box(0).?;
}

fn mkOptionSome(v: *anyopaque) *anyopaque {
    const some = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(some, 0, v);
    return some;
}

fn mkUnitOk() *anyopaque {
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

pub fn lean_libuv_version(_: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_constructors.lean_big_usize_to_nat(@intCast(c.uv_version()));
}

fn boxU64(v: u64) *anyopaque {
    return box.lean_box_uint64(v).?;
}

// ============================================================================
// Exported libuv system functions
// ============================================================================

// Std.Internal.UV.System.getProcessTitle : IO String
pub fn lean_uv_get_process_title() callconv(.c) *anyopaque {
    var title: [512]u8 = undefined;
    const result = c.uv_get_process_title(@ptrCast(&title), title.len);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(string.lean_mk_string(@ptrCast(&title)));
}

// Std.Internal.UV.System.setProcessTitle : @& String -> IO Unit
pub fn lean_uv_set_process_title(title: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(title)) {
        return mkEmbeddedNulError(title);
    }

    const result = c.uv_set_process_title(leanStringCStr(title));

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return mkUnitOk();
}

// Std.Internal.UV.System.uptime : IO UInt64
pub fn lean_uv_uptime() callconv(.c) *anyopaque {
    var uptime: f64 = undefined;

    const result = c.uv_uptime(&uptime);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(boxU64(@intFromFloat(uptime)));
}

// Std.Internal.UV.System.osGetPid : IO UInt64
pub fn lean_uv_os_getpid() callconv(.c) *anyopaque {
    return io_result.lean_io_result_mk_ok(boxU64(@intCast(c.uv_os_getpid())));
}

// Std.Internal.UV.System.osGetPpid : IO UInt64
pub fn lean_uv_os_getppid() callconv(.c) *anyopaque {
    return io_result.lean_io_result_mk_ok(boxU64(@intCast(c.uv_os_getppid())));
}

// Std.Internal.UV.System.cpuInfo : IO (Array CPUInfo)
pub fn lean_uv_cpu_info() callconv(.c) *anyopaque {
    var cpu_infos: [*c]c.uv_cpu_info_t = undefined;
    var count: c_int = undefined;

    const result = c.uv_cpu_info(&cpu_infos, &count);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const n = @as(usize, @intCast(count));
    const lean_cpu_infos = alloc.lean_alloc_array(n, n);
    const arr: *lean.lean_array_object = @ptrCast(@alignCast(lean_cpu_infos));
    const slots: [*]?*anyopaque = @ptrCast(&arr.m_data);

    for (0..n) |i| {
        const times = alloc.lean_alloc_ctor(0, 0, 40);
        ctor.lean_ctor_set_uint64(times, 0, @intCast(cpu_infos[i].cpu_times.user));
        ctor.lean_ctor_set_uint64(times, 8, @intCast(cpu_infos[i].cpu_times.nice));
        ctor.lean_ctor_set_uint64(times, 16, @intCast(cpu_infos[i].cpu_times.sys));
        ctor.lean_ctor_set_uint64(times, 24, @intCast(cpu_infos[i].cpu_times.idle));
        ctor.lean_ctor_set_uint64(times, 32, @intCast(cpu_infos[i].cpu_times.irq));

        const model = string.lean_mk_string(cpu_infos[i].model);

        const cpu_info = alloc.lean_alloc_ctor(0, 2, 8);
        ctor.lean_ctor_set(cpu_info, 0, model);
        ctor.lean_ctor_set(cpu_info, 1, times);
        ctor.lean_ctor_set_uint64(cpu_info, @intCast(2 * @sizeOf(?*anyopaque)), @intCast(cpu_infos[i].speed));

        slots[i] = cpu_info;
    }

    c.uv_free_cpu_info(cpu_infos, count);

    return io_result.lean_io_result_mk_ok(lean_cpu_infos);
}

// Std.Internal.UV.System.cwd : IO String
pub fn lean_uv_cwd() callconv(.c) *anyopaque {
    var buffer: [std.posix.PATH_MAX]u8 = undefined;
    var size: usize = buffer.len;

    const result = c.uv_cwd(@ptrCast(&buffer), &size);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(string.lean_mk_string(@ptrCast(&buffer)));
}

// Std.Internal.UV.System.chdir : @& String -> IO Unit
pub fn lean_uv_chdir(path: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(path)) {
        return mkEmbeddedNulError(path);
    }

    const result = c.uv_chdir(leanStringCStr(path));

    if (result < 0) {
        rc.lean_inc(path);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, path));
    }

    return mkUnitOk();
}

// Std.Internal.UV.System.osHomedir : IO String
pub fn lean_uv_os_homedir() callconv(.c) *anyopaque {
    var buffer: [std.posix.PATH_MAX]u8 = undefined;
    var size: usize = buffer.len;

    const result = c.uv_os_homedir(@ptrCast(&buffer), &size);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(string.lean_mk_string(@ptrCast(&buffer)));
}

// Std.Internal.UV.System.osTmpdir : IO String
pub fn lean_uv_os_tmpdir() callconv(.c) *anyopaque {
    var buffer: [std.posix.PATH_MAX]u8 = undefined;
    var size: usize = buffer.len;

    const result = c.uv_os_tmpdir(@ptrCast(&buffer), &size);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(string.lean_mk_string(@ptrCast(&buffer)));
}

// Std.Internal.UV.System.osGetPasswd : IO PasswdInfo
pub fn lean_uv_os_get_passwd() callconv(.c) *anyopaque {
    var passwd: c.uv_passwd_t = undefined;

    const result = c.uv_os_get_passwd(&passwd);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const invalid_uid: c_ulong = @bitCast(@as(c_long, -1));
    const username = string.lean_mk_string(passwd.username);
    const uid = if (passwd.uid != invalid_uid) mkOptionSome(boxU64(passwd.uid)) else mkOptionNone();
    const gid = if (passwd.gid != invalid_uid) mkOptionSome(boxU64(passwd.gid)) else mkOptionNone();
    const shell = if (passwd.shell != null) mkOptionSome(string.lean_mk_string(passwd.shell)) else mkOptionNone();
    const homedir = if (passwd.homedir != null) mkOptionSome(string.lean_mk_string(passwd.homedir)) else mkOptionNone();

    const passwd_info = alloc.lean_alloc_ctor(0, 5, 0);
    ctor.lean_ctor_set(passwd_info, 0, username);
    ctor.lean_ctor_set(passwd_info, 1, uid);
    ctor.lean_ctor_set(passwd_info, 2, gid);
    ctor.lean_ctor_set(passwd_info, 3, shell);
    ctor.lean_ctor_set(passwd_info, 4, homedir);

    c.uv_os_free_passwd(&passwd);

    return io_result.lean_io_result_mk_ok(passwd_info);
}

// Std.Internal.UV.System.osGetGroup : IO (Option GroupInfo)
pub fn lean_uv_os_get_group(gid: u64) callconv(.c) *anyopaque {
    var group: c.uv_group_t = undefined;
    const result = c.uv_os_get_group(&group, @intCast(gid));

    if (result == c.UV_ENOENT) {
        return io_result.lean_io_result_mk_ok(mkOptionNone());
    }

    if (result < 0) {
        const details = string.lean_mk_string("group");
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, details));
    }

    const groupname = string.lean_mk_string(group.groupname);

    var count: usize = 0;
    if (group.members != null) {
        while (group.members[count] != null) {
            count += 1;
        }
    }

    var members = array.lean_mk_empty_array();
    for (0..count) |i| {
        const member_name = string.lean_mk_string(group.members[i]);
        members = array.lean_array_push(members, member_name);
    }

    const group_info = alloc.lean_alloc_ctor(0, 2, 8);
    ctor.lean_ctor_set(group_info, 0, groupname);
    ctor.lean_ctor_set(group_info, 1, members);
    ctor.lean_ctor_set_uint64(group_info, @intCast(2 * @sizeOf(?*anyopaque)), group.gid);

    c.uv_os_free_group(&group);

    return io_result.lean_io_result_mk_ok(mkOptionSome(group_info));
}

// Std.Internal.UV.System.osEnviron : IO (Array (String x String))
pub fn lean_uv_os_environ() callconv(.c) *anyopaque {
    var env: [*c]c.uv_env_item_t = undefined;
    var count: c_int = undefined;
    const result = c.uv_os_environ(&env, &count);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(string.lean_mk_string(c.uv_strerror(result)));
    }

    var env_array = array.lean_mk_empty_array();

    const n = @as(usize, @intCast(count));
    for (0..n) |i| {
        const name = string.lean_mk_string(env[i].name);
        const value = string.lean_mk_string(env[i].value);

        const pair = alloc.lean_alloc_ctor(0, 2, 0);
        ctor.lean_ctor_set(pair, 0, name);
        ctor.lean_ctor_set(pair, 1, value);

        env_array = array.lean_array_push(env_array, pair);
    }

    c.uv_os_free_environ(env, count);

    return io_result.lean_io_result_mk_ok(env_array);
}

// Std.Internal.UV.System.osGetenv : @& String -> IO (Option String)
pub fn lean_uv_os_getenv(name: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(name)) {
        return io_result.lean_io_result_mk_ok(mkOptionNone());
    }

    const name_str = leanStringCStr(name);
    var stack_buffer: [1024]u8 = undefined;
    var size: usize = stack_buffer.len;

    const result = c.uv_os_getenv(name_str, @ptrCast(&stack_buffer), &size);

    if (result == c.UV_ENOENT) {
        return io_result.lean_io_result_mk_ok(mkOptionNone());
    } else if (result == c.UV_ENOBUFS) {
        const heap_buffer: [*c]u8 = @ptrCast(c.malloc(size));
        if (heap_buffer == null) {
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intCast(@intFromEnum(std.posix.E.NOMEM)), null));
        }

        const retry_result = c.uv_os_getenv(name_str, heap_buffer, &size);

        if (retry_result == c.UV_ENOENT) {
            c.free(heap_buffer);
            return io_result.lean_io_result_mk_ok(mkOptionNone());
        } else if (retry_result < 0) {
            c.free(heap_buffer);
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(retry_result, null));
        }

        const value = string.lean_mk_string(@ptrCast(heap_buffer));
        c.free(heap_buffer);
        return io_result.lean_io_result_mk_ok(mkOptionSome(value));
    } else if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const value = string.lean_mk_string(@ptrCast(&stack_buffer));
    return io_result.lean_io_result_mk_ok(mkOptionSome(value));
}

// Std.Internal.UV.System.osSetenv : @& String -> @& String -> IO Unit
pub fn lean_uv_os_setenv(name: *anyopaque, value: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(name)) {
        return mkEmbeddedNulError(name);
    }
    if (hasEmbeddedNul(value)) {
        return mkEmbeddedNulError(value);
    }

    const result = c.uv_os_setenv(leanStringCStr(name), leanStringCStr(value));

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return mkUnitOk();
}

// Std.Internal.UV.System.osUnsetenv : @& String -> IO Unit
pub fn lean_uv_os_unsetenv(name: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(name)) {
        return mkEmbeddedNulError(name);
    }

    const result = c.uv_os_unsetenv(leanStringCStr(name));

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return mkUnitOk();
}

// Std.Internal.UV.System.osGetHostname : IO String
pub fn lean_uv_os_gethostname() callconv(.c) *anyopaque {
    var hostname: [256]u8 = undefined;
    var size: usize = hostname.len;

    const result = c.uv_os_gethostname(@ptrCast(&hostname), &size);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(string.lean_mk_string(@ptrCast(&hostname)));
}

// Std.Internal.UV.System.osGetPriority : UInt64 -> IO Int64
pub fn lean_uv_os_getpriority(pid: u64) callconv(.c) *anyopaque {
    var priority: c_int = undefined;

    const result = c.uv_os_getpriority(@intCast(pid), &priority);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(boxU64(@intCast(priority)));
}

// Std.Internal.UV.System.osSetPriority : UInt64 -> Int -> IO Unit
pub fn lean_uv_os_setpriority(pid: u64, priority: i64) callconv(.c) *anyopaque {
    const result = c.uv_os_setpriority(@intCast(pid), @intCast(priority));

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return mkUnitOk();
}

// Std.Internal.UV.System.osUname : IO UnameInfo
pub fn lean_uv_os_uname() callconv(.c) *anyopaque {
    var uname_info: c.uv_utsname_t = undefined;

    const result = c.uv_os_uname(&uname_info);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const sysname = string.lean_mk_string(@ptrCast(&uname_info.sysname));
    const release = string.lean_mk_string(@ptrCast(&uname_info.release));
    const version = string.lean_mk_string(@ptrCast(&uname_info.version));
    const machine = string.lean_mk_string(@ptrCast(&uname_info.machine));

    const uname = alloc.lean_alloc_ctor(0, 4, 0);
    ctor.lean_ctor_set(uname, 0, sysname);
    ctor.lean_ctor_set(uname, 1, release);
    ctor.lean_ctor_set(uname, 2, version);
    ctor.lean_ctor_set(uname, 3, machine);

    return io_result.lean_io_result_mk_ok(uname);
}

// Std.Internal.UV.System.hrtime : IO UInt64
pub fn lean_uv_hrtime() callconv(.c) *anyopaque {
    const time = c.uv_hrtime();
    return io_result.lean_io_result_mk_ok(boxU64(time));
}

// Std.Internal.UV.System.random : UInt64 -> IO (IO.Promise (Except IO.Error (Array UInt8)))
// Now fully implemented in Zig with a libuv C callback.
const RandomReq = extern struct {
    req: c.uv_random_t,
    promise: ?*anyopaque,
    byte_array: ?*anyopaque,
};

fn randomCallback(uv_req: ?*c.uv_random_t, status: c_int, _: ?*anyopaque, buflen: usize) callconv(.c) void {
    const req: *RandomReq = @ptrCast(@alignCast(uv_req.?));
    if (status < 0) {
        rc.lean_dec(req.byte_array.?);
        const err = io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(status, null));
        _ = lean_io_promise_resolve(err, req.promise.?);
    } else {
        const sa: *lean.lean_sarray_object = @ptrCast(@alignCast(req.byte_array.?));
        sa.m_size = buflen;
        const ok = io_result.lean_io_result_mk_ok(req.byte_array.?);
        _ = lean_io_promise_resolve(ok, req.promise.?);
    }
    rc.lean_dec(req.promise.?);
    std.heap.c_allocator.destroy(req);
}

pub fn lean_uv_random(size: u64) callconv(.c) *anyopaque {
    const req = std.heap.c_allocator.create(RandomReq) catch
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    const promise = lean_io_promise_new();
    lean_mark_mt(promise);
    req.promise = promise;
    const byte_array = alloc.lean_alloc_sarray(1, 0, @intCast(size));
    req.byte_array = byte_array;
    req.req.data = req;
    rc.lean_inc(promise);
    lean_event_loop_lock();
    const sa: *lean.lean_sarray_object = @ptrCast(@alignCast(byte_array));
    const buf: [*]u8 = @ptrCast(&sa.m_data);
    const result = c.uv_random(
        @ptrCast(@alignCast(lean_event_loop_loop())),
        &req.req,
        buf,
        @intCast(size),
        0,
        @ptrCast(&randomCallback),
    );
    lean_event_loop_unlock();
    if (result < 0) {
        rc.lean_dec(byte_array);
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        std.heap.c_allocator.destroy(req);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(promise);
}
pub fn lean_uv_getrusage() callconv(.c) *anyopaque {
    var usage: c.uv_rusage_t = undefined;
    const result = c.uv_getrusage(&usage);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const r = alloc.lean_alloc_ctor(0, 0, @intCast(16 * @sizeOf(u64)));
    const timeval_to_millis = struct {
        fn call(t: c.uv_timeval_t) u64 {
            return @as(u64, @intCast(t.tv_sec)) * 1000 + @as(u64, @intCast(t.tv_usec)) / 1000;
        }
    }.call;

    ctor.lean_ctor_set_uint64(r, @intCast(0 * @sizeOf(u64)), timeval_to_millis(usage.ru_utime));
    ctor.lean_ctor_set_uint64(r, @intCast(1 * @sizeOf(u64)), timeval_to_millis(usage.ru_stime));
    ctor.lean_ctor_set_uint64(r, @intCast(2 * @sizeOf(u64)), @intCast(usage.ru_maxrss));
    ctor.lean_ctor_set_uint64(r, @intCast(3 * @sizeOf(u64)), @intCast(usage.ru_ixrss));
    ctor.lean_ctor_set_uint64(r, @intCast(4 * @sizeOf(u64)), @intCast(usage.ru_idrss));
    ctor.lean_ctor_set_uint64(r, @intCast(5 * @sizeOf(u64)), @intCast(usage.ru_isrss));
    ctor.lean_ctor_set_uint64(r, @intCast(6 * @sizeOf(u64)), @intCast(usage.ru_minflt));
    ctor.lean_ctor_set_uint64(r, @intCast(7 * @sizeOf(u64)), @intCast(usage.ru_majflt));
    ctor.lean_ctor_set_uint64(r, @intCast(8 * @sizeOf(u64)), @intCast(usage.ru_nswap));
    ctor.lean_ctor_set_uint64(r, @intCast(9 * @sizeOf(u64)), @intCast(usage.ru_inblock));
    ctor.lean_ctor_set_uint64(r, @intCast(10 * @sizeOf(u64)), @intCast(usage.ru_oublock));
    ctor.lean_ctor_set_uint64(r, @intCast(11 * @sizeOf(u64)), @intCast(usage.ru_msgsnd));
    ctor.lean_ctor_set_uint64(r, @intCast(12 * @sizeOf(u64)), @intCast(usage.ru_msgrcv));
    ctor.lean_ctor_set_uint64(r, @intCast(13 * @sizeOf(u64)), @intCast(usage.ru_nsignals));
    ctor.lean_ctor_set_uint64(r, @intCast(14 * @sizeOf(u64)), @intCast(usage.ru_nvcsw));
    ctor.lean_ctor_set_uint64(r, @intCast(15 * @sizeOf(u64)), @intCast(usage.ru_nivcsw));

    return io_result.lean_io_result_mk_ok(r);
}

// Std.Internal.UV.System.exePath : IO String
pub fn lean_uv_exepath() callconv(.c) *anyopaque {
    var buffer: [std.posix.PATH_MAX]u8 = undefined;
    var size: usize = buffer.len;

    const result = c.uv_exepath(@ptrCast(&buffer), &size);

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(string.lean_mk_string(@ptrCast(&buffer)));
}

// Std.Internal.UV.System.freeMemory : IO UInt64
pub fn lean_uv_get_free_memory() callconv(.c) *anyopaque {
    const mem = c.uv_get_free_memory();
    return io_result.lean_io_result_mk_ok(boxU64(mem));
}

// Std.Internal.UV.System.totalMemory : IO UInt64
pub fn lean_uv_get_total_memory() callconv(.c) *anyopaque {
    const mem = c.uv_get_total_memory();
    return io_result.lean_io_result_mk_ok(boxU64(mem));
}

// Std.Internal.UV.System.constrainedMemory : IO UInt64
pub fn lean_uv_get_constrained_memory() callconv(.c) *anyopaque {
    const mem = c.uv_get_constrained_memory();
    return io_result.lean_io_result_mk_ok(boxU64(mem));
}

// Std.Internal.UV.System.availableMemory : IO UInt64
pub fn lean_uv_get_available_memory() callconv(.c) *anyopaque {
    const mem = c.uv_get_available_memory();
    return io_result.lean_io_result_mk_ok(boxU64(mem));
}
