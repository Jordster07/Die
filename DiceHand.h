#ifndef DICEHAND_H
#define DICEHAND_H
#include "Die.h"

class DiceHand{
private:
    Die* dice;
    int size;
public:
    DiceHand(); 
    ~DiceHand() {
        delete[] dice;
    }
    void setSize(int s);
    int getSize();
    void setDiceFaceValue(int index, int value);
    int getDiceFaceValue(int index);
    void rollAllDice();
    void rollSpecificDie(int dienum);
    std::string displayDieHand() const;

};

#endif