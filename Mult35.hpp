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

void populate_multiples ( std::vector<int>& Multiples, int maximum, int multiple )
{
	int n=1; //start at one because 0 is a useless multiple for sums
	int cur = 0;
	while (1)
	{
		cur = n*multiple;
		if (cur < maximum)
			Multiples.push_back(cur);
		else break;
		n++;
	}
}

void Solve3_5 ()
{
	using namespace std;
	vector<int> threes;
	vector<int> fives;
	int sum = 0; //storage for answer
	int max = 1000; //maximum value that we are finding multiples to;

	populate_multiples(threes,max,3);
	populate_multiples(fives,max,5);

	//loop over all multiples of 3 and add them to the sum value
	for (unsigned int i=0; i<threes.size(); i++)
		sum += threes[i];

	//get every multiple of 5 that isn't also a multiple of three and add to the sum
	for (unsigned int i=0; i<fives.size(); i+=3)
		for(unsigned int j=0; j<2; j++)
			if ( (i+j) < fives.size() )
				sum += fives[i+j];
	cout << sum << endl;
}

#endif /* MULT35_HPP_ */
