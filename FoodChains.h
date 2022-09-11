/**
 * @file FoodChains.h
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#ifndef FOODCHAINS_H
#define FOODCHAINS_H

#include "Species.h"
#include <array>

using std::array;
using std::string;

class FoodChains{

    private:
        int numOfGrass;
        const int columns = 10;
        const int rows = 10;
        array <array <Species*, 10>, 10> grid;
        array <string, 100> coords;

    public:
        FoodChains(int numOfGrass);

        void initializeGrid();

        int getColumns(){ return columns;}
        int getRows(){ return rows;}

        int generateRandomNumber() const;
        bool checkIfCoordExists(int x, int y);
        array<int, 2> generateCoordinate();
        void populateCells();

        string toString() const;

};


#endif
