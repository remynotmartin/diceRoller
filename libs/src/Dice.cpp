// Dice.cpp

// Default constructor
Dice::Dice() {
	dice1 = 0;
	dice2 = 0;
	numberOfSides = 0;
	numberOfTrials = 0;
	sum = 0;
}

int Dice::rollDice() {
	int result = (rand() % numberOfSides) + 1; // Keeps us from getting a zero result
	return result;
}

