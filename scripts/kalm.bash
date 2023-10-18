kalm() {
    cmd=$1
    if [[ $cmd == "buld" ]]; then
        build
    elif [[ $cmd == "clen" ]]; then
        clean
    else
        echo "panik!!"
    fi
}
