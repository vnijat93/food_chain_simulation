/**
 * @file Species.cpp
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#include "Species.h"
#include "FoodChains.h"
#include <random>

using std::string;

Species::Species(){}


Species::Species(int st, int lon, int lat, int bc, int sc, bool idd){
    x = lon;
    y = lat;
    breedCycle = bc;
    starveCycle = sc;
    isDead = idd;
    speciesType = st;
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

int Species::generateRandomDirection() const{

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> randomInt(1, 4);
    int randomNumber = randomInt(generator);

    return randomNumber;
}

array<int, 2> Species::getNextCoordinate(int x, int y) const{
    int nextDirection = generateRandomDirection();
    int newX = x;
    int newY = y;

    switch (nextDirection){
    case 1:
        // go up
        newY += 1;
        break;
    case 2:
        // Go down
        newY -= 1;
        break;
    case 3:
        // Go left
        newX -= 1;
        break;
    case 4:
        // Go right
        newX += 1;
        break;
    }

    if (FoodChains::isValidCoordinate(newX, newY)){
        // within the boundary
        return {newX, newY};
    }else{
        return {x, y};
    }
}


string Species::toString(){
    return "   ";
}

void Species::move(array<array <Species*, 10>, 10> &grid){}

int Species::getSpeciesType() const{
    return speciesType;
}
