main: main.c
	gcc main.c -I ./bibliotecas/raylib-5.5_linux_amd64/include/ -I ./bibliotecas/raygui-4.0/src -L ./bibliotecas/raylib-5.5_linux_amd64/lib/ -lraylib -lm

clean:
	rm -rf ./bibliotecas/*
