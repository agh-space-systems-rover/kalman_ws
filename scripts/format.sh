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

repo_root=$(git rev-parse --show-toplevel 2>/dev/null || pwd)
cd "$repo_root"

# Exclude vendor directories and large third-party sources
exclude_regex='vendor/|kalman_hardware/compasscal_src/'

failures=0

# Gather files tracked by git or untracked (not ignored) from all nested git repositories.
# Prints null-separated paths relative to repository root (prefixed with subrepo path when applicable).
gather_git_files() {
  local -a pathspecs=("$@")
  local -a repo_dirs=()
  declare -A seen_repo=()
  local gitpath parent repo file

  # Find nested repositories (directories or files named .git)
  while IFS= read -r -d '' gitpath; do
    parent="$(dirname "$gitpath")"
    parent="${parent#./}"
    if [ -z "${seen_repo[$parent]:-}" ]; then
      seen_repo[$parent]=1
      repo_dirs+=("$parent")
    fi
  done < <(find . -name .git -print0 2>/dev/null || true)

  # If the current directory is a git repository but wasn't found above, include it.
  if git rev-parse --git-dir >/dev/null 2>&1; then
    if [ -z "${seen_repo[.]:-}" ]; then
      repo_dirs+=(".")
      seen_repo[.]=1
    fi
  fi

  if [ ${#repo_dirs[@]} -eq 0 ]; then
    return 0
  fi

  for repo in "${repo_dirs[@]}"; do
    # Tracked files
    git -C "$repo" ls-files -z -- "${pathspecs[@]}" 2>/dev/null | while IFS= read -r -d '' file; do
      if [ "$repo" = "." ] || [ "$repo" = "./" ]; then
        printf '%s\0' "$file"
      else
        printf '%s\0' "${repo%/}/$file"
      fi
    done

    # Untracked (but not ignored)
    git -C "$repo" ls-files --others --exclude-standard -z -- "${pathspecs[@]}" 2>/dev/null | while IFS= read -r -d '' file; do
      if [ "$repo" = "." ] || [ "$repo" = "./" ]; then
        printf '%s\0' "$file"
      else
        printf '%s\0' "${repo%/}/$file"
      fi
    done
  done
}

run_black() {
  files=()
  while IFS= read -r -d '' f; do
    if [[ "$f" =~ $exclude_regex ]]; then
      continue
    fi
    files+=("$f")
  done < <(gather_git_files '*.py')

  if [ ${#files[@]} -eq 0 ]; then
    echo "No Python files found."
    return 0
  fi
  echo "Running black ($mode) on ${#files[@]} Python files..."
  if ! command -v black >/dev/null 2>&1; then
    echo "black not found. Install with 'pip install black' or use pre-commit." >&2
    failures=$((failures+1))
    return 1
  fi
  if [ "$mode" = "check" ]; then
    printf '%s\0' "${files[@]}" | xargs -0 black --check || failures=$((failures+1))
  else
    printf '%s\0' "${files[@]}" | xargs -0 black || failures=$((failures+1))
  fi
}

run_clang_format() {
  files=()
  c_patterns=( '*.c' '*.cc' '*.cpp' '*.cxx' '*.h' '*.hh' '*.hpp' )
  while IFS= read -r -d '' f; do
    if [[ "$f" =~ $exclude_regex ]]; then
      continue
    fi
    files+=("$f")
  done < <(gather_git_files "${c_patterns[@]}")

  if [ ${#files[@]} -eq 0 ]; then
    echo "No C/C++ files found."
    return 0
  fi
  echo "Running clang-format ($mode) on ${#files[@]} C/C++ files..."
  if ! command -v clang-format >/dev/null 2>&1; then
    echo "clang-format not found. Skipping C/C++ formatting; install clang-format to enable this check." >&2
    return 0
  fi
  if [ "$mode" = "check" ]; then
    for f in "${files[@]}"; do
      if ! clang-format --style=file "$f" | diff -u "$f" - >/dev/null; then
        echo "clang-format changes needed: $f"
        failures=$((failures+1))
      fi
    done
  else
    printf '%s\0' "${files[@]}" | xargs -0 -n1 clang-format -i --style=file || failures=$((failures+1))
  fi
}

run_prettier_frontend() {
  frontend_dir="src/kalman_robot/kalman_gs/node_project"
  if [ -d "$frontend_dir" ] && [ -f "$frontend_dir/package.json" ]; then
    echo "Running prettier in frontend project..."
    if ! command -v npm >/dev/null 2>&1; then
      echo "npm not found; skipping frontend prettier. Install Node/npm to enable." >&2
      return 0
    fi
    if [ "$mode" = "check" ]; then
      (cd "$frontend_dir" && npm ci && npx prettier --check .) || failures=$((failures+1))
    else
      (cd "$frontend_dir" && npm ci && npx prettier --write .) || failures=$((failures+1))
    fi
  else
    echo "No frontend project found at $frontend_dir, skipping prettier."
  fi
}

run_black
run_clang_format
run_prettier_frontend

if [ ${failures:-0} -gt 0 ]; then
  echo "Formatting check failed ($failures)." >&2
  exit 1
else
  echo "Formatting $mode completed successfully."
  exit 0
fi
