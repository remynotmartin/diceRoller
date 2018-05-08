#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dice.hpp"

int main() {

	Dice pair;
	srand(time(NULL)); // Seeds the PRNG
	std::cout << "This program simulates rolling two dice.\n";
	
	int userInputNumber = 0; // Always good to initialize values
	std::cout << "How many sides would you like the dice to have?\n";
	std::cin >> userInputNumber;
    //pair.setNumberOfSides(userInputNumber);
	int numberOfTrials = 0;
	std::cout << "How many trials would you like to run?\n";
	std::cin >> numberOfTrials;
    //pair.setNumberOfTrials(numberOfTrials);
	
	pair.rollDice(userInputNumber, numberOfTrials);
	
	return 0;
}
