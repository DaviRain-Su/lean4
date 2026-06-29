#!/usr/bin/env bash


# Script internal to `./script/rebase-stage0.sh`

# Determine OS type for sed in-place editing
SED_CMD=("sed" "-i")
if [[ "$OSTYPE" == "darwin"* ]]
then
    # macOS requires an empty string argument with -i for in-place editing
    SED_CMD=("sed" "-i" "")
fi

if [ "$STAGE0_WITH_NIX" = true ]
then
  "${SED_CMD[@]}" '/chore: update stage0/ s,.*,x nix run .#update-stage0-commit,' "$1"
else
  "${SED_CMD[@]}" '/chore: update stage0/ s,.*,x zig build update-stage0-commit -Dprofile=release -Dbinary-dir=build/release,' "$1"
fi
