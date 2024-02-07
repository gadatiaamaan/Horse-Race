#ifndef RACE_H
#define RACE_H

#include "horse.h"

class Race {
private:
    Horse h[5]; // Array of Horse objects representing the horses in the race
    int length; // Length of the race track

public:
    // Constructors
    Race(); // Default constructor
    Race(int length); // Constructor with a parameter to set the length of the race

    // Function to print the lane for a given horse
    void printLane(int horseNum);

    // Function to start the race
    void start();
};

#endif // RACE_H
