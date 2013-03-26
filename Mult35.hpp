/*
 * Mult35.hpp
 *
 *  Created on: 26/03/2013
 *      Author: hamish
 */

#ifndef MULT35_HPP_
#define MULT35_HPP_

#include <iostream>
#include <vector>

void Solve3_5 ()
{
	using namespace std;
	vector<int> threes;
	vector<int> fives;
	int n = 1; //loop counter
	int sum = 0; //storage for answer
	int cur = 0; //value checker
	int max = 1000; //maximum value that we are finding multiples to;

	while (1)
	{
		cur = n*3;
		//if the test exceeds the boundry, terminate loop.
		if (cur >= max)
		{
			break;
		}
		//store all 3 values on the threes heap
		threes.push_back(cur);
		n++;
	}
	n = 0;
	while (1)
		{
			cur = n*5;
			//if the test exceeds the boundry, terminate loop.
			if (cur >= max)
			{
				break;
			}
			//store all 3 values on the threes heap
			fives.push_back(cur);
			n++;
		}


	for (unsigned int i=0; i<threes.size(); i++)
//			cout << threes[i] << endl;
			sum += threes[i];
	for (unsigned int i=1; i<fives.size(); i+=3)
		for(unsigned int j=0; j<2; j++)
//			cout << fives[i+j] << endl;
			sum += fives[i];
	cout << sum << endl;
}

#endif /* MULT35_HPP_ */
