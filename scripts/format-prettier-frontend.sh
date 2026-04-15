#!/usr/bin/env bash
set -euo pipefail

usage() {
  echo "Usage: $0 <check|apply>"
  exit 2
}

mode=${1:-check}
if [[ "$mode" != "check" && "$mode" != "apply" ]]; then
  usage
fi

frontend_dir="src/kalman_robot/kalman_gs/node_project"
if [ -d "$frontend_dir" ] && [ -f "$frontend_dir/package.json" ]; then
  echo "Running prettier ($mode) in $frontend_dir"
  pushd "$frontend_dir" >/dev/null || exit 1
  if ! command -v npm >/dev/null 2>&1; then
    echo "npm not found; install Node/npm to run frontend formatting." >&2
    popd >/dev/null
    exit 1
  fi
  npm ci --no-audit --silent
  if [ "$mode" = "check" ]; then
    npx prettier --check . || exit 1
  else
    npx prettier --write . || exit 1
  fi
  popd >/dev/null
else
  echo "No frontend project found at $frontend_dir, skipping prettier."
fi
