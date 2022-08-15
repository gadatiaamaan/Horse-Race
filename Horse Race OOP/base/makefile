race: main.o race.o horse.o
	g++ main.o race.o horse.o -o race

main.o: main.cpp race.h horse.h
	g++ -c main.cpp

race.o: race.cpp race.h horse.h
	g++ -c race.cpp

horse.o: horse.cpp horse.h
	g++ -c horse.cpp

clean: 
	rm *.o
	rm race

run:	race
	./race
