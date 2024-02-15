#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void initialize();
    void print();
    int grid[20][10];
    void draw();

private:
    std::vector<Color> getCellColors();
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};