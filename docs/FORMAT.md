# Formatting guide

## Prerequisites

Before using the formatting scripts, ensure you have the following tools installed:
- `uv` (optional) - to install visit official [website](https://docs.astral.sh/uv/reference/installer/)
- `black` for Python formatting (install via `pip install black` or `uv tool install black>=24`).
- `pre-commit` for managing Git hooks (install via `pip install pre-commit` or `uv tool install pre-commit`).
- `clang-format` for C/C++ formatting (install via your package manager, e.g., `sudo apt install clang-format` on Ubuntu).
- For frontend formatting, ensure you have Node.js and `npm` available.

## Overview

This repository enforces code formatting for Python, C/C++, and frontend JS/TS files.

Overview
- Python: `black`
- C/C++: `clang-format` (uses repository `.clang-format`)
- Frontend: `prettier` (in `src/kalman_robot/kalman_gs/node_project`)

Quick local checks

- Run the repository wrapper (check mode):

```bash
./scripts/format.sh check .
```

Quick checks in Docker

- Build and run the formatter without an interactive shell (uses scripts/docker-compose.yaml):

```bash
docker compose -f scripts/docker-compose.yaml run --rm --entrypoint format.sh format check .
```

- Apply formatting in Docker:

```bash
docker compose -f scripts/docker-compose.yaml run --rm --entrypoint format.sh format apply .
```

- Apply formatting locally:

```bash
./scripts/format.sh apply .
```

- Run frontend prettier only (check):

```bash
./scripts/format-prettier-frontend.sh check
```

Notes

- The script respects tracked files (`git ls-files`) and excludes `vendor/` and `kalman_hardware/compasscal_src`.
- To format code use `./scripts/format.sh apply` .

CI

A GitHub Actions workflow `.github/workflows/format-check.yml` runs on PRs and performs the following checks:
- `black` via `pre-commit`
- `clang-format` checks (fails if diffs present)
- `prettier` check for the frontend (if present)

Macro integration

- If you use `scripts/macros.bash`, add a `format` macro that runs the repo wrapper:

```bash
format() {
  scripts/format.sh "$1"
}
```

Baseline commit

- To create the baseline formatting commit:
  1. Run `./scripts/format.sh apply` locally.
  2. Review changes (`git status`, `git diff`).
  3. Commit and push from a maintainer account.

Troubleshooting

- If `pre-commit` is not installed, install it with `pip install pre-commit`.
- If `clang-format` is missing, install it (Ubuntu: `sudo apt-get install clang-format`).
- For frontend formatting, ensure Node.js and `npm` are available.
