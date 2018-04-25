/*
 * sum all numbers from one to the number entered
 *
 *  Created on: Apr 17, 2018
 *      Author: Maxwell Knox
 */

#include <iostream>

using namespace std;

int main()
{
	//declare vars
	int max_num;
	int ans;
	int num_add;
	num_add = 1;

	//get input
	cout << "Enter an integer value greater than 0:\n";
	cin >> max_num;

	//validate input
	while (max_num < 1)
	{
		cout << "Enter an integer value greater than 0:\n";
		cin >> max_num;
	}

	//calculation
	while (num_add <= max_num)
	{

		ans = num_add + ans;
		num_add++;
	}
	//output
	cout << ans << " is the sum" << endl;
	return 0;
}
