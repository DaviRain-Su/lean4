/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Sofia Rodrigues, Henrik Böving
*/
#include "runtime/uv/event_loop.h"


/*
This file builds a thread safe event loop on top of the thread unsafe libuv event loop.
We achieve this by always having a `uv_async_t` associated with the libuv event loop.
As `uv_async_t` are a thread safe primitive it is safe to send a notification to it from another
thread. Once this notification arrives the event loop suspends its own execution and unlocks a mutex
that protects it. This mutex can then be taken by another thread that wants to work with the event
loop. After that work is done it signals a condition variable that the event loop is waiting on
to continue its execution.
*/

namespace lean {
#ifndef LEAN_EMSCRIPTEN
using namespace std;

event_loop_t global_ev;

// Helpers

void lean_promise_resolve_with_code(int status, obj_arg promise) {
    obj_arg res = status == 0
        ? mk_except_ok(lean_box(0))
        : mk_except_err(lean_decode_uv_error(status, nullptr));

    lean_promise_resolve(res, promise);
}

// Utility function for error checking. This function is only used inside the
// initializition of the event loop.
static void check_uv(int result, const char * msg) {
    if (result != 0) {
        std::string err_message = std::string(msg) + ": " + uv_strerror(result);
        lean_internal_panic(err_message.c_str());
    }
}

// The callback that stops the loop when it's called.
void async_callback(uv_async_t * handle) {
    uv_stop(handle->loop);
}

// Interrupts the event loop and stops it so it can receive future requests.
void event_loop_interrupt(event_loop_t * event_loop) {
    int result = uv_async_send(&event_loop->async);
    (void)result;
    lean_assert(result == 0);
}

// Initializes the event loop
void event_loop_init(event_loop_t * event_loop) {
    event_loop->loop = uv_default_loop();
    check_uv(uv_mutex_init_recursive(&event_loop->mutex), "Failed to initialize mutex");
    check_uv(uv_cond_init(&event_loop->cond_var), "Failed to initialize condition variable");
    check_uv(uv_async_init(event_loop->loop, &event_loop->async, NULL), "Failed to initialize async");
    event_loop->n_waiters = 0;
}

// Locks the event loop for the side of the requesters.
void event_loop_lock(event_loop_t * event_loop) {
    if (uv_mutex_trylock(&event_loop->mutex) != 0) {
        event_loop->n_waiters++;
        event_loop_interrupt(event_loop);
        uv_mutex_lock(&event_loop->mutex);
        event_loop->n_waiters--;
    }
}

// Unlock event loop
void event_loop_unlock(event_loop_t * event_loop) {
    if (event_loop->n_waiters == 0) {
        uv_cond_signal(&event_loop->cond_var);
    }
    uv_mutex_unlock(&event_loop->mutex);
}

// Runs the loop and stops when it needs to register new requests.
void event_loop_run_loop(event_loop_t * event_loop) {
    while (uv_loop_alive(event_loop->loop)) {
        uv_mutex_lock(&event_loop->mutex);

        while (event_loop->n_waiters != 0) {
            uv_cond_wait(&event_loop->cond_var, &event_loop->mutex);
        }

        uv_run(event_loop->loop, UV_RUN_ONCE);
        /*
         * We leave `uv_run` only when `uv_stop` is called as there is always the `uv_async_t` so
         * we can never run out of things to wait on. `uv_stop` is only called from `async_callback`
         * when another thread wants to work with the event loop so we need to give up the mutex.
         */

        uv_mutex_unlock(&event_loop->mutex);
    }
}

void initialize_libuv_loop() {
    event_loop_init(&global_ev);
}

#endif

}

#ifndef LEAN_EMSCRIPTEN
extern "C" {
void lean_event_loop_lock() { lean::event_loop_lock(&lean::global_ev); }
void lean_event_loop_unlock() { lean::event_loop_unlock(&lean::global_ev); }
int lean_event_loop_is_alive() {
    lean::event_loop_lock(&lean::global_ev);
    int is_alive = uv_loop_alive(lean::global_ev.loop);
    lean::event_loop_unlock(&lean::global_ev);
    return is_alive;
}
uv_loop_t* lean_event_loop_loop() { return lean::global_ev.loop; }
int lean_uv_loop_configure_idle_helper(uv_loop_t* loop) {
    return uv_loop_configure(loop, UV_METRICS_IDLE_TIME);
}
int lean_uv_loop_configure_block_signal_helper(uv_loop_t* loop) {
#if !defined(WIN32) && !defined(_WIN32)
    return uv_loop_configure(loop, UV_LOOP_BLOCK_SIGNAL, SIGPROF);
#else
    return 0;
#endif
}
}
#endif
