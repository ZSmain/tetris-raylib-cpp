#include <raylib.h>
#include "grid.h"

int main()
{
    Color darkBlue = Color{44, 44, 127, 255};

    const int screenWidth = 300;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}