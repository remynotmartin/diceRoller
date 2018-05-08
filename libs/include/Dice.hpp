#ifndef DICE_HPP
#define DICE_HPP

class Dice {
    private:
		int dice1;
		int dice2;
		int numberOfSides;
		int numberOfTrials;
		int sum;
		int totalSum;
		double averageResult; // calculated with avg of all trials
		double expectedValue; // determined by maths formula
    public:
		Dice(); // Default Constructor
		int getDice1() const { return dice1; }
		int getDice2() const { return dice2; }
		int getNumberOfSides() const { return numberOfSides; }
		int getNumberOfTrials() const {return numberOfTrials; }
		int getSum() const {return sum; }
		int getTotalSum() const {return totalSum; }
		double getAverageResult() const { return averageResult; }
		double getExpectedValue() const { return expectedValue; }
		void setDice1(int val) { dice1 = val; }
		void setDice2(int val) { dice2 = val; }
		void setSum(int val) { sum = val; }
		void setTotalSum(int val) { totalSum = val; }
		void setNumberOfSides(int val) { numberOfSides = val; }
		void setNumberOfTrials(int val) { numberOfTrials = val; }
		void setAverageResult(double val) { averageResult = val; }
		void setExpectedValue(double val) { expectedValue = val; }
		void rollDice(int val1, int val2); // defined in Dice.cpp
};

#endif
