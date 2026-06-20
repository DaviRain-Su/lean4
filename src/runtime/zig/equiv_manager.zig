// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Union-find based equivalence manager for kernel expressions.
//!
//! Ported from `src/kernel/equiv_manager.cpp`. Tracks expression
//! equivalence classes with path compression and union by rank, falling
//! back to structural equality (`lean_expr_equal`) for new comparisons.

pub const force_link = true;

const std = @import("std");

extern fn lean_expr_equal(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

pub const EquivManager = struct {
    const NodeRef = u32;

    const Node = struct {
        parent: NodeRef,
        rank: u32,
    };

    nodes: std.ArrayListUnmanaged(Node),
    expr_to_node: std.AutoHashMap(*anyopaque, NodeRef),
    allocator: std.mem.Allocator,

    pub fn init(a: std.mem.Allocator) EquivManager {
        return .{
            .nodes = .empty,
            .expr_to_node = std.AutoHashMap(*anyopaque, NodeRef).init(a),
            .allocator = a,
        };
    }

    pub fn deinit(self: *EquivManager) void {
        self.nodes.deinit(self.allocator);
        self.expr_to_node.deinit();
    }

    fn mkNode(self: *EquivManager) NodeRef {
        const r: NodeRef = @intCast(self.nodes.items.len);
        self.nodes.append(self.allocator, .{ .parent = r, .rank = 0 }) catch @panic("equiv_manager: out of memory");
        return r;
    }

    pub fn find(self: *EquivManager, n: NodeRef) NodeRef {
        var current = n;
        while (self.nodes.items[current].parent != current) {
            const parent = self.nodes.items[current].parent;
            const grandparent = self.nodes.items[parent].parent;
            if (grandparent != parent) {
                self.nodes.items[current].parent = grandparent;
            }
            current = self.nodes.items[current].parent;
        }
        return current;
    }

    fn merge(self: *EquivManager, n1: NodeRef, n2: NodeRef) void {
        var r1 = self.find(n1);
        var r2 = self.find(n2);
        if (r1 == r2) return;
        if (self.nodes.items[r1].rank < self.nodes.items[r2].rank) {
            std.mem.swap(NodeRef, &r1, &r2);
        }
        self.nodes.items[r2].parent = r1;
        if (self.nodes.items[r1].rank == self.nodes.items[r2].rank) {
            self.nodes.items[r1].rank += 1;
        }
    }

    fn toNode(self: *EquivManager, e: *anyopaque) NodeRef {
        if (self.expr_to_node.get(e)) |r| return r;
        const r = self.mkNode();
        self.expr_to_node.put(e, r) catch @panic("equiv_manager: out of memory");
        return r;
    }

    pub fn addEquiv(self: *EquivManager, e1: *anyopaque, e2: *anyopaque) void {
        const r1 = self.toNode(e1);
        const r2 = self.toNode(e2);
        self.merge(r1, r2);
    }

    pub fn isEquiv(self: *EquivManager, a: *anyopaque, b: *anyopaque, use_hash: bool) bool {
        _ = use_hash;
        if (a == b) return true;
        const r1 = self.find(self.toNode(a));
        const r2 = self.find(self.toNode(b));
        if (r1 == r2) return true;
        if (lean_expr_equal(a, b) != 0) {
            self.merge(r1, r2);
            return true;
        }
        return false;
    }
};
