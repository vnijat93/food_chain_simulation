/**
 * @file Grass.h
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#ifndef GRASS_H
#define GRASS_H

#include "Species.h"

using std::string;
using std::array;

class Grass: public Species{

    public:
        Grass();
        Grass(int x, int y, int breedCycle = 0, int starveCycle = 0, bool isDead = false);
        // ~Grass();
        Species* clone() const {return new Grass(*this);}

        string toString();
        // virtual array<int, 2> move();
};

#endif
