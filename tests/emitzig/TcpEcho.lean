module
prelude
import Init.System.IO
import Std.Async
import Std.Internal.UV
import Std.Net.Addr

/-! End-to-end EmitZig smoke test for the libuv TCP backend. -/

open Std.Async
open Std.Net

def assertBEq [BEq α] [ToString α] (actual expected : α) : IO Unit := do
  unless actual == expected do
    throw <| IO.userError s!"expected '{expected}', got '{actual}'"

def runServer (server : TCP.Socket.Server) : Async Unit := do
  let client ← server.accept
  let some data ← client.recv? 1024
    | throw <| IO.userError "server received EOF before data"
  client.send data
  client.shutdown

def runClient (addr : SocketAddress) : IO Unit := do
  let client ← TCP.Socket.Client.mk
  let task ← client.connect addr |>.toBaseIO
  task.block
  let sendTask ← client.send (String.toUTF8 "hello") |>.toBaseIO
  sendTask.block
  let recvTask ← client.recv? 1024 |>.toBaseIO
  let some resp ← recvTask.block
    | throw <| IO.userError "client received EOF before response"
  assertBEq (String.fromUTF8? resp) (some "hello")
  let shutdownTask ← client.shutdown |>.toBaseIO
  shutdownTask.block

def main : IO Unit := do
  let addr := SocketAddressV4.mk (.ofParts 127 0 0 1) 8765
  let server ← TCP.Socket.Server.mk
  server.bind addr
  server.listen 1

  let serverTask ← runServer server |>.toIO

  -- Give the server a moment to start accepting before the client connects.
  IO.sleep 100

  runClient addr

  serverTask.block
  IO.println "ok"
