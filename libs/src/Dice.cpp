// Dice.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dice.hpp"

// Default constructor
Dice::Dice() {
	dice1 = 0;
	dice2 = 0;
	numberOfSides = 0;
	numberOfTrials = 0;
	sum = 0;
	totalSum = 0;
	averageResult = 0.0;
	expectedValue = 0.0;
}

void Dice::rollDice(int numberOfSidesInput, int numberOfTrialsInput) {
	numberOfSides = numberOfSidesInput;
	numberOfTrials = numberOfTrialsInput;
	for (int i = 0; i < numberOfTrials; i++) {
		dice1 = (rand() % numberOfSides) + 1; // Keeps us from getting a zero result
		dice2 = (rand() % numberOfSides) + 1; 
		sum = dice1 + dice2;
		totalSum = totalSum + sum;
	}
	averageResult = static_cast<double>(totalSum / numberOfTrials);
	expectedValue = (numberOfSides + 1); // After simplification of algebra
	std::cout << "# of Trials: " << numberOfTrials << '\n';
	std::cout << "Average result: " << averageResult << '\n';
	std::cout << "Expected Value: " << expectedValue << '\n';
}
