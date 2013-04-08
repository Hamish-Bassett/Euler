/*
 * Fibonacci.hpp
 *
 *  Created on: 26/03/2013
 *      Author: hamish
 */

#ifndef FIBONACCI_HPP_
#define FIBONACCI_HPP_
#include <vector>
int Fibonacci (int value);
void OddsTest (int value); //Test to see if the value is even or odd.
bool Divby2 (int value); //Fast test to see if a value is even or not

void Even_Fibonacci () //find the sum of even fibonacci numbers that are less than 4,000,000
	{
	using namespace std;
		std::vector <int> Fib;
		int i=0, total=0;
		//create a list of all even numbers of the Fibonacci sequence less than 4,000,000
		do
		{
			int cur = Fibonacci(i);
			i++;
			if (Divby2(cur))
			Fib.push_back(cur);

		}
		while ( (Fib[Fib.size()-1]+Fib[Fib.size()-2]) <4000000);
		//sum the stored values.
		for (int x=0; x<Fib.size(); x++)
			total+=Fib[x];
		cout<< total <<endl;
	}
#endif /* FIBONACCI_HPP_ */
