
#include <iostream> //include the iostream library
#include <cstdlib> // include the cstdlib library

int horseLocation[5]= {0,0,0,0,0}; //initialize the locations of the horses all at 0

int coinFlip(){ // define the coinFlip function
  int r; // define the varibale used within the function
  r = rand() % 2; // have the variable be randomized and modded by 2 so that the result may be 1 or 0
  return r;} // return the result

int moveHorse(){ // define the moveHorse function
  for (int i=0; i< 5; i++){ // define the variable used within the function and create a for loop - using the variable to loop through all horses
    if (coinFlip() == 1){ // create if statement that calls the coinFlip function 
      horseLocation[i] += 1;} // move the horse location +1 if the coinFlip results in 1
    else{
      horseLocation[i] += 0;}}} // do not move the horse if the coinFlip results in 0

int printLane(int y){ // define the printLane function
  for (int x=0; x< 15; x++){ // define the variable used within the function and create a for loop - using the variable to loop through all horses
    if( x == horseLocation[y]){ // create a if statement to see if the location of a horse is equal to it's spot in the lane
      std::cout << y;} // print out the horse number
    else{
      std::cout << ".";}} // print out a dot
    std::cout << "\n";} //create a new line for the next horse

bool findWinner(){ // create a boolean to see if there is a horse winner
  int w; //define the variable used within this function
  for (int w=0; w< 5; w++){ // create for loop to loop through all horses
    if (horseLocation[w] >= 15){ // create if statement to decide if a horse location has reached the end
      return false;}} // change the boolean to false and end the for loop
  return true;} // outside the for loop, keep the boolean as true

int printWinner(){ //define the function printWinner
  for (int n=0; n< 5; n++){ // create for loop to loop through all horses
    if (horseLocation[n] >= 15){ // create if statement to decide if a horse location has reached the end
      std::cout << "Horse " << n << " wins! ";}}} // print out the winner or winners of the race   


int main(){ //define the main function
  int s; //define the seed variable
  std::cout <<"Please enter a random seed: "; //have user input a seed
  std::cin >> s; //store the input
  srand(s); //randomize the winner index variable

  bool noWinner = true; //create boolean variable to use when the winner is not found in the while loop

  while(noWinner){ // begin while loop
    moveHorse(); // call the moveHorse function
    for (int j=0; j< 5; j++){ // create for loop to loop through all horses
      printLane(j);} // print lane for each horse repeated in the while loop
    std::cout << "\n"; //create a new line for the next round of the race
    noWinner = findWinner();} // have the boolean for findWinner be equal to the noWinner boolean to stop the while loop when a winner is found
  printWinner(); // call the printWinner function to display the winner of the race
  std::cout << "\n";} //end the main function and create a new line for the next round of the race


