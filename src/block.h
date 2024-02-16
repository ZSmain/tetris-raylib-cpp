#pragma once

#include <vector>
#include <map>
#include <raylib.h>

#include "position.h"
#include "colors.h"

class Block
{
public:
    Block();
    void draw();
    void move(int rows, int cols);
    std::vector<Position> getCellPositions();

    int id;
    std::map<int, std::vector<Position>> cells;

private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffset;
    int colOffset;
};