/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Yul AST printer — renders a `Yul.Object` to Yul source text.

Ported from `zig-to-yul` (src/yul/printer.zig). The output is valid input for
`solc --strict-assembly`. Pure functional style: each printer takes an indent
level and returns the rendered text.
-/
module

prelude
public import Init.Prelude
import Init.Data.String.Basic
import Init.Data.Array.Basic
public import Lean.Compiler.Yul.AST

public section

namespace Lean.Compiler.Yul.Printer

open Lean.Compiler.Yul

/-- Indent prefix: two spaces per level. Defined recursively to avoid stdlib
    `String.replicate` (not available in prelude modules). -/
def pad : Nat → String
  | 0 => ""
  | n+1 => "  " ++ pad n

/-- A single indented line, terminated by a newline. -/
def line (indent : Nat) (s : String) : String := pad indent ++ s ++ "\n"

/-- Render a literal value to its Yul textual form. -/
def printLiteral (l : Literal) : String :=
  match l.kind with
  | .number => l.value
  | .hexNumber => l.value
  | .bool => l.value
  | .string => "\"" ++ l.value ++ "\""
  | .hexString => "hex\"" ++ l.value ++ "\""

/-- Render a typed name, with optional type annotation. -/
def printTypedName (tn : TypedName) : String :=
  match tn.typeName with
  | some t => tn.name ++ ":" ++ t
  | none => tn.name

mutual
  /-- Render arguments as a comma-separated list. -/
  partial def joinArgs (args : Array Expr) : String :=
    String.intercalate ", " (args.toList.map printExpr)

  /-- Render an expression on a single line. -/
  partial def printExpr : Expr → String
    | .lit l => printLiteral l
    | .ident n => n
    | .call fn args => fn ++ "(" ++ joinArgs args ++ ")"
    | .builtin name args => name ++ "(" ++ joinArgs args ++ ")"
end

mutual
  /-- Render a block as a brace-delimited multi-line region. -/
  partial def printBlock (indent : Nat) (b : Block) : String :=
    if b.statements.isEmpty then
      line indent "{ }"
    else
      let header := line indent "{"
      let body := b.statements.foldl (fun acc s => acc ++ printStatement (indent + 1) s) ""
      let footer := line indent "}"
      header ++ body ++ footer

  /-- Render a block inline (used after `if`/`for`/`case`/`switch` headers).
      Always expands to multi-line form for uniformity. -/
  partial def printBlockInline (indent : Nat) (b : Block) : String :=
    if b.statements.isEmpty then
      "{ }"
    else
      let body := b.statements.foldl (fun acc s => acc ++ printStatement (indent + 1) s) ""
      "{\n" ++ body ++ pad indent ++ "}"

  /-- Render a switch case header and body. -/
  partial def printCase (indent : Nat) (c : Case) : String :=
    let head := match c.value with
      | some l => "case " ++ printLiteral l ++ " "
      | none => "default "
    line indent (head ++ printBlockInline indent c.body)

  /-- Render a statement. The result is one or more fully-indented lines. -/
  partial def printStatement (indent : Nat) : Statement → String
    | .block b => printBlock indent b
    | .varDecl vars value =>
      let names := String.intercalate ", " (vars.toList.map printTypedName)
      match value with
      | some e => line indent ("let " ++ names ++ " := " ++ printExpr e)
      | none => line indent ("let " ++ names)
    | .assignment vars value =>
      line indent (String.intercalate ", " vars.toList ++ " := " ++ printExpr value)
    | .exprStmt e => line indent (printExpr e)
    | .ifStmt cond body =>
      line indent ("if " ++ printExpr cond ++ " " ++ printBlockInline indent body)
    | .switchStmt e cases =>
      let header := line indent ("switch " ++ printExpr e)
      let body := cases.foldl (fun acc c => acc ++ printCase indent c) ""
      header ++ body
    | .funcDef name params returns body =>
      let paramsStr := String.intercalate ", " (params.toList.map printTypedName)
      let retStr := if returns.isEmpty then "" else " -> " ++ String.intercalate ", " (returns.toList.map printTypedName)
      pad indent ++ "function " ++ name ++ "(" ++ paramsStr ++ ")" ++ retStr ++ " "
        ++ printBlockInline indent body ++ "\n"
    | .forLoop pre cond post body =>
      line indent ("for " ++ printBlockInline indent pre ++ " " ++ printExpr cond ++ " "
        ++ printBlockInline indent post ++ " " ++ printBlockInline indent body)
    | .break => line indent "break"
    | .continue => line indent "continue"
    | .leave => line indent "leave"

  /-- Render a data section. -/
  partial def printDataSection (indent : Nat) (d : DataSection) : String :=
    let body := if d.isHex then "hex\"" ++ d.data ++ "\"" else "\"" ++ d.data ++ "\""
    line indent ("data \"" ++ d.name ++ "\" " ++ body)

  /-- Render a top-level Yul object, recursing into sub-objects. -/
  partial def printObject (indent : Nat) (o : Object) : String :=
    let header := line indent ("object \"" ++ o.name ++ "\" {")
    let codeBlock :=
      let codeHeader := line (indent + 1) "code {"
      let codeBody := o.code.statements.foldl (fun acc s => acc ++ printStatement (indent + 2) s) ""
      let codeFooter := line (indent + 1) "}"
      codeHeader ++ codeBody ++ codeFooter
    let subs := o.subObjects.foldl (fun acc sub => acc ++ printObject (indent + 1) sub) ""
    let datas := o.dataSections.foldl (fun acc d => acc ++ printDataSection (indent + 1) d) ""
    let footer := line indent "}"
    header ++ codeBlock ++ subs ++ datas ++ footer
end

/-- Render a Yul object to source text. -/
def render (o : Object) : String := printObject 0 o

/-- Wrap a code block as a top-level Yul object named "Contract". -/
def renderContract (code : Block) : String := render { name := "Contract", code := code }

end Lean.Compiler.Yul.Printer
