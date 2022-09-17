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
#include <vector>

using std::array;
using std::string;
using std::vector;

class FoodChains{

    private:
        int numOfGrass;
        int numOfHoppers;
        const int columns = 10;
        const int rows = 10;
        array <array <Species*, 10>, 10> grid;
        // vector <vector <Species*> > grid;
        // Species **grid;
        array <string, 100> coords;

    public:
        FoodChains(int numOfGrass, int numOfHoppers);

        void initializeGrid();
        void initializeCoords();

        int getColumns(){ return columns;}
        int getRows(){ return rows;}

        int generateRandomNumber() const;
        bool checkIfCoordExists(int x, int y);
        array<int, 2> generateCoordinate();
        void populateCells();

        string toString() const;
        void populateGrass();

        static bool isValidCoordinate(int x, int y);
        void simulate();

};


#endif
