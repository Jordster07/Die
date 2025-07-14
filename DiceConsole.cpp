#include "DiceConsole.h"

void DiceConsole::displayDie(Die* die) {
if (die != nullptr) {
        cout << "Die shows: " << die->getfaceValue() << endl;
    }
}

void DiceConsole::displayDice(Die* dice, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Die " << i + 1 << ": " << dice[i].getfaceValue() << std::endl;
    }
}

int DiceConsole::getUserChoice(string menu) {
    int choice;
    std::cout << menu << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}