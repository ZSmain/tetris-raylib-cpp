#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = getCellColors();
}

void Block::draw()
{
    for (auto &cell : cells[rotationState])
    {
        DrawRectangle(cell.x * cellSize + 1, cell.y * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}