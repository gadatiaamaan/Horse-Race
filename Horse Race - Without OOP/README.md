# Horse Race Simulation Program

## Overview
This program simulates a horse race between 5 horses on a track of 15 units length. Each horse has an equal chance of moving forward by one unit or staying in the same position on each turn. The race continues until one of the horses reaches the 15th spot, at which point it's declared the winner.

## Global Variables
- `horseLocation`: An array to store the current position of each horse on the track. Initialized to all zeros.

## Main Function
### Goals
The main function runs the entire program. It prompts the user for a random seed, which is used to randomize the winner of the race. It then calls the `moveHorse()`, `printLane()`, and `printWinner()` functions.


## printLane Function
### Goals
The `printLane` function prints out the lane of each horse. It prints a dot for each position and the horse number for the position the horse is in.


## moveHorse Function
### Goals
The `moveHorse` function scrolls through all five horses and decides based on the `coinFlip` function whether each horse individually should move or not move.


### Technologies, Algorithms, and Concepts Used

#### Technologies
- **C++**: The program is written in C++ programming language, leveraging its features and standard libraries for implementation.
- **iostream**: The `<iostream>` library is used for input and output operations in C++.
- **cstdlib**: The `<cstdlib>` library is used for functions involving random number generation in C++.
- **Makefile**: A Makefile is provided to compile and manage the program's build process efficiently.

#### Algorithms and Concepts
- **Random Number Generation**: The program utilizes the `rand()` function from the `<cstdlib>` library to generate random numbers for simulating the horse movements.
- **Simulation**: The horse race is simulated iteratively using a while loop. At each iteration, the program decides whether each horse moves forward or stays in the same position based on a random coin flip.
- **Looping and Iteration**: The program utilizes loops (for loops and while loops) extensively to iterate through horses, track positions, and race rounds.
- **Modular Programming**: The program is structured into functions (`moveHorse()`, `printLane()`, `findWinner()`, `printWinner()`, and `main()`) to promote code readability, organization, and reusability.
- **User Input Handling**: The program prompts the user to input a random seed to initialize the random number generator, enhancing the user experience and allowing for reproducible results during testing.
- **Boolean Logic**: Boolean variables and expressions are used to control the flow of the program, such as determining when to end the race loop (`noWinner`) and identifying the winner (`findWinner()`).

