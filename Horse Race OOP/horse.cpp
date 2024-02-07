#include "horse.h"
#include <iostream>
#include <cstdlib>

// Implementation of the Horse class

// Constructor for the Horse class
Horse::Horse() {
    position = 0; // Initialize the position of the horse to zero
}

// Method to advance the horse
void Horse::advance() {
    // Generate a random number (0 or 1)
    int r = rand() % 2;

    // If the random number is 1, move the horse one spot in the race
    if (r == 1) {
        position++; // Increase horse's position by 1
    }
}

// Method to get the current position of the horse
int Horse::getPosition() {
    return position; // Return the current position of the horse
}
