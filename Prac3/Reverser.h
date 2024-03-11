#ifndef REVERSER_H
#define REVERSER_H

#include <string>
#include <iostream> 
#include <vector>

class Reverser{
private:

public:
    // constructor
    Reverser();

    // functions
    int reverseDigit(int value);
    int reverseDigit(int value, int ans);
    std::string reverseString(std::string characters);
    std::string reverseString(std::string characters, std::vector<char> vecChars);


};


#endif