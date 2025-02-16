#pragma once
#include "grid.h"
#include "blocos.cpp"

class Game{
    public:
    Game();
    void Draw();
    void HandleImput();
    void MoveBlockDown();
    bool gameOver;
    int score;

    private:
    void MoveBlockLeft();
    void MoveBlockRight();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int lineCleared, int moveDownPoints);
    Grid grid;
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};