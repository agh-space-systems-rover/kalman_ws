# Panik

kalm() {
    cmd=$1
    if [[ $cmd == "buld" ]]; then
        build
    elif [[ $cmd == "clen" ]]; then
        clean
    elif [[ $cmd == "pul" ]]; then
        pull
    elif [[ $cmd == "pusz" ]]; then
        push
    else
        echo "panik"
    fi
}
