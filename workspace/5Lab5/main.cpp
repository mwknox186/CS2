/*
 * increases membership price over 6 years and displays price for each year
 *
 *  Created on: Apr 17, 2018
 *      Author: Maxwell Knox
 */

#include <iostream>

using namespace std;

int main()
{
	//declare vars
	int years;
	double club_price;
	double price_add;
	club_price = 2500;
	years = 0;

	//state original  price
	cout << "price at year " << years << ": " << club_price << endl;

	//add price for each year
	while (years < 6)
	{
		price_add = 0.04 * club_price;
		club_price = club_price + price_add;
		years++;
		cout << "price at year " << years << ": " << club_price << endl;
	}
	return 0;
}
