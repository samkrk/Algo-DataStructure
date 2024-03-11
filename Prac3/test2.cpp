#include <iostream>
#include <string>
#include "Reverser.h"

int main(void){
    /* Reverser reverse;
    int value;
    std::cout<< "Enter value: ";
    std::cin >> value;
    std::cout << reverse.reverseDigit(value) << std::endl;
    */

    Reverser r;

    std::string test; 
    std::cout << "Enter string: ";
    std::cin >> test;
    std::cout << r.reverseString(test);
    return 0;
}