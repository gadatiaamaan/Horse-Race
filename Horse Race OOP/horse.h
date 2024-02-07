#ifndef HORSE_H
#define HORSE_H

class Horse {
private:
    int position;

public:
    // Constructor
    Horse();

    // Method to advance the horse
    void advance();

    // Method to get the current position of the horse
    int getPosition();
};

#endif // HORSE_H
