// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const builtin = @import("builtin");
const std = @import("std");
const testing = std.testing;
const lean = @import("lean_object.zig");
const rt_object = @import("object.zig");
const c = @cImport({
    @cInclude("pthread.h");
    @cInclude("sys/time.h");
});

const gpa = std.heap.c_allocator;

fn checkPThread(comptime name: []const u8, rc: std.c.E) void {
    if (rc != .SUCCESS) {
        std.debug.panic("{s} failed with errno {}", .{ name, @intFromEnum(rc) });
    }
}

fn checkErrno(comptime name: []const u8, rc: c_int) void {
    if (rc != 0) {
        std.debug.panic("{s} failed with errno {}", .{ name, rc });
    }
}

fn wallClockNanos() u64 {
    var tv: c.timeval = undefined;
    checkErrno("gettimeofday", c.gettimeofday(&tv, null));
    return @as(u64, @intCast(tv.tv_sec)) * std.time.ns_per_s +
        @as(u64, @intCast(tv.tv_usec)) * std.time.ns_per_us;
}

pub const AtomicLeanPtr = struct {
    value: std.atomic.Value(usize),

    fn encode(ptr: ?*lean.lean_object) usize {
        return if (ptr) |value| @intFromPtr(value) else 0;
    }

    fn decode(bits: usize) ?*lean.lean_object {
        return if (bits == 0) null else @ptrFromInt(bits);
    }

    pub fn init(value: ?*lean.lean_object) AtomicLeanPtr {
        return .{ .value = std.atomic.Value(usize).init(encode(value)) };
    }

    pub fn load(self: *const AtomicLeanPtr, comptime order: std.builtin.AtomicOrder) ?*lean.lean_object {
        return decode(self.value.load(order));
    }

    pub fn store(self: *AtomicLeanPtr, value: ?*lean.lean_object, comptime order: std.builtin.AtomicOrder) void {
        self.value.store(encode(value), order);
    }

    pub fn cmpxchgStrong(self: *AtomicLeanPtr, expected: ?*lean.lean_object, desired: ?*lean.lean_object) ?*lean.lean_object {
        return if (self.value.cmpxchgStrong(encode(expected), encode(desired), .acq_rel, .acquire)) |current|
            decode(current)
        else
            null;
    }
};

pub fn atomicLeanPtr(slot: *?*anyopaque) *AtomicLeanPtr {
    return @ptrCast(@alignCast(slot));
}

pub const Mutex = struct {
    raw: std.c.pthread_mutex_t = std.c.PTHREAD_MUTEX_INITIALIZER,

    pub fn init() Mutex {
        return .{};
    }

    pub fn deinit(self: *Mutex) void {
        checkPThread("pthread_mutex_destroy", std.c.pthread_mutex_destroy(&self.raw));
    }

    pub fn lock(self: *Mutex) void {
        checkPThread("pthread_mutex_lock", std.c.pthread_mutex_lock(&self.raw));
    }

    pub fn tryLock(self: *Mutex) bool {
        const rc = std.c.pthread_mutex_trylock(&self.raw);
        if (rc == .SUCCESS) return true;
        if (rc == .BUSY) return false;
        checkPThread("pthread_mutex_trylock", rc);
        unreachable;
    }

    pub fn unlock(self: *Mutex) void {
        checkPThread("pthread_mutex_unlock", std.c.pthread_mutex_unlock(&self.raw));
    }
};

pub const Condvar = struct {
    raw: std.c.pthread_cond_t = std.c.PTHREAD_COND_INITIALIZER,

    pub fn init() Condvar {
        return .{};
    }

    pub fn deinit(self: *Condvar) void {
        checkPThread("pthread_cond_destroy", std.c.pthread_cond_destroy(&self.raw));
    }

    pub fn wait(self: *Condvar, mutex: *Mutex) void {
        checkPThread("pthread_cond_wait", std.c.pthread_cond_wait(&self.raw, &mutex.raw));
    }

    pub fn signal(self: *Condvar) void {
        checkPThread("pthread_cond_signal", std.c.pthread_cond_signal(&self.raw));
    }

    pub fn broadcast(self: *Condvar) void {
        checkPThread("pthread_cond_broadcast", std.c.pthread_cond_broadcast(&self.raw));
    }
};

pub const RecursiveMutex = struct {
    raw: c.pthread_mutex_t,

    pub fn init() RecursiveMutex {
        var attr: c.pthread_mutexattr_t = undefined;
        checkErrno("pthread_mutexattr_init", c.pthread_mutexattr_init(&attr));
        defer checkErrno("pthread_mutexattr_destroy", c.pthread_mutexattr_destroy(&attr));

        checkErrno("pthread_mutexattr_settype", c.pthread_mutexattr_settype(&attr, c.PTHREAD_MUTEX_RECURSIVE));

        var raw: c.pthread_mutex_t = undefined;
        checkErrno("pthread_mutex_init", c.pthread_mutex_init(&raw, &attr));
        return .{ .raw = raw };
    }

    pub fn deinit(self: *RecursiveMutex) void {
        checkErrno("pthread_mutex_destroy", c.pthread_mutex_destroy(&self.raw));
    }

    pub fn lock(self: *RecursiveMutex) void {
        checkErrno("pthread_mutex_lock", c.pthread_mutex_lock(&self.raw));
    }

    pub fn tryLock(self: *RecursiveMutex) bool {
        const rc = c.pthread_mutex_trylock(&self.raw);
        if (rc == 0) return true;
        if (rc == @intFromEnum(std.c.E.BUSY)) return false;
        checkErrno("pthread_mutex_trylock", rc);
        unreachable;
    }

    pub fn unlock(self: *RecursiveMutex) void {
        checkErrno("pthread_mutex_unlock", c.pthread_mutex_unlock(&self.raw));
    }
};

pub const SharedMutex = struct {
    raw: c.pthread_rwlock_t,

    pub fn init() SharedMutex {
        var raw: c.pthread_rwlock_t = undefined;
        checkErrno("pthread_rwlock_init", c.pthread_rwlock_init(&raw, null));
        return .{ .raw = raw };
    }

    pub fn deinit(self: *SharedMutex) void {
        checkErrno("pthread_rwlock_destroy", c.pthread_rwlock_destroy(&self.raw));
    }

    pub fn write(self: *SharedMutex) void {
        checkErrno("pthread_rwlock_wrlock", c.pthread_rwlock_wrlock(&self.raw));
    }

    pub fn tryWrite(self: *SharedMutex) bool {
        const rc = c.pthread_rwlock_trywrlock(&self.raw);
        if (rc == 0) return true;
        if (rc == @intFromEnum(std.c.E.BUSY)) return false;
        checkErrno("pthread_rwlock_trywrlock", rc);
        unreachable;
    }

    pub fn unlockWrite(self: *SharedMutex) void {
        checkErrno("pthread_rwlock_unlock", c.pthread_rwlock_unlock(&self.raw));
    }

    pub fn read(self: *SharedMutex) void {
        checkErrno("pthread_rwlock_rdlock", c.pthread_rwlock_rdlock(&self.raw));
    }

    pub fn tryRead(self: *SharedMutex) bool {
        const rc = c.pthread_rwlock_tryrdlock(&self.raw);
        if (rc == 0) return true;
        if (rc == @intFromEnum(std.c.E.BUSY)) return false;
        checkErrno("pthread_rwlock_tryrdlock", rc);
        unreachable;
    }

    pub fn unlockRead(self: *SharedMutex) void {
        checkErrno("pthread_rwlock_unlock", c.pthread_rwlock_unlock(&self.raw));
    }
};

var g_basemutex_class: ?*lean.lean_external_class = null;
var g_baserecmutex_class: ?*lean.lean_external_class = null;
var g_basesharedmutex_class: ?*lean.lean_external_class = null;
var g_condvar_class: ?*lean.lean_external_class = null;

fn noopForeach(_: *anyopaque, _: ?*anyopaque) callconv(.c) void {}

fn allocExternalData(comptime T: type, value: T) *T {
    const data = gpa.create(T) catch @panic("out of memory");
    data.* = value;
    return data;
}

fn baseMutexFinalize(data: *anyopaque) callconv(.c) void {
    const mutex: *Mutex = @ptrCast(@alignCast(data));
    mutex.deinit();
    gpa.destroy(mutex);
}

fn baseRecMutexFinalize(data: *anyopaque) callconv(.c) void {
    const mutex: *RecursiveMutex = @ptrCast(@alignCast(data));
    mutex.deinit();
    gpa.destroy(mutex);
}

fn baseSharedMutexFinalize(data: *anyopaque) callconv(.c) void {
    const mutex: *SharedMutex = @ptrCast(@alignCast(data));
    mutex.deinit();
    gpa.destroy(mutex);
}

fn condvarFinalize(data: *anyopaque) callconv(.c) void {
    const condvar: *Condvar = @ptrCast(@alignCast(data));
    condvar.deinit();
    gpa.destroy(condvar);
}

fn ensureBaseMutexClass() *lean.lean_external_class {
    if (g_basemutex_class == null) {
        g_basemutex_class = rt_object.lean_register_external_class(@ptrCast(&baseMutexFinalize), @ptrCast(&noopForeach));
    }
    return g_basemutex_class.?;
}

fn ensureBaseRecMutexClass() *lean.lean_external_class {
    if (g_baserecmutex_class == null) {
        g_baserecmutex_class = rt_object.lean_register_external_class(@ptrCast(&baseRecMutexFinalize), @ptrCast(&noopForeach));
    }
    return g_baserecmutex_class.?;
}

fn ensureBaseSharedMutexClass() *lean.lean_external_class {
    if (g_basesharedmutex_class == null) {
        g_basesharedmutex_class = rt_object.lean_register_external_class(@ptrCast(&baseSharedMutexFinalize), @ptrCast(&noopForeach));
    }
    return g_basesharedmutex_class.?;
}

fn ensureCondvarClass() *lean.lean_external_class {
    if (g_condvar_class == null) {
        g_condvar_class = rt_object.lean_register_external_class(@ptrCast(&condvarFinalize), @ptrCast(&noopForeach));
    }
    return g_condvar_class.?;
}

fn baseMutexPtr(mtx: *anyopaque) *Mutex {
    return @ptrCast(@alignCast(rt_object.lean_get_external_data(mtx).?));
}

fn baseRecMutexPtr(mtx: *anyopaque) *RecursiveMutex {
    return @ptrCast(@alignCast(rt_object.lean_get_external_data(mtx).?));
}

fn baseSharedMutexPtr(mtx: *anyopaque) *SharedMutex {
    return @ptrCast(@alignCast(rt_object.lean_get_external_data(mtx).?));
}

fn condvarPtr(condvar: *anyopaque) *Condvar {
    return @ptrCast(@alignCast(rt_object.lean_get_external_data(condvar).?));
}

pub export fn lean_io_basemutex_new() callconv(.c) *anyopaque {
    return rt_object.lean_alloc_external(ensureBaseMutexClass(), allocExternalData(Mutex, Mutex.init()));
}

pub export fn lean_io_basemutex_lock(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseMutexPtr(mtx).lock();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_basemutex_try_lock(mtx: *anyopaque) callconv(.c) u8 {
    return if (baseMutexPtr(mtx).tryLock()) 1 else 0;
}

pub export fn lean_io_basemutex_unlock(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseMutexPtr(mtx).unlock();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_baserecmutex_new() callconv(.c) *anyopaque {
    return rt_object.lean_alloc_external(ensureBaseRecMutexClass(), allocExternalData(RecursiveMutex, RecursiveMutex.init()));
}

pub export fn lean_io_baserecmutex_lock(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseRecMutexPtr(mtx).lock();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_baserecmutex_try_lock(mtx: *anyopaque) callconv(.c) u8 {
    return if (baseRecMutexPtr(mtx).tryLock()) 1 else 0;
}

pub export fn lean_io_baserecmutex_unlock(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseRecMutexPtr(mtx).unlock();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_basesharedmutex_new() callconv(.c) *anyopaque {
    return rt_object.lean_alloc_external(ensureBaseSharedMutexClass(), allocExternalData(SharedMutex, SharedMutex.init()));
}

pub export fn lean_io_basesharedmutex_write(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseSharedMutexPtr(mtx).write();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_basesharedmutex_try_write(mtx: *anyopaque) callconv(.c) u8 {
    return if (baseSharedMutexPtr(mtx).tryWrite()) 1 else 0;
}

pub export fn lean_io_basesharedmutex_unlock_write(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseSharedMutexPtr(mtx).unlockWrite();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_basesharedmutex_read(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseSharedMutexPtr(mtx).read();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_basesharedmutex_try_read(mtx: *anyopaque) callconv(.c) u8 {
    return if (baseSharedMutexPtr(mtx).tryRead()) 1 else 0;
}

pub export fn lean_io_basesharedmutex_unlock_read(mtx: *anyopaque) callconv(.c) *anyopaque {
    baseSharedMutexPtr(mtx).unlockRead();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_condvar_new() callconv(.c) *anyopaque {
    return rt_object.lean_alloc_external(ensureCondvarClass(), allocExternalData(Condvar, Condvar.init()));
}

pub export fn lean_io_condvar_wait(condvar: *anyopaque, mtx: *anyopaque) callconv(.c) *anyopaque {
    condvarPtr(condvar).wait(baseMutexPtr(mtx));
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_condvar_notify_one(condvar: *anyopaque) callconv(.c) *anyopaque {
    condvarPtr(condvar).signal();
    return rt_object.lean_box(0).?;
}

pub export fn lean_io_condvar_notify_all(condvar: *anyopaque) callconv(.c) *anyopaque {
    condvarPtr(condvar).broadcast();
    return rt_object.lean_box(0).?;
}

pub const Once = struct {
    raw: c.pthread_once_t = onceInitValue(),

    fn onceInitValue() c.pthread_once_t {
        return switch (builtin.os.tag) {
            .driverkit, .ios, .maccatalyst, .macos, .tvos, .visionos, .watchos => .{
                .__sig = 0x30B1BCBA,
                .__opaque = [_]u8{0} ** 8,
            },
            else => std.mem.zeroes(c.pthread_once_t),
        };
    }

    pub fn init() Once {
        return .{};
    }

    pub fn call(self: *Once, initializer: *const fn () callconv(.c) void) void {
        checkErrno("pthread_once", c.pthread_once(&self.raw, initializer));
    }
};

const ContentionState = struct {
    mutex: Mutex,
    condvar: Condvar,
    ready: bool = false,
    waiting: usize = 0,
    counter: usize = 0,
};

fn contentionWaiter(state: *ContentionState) void {
    state.mutex.lock();
    defer state.mutex.unlock();

    state.waiting += 1;
    while (!state.ready) {
        state.condvar.wait(&state.mutex);
    }
    state.counter += 1;
}

fn contentionBroadcaster(state: *ContentionState) void {
    while (true) {
        state.mutex.lock();
        if (state.waiting == 2) {
            state.ready = true;
            state.counter += 1;
            state.condvar.broadcast();
            state.mutex.unlock();
            return;
        }
        state.mutex.unlock();
        std.Thread.yield() catch {};
    }
}

test "mutex and condvar contention completes within one second" {
    var state = ContentionState{
        .mutex = Mutex.init(),
        .condvar = Condvar.init(),
    };
    defer state.condvar.deinit();
    defer state.mutex.deinit();

    const started = wallClockNanos();

    const waiter_a = try std.Thread.spawn(.{}, contentionWaiter, .{&state});
    const waiter_b = try std.Thread.spawn(.{}, contentionWaiter, .{&state});
    const broadcaster = try std.Thread.spawn(.{}, contentionBroadcaster, .{&state});

    waiter_a.join();
    waiter_b.join();
    broadcaster.join();

    const elapsed = wallClockNanos() - started;
    try testing.expect(elapsed < std.time.ns_per_s);
    try testing.expectEqual(@as(usize, 3), state.counter);
}

test "recursive mutex permits repeated locking by the owner" {
    var mutex = RecursiveMutex.init();
    defer mutex.deinit();

    mutex.lock();
    try testing.expect(mutex.tryLock());
    mutex.unlock();
    mutex.unlock();
}

test "shared mutex permits multiple readers and a writer after release" {
    var mutex = SharedMutex.init();
    defer mutex.deinit();

    mutex.read();
    try testing.expect(mutex.tryRead());
    mutex.unlockRead();
    mutex.unlockRead();

    try testing.expect(mutex.tryWrite());
    mutex.unlockWrite();
}

var g_once_counter = std.atomic.Value(usize).init(0);
var g_once_start = std.atomic.Value(bool).init(false);

fn onceInitializer() callconv(.c) void {
    _ = g_once_counter.fetchAdd(1, .acq_rel);
}

fn onceWorker(once: *Once) void {
    while (!g_once_start.load(.acquire)) {
        std.atomic.spinLoopHint();
    }
    once.call(&onceInitializer);
}

test "once runs initializer exactly once" {
    g_once_counter.store(0, .release);
    g_once_start.store(false, .release);

    var once = Once.init();
    var workers: [8]std.Thread = undefined;

    for (&workers) |*worker| {
        worker.* = try std.Thread.spawn(.{}, onceWorker, .{&once});
    }

    g_once_start.store(true, .release);
    for (workers) |worker| worker.join();

    try testing.expectEqual(@as(usize, 1), g_once_counter.load(.acquire));
}

const CasState = struct {
    slot: AtomicLeanPtr,
    next_index: std.atomic.Value(usize),
    objects: *[10_001]lean.lean_object,
    seen: *[10_001]u8,
};

fn casWorker(state: *CasState) void {
    while (true) {
        const index = state.next_index.fetchAdd(1, .acq_rel);
        if (index >= 10_000) return;

        const expected = &state.objects[index];
        const desired = &state.objects[index + 1];
        while (state.slot.cmpxchgStrong(expected, desired) != null) {
            std.atomic.spinLoopHint();
        }

        std.debug.assert(state.slot.load(.acquire) != null);
        state.seen[index + 1] = 1;
    }
}

test "atomic cmpxchgStrong uses acquire release ordering" {
    var objects: [10_001]lean.lean_object = undefined;
    for (&objects, 0..) |*object, index| {
        object.* = .{
            .m_rc = @intCast(index + 1),
            .m_cs_sz = 0,
            .m_other = 0,
            .m_tag = 0,
        };
    }

    var seen = [_]u8{0} ** 10_001;
    var state = CasState{
        .slot = AtomicLeanPtr.init(&objects[0]),
        .next_index = std.atomic.Value(usize).init(0),
        .objects = &objects,
        .seen = &seen,
    };

    var threads: [4]std.Thread = undefined;
    for (&threads) |*thread| {
        thread.* = try std.Thread.spawn(.{}, casWorker, .{&state});
    }
    for (threads) |thread| thread.join();

    try testing.expectEqual(@as(?*lean.lean_object, &objects[10_000]), state.slot.load(.acquire));
    for (seen[1..]) |value| {
        try testing.expectEqual(@as(u8, 1), value);
    }
}
