#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>
//Put the questions here so I didnt have to keep tabbing back and forth :D
//
// 2. Create a Die class representing a single 6-sided die.  
//Instance data should include numberOfSides: int and faceValue: int.  
//Member functions should include getters and setters, as well as a roll() 
//method and a method that returns a string describing the Die object.  
//In the main function, instantiate three dice.  Set their numberOfSides and faceValues.  
//Then roll each die.  Display the results to the console.

//3 Create a DiceHand class that represents a hand of five dice.  
//Store the dice as a Die* variable and store the size of the hand separately.  
//Member functions should include getters and setters.  
//Create a member function that return a string describing the values of all the dice in the hand nicely: 
//displayDieHand(): string  Also create two member functions that roll the dice, 
//rollDie(dieNum: int): void and rollAllDice(): void.  In the main function, instantiate one die hand. 
//Display it to the user, roll it, display the new result to the user; then roll the first and last die in the hand, 
//and display the new hand to the user.
class Die{
private:
    int numOfSides = 6;
    int faceValue;
public:
    void setfaceValue(int v);
    int getfaceValue();
    void setSides(int s);
    int getSides();
    void roll();
    std::string describeDie();
};

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

void Die::setfaceValue(int v){
    faceValue = v;
}

int Die::getfaceValue(){
    return faceValue;
}

void Die::setSides(int s){
    numOfSides = s;
}

int Die::getSides(){
    return numOfSides;
}

std::string Die::describeDie(){
    return 
    "The die landed on: " + std::to_string(faceValue) + "\n";
}   

void Die::roll(){
    faceValue = rand() % numOfSides + 1;
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

DiceHand::DiceHand() {
    size = 5;
    dice = new Die[size];
    for (int i = 0; i < size; ++i) {
        dice[i].roll();
    }
}
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