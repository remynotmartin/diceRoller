#ifndef DICE_HPP
#define DICE_HPP

class Dice {
    private:
		int dice1;
		int dice2;
		int numberOfSides;
		int sum;
		int totalTrials;
		int estimatedExpectedValue; // This will be calculated with avg of all trials
		int trueExpectedValue; // determined by maths formula
    public:
		int getDice1(int) const;
		int getDice2(int) const;
		int getNumberOfSides(int) const;
		int getSum(int) const;
		void setDice1(int);
		void setDice2(int);
		void setSum(int);
		void setNumberOfSides(int);
		void rollDice();
};

#endif
