kalm() {
    cmd=$1
    args="${@:2}"
    if [[ $cmd == "bruh" ]]; then
        build $args
    elif [[ $cmd == "cap" ]]; then
        clean $args
    elif [[ $cmd == "pwetty" ]]; then
        format $args
    elif [[ $cmd == "ok" ]]; then
        lint $args
    elif [[ $cmd == "chonk" ]]; then
        git-du $args
    elif [[ $cmd == "yeet" ]]; then
        reset-pull $args
    else
        echo "Available commands:"
        echo "  - bruh: Install dependencies and build the workspace, source the setup scripts. Configure VSCode auto-complete afterwards."
        echo "  - cap: Clean up the build artifacts (optionally for specified packages)."
        echo "  - pwetty: Format the codebase using a combination of tools."
        echo "  - ok: Run colcon test."
        echo "  - chonk: Show storage statistics for the repository you are currently in."
        echo "  - yeet: Reset and pull the latest changes from the remote for all repositories in kalman_ws."
    fi
}

# Check if bash_completion is not configured.
if [[ ! -f /etc/bash_completion.d/kalm ]]; then
    sudo cp $_KALMAN_WS_ROOT/scripts/kalm.completion.bash /etc/bash_completion.d/kalm
    # (Shell must be restarted if the completion script is updated.)
fi
