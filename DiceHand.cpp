#include "DiceHand.h"

DiceHand::DiceHand() : totalScore(0) {
    size = 5;
    totalScore = 0;
    for (int i = 0; i < 5; ++i) {
        dice[i].roll();
    }
    for (int i = 0; i < 6; ++i) {
        usedCategories[i] = false;
    }
}

void DiceHand::setSize(int s){
    size = s;
}

int DiceHand::getSize() const{
    return size;
}
void DiceHand::setDiceFaceValue(int index, int value){
 if (index >= 0 && index < size) {
    dice[index].setfaceValue(value);
}
}

int DiceHand::getDiceFaceValue(int index) const {
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

void DiceHand::rerollSelectedDice(const bool rerollFlags[5]) {
    for (int i = 0; i < 5; ++i) {
        if (rerollFlags[i]) {
            dice[i].roll();
        }
    }
}
int DiceHand::scoreCategory(int categoryIndex) {
    if (categoryIndex < 0 || categoryIndex >= 6 || usedCategories[categoryIndex]) {
        return 0;
    }

    int targetValue = categoryIndex + 1;
    int score = 0;

    for (int i = 0; i < 5; ++i) {
        if (dice[i].getfaceValue() == targetValue) {
            score += targetValue;
        }
    }

    usedCategories[categoryIndex] = true;
    totalScore += score;
    return score;
}

bool DiceHand::isCategoryUsed(int categoryIndex) const {
    return (categoryIndex >= 0 && categoryIndex < 6) ? usedCategories[categoryIndex] : true;
}

void DiceHand::markCategoryUsed(int categoryIndex) {
    if (categoryIndex >= 0 && categoryIndex < 6) {
        usedCategories[categoryIndex] = true;
    }
}

int DiceHand::getTotalScore(){
    return totalScore;
}