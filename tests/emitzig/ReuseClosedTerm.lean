module
prelude
import Init.System.IO
import Std.Http.Protocol.H1.Message

/-! Regression test for EmitZig parameterless-decl reuse corruption.
A parameterless auxiliary definition that returns a mutable-ish object
must not be re-mutated when referenced again. -/

open Std
open Std.Http
open Std.Http.Protocol.H1

def requestHead (version : Version) (headers : Headers) : Request.Head :=
  { method := .get, version, uri := RequestTarget.parse! "/items", headers }

def main : IO Unit := do
  let empty := Headers.empty
  let h1 := requestHead .v11 empty
  let updated := Message.Head.setHeaders (dir := .receiving) h1
    (empty.insert Header.Name.host (Header.Value.ofString! "example.com")
      |>.insert Header.Name.connection (Header.Value.ofString! "close"))
  IO.println (updated.headers.contains Header.Name.host)
  let h2 := requestHead .v11 empty
  IO.println (Message.Head.shouldKeepAlive (dir := .receiving) h2)
