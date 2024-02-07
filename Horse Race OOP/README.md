# Horse Race Simulation

## Overview
This program simulates a horse race between 5 horses on a track with a length of 15 units. The horses randomly advance or stay in place on each turn until one horse reaches the end of the track.

## Usage
To run the program, compile all source files and execute the generated executable. When prompted, input a random seed to initialize the random number generator for the race.

## Technologies, Algorithms, and Concepts Used
- **C++ Programming Language**: The program is implemented in C++, utilizing its object-oriented features to model the horse race simulation.
- **Object-Oriented Design (OOD)**: The program follows OOD principles by modeling entities in the race (horses and the race itself) as objects with behaviors and attributes.
- **Classes and Objects**: The program is structured using classes to represent horses and the race, with objects instantiated from these classes to interact in the simulation.
- **Encapsulation**: The properties and behaviors of horses are encapsulated within the `Horse` class, providing abstraction and data hiding.
- **Random Number Generation**: The `rand()` function from the `<cstdlib>` library is used to generate random numbers, determining whether a horse advances or not on each turn of the race.
- **Looping and Decision-Making**: Loops and decision-making structures are employed to control the flow of the race simulation, iterating through race turns and determining the winner.

## Implementation Details
- **Horse Class**: The `Horse` class represents individual horses in the race. It has methods to advance the horse's position and retrieve its current position on the track.
- **Race Class**: The `Race` class orchestrates the race simulation. It contains an array of `Horse` objects and controls the progression of the race until a winner is determined.
- **Random Seed**: The program prompts the user to input a random seed, which is used to initialize the random number generator. This ensures reproducibility and allows for testing with different random sequences.
- **Visual Representation**: The program prints a visual representation of the race track, with each horse represented by its number and empty spaces denoted by dots. This provides a clear view of the race progression.

