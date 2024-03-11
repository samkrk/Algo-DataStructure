#ifndef MOVE_H
#define MOVE_H

#include<string>
#include <vector>

class Move
{
private:
    // members/variables 
    std::string moveName;
    std::vector<std::string> beatsList;
    std::vector<std::string> losesToList;
public:

    // constructors and destructor 
    Move(std::string name); 
    Move();

    // Functions
    void addBeats(const std::string& move);
    void addLoses(const std::string& move);
    int win(std::string oppMove);

    // getters and setters
    std::string getName();
    void setName(std::string n);
};

#endif // MOVE_H