#!/bin/sh

g++ -Wall ../src/rollingDice.cpp -I../../libs/include -L../../lib -ldice -o ../../bin/dice.out
