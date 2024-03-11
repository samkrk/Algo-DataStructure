#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <iostream>

class Truckloads {
private:
public:
    // constructor
    Truckloads();

    // recursive function
    int numTrucks(int numCrates, int loadSize);
    int numTrucks(int numCrates, int loadSize, int t);

};

#endif