// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/timer.cpp`.
//!
//! Single-shot background timer with a worker thread. When multi-threading is
//! disabled the timer is a no-op stub.

const std = @import("std");

pub const Callback = *const fn () void;

pub const SingleTimer = struct {
    shutting_down: bool,
    mutex: std.Io.Mutex,
    cond: std.Thread.Condition,
    thread: ?std.Thread,
    time: ?i128,
    cb: ?Callback,

    pub fn init() SingleTimer {
        var self = SingleTimer{
            .shutting_down = false,
            .mutex = .init,
            .cond = .{},
            .thread = null,
            .time = null,
            .cb = null,
        };
        self.thread = std.Thread.spawn(.{}, worker, .{&self}) catch null;
        return self;
    }

    pub fn deinit(self: *SingleTimer) void {
        self.mutex.lock();
        self.shutting_down = true;
        self.cond.signal();
        self.mutex.unlock();
        if (self.thread) |t| t.join();
    }

    fn worker(self: *SingleTimer) void {
        self.mutex.lock();
        defer self.mutex.unlock();
        while (!self.shutting_down) {
            const now = std.time.nanoTimestamp();
            if (self.time) |target| {
                if (target <= now + std.time.ns_per_ms * 10) {
                    self.time = null;
                    if (self.cb) |cb| {
                        self.mutex.unlock();
                        cb();
                        self.mutex.lock();
                    }
                } else {
                    const wait_ns = target - now;
                    self.cond.timedWait(&self.mutex, @intCast(wait_ns / std.time.ns_per_ms)) catch {};
                }
            } else {
                self.cond.wait(&self.mutex);
            }
        }
    }

    pub fn set(self: *SingleTimer, time_ns: i128, cb: Callback, overwrite: bool) void {
        self.mutex.lock();
        defer self.mutex.unlock();
        if (overwrite or self.time == null) {
            self.time = time_ns;
            self.cb = cb;
            self.cond.signal();
        }
    }

    pub fn reset(self: *SingleTimer) void {
        self.mutex.lock();
        defer self.mutex.unlock();
        self.time = null;
        self.cb = null;
        self.cond.signal();
    }
};

test "SingleTimer compiles" {
    _ = SingleTimer.init;
    _ = SingleTimer.deinit;
    _ = SingleTimer.set;
    _ = SingleTimer.reset;
}
