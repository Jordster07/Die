#ifndef DIE_H
#define DIE_H
#include <iostream>
#include <string>

class Die{
private:
    int numOfSides;
    int faceValue;
public:
    Die();
    void setfaceValue(int v);
    int getfaceValue();
    void setSides(int s);
    int getSides();
    void roll();
    std::string describeDie();
};


#endif