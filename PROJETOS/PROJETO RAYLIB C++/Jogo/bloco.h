#pragma once
#include "posicao.h"
#include "cores.h"
#include <vector>
#include <map>

class Block{
    public:
        Block();
        void Draw(int offsetX, int offsetY);
        void Move(int rows, int columns);
        std::vector<Position> GetCellPositions();
        void Rotate();
        void UndoRotation();
        int id;
        std::map<int, std::vector<Position>> cells;

    private:
    int cellSize;
    int rotationState;
    std::vector<Color> Colors;
    int rowOffset;
    int columnOffset;
};