#!/bin/bash
#Init

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
SIREN=siren
CONFIG=siren.cfg

if [[ EUID -ne 0 ]]; then
    echo "ROOT!!!"
    exit 1
else
    ln -s $DIR/$SIREN /bin/$SIREN
    ln -s $DIR/$CONFIG /etc/$CONFIG
fi

