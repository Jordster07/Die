#ifndef DICE_CONSOLE
#define DICE_CONSOLE
#include<iostream>
#include<string>
#include"Die.h"
#include"DiceHand.h"
using namespace std;

class DiceConsole{
public:    
    void displayDie(Die* die);
    void displayDice(Die* dice, int size);
    int getUserChoice(string menu);
};


#endif