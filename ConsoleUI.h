#ifndef CONSOLE_UI
#define CONSOLE_UI
#include<iostream>
#include<string>
#include"Die.h"
#include"DiceHand.h"
using namespace std;

class DiceConsole{
public:    
    void displayDie(Die* die);
    int getUserChoice(string menu);
    void getRerollFlagsFromInput(bool rerollFlags[5]);
    int promptCategoryChoice();
    void displayDiceHand(const DiceHand& hand);

};


#endif