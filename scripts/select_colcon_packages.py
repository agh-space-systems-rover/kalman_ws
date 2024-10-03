import sys
import os
from xml.etree import ElementTree
from typing import Callable


MAX_DEPTH = 5
PACKAGES_DIR = "src"


# Walks directories with a maximum depth level.
def walk_dir(dir: str, max_depth: int, cb: Callable[[str], None]):
    if max_depth == 0:
        return
    for item in os.listdir(dir):
        item_path = os.path.join(dir, item)
        if os.path.isdir(item_path):
            cb(item_path)
            walk_dir(item_path, max_depth - 1, cb)


# Finds source dependencies of a package.
def read_pkg_deps(src_pkg_paths: dict[str, str], pkg: str) -> set[str]:
    dep_pkgs = set()
    with open(os.path.join(src_pkg_paths[pkg], "package.xml"), "r") as f:
        pkg_xml = ElementTree.parse(f).getroot()
        for dep in sum(
            [
                pkg_xml.findall(tag)
                for tag in ["depend", "build_depend", "exec_depend", "test_depend"]
            ],
            [],
        ):
            dep_name = dep.text
            if dep_name in src_pkg_paths:
                dep_pkgs.add(dep_name)
    return dep_pkgs


if __name__ == "__main__":
    # Get queries from command line arguments.
    queries = sys.argv[1:]
    queries = [query.lower() for query in queries]

    # Find all packages in the src directory.
    src_pkg_paths = {}  # source package names -> paths

    def cb(item_path: str):
        if "package.xml" in os.listdir(item_path):
            pkg_name = os.path.basename(item_path)
            src_pkg_paths[pkg_name] = item_path

    walk_dir(PACKAGES_DIR, MAX_DEPTH, cb)

    # Select packages
    selected_pkgs = set()
    for pkg_name, pkg_path in src_pkg_paths.items():
        if not queries or any(query in pkg_name.lower() for query in queries):
            selected_pkgs.add(pkg_name)

    # Recursively add dependencies of selected packages.
    pkgs_to_build = selected_pkgs.copy()
    pkgs_to_discover = pkgs_to_build.copy()
    while True:
        prev_pkgs_to_build = pkgs_to_build.copy()
        for pkg in pkgs_to_discover:
            pkgs_to_build.update(read_pkg_deps(src_pkg_paths, pkg))
        pkgs_to_discover = pkgs_to_build - prev_pkgs_to_build
        if not pkgs_to_discover:
            break

    # Print names and then paths of selected packages.
    for pkg in pkgs_to_build:
        print(f"{pkg}:{src_pkg_paths[pkg]}")
