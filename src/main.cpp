#include <raylib.h>

#include "game.h"

int main()
{
    Color darkBlue = Color{44, 44, 127, 255};

    const int screenWidth = 300;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        game.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}