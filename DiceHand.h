#ifndef DICEHAND_H
#define DICEHAND_H
#include "Die.h"

class DiceHand{
private:
    int size;
    Die dice[5];
    bool usedCategories[6];
    int totalScore;
public:
    DiceHand();
    void setSize(int s);
    int getSize() const;
    int getTotalScore();
    void setDiceFaceValue(int index, int value);
    int getDiceFaceValue(int index) const;
    void rollAllDice();
    void rollSpecificDie(int dienum);
    std::string displayDieHand() const;
    void rerollSelectedDice(const bool rerollFlags[5]);
    int scoreCategory(int categoryIndex);
    bool isCategoryUsed(int categoryIndex) const;
    void markCategoryUsed(int categoryIndex);

};

#endif