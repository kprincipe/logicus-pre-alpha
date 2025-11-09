main: main.c
	gcc main.c -I ./raylib-5.5_linux_amd64/include/ -I ./raygui/src -L ./raylib-5.5_linux_amd64/lib/ -lraylib -lm
