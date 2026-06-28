// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Translate-C input for the Zig runtime. Headers must be available on the
// target. WASM/freestanding targets lack POSIX networking and pthreads.
//
// Freestanding (__STDC_HOSTED__ == 0): no headers at all.
// WASI: unistd.h only (no networking, no pthreads).
// Native: full POSIX set.

#if __STDC_HOSTED__
  #if !defined(__wasi__) && !defined(__EMSCRIPTEN__)
  #include <arpa/inet.h>
  #include <netinet/in.h>
  #include <pthread.h>
  #include <sys/time.h>
  #endif
  #include <unistd.h>
#endif
