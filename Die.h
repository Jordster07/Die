#ifndef DIE_H
#define DIE_H
#include <string>

class Die {
private:
    const int numOfSides = 6;
    int faceValue;
public:
    Die();
    Die(int numSides);
    void setfaceValue(int v);
    int getfaceValue() const;
    int getSides();
    void roll();
    std::string describeDie() const;
};

#endif