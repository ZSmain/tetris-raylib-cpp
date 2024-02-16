#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = getCellColors();
    rowOffset = 0;
    colOffset = 0;
}

void Block::draw()
{
    std::vector<Position> cellPositions = getCellPositions();
    for (auto &cell : cellPositions)
    {
        DrawRectangle(cell.x * cellSize + 1, cell.y * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::move(int rows, int cols)
{
    rowOffset += rows;
    colOffset += cols;
}

std::vector<Position> Block::getCellPositions()
{
    std::vector<Position> cellPositions;
    for (auto &cell : cells[rotationState])
    {
        cellPositions.push_back(Position(cell.x + rowOffset, cell.y + colOffset));
    }
    return cellPositions;
}