#include <iostream> // gives us the ability to input/output stuff to terminal
#include <cstdlib>
#include "race.h"
#include "horse.h"

int main() {
  int s; //define the seed variable
  std::cout <<"Please enter a random seed: "; //have user input a seed
  std::cin >> s; //store the input
  srand(s); //randomize the winner index variable

  Race race; // calls for the race object to initialize values
  race.start(); // starts the start function to peform the race
}
