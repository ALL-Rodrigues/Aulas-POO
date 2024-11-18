#include <raylib.h>
#include "jogo.h"
#include "cores.h"
#include <iostream>

double tempo = 0;
bool EventTriggered(double Intervalo){
    double tempoAtual = GetTime();
    if(tempoAtual - tempo >= Intervalo){
        tempo = tempoAtual;
        return true;
    }
    return false;
}

int main(){
    InitWindow(500, 620, "Jogo c++ Raylib Tetris");
    SetTargetFPS(60);

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

    Game game = Game();

    while (WindowShouldClose() == false){
        game.HandleImput();
        if(EventTriggered(0.2)){
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE);

        if(game.gameOver){
            DrawTextEx(font, "GAME OVER!", {320, 450}, 28, 2, WHITE);
        }
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue); 

        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);

        DrawTextEx(font, scoreText, {320 + (170 - textSize.x) / 2, 65}, 38, 2, WHITE);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, lightBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}

