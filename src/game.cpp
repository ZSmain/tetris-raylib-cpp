#include <random>

#include "game.h"

Game::Game()
{
    grid = Grid();
    blocks = {
        TBlock(),
        IBlock(),
        OBlock(),
        LBlock(),
        JBlock(),
        ZBlock(),
        SBlock()};
    currentBlock = getRandomBlock();
    nextBlock = getRandomBlock();
}

Block Game::getRandomBlock()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, blocks.size() - 1);

    return blocks[dis(gen)];
}

void Game::draw()
{
    grid.draw();
    currentBlock.draw();
}