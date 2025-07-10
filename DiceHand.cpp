#include "DiceHand.h"

DiceHand::DiceHand() {
    size = 5;
    dice = new Die[size];
    for (int i = 0; i < size; ++i) {
        dice[i].roll();
    }
}

void DiceHand::setSize(int s){
    size = s;
}

int DiceHand::getSize(){
    return size;
}
void DiceHand::setDiceFaceValue(int index, int value){
 if (index >= 0 && index < size) {
    dice[index].setfaceValue(value);
}
}

int DiceHand::getDiceFaceValue(int index) {
    if (index >= 0 && index < size){
        return dice[index].getfaceValue();
    }
    return 0;
}
void DiceHand::rollAllDice(){
    for (int i = 0; i < size; i++)
    dice[i].roll();
}
void DiceHand::rollSpecificDie(int dieNum) {
    if (dieNum >= 0 && dieNum < size) {
        dice[dieNum].roll();
    }
}

std::string DiceHand::displayDieHand() const {
    std::string output = "Die Hand: ";
    for (int i = 0; i < size; ++i) {
        output += dice[i].describeDie();
        if (i != size - 1) output += ", ";
    }
    return output;
    }
