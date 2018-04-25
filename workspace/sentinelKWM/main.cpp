/*
 * sentinel KWM
 *
 * the score keeper will enter points each time a team
 * makes a 1, 2, or 3 point shot. a running total for each team will be displayed.
 * when the game is over, the score keeper will enter -1 to terminate the loop.
 *
 *  Created on: Apr 23, 2018
 *      Author: 202814
 */

#include <iostream>
using namespace std;

//before main there are function prototypes
//functions return given data type

void printScore(int, int);
int bullsPoint();
int lakersPoint();


int main()
{
	int bulls, lakers, bullsTotal, lakersTotal;
	int answer;

	bulls = lakers = bullsTotal = lakersTotal = answer = 0;



	while (answer != -1)
	{
		cout << "Make a selection: \n1. for Bulls\n2. for Lakers\n -1. to end\n";
		cin >> answer;
		system("clear");

		if (answer == 1)
		{
			//call bullsPoint() function
			bullsTotal += bullsPoint();
			printScore(bullsTotal, lakersTotal);
		}
		if (answer ==2)
		{
			//call lakersPoint()
			lakersTotal += lakersPoint();
			printScore(bullsTotal, lakersTotal);
		}
	}

	return 0;
}

//functions in camelCase
//function must have data types and parameters after the( and before the ) if it has parameters
//void testFunction(int testParameter){do this}
//functions are defined after main
//functions that don't return value are void

int bullsPoint()
{
	int  pointScored = 0;
	cout << "Enter points scored for the Bulls\n";
	cin >> pointScored;
	return pointScored;
}

int lakersPoint()
{
	int pointScored = 0;
	cout << "Enter the points scored for the Lakers\n";
	cin >> pointScored;
	return pointScored;
}

void printScore(int bScore, int lScore)
{
	cout << "Score:\nBulls: " << bScore << " \tLakers: " << lScore << endl <<endl;

}


