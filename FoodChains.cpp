/**
 * @file FoodChains.cpp
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#include "FoodChains.h"
#include "Grass.h"
#include "Grasshopper.h"
#include <random>
#include <iostream>
#include <typeinfo>

using std::array;
using std::to_string;
using std::cout;
using std::endl;
using std::string;

FoodChains::FoodChains(int grass, int hoppers){
    numOfGrass = grass;
    numOfHoppers = hoppers;
    array <string, 100> coords;

    initializeGrid();
}


void FoodChains::initializeGrid(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            grid[i][j] = new Species();
        }
    }
}

int FoodChains::generateRandomNumber() const{
    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> randomInt(0, 9);

    int randomNumber = randomInt(generator);

    return randomNumber;
}

bool FoodChains::checkIfCoordExists(int x, int y){
    string stringCoord = to_string(x) + " " + to_string(y);
    for (int i = 0; i <= 100; i++){
        if (coords[i] == stringCoord){
            return true;
        }
        if (coords[i].empty()){
            coords[i] = stringCoord;
            return false;
        }
    }
}


array<int, 2> FoodChains::generateCoordinate(){

    bool coordExists = true;

    while (coordExists){
        int x = generateRandomNumber();
        int y = generateRandomNumber();

        array<int, 2> coord = {x, y};
        coordExists = checkIfCoordExists(x, y);

        if (!coordExists){
            return coord;
        }else{continue;}
    }
}

string FoodChains::toString() const{
    string horizontalLine = "_________________________________________\n";
    string result = "";

    for (int i = 0; i < 10; i++){

        result += horizontalLine;
        for (int j = 0; j < 10; j++){
            Species *s = grid[i][j];
            result += "|" + s->toString();
        }
        result += "|\n";
    }

    return result;
}

void FoodChains::populateCells(){

    // generate grass
    for (int i = 0; i < numOfGrass; i++){
        array<int, 2> coord = generateCoordinate();

        Grass grass(1, coord[0], coord[1]);
        Species* grassPtr = nullptr;
        grassPtr = &grass;
        grid[coord[0]][coord[1]] = grassPtr;
    }

    // generate grasshoppers
    for (int i = 0; i < numOfHoppers; i++){

        array<int, 2> coord = generateCoordinate();

        Grasshopper hopper(2, coord[0], coord[1]);
        Species* hopperPtr = nullptr;
        hopperPtr = &hopper;
        cout << hopperPtr->toString() <<endl;
        grid[coord[0]][coord[1]] = hopperPtr;
    }
}

bool FoodChains::isValidCoordinate(int x, int y){
    if (x <10 && x >= 0 && y < 10 && y >= 0){
        return true;
    }else{
        return false;
    }
}

void FoodChains::simulate(){
    cout << toString() << endl;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            Species *s = grid[i][j];
            s->toString();
            // s->move(grid);
        }
    }
}
