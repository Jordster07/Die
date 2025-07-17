#include "ConsoleUI.h"
#include"DiceHand.h"
#include"Die.h"
#include <cctype>
#include<iostream>
#include<string>

void DiceConsole::getRerollFlagsFromInput(bool rerollFlags[5]) {
    std::string input;

    for (int i = 0; i < 5; ++i) {
        rerollFlags[i] = false;
    }

    std::cout << "Which dice would you like to reroll? (Enter numbers like 135): ";
    std::cin >> input;

    for (char c : input) {
        if (isdigit(c)) {
            int index = c - '1';
            if (index >= 0 && index < 5) {
                rerollFlags[index] = true;
            }
        }
    }
}

int DiceConsole::promptCategoryChoice() {
    int choice;
    std::cout << "Choose a category to score (0=Aces, 1=Twos, ..., 5=Sixes): ";
    std::cin >> choice;
    return choice;
}

void DiceConsole::displayDie(Die* die) {
if (die != nullptr) {
        cout << "Die shows: " << die->getfaceValue() << endl;
    }
}

int DiceConsole::getUserChoice(string menu) {
    int choice;
    std::cout << menu << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

void DiceConsole::displayDiceHand(const DiceHand& hand) {
    std::cout << "Die Hand:\n";
    for (int i = 0; i < hand.getSize(); ++i) {
        std::cout << "Die " << i + 1 << ": " << hand.getDiceFaceValue(i) << std::endl;
    }
}