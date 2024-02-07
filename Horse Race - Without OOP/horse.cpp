#include <iostream> // Include the iostream library
#include <cstdlib> // Include the cstdlib library

using namespace std;

int horseLocation[5] = {0, 0, 0, 0, 0}; // Initialize the locations of the horses all at 0

// Define the coinFlip function
int coinFlip() {
    int r; // Define the variable used within the function
    r = rand() % 2; // Have the variable be randomized and modded by 2 so that the result may be 1 or 0
    return r;
}

// Define the moveHorse function
void moveHorse() {
    for (int i = 0; i < 5; i++) { // Define the variable used within the function and create a for loop - using the variable to loop through all horses
        if (coinFlip() == 1) { // Create if statement that calls the coinFlip function 
            horseLocation[i] += 1; // Move the horse location +1 if the coinFlip results in 1
        } else {
            horseLocation[i] += 0; // Do not move the horse if the coinFlip results in 0
        }
    }
}

// Define the printLane function
void printLane(int y) {
    for (int x = 0; x < 15; x++) { // Define the variable used within the function and create a for loop - using the variable to loop through all horses
        if (x == horseLocation[y]) { // Create an if statement to see if the location of a horse is equal to its spot in the lane
            cout << y; // Print out the horse number
        } else {
            cout << "."; // Print out a dot
        }
    }
    cout << "\n"; // Create a new line for the next horse
}

// Create a boolean to see if there is a horse winner
bool findWinner() {
    for (int w = 0; w < 5; w++) { // Create a for loop to loop through all horses
        if (horseLocation[w] >= 15) { // Create an if statement to decide if a horse location has reached the end
            return false; // Change the boolean to false and end the for loop
        }
    }
    return true; // Outside the for loop, keep the boolean as true
}

// Define the printWinner function
void printWinner() {
    for (int n = 0; n < 5; n++) { // Create a for loop to loop through all horses
        if (horseLocation[n] >= 15) { // Create an if statement to decide if a horse location has reached the end
            cout << "Horse " << n << " wins! "; // Print out the winner or winners of the race
        }
    }
}

// Define the main function
int main() {
    int s; // Define the seed variable
    cout << "Please enter a random seed: "; // Have the user input a seed
    cin >> s; // Store the input
    srand(s); // Randomize the winner index variable

    bool noWinner = true; // Create a boolean variable to use when the winner is not found in the while loop

    while (noWinner) { // Begin the while loop
        moveHorse(); // Call the moveHorse function
        for (int j = 0; j < 5; j++) { // Create a for loop to loop through all horses
            printLane(j); // Print lane for each horse repeated in the while loop
        }
        cout << "\n"; // Create a new line for the next round of the race
        noWinner = findWinner(); // Have the boolean for findWinner be equal to the noWinner boolean to stop the while loop when a winner is found
    }
    printWinner(); // Call the printWinner function to display the winner of the race
    cout << "\n"; // End the main function and create a new line for the next round of the race
}
