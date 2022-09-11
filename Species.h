/**
 * @file Species.h
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#ifndef SPECIES_H
#define SPECIES_H

// #include "FoodChains.h"
#include <string>
#include <array>

using std::string;
using std::array;

class Species{

    protected:
        int breedCycle;
        int starveCycle;
        bool isDead;
        int x;
        int y;

        // friend class FoodChains;

    public:

        Species();

        Species(int x, int y, int breedCycle = 0, int starveCycle = 0, bool isDead = false);
        
        void setX(int newX);
        int getX(){ return x;}

        void setY(int newY);
        int getY(){ return y;}

        void setCoordinate(int newX, int newY);

        void setBreedCycle(int newBreedCycle);
        int getBreedCycle(){ return breedCycle;}

        void setStarveCycle(int newStarveCycle);
        int getStarveCycel(){ return starveCycle;}

        void setIsDead(bool newStatus);
        bool getIsDead(){ return isDead;}

        virtual string toString();
        virtual array<int, 2> move();

};

#endif