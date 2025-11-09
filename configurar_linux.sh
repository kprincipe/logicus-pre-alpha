#!/bin bash
# script para configurar a variavel local de biblioteca, permitindo a compilacao

set -e

export LD_LIBRARY_PATH="`pwd`/raylib-5.5_linux_amd64/lib"
echo Tudo certo!
