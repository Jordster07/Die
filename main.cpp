#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>
#include "Die.h"
#include "DiceHand.h"

int main(){

srand(time(0));
    
Die die1;
Die die2;
Die die3;

die1.setSides(3);
die2.setSides(7);
die3.setSides(12);

die1.roll();
die2.roll();
die3.roll();

std::cout << die1.describeDie() << std::endl;
std::cout<< die2.describeDie() << std::endl;
std::cout << die3.describeDie() << std::endl;

DiceHand hand;

std::cout << "Initial hand: " << hand.displayDieHand() << std::endl;

hand.rollAllDice();
std::cout << "After rolling all dice: " << hand.displayDieHand() << std::endl;

hand.rollSpecificDie(0);        
hand.rollSpecificDie(hand.getSize() - 1);
std::cout << "After rolling first and last die: " << hand.displayDieHand() << std::endl;

}