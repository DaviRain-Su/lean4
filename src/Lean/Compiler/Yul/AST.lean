/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Yul Abstract Syntax Tree.

Ported from the `zig-to-yul` project (src/yul/ast.zig), which mirrors the
libyul AST from Solidity. Reference: https://docs.soliditylang.org/en/latest/yul.html

EmitYul produces a `Yul.Object` which `Yul.Printer` renders to Yul source text.
-/
module

prelude
public import Init.Prelude
public import Init.Data.Repr
import Init.Data.Array.Basic
import Init.Data.String.Basic

public section

namespace Lean.Compiler.Yul

/-- EVM target hardfork. Determines available builtins (e.g. `shl` is Constantinople+). -/
inductive EvmVersion where
  | constantinople | istanbul | london | paris | shanghai | cancun
  deriving DecidableEq, Repr

def EvmVersion.default : EvmVersion := .cancun

/-- A Yul identifier is just a name string. -/
abbrev Name := String

/-- A typed name: identifier plus an optional type annotation (Yul values are all u256). -/
structure TypedName where
  name : Name
  typeName : Option Name := none

/-- Kind of a literal. -/
inductive LiteralKind where
  | number | hexNumber | bool | string | hexString

/-- A literal expression. The value is stored as a string so we can render both
    decimal and hex forms verbatim. -/
structure Literal where
  kind : LiteralKind
  value : String

def Literal.num (s : String) : Literal := { kind := .number, value := s }
def Literal.natLit (n : Nat) : Literal := { kind := .number, value := toString n }
def Literal.hex (s : String) : Literal := { kind := .hexNumber, value := s }
def Literal.bool (b : Bool) : Literal := { kind := .bool, value := if b then "true" else "false" }
def Literal.string (s : String) : Literal := { kind := .string, value := s }
def Literal.hexString (s : String) : Literal := { kind := .hexString, value := s }

/-- A Yul expression. Does not reference statements, so it is standalone. -/
inductive Expr where
  | lit (l : Literal)
  | ident (name : Name)
  | call (fn : Name) (args : Array Expr)       -- user-defined function call
  | builtin (name : Name) (args : Array Expr)  -- EVM opcode call (add, mstore, sload, ...)
  deriving Inhabited

/-- A top-level data section in a Yul object (rarely used by codegen). -/
structure DataSection where
  name : Name
  data : String
  isHex : Bool := true

-- The only true mutual dependency: Block <-> Statement.
mutual
  inductive Statement where
    | block (b : Block)
    | varDecl (vars : Array TypedName) (value : Option Expr)
    | assignment (vars : Array Name) (value : Expr)
    | exprStmt (e : Expr)
    | ifStmt (cond : Expr) (body : Block)
    | switchStmt (e : Expr) (cases : Array Case)
    | funcDef (name : Name) (params : Array TypedName) (returns : Array TypedName) (body : Block)
    | forLoop (pre : Block) (cond : Expr) (post : Block) (body : Block)
    | break
    | continue
    | leave
  structure Block where
    statements : Array Statement
  structure Case where
    value : Option Literal  -- none = default case
    body : Block
end

/-- A Yul object: the top-level unit passed to `solc --strict-assembly`. -/
structure Object where
  name : Name
  code : Block
  subObjects : Array Object := #[]
  dataSections : Array DataSection := #[]

-- Convenience constructors for common expression forms.
def Expr.num (n : Nat) : Expr := .lit (Literal.natLit n)
def Expr.str (s : String) : Expr := .lit (Literal.string s)
def Expr.boolTrue : Expr := .lit (Literal.bool true)
def Expr.boolFalse : Expr := .lit (Literal.bool false)
def Expr.id (n : Name) : Expr := .ident n

/-- Call a user-defined function. -/
def call (fn : Name) (args : Array Expr) : Expr := .call fn args

/-- Call an EVM builtin opcode. -/
def builtin (name : Name) (args : Array Expr) : Expr := .builtin name args

/-- Empty block. -/
def Block.empty : Block := { statements := #[] }

end Lean.Compiler.Yul
