module
prelude
import Init.Data.String.Search
import Init.System.IO
import Std.Http.Protocol.H1.Writer

/-! End-to-end stdlib-linked EmitZig test for HTTP/1.1 writer helpers. -/

open Std
open Std.Http
open Std.Http.Protocol.H1

def chunk (s : String) : Chunk :=
  Chunk.ofByteArray s.toUTF8

def chunkWithExt (s : String) : Chunk :=
  (chunk s).insertExtension (Chunk.ExtensionName.ofString! "sig") (Chunk.ExtensionValue.ofString! "lean zig")

def text (bytes : ByteArray) : String :=
  (String.fromUTF8? bytes).getD "<invalid-utf8>"

def oneLine (s : String) : String :=
  s.replace "\r\n" "|"

def showOutput {dir : Direction} (writer : Writer dir) : String :=
  match writer.takeOutput with
  | some (_, bytes) => oneLine (text bytes)
  | none => "none"

def showLength : Body.Length → String
  | .chunked => "chunked"
  | .fixed n => s!"fixed:{n}"

def printTransferModes : IO Unit := do
  let writer : Writer .sending := {}
  let closed := writer.addUserData #[chunk "abc"] |>.closeBody
  let sized : Writer .sending := { writer with knownSize := some (.fixed 12) }
  IO.println s!"mode-default:{showLength writer.determineTransferMode}"
  IO.println s!"mode-closed:{showLength closed.determineTransferMode}"
  IO.println s!"mode-sized:{showLength sized.determineTransferMode}"

def printState : IO Unit := do
  let sending : Writer .sending := {}
  let receiving : Writer .receiving := {}
  let closed := sending.setState .closed
  IO.println s!"state:{sending.canAcceptData}:{receiving.canAcceptData}:{closed.isClosed}"

def printFixed : IO Unit := do
  let writer : Writer .sending :=
    ({} : Writer .sending)
      |>.addUserData #[chunk "hello", chunk " world"]
  let (writer, remaining) := writer.writeFixedBody 7
  IO.println s!"fixed:{showOutput writer}:{remaining}:{writer.userData.size}:{writer.userDataBytes}"

def printChunked : IO Unit := do
  let writer : Writer .sending :=
    ({} : Writer .sending)
      |>.addUserData #[chunkWithExt "lean", Chunk.empty, chunk "zig"]
      |>.writeChunkedBody
  IO.println s!"chunked:{showOutput writer}:{writer.userData.size}:{writer.userDataBytes}"

def printFinalChunk : IO Unit := do
  let writer : Writer .sending :=
    ({} : Writer .sending)
      |>.addUserData #[chunk "done"]
      |>.writeFinalChunk
  IO.println s!"final:{showOutput writer}:{writer.isComplete}"

def printRaw : IO Unit := do
  let writer : Writer .sending :=
    ({} : Writer .sending)
      |>.addUserData #[chunk "raw", chunk "-body"]
      |>.writeRawBody
  IO.println s!"raw:{showOutput writer}:{writer.userData.size}:{writer.userDataBytes}"

def printKeepAlive : IO Unit := do
  let closeHead : Request.Head :=
    { method := .get, version := .v11, uri := RequestTarget.parse! "/", headers := Headers.empty.insert! "Connection" "close" }
  let closeWriter : Writer .sending := { ({} : Writer .sending) with messageHead := closeHead }
  IO.println s!"keep:{({} : Writer .sending).shouldKeepAlive}:{closeWriter.shouldKeepAlive}"

def main : IO Unit := do
  printTransferModes
  printState
  printFixed
  printChunked
  printFinalChunk
  printRaw
  printKeepAlive
