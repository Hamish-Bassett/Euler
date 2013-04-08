/*
 * Fibonacci.cpp
 *
 *  Created on: 26/03/2013
 *      Author: hamish
 */
#include <iostream>

int Fibonacci (int value)
{
	//fibonacci sequence defined as n-2 + n-1
	using namespace std;
	int number = 0;
	int n1=1, n2=0 , cur=0;
	if (value < 0)
	{
		cout << "not a valid member of the sequence" << endl;
	}
	else
		while (number < value)
		{
			cur = n1 + n2;
			n2=n1;
			n1 = cur;
			number++;
		}

	return cur;
}


void OddsTest (int value) //Test to see if the value is even or odd.
{
	using namespace std;
	if (value == 0)
		cout << "the value is zero" << endl;
	else if (value & 1)
		cout << "value given is odd" << endl;
	else
		cout << "value given is even" << endl;
}

bool Divby2 (int value) //Fast test to see if a value is even or not
{
	if (value & 1) //Default response is not dividable by 2
		return 0;
	else return 1;
}
