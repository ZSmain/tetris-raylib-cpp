#include "grid.h"
#include <iostream>

Grid::Grid()
{
    numRows = 20;
    numCols = 10;
    cellSize = 30;

    initialize();
    colors = getCellColors();
}

void Grid::initialize()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            grid[i][j] = 0;
        }
    }
}

void Grid::print()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<Color> Grid::getCellColors()
{
    std::vector<Color> colors;
    colors.push_back(DARKGRAY);
    colors.push_back(GREEN);
    colors.push_back(RED);
    colors.push_back(ORANGE);
    colors.push_back(YELLOW);
    colors.push_back(PURPLE);
    colors.push_back(BROWN);
    colors.push_back(BLUE);
    return colors;
}

void Grid::draw()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            int cellValue = grid[i][j];
            DrawRectangle(j * cellSize + 1, i * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
} 