/**
 * @file Grasshopper.h
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#ifndef GRASSHOPPER_H
#define GRASSHOPPER_H

#include "Species.h"

using std::string;
using std::array;

class Grasshopper: public Species{

    public:
        Grasshopper();
        Grasshopper(int st, int x, int y, int breedCycle = 0, int starveCycle = 0, bool isDead = false);
        // type 2

        string toString();
        void move(array<array <Species*, 10>, 10> &grid);
};

#endif

