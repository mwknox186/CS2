/*
 * distance traveled
 *
 *  Created on: Apr 19, 2018
 *      Author: Maxwell Knox
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare vars
	double speed;
	double distance;
	double time;
	double hours;

	distance = 0;
	hours = 1;

	//input
	cout << "what is the speed of the vehicle in mph?\n";
	cin >> speed;
	cout << "How many hours has it traveled?\n";
	cin >> time;

	//output header
	cout << setw(20) << left << "Hour" << setw(20) << "Distance traveled" << endl;
	cout << "---------------------------------------" << endl;

	//calculation + output
	while (hours <= time)
	{
		distance = speed * hours;
		cout << setw(20) << left << hours << setw(20) << distance << endl;
		hours++;
	}

	return 0;
}
