#!/usr/bin/env bash
# script para configurar a variavel local de biblioteca, permitindo a compilacao

set -e

make clean
wget https://github.com/raysan5/raygui/archive/refs/tags/4.0.zip -P ./bibliotecas 
wget https://github.com/raysan5/raylib/releases/download/5.5/raylib-5.5_linux_amd64.tar.gz -P ./bibliotecas

unzip ./bibliotecas/4.0.zip -d ./bibliotecas/
tar -xvf ./bibliotecas/raylib-5.5_linux_amd64.tar.gz -C ./bibliotecas/

echo "-------------------------------------------------------------------------"
echo ""
echo "Tudo certo!! Agora digite os seguintes comandos no terminal: "
echo ""
echo '1.  export LD_LIBRARY_PATH=\"`pwd`/bibliotecas/raylib-5.5_linux_amd64/lib/"'
echo "2.  make"
echo ""
echo "-------------------------------------------------------------------------"
