module
prelude
import Init.System.IO
import Std.Http.Protocol.H1.Reader

/-! End-to-end stdlib-linked EmitZig test for HTTP/1.1 reader helpers. -/

open Std
open Std.Http
open Std.Http.Protocol.H1

def showBodyState : Reader.BodyState → String
  | .fixed n => s!"fixed:{n}"
  | .chunkedSize => "chunked-size"
  | .chunkedBody exts n => s!"chunked-body:{exts.size}:{n}"
  | .closeDelimited => "close-delimited"

def showState {dir : Direction} : Reader.State dir → String
  | .needStartLine => "need-start-line"
  | .needHeader n => s!"need-header:{n}"
  | .readBody body => s!"read-body:{showBodyState body}"
  | .continue _ => "continue"
  | .pending => "pending"
  | .complete => "complete"
  | .closed => "closed"
  | .failed err => s!"failed:{err}"

def showError? : Option Error → String
  | some err => toString err
  | none => "none"

def text (bytes : ByteArray) : String :=
  (String.fromUTF8? bytes).getD "<invalid-utf8>"

def main : IO Unit := do
  let receiving : Reader .receiving := {}
  let sending : Reader .sending := {}
  IO.println s!"initial:{showState receiving.state}:{receiving.needsMoreInput}:{showState sending.state}:{sending.needsMoreInput}"

  let fed := receiving.feed "hello".toUTF8
  let compacted := fed.advance 2 |>.feed "!!".toUTF8
  IO.println s!"input:{fed.remainingBytes}:{compacted.remainingBytes}:{text compacted.input.array}"

  let withHeader :=
    receiving
      |>.addHeader .host (Header.Value.ofString! "example.com")
      |>.addHeader .connection (Header.Value.ofString! "close")
  IO.println s!"headers:{withHeader.messageHead.headers.size}:{withHeader.messageHead.headers.contains .host}:{withHeader.shouldKeepAlive}"

  let reading :=
    receiving
      |>.startHeaders
      |>.addHeaderBytes 17
      |>.startFixedBody 5
      |>.addBodyBytes 2
  IO.println s!"reading:{showState reading.state}:{reading.headerBytesRead}:{reading.bodyBytesRead}:{reading.needsMoreInput}"

  let complete := reading.markComplete
  IO.println s!"complete:{showState complete.state}:{complete.isComplete}:{complete.messageCount}:{complete.needsMoreInput}"

  let reset := complete.reset
  IO.println s!"reset:{showState reset.state}:{reset.messageCount}:{reset.bodyBytesRead}:{reset.headerBytesRead}:{reset.messageHead.headers.size}:{reset.needsMoreInput}"

  let failed := reset.fail (.other "boom")
  IO.println s!"failed:{showState failed.state}:{failed.hasFailed}:{showError? failed.getError}:{failed.needsMoreInput}"

  let closed := failed.close
  IO.println s!"closed:{showState closed.state}:{closed.isClosed}:{closed.noMoreInput}:{closed.needsMoreInput}"

  let chunked :=
    receiving
      |>.startChunkedBody
      |>.markNoMoreInput
  IO.println s!"chunked:{showState chunked.state}:{chunked.needsMoreInput}"
