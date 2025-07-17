#include "Die.h"

Die::Die() : numOfSides(6){
    faceValue = rand() % numOfSides + 1;
}

Die::Die(int numSides) : numOfSides(numSides){
    faceValue = rand() % numOfSides + 1;
}

void Die::setfaceValue(int v){
    faceValue = v;
}

int Die::getfaceValue() const{
    return faceValue;
}

int Die::getSides(){
    return numOfSides;
}

std::string Die::describeDie() const{
    return 
    "The die landed on: " + std::to_string(faceValue) + "\n";
}   

void Die::roll(){
    faceValue = rand() % numOfSides + 1;
}
