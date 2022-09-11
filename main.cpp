#include "Grass.h"
#include "Species.h"
#include "FoodChains.h"
#include <iostream>
#include <random>

using std::cout;
using std::endl;
using std::to_string;


int main(){

    FoodChains fc(33);
    cout << fc.toString();
    // Grass grass(0, 5);
    // Species* grassPtr = nullptr;
    // grassPtr = &grass;
    // cout << grassPtr->toString();

    // const int columns = 10;
    // const int rows = 10;

    // array <array <Species*, columns>, rows> grid;

    // for (int r = 0; r < rows; r++){
    //     for (int c = 0; c < columns; c++){
    //         grid[r][c] = nullptr;
    //     }
    // }

    // array <string, 100> coords;

    // int numOfGrass = 5;
    // // generate grass
    // for (int i = 0; i <= numOfGrass; i++){
    //     array<int, 2> coord = generateCoordinate(coords);

    //     Grass grass(coord[0], coord[1]);
    //     Species *grassPtr = nullptr;
    //     grassPtr = &grass;
    //     grid[coord[0]][coord[1]] = grassPtr;
    // }
    // displayGrid(grid);

    return 0;
}