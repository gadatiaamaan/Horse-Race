// C++ file for race

#include "horse.h"
#include "race.h"
#include <iostream>
#include <cstdlib>

Race::Race() { // initializes the  race constructor
  length = 15; // sets the race length to 15
}

Race::Race(int length) { 
  Race::length = length; // sets the race length to the input race length
}


void Race::printLane(int horseNum) { // function to print each horse lane
  int i = 0; // initialize the variable used in this function
  for (i; i < length; i++) { // for loop to go through the whole lane
    int j = h[horseNum].getPosition(); // gets the position of the horse
    if (i == j) { // compare the horse number to it's position on the lane
      std::cout << horseNum;} // print the horse number on its position on the lane
    else {
      std::cout << "."; // print a dot where the horse is not
}}
    std::cout << std::endl; // create a new line for the next horse
}

void Race::start() { // function when the race is to start
  bool keepGoing = true; // boolean to continue the race until it needs to be stopped
  int x = 0; // initialize the variable used in this function
  for (x; x < 5; x++) { // for loop to go through each horse
    printLane(x);} // prints the lane for each individual horse
  
  while (keepGoing) { // while loop to use when the boolean is active
    int n = 0; // initialize the variable used in this function
    for (n; n < 5; n++) { // for loop to go through each horse
      h[n].advance(); // calls the advance function to move the horses
      printLane(n); // prints the lane for each individual horse
      if (h[n].getPosition() == (length)) { // checks if a horse has finished the race
        keepGoing = false; // if a horse has won, the while loop will be killed
        std::cout << "\n" << std::endl; // create a new line
        std::cout << "Horse " << n << " wins! " << std::endl; // prints out which horse has won
}}
    std::cout << std::endl; // create a new line for the next round of the race
}}
