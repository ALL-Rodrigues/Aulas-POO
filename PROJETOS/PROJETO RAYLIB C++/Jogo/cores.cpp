#include "cores.h"
#include<vector>

const Color darkGrey =  {26,  31,  40,  255}; // 0 - cinza escuro
const Color green =     {47,  230, 23,  255}; // 1 - verde
const Color red =       {232, 18,  18,  255}; // 2 - vermelho
const Color orange =    {226, 116, 17,  255}; // 3 - laranja
const Color yellow =    {237, 234, 4,   255}; // 4 - amarelo
const Color purple =    {166, 0,   247, 255}; // 5 - roxo
const Color cyan =      {21,  204, 209, 255}; // 6 - ciano
const Color blue =      {13,  64,  216, 255}; // 7 - azul
const Color lightBlue = {59,  85,  162, 255}; // 8 - azul claro
const Color darkBlue =  {44,  44,  127, 255}; // 9 - azul escuro

// pega as cores
std::vector<Color> GetCellColors(){
    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}