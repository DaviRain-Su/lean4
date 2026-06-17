module
prelude
import Init.Data.String.Search
import Init.System.IO
import Std.Http.Protocol.H1

/-! End-to-end stdlib-linked EmitZig test for the HTTP/1.1 protocol state machine. -/

open Std
open Std.Http
open Std.Http.Protocol.H1

def chunk (s : String) : Chunk :=
  Chunk.ofByteArray s.toUTF8

def text (bytes : ByteArray) : String :=
  (String.fromUTF8? bytes).getD "<invalid-utf8>"

def oneLine (s : String) : String :=
  s.replace "\r\n" "|"

def showNat? : Option Nat → String
  | some n => toString n
  | none => "none"

def showReceivingEvent : Event .receiving → String
  | .endHeaders head => s!"end:{head.method}:{head.uri}:{head.headers.size}"
  | .needMoreData n? => s!"need-more:{showNat? n?}"
  | .failed err => s!"failed:{err}"
  | .close => "close"
  | .closeBody => "close-body"
  | .needAnswer => "need-answer"
  | .next => "next"
  | .continue => "continue"

def showEvents (events : Array (Event .receiving)) : String :=
  String.intercalate "," (events.map showReceivingEvent).toList

def showStep (label : String) (result : StepResult .receiving) : IO Unit := do
  IO.println s!"{label}:events:{showEvents result.events}"
  IO.println s!"{label}:output:{oneLine (text result.output.toByteArray)}"

def main : IO Unit := do
  let config : Config := { agentName := some (Header.Value.ofString! "lean-zig") }
  let machine : Machine .receiving := { config }
  let request := "GET /hello HTTP/1.1\r\nHost: example.com\r\n\r\n"
  let (machine, first) := (machine.feed request.toUTF8).step
  showStep "read" first
  IO.println s!"state:{machine.isReaderComplete}:{machine.isWaitingMessage}:{machine.canPullBody}:{machine.keepAlive}"

  let response : Response.Head := { status := .ok }
  let machine :=
    machine
      |>.setKnownSize (.fixed 2)
      |>.send response
      |>.sendData #[chunk "OK"]
      |>.userClosedBody
  let (machine, second) := machine.step
  showStep "write" second
  IO.println s!"after-write:{machine.isWaitingMessage}:{machine.halted}:{machine.keepAlive}"

  let (machine, third) := machine.step
  showStep "next" third
  IO.println s!"after-next:{machine.isWaitingMessage}:{machine.halted}:{machine.keepAlive}"
