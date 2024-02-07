# overview
- create a program that simulates a horse race between 5 horses. The track will be 15 units long and it will be randomized as to when a horse moves or not. On each turn all 5 horses will move or not move and the first horse to reach the 15th spot is the winner.

# gloabls
- set the initial location of all horses to 0
- include libarys for c++

# main Function
## goals
- the goal for the main function is to run the entire program. It will take the seed variable to randomize the winner and call on the moveHorse, printLane, and printWinner functions.
## input
- the main function will take in the input of the seed and store it
    - this input will be used to randomize the winner of the race
## output
- the main function will not directly output anything aside from new lines, but will call on the printLane and printWinner functions for outputs
## steps
- define the main function
    - define the seed variable
    - have user input a seed
    - store the input
    - randomize the winner index variable
- create boolean variable to use when the winner is not found in the while loop
- begin while loop
    - call the moveHorse function
    - create for loop to loop through all horses
        - print lane for each horse repeated in the while loop
    - create a new line for the next round of the race
    - have the boolean for findWinner be equal to the noWinner boolean to stop the while loop when a winner is found
- call the printWinner function to display the winner of the race
- end the main function and create a new line for the next round of the race

# printLane function
## goals
- to print out the lane of each horse
- print out a dot for each position and print out the horse number for the position the horse is in
## input
- this function will not take any inputs
## output
- this function will output the lanes of each of the horses with the horse location and the rest of the lane
## steps
- define the printLane function
    - define the variable used within the function and create a for loop - using the variable to loop through all horses
        - create a if statement to see if the location of a horse is equal to the spot in the lane
            - print out the horse number
            - print out a dot
    - create a new line for the next horse

# moveHorse function
## goals
- scroll through all five horse and based off of the coinFlip function, decide if each horse individually is to move or not to move
## input
- this function will not take in an input but it will retrieve a coinFlip result from the coinFlip function
## output
- this function will not directly output anything but will move the horses locations which the printLane function will print
## steps
- define the moveHorse function
    - define the variable used within the function and create a for loop - using the variable to loop through all horses
        - create if statement that calls the coinFlip function
            - move the horse location +1 if the coinFlip results in 1
            - do not move the horse if the coinFlip results in 0

