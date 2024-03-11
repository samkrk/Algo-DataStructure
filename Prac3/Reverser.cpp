#include "Reverser.h"

Reverser::Reverser(){}

int Reverser::reverseDigit(int value){
    // check for invalid input
    if (value < 0){ // handles negative numbers 
        return -1;
    }

    // initialise answer variable 
    int ans = 0;

    return reverseDigit(value, ans);
}

int Reverser::reverseDigit(int value, int ans){
    // base case 
    if (value / 10 <= 0){ // is true when value is a single digit number 
        return ans+value; // add final digit to answer and returns answer 
    }

    // recursive case 
    ans += value % 10; // adds least significant digit of value to answer
    value = (value-value%10)/10; // removes least significant digit of value
    return reverseDigit(value, ans*10); // recursively calls function 
}


std::string Reverser::reverseString(std::string characters){
    // error handling
    if (characters.empty()){
        return "ERROR";
    }
    // Check for any invalid characters
    for (char c : characters) {
        if (!isprint(c)) { // Check if printable
            return "ERROR";
        }
    }


    std::vector<char> vecChars;
    vecChars.push_back(characters[characters.length() - 1]);
    return reverseString(characters, vecChars);
}

std::string Reverser::reverseString(std::string characters, std::vector<char> vecChars){
    // base case
    if (vecChars.size() == characters.length()){
        std::string concatenatedString(vecChars.begin(), vecChars.end());
        return concatenatedString;
    }


    // recursive case
    int i = vecChars.size();
    vecChars.push_back(characters[characters.length() - i - 1]);

    return reverseString(characters, vecChars);
}