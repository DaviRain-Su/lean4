// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/library/module.cpp`.
//!
//! Implements `.olean` serialization/deserialization via the Zig compactor
//! and POSIX `mmap`.

const std = @import("std");
const builtin = @import("builtin");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const rc = @import("rc.zig");
const ctor = @import("ctor.zig");
const string = @import("string.zig");
const array = @import("array.zig");
const io_result = @import("io_result.zig");
const compact = @import("compact.zig");

const Obj = ?*anyopaque;
const ALIGN = 1 << 16;
const OLEAN_HEADER_SIZE = 88;

const OleanHeader = extern struct {
    marker: [5]u8,
    version: u8,
    flags: u8,
    lean_version: [33]u8,
    githash: [40]u8,
    base_addr: usize,
    data: [0]u8,
};

comptime {
    if (@sizeOf(OleanHeader) != 5 + 1 + 1 + 33 + 40 + @sizeOf(usize)) {
        @compileError("OleanHeader size mismatch");
    }
}

fn mkError(msg: []const u8) *anyopaque {
    const err = string.lean_mk_string(@ptrCast(msg.ptr));
    return io_result.lean_io_result_mk_error(err);
}

fn stringCStr(o: *anyopaque) [*:0]const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
    return @ptrCast(@alignCast(&str.m_data));
}

// -----------------------------------------------------------------------------
// Compactor handle (external object)
// -----------------------------------------------------------------------------

var g_compactor_class: ?*lean.lean_external_class = null;

fn ensureCompactorClass() void {
    if (g_compactor_class == null) {
        g_compactor_class = object.lean_register_external_class(compactorFinalizer, compactorForeach);
    }
}

fn compactorFinalizer(data: *anyopaque) callconv(.c) void {
    const comp: *compact.Compactor = @ptrCast(@alignCast(data));
    comp.deinit();
    std.heap.c_allocator.destroy(comp);
}

fn compactorForeach(_: *anyopaque, _: ?*anyopaque) callconv(.c) void {}

fn mkCompactor(base_addr: usize, dep_regions: []compact.RegionView, allow_closures: bool) *anyopaque {
    ensureCompactorClass();
    const comp = std.heap.c_allocator.create(compact.Compactor) catch @panic("out of memory");
    comp.* = compact.Compactor.init(base_addr, dep_regions, allow_closures);
    return object.lean_alloc_external(g_compactor_class.?, @ptrCast(comp));
}

fn toCompactor(o: *anyopaque) *compact.Compactor {
    return @ptrCast(@alignCast(object.lean_get_external_data(o).?));
}

// -----------------------------------------------------------------------------
// CompactedRegion helpers
// -----------------------------------------------------------------------------

fn regionRoot(region: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(region, 1).?;
}

fn regionSize(region: *anyopaque) usize {
    return ctor.lean_ctor_get_usize(region, 2);
}

fn regionBaseAddr(region: *anyopaque) usize {
    return ctor.lean_ctor_get_usize(region, 3);
}

fn regionBufferOffset(region: *anyopaque) usize {
    return ctor.lean_ctor_get_usize(region, 4);
}

fn regionBuffer(region: *anyopaque) [*]u8 {
    return @ptrFromInt(@intFromPtr(regionRoot(region)) -% regionBufferOffset(region));
}

// -----------------------------------------------------------------------------
// Save
// -----------------------------------------------------------------------------

fn nameHash(_: *anyopaque) usize {
    // Deterministic fallback; the exact value only affects mmap hit rate.
    return 0x123456789000;
}

fn libTableSize(libs: []compact.LibInfo) usize {
    var sz: usize = @sizeOf(u32);
    for (libs) |lib| {
        const name = std.mem.span(lib.name);
        sz += @sizeOf(usize) + @sizeOf(u32) + name.len;
    }
    return sz;
}

fn writeLibTable(fd: std.posix.fd_t, libs: []compact.LibInfo) bool {
    const n: u32 = @intCast(libs.len);
    if (std.c.write(fd, std.mem.asBytes(&n).ptr, @sizeOf(u32)) != @sizeOf(u32)) return false;
    for (libs) |lib| {
        if (std.c.write(fd, std.mem.asBytes(&lib.base_addr).ptr, @sizeOf(usize)) != @sizeOf(usize)) return false;
        const name = std.mem.span(lib.name);
        const id_len: u32 = @intCast(name.len);
        if (std.c.write(fd, std.mem.asBytes(&id_len).ptr, @sizeOf(u32)) != @sizeOf(u32)) return false;
        if (name.len > 0 and std.c.write(fd, name.ptr, name.len) != name.len) return false;
    }
    return true;
}

pub export fn zig_lean_compacted_region_save(
    ofname: *anyopaque,
    mod: *anyopaque,
    odata: *anyopaque,
    odep_regions: *anyopaque,
    oprev: *anyopaque,
    allow_closures_u8: u8,
    _: Obj,
) callconv(.c) *anyopaque {
    _ = mod;
    const allow_closures = allow_closures_u8 != 0;

    var dep_regions = compact.extractDepRegions(odep_regions);
    defer dep_regions.deinit(std.heap.c_allocator);

    // `oprev` is owned; drop it before returning.
    defer rc.lean_dec(oprev);

    const compactor_obj = blk: {
        if (object.lean_is_scalar(oprev)) {
            const base_addr = nameHash(ofname) & ~@as(usize, ALIGN - 1);
            break :blk mkCompactor(base_addr, dep_regions.items, allow_closures);
        } else {
            const prev_comp = ctor.lean_ctor_get(oprev, 0).?;
            rc.lean_inc(prev_comp);
            break :blk prev_comp;
        }
    };
    const comp = toCompactor(compactor_obj);

    const path = stringCStr(ofname);

    var tmp_buf: [4096]u8 = undefined;
    const tmp_path = std.fmt.bufPrintZ(&tmp_buf, "{s}.tmp.{d}", .{ path, std.c.getpid() }) catch
        return mkError("output path too long");

    const fd = std.c.open(tmp_path, std.c.O{ .ACCMODE = .WRONLY, .CREAT = true, .TRUNC = true }, @as(std.c.mode_t, 0o644));
    if (fd < 0) {
        return mkError("failed to open output file");
    }
    var needs_cleanup = true;
    defer if (needs_cleanup) {
        _ = std.c.close(fd);
        _ = std.c.unlink(tmp_path);
    };

    // Reserve a 64KB-aligned header slot in the compactor buffer.
    const current_size = comp.size();
    const padding = if (current_size % ALIGN == 0) 0 else ALIGN - (current_size % ALIGN);
    _ = comp.allocBytes(padding);
    const file_offset = comp.size();
    _ = comp.allocBytes(OLEAN_HEADER_SIZE);

    const version: u8 = if (allow_closures) 3 else 2;
    const file_base_addr = comp.base_addr + file_offset;

    var header_buf: [OLEAN_HEADER_SIZE]u8 = undefined;
    @memset(&header_buf, 0);
    @memcpy(header_buf[0..5], "olean");
    header_buf[5] = version;
    header_buf[6] = 1; // GMP flag, matching the C++ default for LEAN_USE_GMP=on builds
    const base_addr_bytes = std.mem.asBytes(&file_base_addr);
    @memcpy(header_buf[80..80 + base_addr_bytes.len], base_addr_bytes);

    if (std.c.write(fd, &header_buf, OLEAN_HEADER_SIZE) != OLEAN_HEADER_SIZE) {
        return mkError("failed to write header");
    }

    if (!allow_closures) {
        // v2: [header][data]
        _ = comp.compactRoot(odata);

        const data_start = file_offset + OLEAN_HEADER_SIZE;
        const data_size = comp.size() - data_start;
        if (std.c.write(fd, comp.data() + data_start, data_size) != data_size) {
            return mkError("failed to write data");
        }
    } else {
        // v3: [header][data_size][data][closure_offsets][lib_table]
        _ = comp.allocBytes(@sizeOf(usize));
        const data_offset = file_offset + OLEAN_HEADER_SIZE + @sizeOf(usize);

        _ = comp.compactRoot(odata);

        const data_size = comp.size() - data_offset;
        if (std.c.write(fd, std.mem.asBytes(&data_size).ptr, @sizeOf(usize)) != @sizeOf(usize)) {
            return mkError("failed to write data_size");
        }
        if (std.c.write(fd, comp.data() + data_offset, data_size) != data_size) {
            return mkError("failed to write data");
        }

        // Buffer-relative closure offsets -> data-relative file offsets.
        const all_offsets = comp.closure_offsets.items;
        var file_offsets = std.heap.c_allocator.alloc(u64, all_offsets.len) catch @panic("out of memory");
        defer std.heap.c_allocator.free(file_offsets);
        for (all_offsets, 0..) |off, i| {
            file_offsets[i] = @intCast(off - data_offset);
        }
        comp.closure_offsets.clearRetainingCapacity();

        // Reserve trailer space in the compactor buffer so later compactions stay aligned.
        _ = comp.allocBytes(@sizeOf(u32));
        if (file_offsets.len > 0) {
            _ = comp.allocBytes(file_offsets.len * @sizeOf(u64));
        }

        const num_closure_offsets: u32 = @intCast(file_offsets.len);
        if (std.c.write(fd, std.mem.asBytes(&num_closure_offsets).ptr, @sizeOf(u32)) != @sizeOf(u32)) {
            return mkError("failed to write closure offsets");
        }
        if (file_offsets.len > 0) {
            const bytes = std.mem.sliceAsBytes(file_offsets);
            if (std.c.write(fd, bytes.ptr, bytes.len) != bytes.len) {
                return mkError("failed to write closure offsets");
            }
        }

        const used_libs = comp.usedLibs();
        defer std.heap.c_allocator.free(used_libs);
        _ = comp.allocBytes(libTableSize(used_libs));
        if (!writeLibTable(fd, used_libs)) {
            return mkError("failed to write lib table");
        }
    }

    _ = std.c.close(fd);
    needs_cleanup = false;
    if (std.c.rename(tmp_path, path) != 0) {
        _ = std.c.unlink(tmp_path);
        return mkError("failed to rename output file");
    }

    return io_result.lean_io_result_mk_ok(compactor_obj);
}

// -----------------------------------------------------------------------------
// Read
// -----------------------------------------------------------------------------

fn parseLibRelocs(buf: [*]u8, start: usize, total: usize) ?[]compact.LibReloc {
    var p = start;
    if (p + @sizeOf(u32) > total) return null;
    const num_libs: *align(1) u32 = @ptrCast(buf + p);
    p += @sizeOf(u32);
    if (num_libs.* == 0) return &.{};

    const current_libs = compact.getLoadedLibs();
    defer compact.freeLoadedLibs(current_libs);

    var relocs: std.ArrayList(compact.LibReloc) = .empty;
    var i: u32 = 0;
    while (i < num_libs.*) : (i += 1) {
        if (p + @sizeOf(usize) + @sizeOf(u32) > total) {
            relocs.deinit(std.heap.c_allocator);
            return null;
        }
        const old_base: *align(1) usize = @ptrCast(buf + p);
        p += @sizeOf(usize);
        const id_len: *align(1) u32 = @ptrCast(buf + p);
        p += @sizeOf(u32);
        if (p + id_len.* > total) {
            relocs.deinit(std.heap.c_allocator);
            return null;
        }
        const id = @as([*:0]const u8, @ptrCast(buf + p))[0..id_len.*];
        p += id_len.*;

        var new_base: usize = 0;
        var found = false;
        for (current_libs) |lib| {
            if (std.mem.eql(u8, std.mem.span(lib.name), id)) {
                new_base = lib.base_addr;
                found = true;
                break;
            }
        }
        if (!found) {
            relocs.deinit(std.heap.c_allocator);
            return null;
        }
        const delta: isize = @intCast(@as(isize, @intCast(new_base)) - @as(isize, @intCast(old_base.*)));
        relocs.append(std.heap.c_allocator, .{ .old_base = old_base.*, .delta = delta }) catch {
            relocs.deinit(std.heap.c_allocator);
            return null;
        };
    }
    std.mem.sort(compact.LibReloc, relocs.items, {}, cmpLibRelocByOldBase);
    return relocs.toOwnedSlice(std.heap.c_allocator) catch {
        relocs.deinit(std.heap.c_allocator);
        return null;
    };
}

fn cmpLibRelocByOldBase(_: void, a: compact.LibReloc, b: compact.LibReloc) bool {
    return a.old_base < b.old_base;
}

pub export fn zig_lean_compacted_region_read(
    ofname: *anyopaque,
    odep_regions: *anyopaque,
    _: Obj,
) callconv(.c) *anyopaque {
    var dep_regions = compact.extractDepRegions(odep_regions);
    defer dep_regions.deinit(std.heap.c_allocator);

    const path = stringCStr(ofname);
    const fd = std.c.open(path, std.c.O{ .ACCMODE = .RDONLY });
    if (fd < 0) {
        return mkError("failed to open input file");
    }
    defer _ = std.c.close(fd);

    var st: std.c.Stat = undefined;
    if (std.c.fstat(fd, &st) != 0) {
        return mkError("failed to stat input file");
    }
    const size = @as(usize, @intCast(st.size));

    var header_bytes: [OLEAN_HEADER_SIZE]u8 = undefined;
    const header_n = std.c.read(fd, &header_bytes, OLEAN_HEADER_SIZE);
    if (header_n < 0 or header_n != OLEAN_HEADER_SIZE) {
        return mkError("file too short");
    }

    const header: *align(1) OleanHeader = @ptrCast(&header_bytes);
    if (!std.mem.eql(u8, &header.marker, "olean")) return mkError("invalid olean magic");
    if ((header.version != 2 and header.version != 3) or header.flags != 1) {
        return mkError("incompatible header");
    }
    const base_addr = header.base_addr;

    var buffer: [*]u8 = undefined;
    var mapped_memory: ?[]align(std.heap.page_size_min) u8 = null;
    var buffer_is_mmap = false;

    // Try to mmap at the saved base address. Use MAP_FIXED_NOREPLACE on Linux so an
    // existing mapping causes a clean failure rather than clobbering memory.
    // On macOS, do NOT use MAP_FIXED — it can clobber existing mappings. The C++
    // runtime also does not use MAP_FIXED on macOS. The base_addr is just a hint;
    // if mmap returns a different address, we fall back to malloc and the reader
    // walk relocates pointers.
    const map_flags: std.posix.MAP = if (builtin.os.tag == .linux)
        .{ .TYPE = .PRIVATE, .FIXED = true, .FIXED_NOREPLACE = true }
    else
        .{ .TYPE = .PRIVATE };

    if (std.posix.mmap(
        @ptrFromInt(base_addr),
        size,
        .{ .READ = true, .WRITE = true },
        map_flags,
        fd,
        0,
    )) |slice| {
        if (@intFromPtr(slice.ptr) == base_addr) {
            buffer = slice.ptr;
            mapped_memory = slice;
            buffer_is_mmap = true;
        } else {
            std.posix.munmap(slice);
        }
    } else |_| {}

    if (!buffer_is_mmap) {
        const alloc_slice = std.heap.c_allocator.alloc(u8, size) catch
            return mkError("out of memory");
        @memcpy(alloc_slice[0..OLEAN_HEADER_SIZE], &header_bytes);
        var total: usize = OLEAN_HEADER_SIZE;
        while (total < size) {
            const n = std.c.read(fd, alloc_slice.ptr + total, size - total);
            if (n < 0) {
                std.heap.c_allocator.free(alloc_slice);
                return mkError("failed to read input file");
            }
            if (n == 0) break;
            total += @intCast(n);
        }
        if (total != size) {
            std.heap.c_allocator.free(alloc_slice);
            return mkError("failed to read input file");
        }
        buffer = alloc_slice.ptr;
    }

    // Either `std.posix.munmap` or `free` will release the buffer, but only after
    // ownership has been transferred to the returned region.
    var buffer_owned = true;
    defer if (buffer_owned) {
        if (buffer_is_mmap) {
            std.posix.munmap(mapped_memory.?);
        } else {
            std.heap.c_allocator.free(buffer[0..size]);
        }
    };

    var data_off: usize = OLEAN_HEADER_SIZE;
    var data_size: usize = size - OLEAN_HEADER_SIZE;
    var closure_offsets: []usize = &.{};
    var lib_relocs: []compact.LibReloc = &.{};

    if (header.version == 3) {
        if (size < OLEAN_HEADER_SIZE + @sizeOf(usize)) {
            return mkError("v3 file too short for data_size");
        }
        const ds: *align(1) usize = @ptrCast(buffer + OLEAN_HEADER_SIZE);
        data_off = OLEAN_HEADER_SIZE + @sizeOf(usize);
        data_size = ds.*;

        var p = data_off + data_size;
        if (p + @sizeOf(u32) > size) {
            return mkError("v3 file truncated before closure section");
        }
        const num_closure: *align(1) u32 = @ptrCast(buffer + p);
        p += @sizeOf(u32);
        if (num_closure.* > 0) {
            closure_offsets = std.heap.c_allocator.alloc(usize, num_closure.*) catch
                return mkError("out of memory");
            if (p + num_closure.* * @sizeOf(u64) > size) {
                std.heap.c_allocator.free(closure_offsets);
                return mkError("v3 file truncated in closure offsets");
            }
            for (0..num_closure.*) |i| {
                const off: *align(1) u64 = @ptrCast(buffer + p + i * @sizeOf(u64));
                closure_offsets[i] = @intCast(off.*);
            }
            p += num_closure.* * @sizeOf(u64);
            lib_relocs = parseLibRelocs(buffer, p, size) orelse {
                std.heap.c_allocator.free(closure_offsets);
                return mkError("failed to parse lib relocation table");
            };
        }
    }

    defer if (closure_offsets.len > 0) std.heap.c_allocator.free(closure_offsets);
    defer if (lib_relocs.len > 0) std.heap.c_allocator.free(lib_relocs);

    compact.sortRegionsByBaseAddr(dep_regions.items);
    var reader = compact.Reader.init(
        buffer + data_off,
        data_size,
        base_addr + data_off,
        dep_regions.items,
        lib_relocs,
        closure_offsets,
    );
    const root = reader.read() orelse {
        return mkError("failed to read region");
    };

    const region = alloc.lean_alloc_ctor(0, 2, @sizeOf(usize) * 3 + 1);
    rc.lean_inc(ofname);
    ctor.lean_ctor_set(region, 0, ofname);
    ctor.lean_ctor_set(region, 1, root);
    ctor.lean_ctor_set_usize(region, 2, @intCast(size));
    ctor.lean_ctor_set_usize(region, 3, @intCast(base_addr));
    ctor.lean_ctor_set_usize(region, 4, @intCast(@intFromPtr(root) -% @intFromPtr(buffer)));
    ctor.lean_ctor_set_uint8(region, @sizeOf(usize) * 5, @intFromBool(buffer_is_mmap));

    buffer_owned = false; // ownership transferred to region

    const pair = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(pair, 0, root);
    ctor.lean_ctor_set(pair, 1, region);
    return io_result.lean_io_result_mk_ok(pair);
}

// -----------------------------------------------------------------------------
// Free
// -----------------------------------------------------------------------------

pub export fn zig_lean_compacted_region_free(
    region: *anyopaque,
    _: Obj,
) callconv(.c) *anyopaque {
    const buffer = regionBuffer(region);
    const size = regionSize(region);
    const is_mmap = ctor.lean_ctor_get_uint8(region, @sizeOf(usize) * 5) != 0;

    // Overwrite the root slot so any lingering reference does not deref freed memory.
    ctor.lean_ctor_set(region, 1, object.lean_box(0));
    rc.lean_dec(region);

    if (is_mmap) {
        const aligned: [*]align(std.heap.page_size_min) u8 = @alignCast(buffer);
        std.posix.munmap(aligned[0..size]);
    } else {
        std.heap.c_allocator.free(buffer[0..size]);
    }

    return io_result.lean_io_result_mk_ok(object.lean_box(0));
}

// -----------------------------------------------------------------------------
// Tests
// -----------------------------------------------------------------------------

fn testStringBytes(o: *anyopaque) []const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
    const len = if (str.m_size == 0) 0 else str.m_size - 1;
    return @as([*]const u8, @ptrCast(&str.m_data))[0..len];
}

fn compactClosureTestFn(_: Obj) callconv(.c) Obj {
    return object.lean_box(0);
}

test "compacted region save/read owns malloc buffer until free" {
    var path_buf: [128]u8 = undefined;
    const path = std.fmt.bufPrintZ(
        &path_buf,
        "/tmp/leanrt_zig_module_{d}_{x}.olean",
        .{ std.c.getpid(), @intFromPtr(&path_buf) },
    ) catch unreachable;
    defer _ = std.c.unlink(path);

    const fname = string.lean_mk_string(path);
    defer rc.lean_dec(fname);
    const deps = array.lean_mk_empty_array();
    defer rc.lean_dec(deps);
    const data = string.lean_mk_string("saved");
    defer rc.lean_dec(data);

    const save_result = zig_lean_compacted_region_save(fname, object.lean_box(0).?, data, deps, object.lean_box(0).?, 0, object.lean_box(0));
    defer rc.lean_dec(save_result);
    try std.testing.expect(io_result.lean_io_result_is_ok(save_result));

    const read_result = zig_lean_compacted_region_read(fname, deps, object.lean_box(0));
    try std.testing.expect(io_result.lean_io_result_is_ok(read_result));
    const pair = io_result.lean_io_result_get_value(read_result).?;
    const root = ctor.lean_ctor_get(pair, 0).?;
    const region = ctor.lean_ctor_get(pair, 1).?;

    try std.testing.expectEqualStrings("saved", testStringBytes(root));
    try std.testing.expectEqual(OLEAN_HEADER_SIZE + @sizeOf(usize), regionBufferOffset(region));
    try std.testing.expect(regionBufferOffset(region) < regionSize(region));

    const free_result = zig_lean_compacted_region_free(region, object.lean_box(0));
    defer rc.lean_dec(free_result);
    try std.testing.expect(io_result.lean_io_result_is_ok(free_result));
}

test "compacted region save/read closure with v3 format" {
    var path_buf: [128]u8 = undefined;
    const path = std.fmt.bufPrintZ(
        &path_buf,
        "/tmp/leanrt_zig_module_closure_{d}_{x}.olean",
        .{ std.c.getpid(), @intFromPtr(&path_buf) },
    ) catch unreachable;
    defer _ = std.c.unlink(path);

    const fname = string.lean_mk_string(path);
    defer rc.lean_dec(fname);
    const deps = array.lean_mk_empty_array();
    defer rc.lean_dec(deps);

    const captured = string.lean_mk_string("captured");
    const closure_obj = alloc.lean_alloc_closure(@ptrCast(@constCast(&compactClosureTestFn)), 2, 1);
    defer rc.lean_dec(closure_obj);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(closure_obj));
    const slots: [*]Obj = @ptrCast(@alignCast(&closure.m_objs));
    slots[0] = captured;

    const save_result = zig_lean_compacted_region_save(
        fname,
        object.lean_box(0).?,
        closure_obj,
        deps,
        object.lean_box(0).?,
        1,
        object.lean_box(0),
    );
    defer rc.lean_dec(save_result);
    try std.testing.expect(io_result.lean_io_result_is_ok(save_result));

    const read_result = zig_lean_compacted_region_read(fname, deps, object.lean_box(0));
    try std.testing.expect(io_result.lean_io_result_is_ok(read_result));
    const pair = io_result.lean_io_result_get_value(read_result).?;
    const root = ctor.lean_ctor_get(pair, 0).?;
    const region = ctor.lean_ctor_get(pair, 1).?;

    try std.testing.expectEqual(lean.LeanClosure, compact.ptrTag(root));
    const roundtrip: *lean.lean_closure_object = @ptrCast(@alignCast(root));
    try std.testing.expectEqual(@as(u16, 2), roundtrip.m_arity);
    try std.testing.expectEqual(@as(u16, 1), roundtrip.m_num_fixed);
    try std.testing.expectEqual(closure.m_fun, roundtrip.m_fun);
    const rt_slots: [*]Obj = @ptrCast(@alignCast(&roundtrip.m_objs));
    try std.testing.expectEqualStrings("captured", testStringBytes(rt_slots[0].?));

    const free_result = zig_lean_compacted_region_free(region, object.lean_box(0));
    defer rc.lean_dec(free_result);
    try std.testing.expect(io_result.lean_io_result_is_ok(free_result));
}

// Bridge exports: when compile-cpp-cutover is off, Zig provides compact region I/O.
// With cutover, C++ compact.cpp in libleanrt_zig.a is the sole provider.
const runtime_options = @import("runtime_options");
comptime {
    if (!runtime_options.compile_cpp_cutover) {
        @export(&zig_lean_compacted_region_save, .{ .name = "lean_compacted_region_save", .linkage = .strong });
        @export(&zig_lean_compacted_region_read, .{ .name = "lean_compacted_region_read", .linkage = .strong });
        @export(&zig_lean_compacted_region_free, .{ .name = "lean_compacted_region_free", .linkage = .strong });
    }
}
