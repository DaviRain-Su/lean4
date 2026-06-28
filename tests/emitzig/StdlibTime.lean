module
prelude
import Init.System.IO
import Std.Time

/-! End-to-end stdlib-linked EmitZig test for deterministic `Std.Time` operations. -/

open Std.Time

def fullDayTimeZone : GenericFormat .any :=
  datespec("EEEE, MMMM dd, uuuu HH:mm:ss ZZZ")

def brTZ : TimeZone :=
  timezone("America/Sao_Paulo -03:00")

def printDate (input : Except String PlainDate) : IO Unit :=
  match input with
  | .ok date => IO.println date
  | .error err => IO.println s!"error: {err}"

def printDateTime (input : Except String DateTime) : IO Unit :=
  match input with
  | .ok date => IO.println (Formats.iso8601.format date)
  | .error err => IO.println s!"error: {err}"

def main : IO Unit := do
  let date := date("1970-01-20")
  IO.println (date + (12 : Day.Offset))
  IO.println (date - (12 : Day.Offset))

  let time := time("13:02:01")
  let dur := Duration.ofSeconds (120 : Second.Offset)
  IO.println (time + dur)
  IO.println (time - dur)

  let dt := datetime("2000-01-20T03:02:01")
  IO.println (dt + (500 : Millisecond.Offset))
  IO.println (dt - (3000 : Millisecond.Offset))
  IO.println ((dt + (1234 : Millisecond.Offset) - (1234 : Millisecond.Offset)) == dt)

  let zdt := DateTime.ofTimestampWithZone (Timestamp.ofSecondsSinceUnixEpoch (1723739292 : Second.Offset)) brTZ
  IO.println (fullDayTimeZone.format zdt)
  IO.println (Formats.iso8601.format zdt)
  IO.println (Formats.rfc822.format zdt)

  printDate (PlainDate.fromSQLDateString "2014-06-16")
  printDateTime (DateTime.fromISO8601String "2014-06-16T03:03:03-03:00")
  printDate (PlainDate.fromSQLDateString "2014-99-16")
