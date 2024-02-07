# general overview
- create a program that simulates a horse race between 5 horses. The track will be 15 units long and it will be randomized as to when a horse moves or not. On each turn all 5 horses will move or not move and the first horse to reach the 15th spot is the winner.
# Horse::Horse()
## goals
- to set the horse to its start position
## input
- none
## output
- none but it does initialize the horse position which is used throughout the program
## steps
- create the constructure
- give the horse a initial position of zero

# void Horse::advance()
## goals
- randomly generate a number which is then modded by 2 to return a result of 0 or 1
## input
- none but it does take in a randomly generated number
## output
- there is no output for this function although it does return a value that is used to decide if the horse will advance or not
## steps
- generates a random number and mods it by two to return a 0 or 1
- if a 1 is returned, the horse can move one spot in the race
- horse position increased by 1

# int Horse::getPosition()
## goals
- get the horses position on the lane
## input
- none
## output
- none but it returns the location of the horse to the designated function that asks
## steps
- returns the horse position to the place calling for horse positions

# Race::Race()
## goals
-initialize the length of the track
## input
- none
## output
- none but the length is used throughout the program
## steps
- set the race length to 15

# void Race::printLane(int horseNum)
## goals 
- print the lane of each horse - one as a time
## input
- none
## output
- prints out the track using dots and the horse number for their position
## steps
- initialize the variable used in this function
- for loop to go through the whole lane
- gets the position of the horse
- compare the horse number to its position on the lane
- print the horse number on its position on the lane
- else print a dot where the horse is not
- then create a new line for the next horse

## void Race::start()
## goals 
- start the race and have the race play out while calling multiple functions
## input
- there is no direct input
## output
- this will call the printLane function for output but will also output the winning statement for the winning horse along with new lines.
## steps
- boolean to continue the race until it needs to be stopped
- initialize the variable used in this function
- for loop to go through each horse
- prints the lane for each individual horse
- while loop to use when the boolean is active
- initialize the variable used in this function
- for loop to go through each horse
- calls the advance function to move the horses
- prints the lane for each individual horse
- checks if a horse has finished the race
- if a horse has won, the while loop will be killed
- create a new line
-  prints out which horse has won
-  create a new line for the next round of the race

# main()
## goals
- to run the entire program
## input
- it will take in a seed to being the program and randomize the winner of the race
## output
- it will call the race start function which will call the printlane function for output
## steps
- define the seed variable
- have user input a seed
- store the input
- randomize the winner index variable
- initializes the race object
- activates the start function
