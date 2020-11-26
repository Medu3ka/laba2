#pragma once
#include <iostream>
#include <string>
using namespace std;

public class Fraction
{
private:
	long first;
	unsigned second;

public:
	Fraction() {
		first = 1;
		second = 1;
	}

	Fraction(long valueFIRST, unsigned valueSECOND) {
		first = valueFIRST;
		second = valueSECOND;
	}

	int add(Fraction a, Fraction b) {
		if (a.second == b.second)
		{
			first = a.first + b.first;
			second = a.second;
		}
		else
		{
			first = ((a.first * b.second) + (b.first * a.second));
			second = a.second * b.second;
		}
		return (first, second);
	}		

	int sub(Fraction a, Fraction b) {
		if (a.second == b.second)
		{
			first = a.first - b.first;
			second = a.second;
		}
		else
		{
			first = ((a.first * b.second) - (b.first * a.second));
			second = a.second * b.second;
		}
		return (first, second);
	}

	int mul(Fraction a, Fraction b) {
		first = a.first * b.first;
		second = a.second * b.second;
		return (first, second);
	}

	int cmp(Fraction a, Fraction b) {
		if ((a.first * b.second) == (b.first * a.second))
		{
			first = 1;
			second = 1;
		}
		else
		{
			if ((a.first * b.second) > (b.first * a.second))
			{
				first = 1;
				second = 0;
			}
			else
			{
				first = 0;
				second = 1;
			}
		}	
		return (first, second);
	}

	long getFIRST() { return first; };

	unsigned getSECOND() { return second; };
};
