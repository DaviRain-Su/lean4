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

def showSendingEvent : Event .sending → String
  | .endHeaders head => s!"end:{head.status}:{head.version}:{head.headers.size}"
  | .needMoreData n? => s!"need-more:{showNat? n?}"
  | .failed err => s!"failed:{err}"
  | .close => "close"
  | .closeBody => "close-body"
  | .needAnswer => "need-answer"
  | .next => "next"
  | .continue => "continue"

def showSendingEvents (events : Array (Event .sending)) : String :=
  String.intercalate "," (events.map showSendingEvent).toList

def showPulledChunk? : Option PulledChunk → String
  | some pulled => s!"chunk:{text pulled.chunk.data}:{pulled.final}:{pulled.incomplete}:{pulled.chunk.extensions.size}"
  | none => "none"

def showStep (label : String) (result : StepResult .receiving) : IO Unit := do
  IO.println s!"{label}:events:{showEvents result.events}"
  IO.println s!"{label}:output:{oneLine (text result.output.toByteArray)}"

def printRoundTrip : IO Unit := do
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

def printBodyPulls : IO Unit := do
  let config : Config := {}

  let fixedReq := "POST /upload HTTP/1.1\r\nHost: example.com\r\nContent-Length: 5\r\n\r\nhello"
  let fixedMachine : Machine .receiving := { config }
  let (fixedMachine, fixedStep) := (fixedMachine.feed fixedReq.toUTF8).step
  IO.println s!"fixed-step:{showEvents fixedStep.events}:{fixedMachine.canPullBody}:{fixedMachine.canPullBodyNow}"
  let (fixedMachine, fixedChunk) := fixedMachine.pullBody
  let (fixedMachine, fixedEvents) := fixedMachine.takeEvents
  IO.println s!"fixed-pull:{showPulledChunk? fixedChunk}:{showEvents fixedEvents}:{fixedMachine.isReaderComplete}:{fixedMachine.canPullBodyNow}"

  let chunkedReq := "POST /chunk HTTP/1.1\r\nHost: example.com\r\nTransfer-Encoding: chunked\r\n\r\n4;sig=abc\r\nlean\r\n0\r\n\r\n"
  let chunkedMachine : Machine .receiving := { config }
  let (chunkedMachine, chunkedStep) := (chunkedMachine.feed chunkedReq.toUTF8).step
  IO.println s!"chunk-step:{showEvents chunkedStep.events}:{chunkedMachine.canPullBody}"
  let (chunkedMachine, chunkedChunk1) := chunkedMachine.pullBody
  let (chunkedMachine, chunkedEvents1) := chunkedMachine.takeEvents
  IO.println s!"chunk-pull1:{showPulledChunk? chunkedChunk1}:{showEvents chunkedEvents1}:{chunkedMachine.canPullBodyNow}"
  let (chunkedMachine, chunkedChunk2) := chunkedMachine.pullBody
  let (chunkedMachine, chunkedEvents2) := chunkedMachine.takeEvents
  IO.println s!"chunk-pull2:{showPulledChunk? chunkedChunk2}:{showEvents chunkedEvents2}:{chunkedMachine.isReaderComplete}:{chunkedMachine.canPullBodyNow}"

def printClientRoundTrip : IO Unit := do
  let config : Config := { agentName := some (Header.Value.ofString! "lean-client") }
  let machine : Machine .sending := { config }
  IO.println s!"client-initial:{machine.isWaitingMessage}:{machine.canPullBody}:{machine.keepAlive}"

  let request : Request.Head := { method := .get, version := .v11, uri := RequestTarget.parse! "/client" }
  let machine :=
    machine
      |>.setKnownSize (.fixed 0)
      |>.send request
      |>.userClosedBody
  let (machine, writeStep) := machine.step
  IO.println s!"client-write:events:{showSendingEvents writeStep.events}"
  IO.println s!"client-write:output:{oneLine (text writeStep.output.toByteArray)}"
  IO.println s!"client-after-write:{machine.isWaitingMessage}:{machine.isReaderComplete}:{machine.keepAlive}"

  let response := "HTTP/1.1 204 No Content\r\n\r\n"
  let (machine, readStep) := (machine.feed response.toUTF8).step
  IO.println s!"client-read:events:{showSendingEvents readStep.events}"
  IO.println s!"client-read:output:{oneLine (text readStep.output.toByteArray)}"
  IO.println s!"client-after-read:{machine.isReaderComplete}:{machine.canPullBody}:{machine.canPullBodyNow}:{machine.keepAlive}"

  let (machine, pulled) := machine.pullBody
  let (machine, events) := machine.takeEvents
  IO.println s!"client-pull:{showPulledChunk? pulled}:{showSendingEvents events}:{machine.isReaderComplete}:{machine.canPullBodyNow}"

def main : IO Unit := do
  printRoundTrip
  printBodyPulls
  printClientRoundTrip
