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

def printFailure (label : String) (request : String) (config : Config) : IO Unit := do
  let machine : Machine .receiving := { config }
  let (machine, first) := (machine.feed request.toUTF8).step
  IO.println s!"{label}-step1:{showEvents first.events}:{oneLine (text first.output.toByteArray)}:{machine.failed}:{machine.isReaderClosed}:{machine.keepAlive}"
  let (machine, second) := machine.step
  IO.println s!"{label}-step2:{showEvents second.events}:{oneLine (text second.output.toByteArray)}:{machine.failed}:{machine.isReaderClosed}:{machine.keepAlive}"

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

def printHeadSuppression : IO Unit := do
  let config : Config := {}
  let machine : Machine .receiving := { config }
  let request := "HEAD /meta HTTP/1.1\r\nHost: example.com\r\n\r\n"
  let (machine, first) := (machine.feed request.toUTF8).step
  IO.println s!"head-read:{showEvents first.events}:{machine.isWaitingMessage}:{machine.canPullBody}:{machine.keepAlive}"

  let response : Response.Head := { status := .ok }
  let machine :=
    machine
      |>.setKnownSize (.fixed 5)
      |>.send response
      |>.sendData #[chunk "hello"]
      |>.userClosedBody
  let (machine, second) := machine.step
  showStep "head-write" second
  IO.println s!"head-after-write:{machine.isWaitingMessage}:{machine.halted}:{machine.keepAlive}"

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

  let trailerReq := "POST /trail HTTP/1.1\r\nHost: example.com\r\nTransfer-Encoding: chunked\r\n\r\n3\r\nabc\r\n0\r\nX-Trailer: yes\r\n\r\n"
  let trailerMachine : Machine .receiving := { config }
  let (trailerMachine, trailerStep) := (trailerMachine.feed trailerReq.toUTF8).step
  IO.println s!"trailer-step:{showEvents trailerStep.events}:{trailerMachine.canPullBody}:{trailerMachine.failed}"
  let (trailerMachine, trailerChunk1) := trailerMachine.pullBody
  let (trailerMachine, trailerEvents1) := trailerMachine.takeEvents
  IO.println s!"trailer-pull1:{showPulledChunk? trailerChunk1}:{showEvents trailerEvents1}:{trailerMachine.failed}:{trailerMachine.isReaderComplete}:{trailerMachine.canPullBodyNow}"
  let (trailerMachine, trailerChunk2) := trailerMachine.pullBody
  let (trailerMachine, trailerEvents2) := trailerMachine.takeEvents
  IO.println s!"trailer-pull2:{showPulledChunk? trailerChunk2}:{showEvents trailerEvents2}:{trailerMachine.failed}:{trailerMachine.isReaderComplete}:{trailerMachine.canPullBodyNow}"

  let badTrailerReq := "POST /trail HTTP/1.1\r\nHost: example.com\r\nTransfer-Encoding: chunked\r\n\r\n3\r\nabc\r\n0\r\nContent-Length: 1\r\n\r\n"
  let badTrailerMachine : Machine .receiving := { config }
  let (badTrailerMachine, badTrailerStep) := (badTrailerMachine.feed badTrailerReq.toUTF8).step
  IO.println s!"bad-trailer-step:{showEvents badTrailerStep.events}:{badTrailerMachine.canPullBody}:{badTrailerMachine.failed}"
  let (badTrailerMachine, badTrailerChunk1) := badTrailerMachine.pullBody
  let (badTrailerMachine, badTrailerEvents1) := badTrailerMachine.takeEvents
  IO.println s!"bad-trailer-pull1:{showPulledChunk? badTrailerChunk1}:{showEvents badTrailerEvents1}:{badTrailerMachine.failed}:{badTrailerMachine.isReaderComplete}:{badTrailerMachine.canPullBodyNow}"
  let (badTrailerMachine, badTrailerChunk2) := badTrailerMachine.pullBody
  let (badTrailerMachine, badTrailerEvents2) := badTrailerMachine.takeEvents
  IO.println s!"bad-trailer-pull2:{showPulledChunk? badTrailerChunk2}:{showEvents badTrailerEvents2}:{badTrailerMachine.failed}:{badTrailerMachine.isReaderComplete}:{badTrailerMachine.canPullBodyNow}"

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

def printExpectContinue : IO Unit := do
  let config : Config := {}
  let expectHead := "POST /expect HTTP/1.1\r\nHost: example.com\r\nExpect: 100-continue\r\nContent-Length: 4\r\n\r\n"

  let acceptMachine : Machine .receiving := { config }
  let (acceptMachine, acceptStep) := (acceptMachine.feed expectHead.toUTF8).step
  IO.println s!"expect-step:{showEvents acceptStep.events}:{acceptMachine.isReaderAwaitingContinue}:{acceptMachine.canPullBody}:{acceptMachine.keepAlive}"
  let acceptMachine := acceptMachine.canContinue .«continue»
  let (acceptMachine, acceptOutput) := acceptMachine.takeOutput
  IO.println s!"expect-accept-output:{oneLine (text acceptOutput.toByteArray)}:{acceptMachine.isReaderAwaitingContinue}:{acceptMachine.canPullBody}"
  let (acceptMachine, body) := (acceptMachine.feed "ping".toUTF8).pullBody
  let (acceptMachine, events) := acceptMachine.takeEvents
  IO.println s!"expect-body:{showPulledChunk? body}:{showEvents events}:{acceptMachine.isReaderComplete}:{acceptMachine.canPullBodyNow}"

  let rejectMachine : Machine .receiving := { config }
  let (rejectMachine, rejectStep) := (rejectMachine.feed expectHead.toUTF8).step
  IO.println s!"reject-step:{showEvents rejectStep.events}:{rejectMachine.isReaderAwaitingContinue}"
  let rejectMachine := rejectMachine.canContinue .expectationFailed
  let (rejectMachine, rejectOutput) := rejectMachine.step
  IO.println s!"reject-output:{showEvents rejectOutput.events}:{oneLine (text rejectOutput.output.toByteArray)}:{rejectMachine.isReaderClosed}:{rejectMachine.keepAlive}"

def printFailures : IO Unit := do
  printFailure "missing-host" "GET /bad HTTP/1.1\r\n\r\n" {}
  printFailure "too-many-headers" "GET /bad HTTP/1.1\r\nHost: example.com\r\n\r\n" { maxHeaders := 0 }
  printFailure "body-too-large" "POST /big HTTP/1.1\r\nHost: example.com\r\nContent-Length: 5\r\n\r\n" { maxBodySize := 3 }

def main : IO Unit := do
  printRoundTrip
  printHeadSuppression
  printBodyPulls
  printClientRoundTrip
  printExpectContinue
  printFailures
