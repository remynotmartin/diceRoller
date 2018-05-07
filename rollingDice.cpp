#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dice.hpp"

Dice::Dice() {
	// Constructor will handle the initialization of these private members
	dice1 = 0;
	dice2 = 0;
	numberOfSides = 0;
	sum = 0;
}

int Dice::rollDice() {
	int result = (rand() % numberOfSides) + 1; // Keeps us from getting a zero result
	return result;
}

int main () {

	Dice pair;
	srand(time(NULL)); // I think this seeds the PRNG
	std::cout << "This program simulates rolling two dice.\n";
	
	int userInputNumber = 0; // Always good to initialize values
	std::cout << "How many sides would you like the dice to have?\n";
	std::cin >> pair.setNumberOfSides(userInputNumber);
	
	int numberOfTrials = 0;
	std::cout << "How many trials would you like to run?\n";
	std::cin >> numberOfTrials;

	for (int i = 0; i < numberOfTrials; i++) {
		set.dice1 = pair.getDice(userInputNumber);
		std::cout << "The first die rolled: " << result1 << '\n';
		result2 = set.getDice(userInputNumber);
		std::cout << "The second die rolled: " << result2 << '\n';
		int sum = result1 + result2;
		std::cout << "This gives us a sum of: " << sum << '\n'; 
	}
    
	return 0;
}
