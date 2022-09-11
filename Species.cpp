/**
 * @file Species.cpp
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#include "Species.h"
using std::string;

Species::Species(){}


Species::Species(int lon, int lat, int bc, int sc, bool idd){
    x = lon;
    y = lat;
    breedCycle = bc;
    starveCycle = sc;
    isDead = idd;
}

void Species::setX(int newX){
    x = newX;
}

void Species::setY(int newY){
    y = newY;
}

void Species::setCoordinate(int newX, int newY){
    setX(newX);
    setY(newY);
}

void Species::setBreedCycle(int newBreedCycle){
    breedCycle = newBreedCycle;
}

void Species::setStarveCycle(int newStarveCycle){
    starveCycle = newStarveCycle;
}

void Species::setIsDead(bool newStatus){
    isDead = newStatus;
}

string Species::toString(){
    return "   ";
}

array<int, 2> Species::move(){
    return {x, y};
}
