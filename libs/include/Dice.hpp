#ifndef DICE_HPP
#define DICE_HPP

class Dice {
    private:
		int dice1;
		int dice2;
		int numberOfSides;
		int sum;
		int totalTrials;
		double estimatedExpectedValue; // calculated with avg of all trials
		double trueExpectedValue; // determined by maths formula
    public:
		int getDice1() const { return dice1; }
		int getDice2() const { return dice2; }
		int getNumberOfSides() const { return numberOfSides; }
		int getSum() const {return sum; }
		int getTotalTrials() const {return totalTrials; }
		double getEstimatedExpectedValue() const { return estimatedExpectedValue; }
		double getTrueExpectedValue() const { return trueExpectedValue; }
		void setDice1(int val) { dice1 = val; }
		void setDice2(int val) { dice2 = val; }
		void setSum(int val) { sum = val; }
		void setNumberOfSides(int val) { numberOfSides = val; }
		void setTotalTrials(int val) { totalTrials = val; }
		void setEstimatedExpectedValue(double val) { estimatedExpectedValue = val; }
		void setTrueExpectedValue(double val) { trueExpectedValue = val; }
		void rollDice(); // defined in Dice.cpp
};

#endif
