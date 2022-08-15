// C++ file for horse

#include "horse.h"
#include <iostream>
#include <cstdlib>

Horse::Horse() { // intialize the constructor Horse
  Horse::position = 0; // initializes all of the horse's position to zero
}

void Horse::advance() {
  int r = rand() % 2; // generates a random number and mods it by two to return a 0 or 1
  if ( r == 1 ) { // if a 1 is returned, the horse can move one spot in the race
    position++; // horse position increased by 1
}}

int Horse::getPosition() {
  return position; // returns the horse position to the place calling for horse positions
}
