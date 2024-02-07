# Compile the horse Race program
horse: horse.o
	g++ -std=c++11 horse.o -o horse

# Compile the source file
horse.o: horse.cpp
	g++ -std=c++11 -c horse.cpp

# Clean up compiled files
clean:
	rm -f horse
	rm -f *.o

# Run the horse Race program
run: horse
	./horse
