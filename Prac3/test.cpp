#include "Truckloads.h"
#include <iostream>

int main(void){
    Truckloads truck;
    
    int n, l;
    std::cout << "enter numCrates: ";
    std::cin >> n;
    std::cout << "enter loadSize: ";
    std::cin >> l;

    std::cout << truck.numTrucks(n,l) << std::endl;

   
    return 0;
}