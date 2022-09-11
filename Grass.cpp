/**
 * @file Grass.cpp
 * @author: Varis Nijat
 * CIS 554-M401 Object Oriented Programming in C++
 * Syracuse University
 * Final Project - Food Chains Simulation
**/

#include "Grass.h"

using std::string;

Grass::Grass(){}

Grass::Grass(int lon, int lat, int bc, int sc, bool idd):
    Species(lon, lat, bc, sc, idd){}


string Grass::toString(){
    return "^^^";
}
