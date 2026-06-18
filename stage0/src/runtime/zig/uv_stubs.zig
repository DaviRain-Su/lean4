// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Placeholder module for any libuv subsystem that has not yet been moved to a
// dedicated Zig module. All currently ported libuv exports live in their own
// modules (uv_event_loop, net_addr, uv_system, uv_timer, uv_signal, uv_dns,
// uv_tcp, uv_udp). This file is kept for the force_link symbol so the module
// stays linked while the port is in progress.

pub const force_link = true;
