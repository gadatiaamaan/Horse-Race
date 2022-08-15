// header file for race

#ifndef RACE_H_EXSIST
#define RACE_H_EXSIST
#include "horse.h"

class Race {
  private:
    Horse h[5];
    int length;

  public:
    Race();
    Race(int length);
    void printLane(int horseNum);
    void start();
};

#endif

