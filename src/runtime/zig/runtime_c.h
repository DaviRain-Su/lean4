// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Translate-C input for the Zig runtime. The headers included here must be
// available on the target. WASM/freestanding targets do not provide POSIX
// networking or pthreads, so those are excluded — the corresponding runtime
// modules (net_addr, sync, threads) degrade to stubs or host imports there.

#ifndef __wasi__
#ifndef __EMSCRIPTEN__
#include <arpa/inet.h>
#include <netinet/in.h>
#include <pthread.h>
#endif
#endif

#include <sys/time.h>
#include <unistd.h>
