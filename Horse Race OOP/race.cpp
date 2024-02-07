#include "horse.h"
#include "race.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// Constructor for Race class, sets the default length of the race
Race::Race() {
    length = 15; // Default race length
}

// Constructor for Race class with a parameter to set the length of the race
Race::Race(int length) {
    Race::length = length; // Set race length to the provided value
}

// Function to print the lane for a given horse
void Race::printLane(int horseNum) {
    for (int i = 0; i < length; i++) {
        int j = h[horseNum].getPosition();
        if (i == j) {
            cout << horseNum; // Print horse number if it's at the current position
        } else {
            cout << "."; // Print dot for empty space
        }
    }
    cout << endl; // Move to the next line after printing the lane
}

// Function to start the race
void Race::start() {
    bool keepGoing = true; // Variable to control race continuation
    for (int x = 0; x < 5; x++) {
        printLane(x); // Print lanes for all horses at the start
    }
  
    // Loop until a horse reaches the end of the race
    while (keepGoing) {
        for (int n = 0; n < 5; n++) {
            h[n].advance(); // Move horse
            printLane(n); // Print lane for the updated position of the horse
            // Check if any horse has finished the race
            if (h[n].getPosition() == length) {
                keepGoing = false; // Stop the race if a horse has reached the end
                cout << "\n" << endl; // Move to the next line for clarity
                cout << "Horse " << n << " wins! " << endl; // Announce the winner
            }
        }
        cout << endl; // Move to the next line to separate race iterations
    }
}
