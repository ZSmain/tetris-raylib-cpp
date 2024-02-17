#pragma once

#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Block getRandomBlock();
    void draw();

    Grid grid;
    Block currentBlock;
    Block nextBlock;

private:
    std::vector<Block> blocks;
};