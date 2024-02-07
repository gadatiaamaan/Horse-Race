#include <iostream> // Allows input/output to terminal
#include <cstdlib>  // For srand() function
#include "race.h"
#include "horse.h"

using namespace std;

int main() {
    int seed; // Define the seed variable
    cout << "Please enter a random seed: "; // Prompt user to input a seed
    cin >> seed; // Store the input seed
    srand(seed); // Seed the random number generator

    Race race; // Create a Race object
    race.start(); // Start the race
}
