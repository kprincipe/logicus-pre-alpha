#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

// define tamanho da janela
#define LARGURA 800
#define ALTURA 480

int main(void)
{
    // inicializa janela pelo raylib
    InitWindow(LARGURA, ALTURA, "Teste de Interface");
    SetTargetFPS(60);
    
    // carrega imagem de placeholder
    Image placeholder = LoadImage("./imagens/placeholder_bg.png");
    Texture2D placeholder_texture = LoadTextureFromImage(placeholder);
    UnloadImage(placeholder);

    // carrega imagem de titulo
    Image titulo = LoadImage("./imagens/titulo.png");
    Texture2D titulo_texture = LoadTextureFromImage(titulo);
    UnloadImage(titulo);

    // define structs com dimensoes e posicao dos botoes
    int w = 256, h = 64;
    Rectangle botaoJogar = {
        .x = (LARGURA / 2) - w / 2,
        .y = (ALTURA / 2) - h / 2,
        .width = w,
        .height = h
    };

    Rectangle botaoOpcoes = {
        .x = (LARGURA / 2) - w / 2,
        .y = ((ALTURA / 2) - h / 2) + h + 8,
        .width = w,
        .height = h
    };

    Rectangle botaoSair = {
        .x = (LARGURA / 2) - w / 2,
        .y = ((ALTURA / 2) - h / 2) + 2 * h + 16,
        .width = w,
        .height = h
    };

    // inicio do loop infinito (gameloop) do jogo
    while (!WindowShouldClose())
    {
        BeginDrawing();
            // limpa plano de fundo da janela       
            ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

            // desenha imagem do placeholder e titulo
            DrawTexture(placeholder_texture, 0, 0, WHITE);
            DrawTexture(titulo_texture, (LARGURA / 2) - 180, ALTURA / 28, WHITE);
            
            // define tamanho da fonte
            GuiSetStyle(DEFAULT, TEXT_SIZE, 20);

            // desenha e executa funcionalidades dos botoes ao clicar
            if (GuiButton(botaoJogar, "JOGAR")) {
                // TODO: funcionalidade ao clicar JOGAR
            }
            if (GuiButton(botaoOpcoes, "OPCOES")) {
                // TODO: funcionalidade ao clicar OPCOES
            }
            if (GuiButton(botaoSair, "SAIR")) {
                // sair do loop do jogo, finalizando o programa
                break;
            }
        EndDrawing();
    }

    // janela fecha ao sair do loop
    CloseWindow();

    return 0;
}
