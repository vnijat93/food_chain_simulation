/**
 * @file Grasshopper.cpp
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#include "Grasshopper.h"

using std::string;

Grasshopper::Grasshopper(){}

Grasshopper::Grasshopper(int st, int lon, int lat, int bc, int sc, bool idd):
    Species(st, lon, lat, bc, sc, idd){}

string Grasshopper::toString(){
    return " G ";
}

void Grasshopper::move(array<array <Species*, 10>, 10> &grid){
    
    // if the animal has died at the end of previous step
    // change it to a decomposer
    int currX = Species::getX();
    int currY = Species::getY();
    array<int, 2> nextCoord = Species::getNextCoordinate(currX, currY);

    int nextX = nextCoord[0];
    int nextY = nextCoord[1];

    if (currX == nextX && currY == nextY){
        // stay at current place
        Species::setStarveCycle(Species::getStarveCycel() + 1);
    }
    else{
        // try to move to next cell.
        Species* s = grid[nextX][nextY];
        int st = s->getSpeciesType();
        switch(st){
            case 0:
                // empty spot
                setCoordinate(nextX, nextY);
                Species::setStarveCycle(Species::getStarveCycel() + 1);
                grid[nextX][nextY] = grid[currX][currY];
                grid[currX][currY] = new Species();
                break;
            case 1:
                //grass cell
                setCoordinate(nextX, nextY);
                // increment breed cycle
                Species::setBreedCycle(Species::getBreedCycle() + 1);
                
        }
    }
}
