#include "Truckloads.h"

// constructor
Truckloads::Truckloads(){}

// recursive function
int Truckloads::numTrucks(int numCrates, int loadSize){
    // base case
    if (numCrates <= loadSize){
        return 1;
    }
    // recursive case 
    return numTrucks(numCrates, loadSize, 1);
}

int Truckloads::numTrucks(int numCrates, int loadSize, int t){
    
    // base case 
    if (numCrates <= loadSize){
        return t;
    }

    // Check if next pile is an integer
    if (numCrates % 2 != 0) {
        // Calculate two new piles of even integers that sum to the next pile
        int pile1 = std::floor(numCrates/2);
        int pile2 = pile1+1;
        
        int t1 = numTrucks(pile1,loadSize,t);
        int t2 = numTrucks(pile2,loadSize,t);
        return t1+t2;
    } 

    // recursive case 
    return numTrucks(numCrates/2, loadSize, t * 2);
}


