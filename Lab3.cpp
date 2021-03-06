// Lab3.cpp : Defines the entry point for the console application.
// Nico Shober
// October 1, 2018

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::isinf;
using std::exit;
using std::setprecision;

void sumShortInt(short int input)
{

	if (input < 1)
	{
		cout << "The input is invalid" << endl;
		return;
	}
	else
	{
		short int sum = 0, sumB = 0, sumA = 1;
		int overflow = 0;
		
		for (short int i=1; i <= input; i++)
		{
			sumB = sum;
			sum = sum + i;
			sumA = sum;
			if (sumA < sumB)
			{
				cout << "overflow has occurred at the "<<i<<" term." << endl;
				overflow = 1;
				if (overflow == 1)
				{
					break;
				}

			}

		}

		cout << "n = " << input << endl;
		cout << "Sum of the short int = " << sum << endl;
	}
	
	return;
}

void sumLongInt(long int input)
{

	if (input < 1)
	{
		cout << "The input is invalid" << endl;
		return;
	}
	else
	{
		long int sum = 0, sumB = 0, sumA = 1;
		int overflow = 0;
		for (long int i = 1; i <= input; i++)
		{
			sumB = sum;
			sum = sum + i;
			sumA = sum;
			if (sumA < sumB)
			{
				cout << "overflow has occurred at the " << i << " term." << endl;
				overflow = 1;
				if (overflow == 1)
				{
					break;
				}
			}

		}
		cout << "n = " << input << endl;
		cout << "Sum of the long int = " << sum << endl;
	}
	return;
	}

void productDouble(long int input)
{

	if (input < 1)
	{
		cout << "The input is invalid" << endl;
		return;
	}
	else
	{
		double product = 1, productB = 0, productA = 1;
		int overflow = 0;

		for (long int i = 1; i <= input; i++)
		{
			productB = product;
			product = product * i;
			productA = product;

			if ((productA < productB) | isinf(product))
			{
				cout << "overflow has occured at " << i << endl;
				overflow = 1;
				if (overflow == 1)
				{
					break;
				}
			}
		}
		cout << "n = " << input << endl;
		cout << "Product of double = " << product << endl;
	}

	return;
}

void productLong(long int input)
{

	if (input < 1)
	{
		cout << "The input is invalid" << endl;
		return;
	}
	else
	{
		float product = 1, productB = 0, productA = 1;
		int overflow = 0;

		for (long int i = 1; i <= input; i++)
		{
			productB = product;
			product = product * i;
			productA = product;

			if ((productA < productB) | isinf(product))
			{
				cout << "overflow has occured at " << i << endl;
				overflow = 1;
				if (overflow == 1)
				{
					break;
				}
			}
		}
		cout << "n = " << input << endl;
		cout << "Product of long int = " << product << endl;
	}

	return;
}


void sumFractionFloat(long int input)
{

	if (input < 1)
	{
		cout << "The input is invalid" << endl;
		return;
	}
	else
	{
		float N = input, sum = 0, fraction = 1 / N;
		int overflow = 0;

		for (long int i = 1; i <= input; i++)
		{
			sum = sum + fraction;
		}
		sum--;

		cout << "n = " << input << endl;
		cout << "1/n = " << fraction << endl;
		cout << "SumFractionFloat = " << sum << endl;
	}
	return;
}

void sumFractionDouble(long int input)
{

	if (input < 1)
	{
		cout << "The input is invalid" << endl;
		return;
	}
	else
	{
		double N = input, sum = 0, fraction = 1 / N;
		int overflow = 0;

		for (long int i = 1; i <= input; i++)
		{
			sum = sum + fraction;
		}
		sum--;

		cout << "n = " << input << endl;
		cout << "1/n = " << fraction << endl;
		cout << "SumFractionDouble = " << sum << endl;
	}
	return;
}

int main()
{
	short int integerI;
	cout << "enter an integer value greater than 0" << endl;
	cin >> integerI;
	cout << "----------- Problem 1 and 2 ----------" << endl;
	sumShortInt(integerI);
	cout << "" << endl;
	cout << "" << endl;

	cout << "----------- Problem 3 ----------" << endl;
	sumShortInt(integerI);
	cout << "" << endl;
	cout << "" << endl;

	cout << "----------- Problem 4 ----------" << endl;
	productLong(integerI);
	cout << "" << endl;
	cout << "" << endl;

	cout << "----------- Problem 5 ----------" << endl;
	productDouble(integerI);
	cout << "" << endl;
	cout << "" << endl;

	cout << "----------- Problem 6 ----------" << endl;
	sumFractionFloat(integerI);
	sumFractionDouble(integerI);
	cout << "" << endl;
	cout << "" << endl;

	cout << "----------- Problem 7 ----------" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << "" << endl;
	cout << "" << endl;

	cout << "----------- Problem 8 ----------" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	return 0;
}


