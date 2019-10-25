// Min-Max.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//Determine the larger number with the conditional statement
	int value1, value2;

	cout << "Please enter two numbers, separated by a space: ";
	cin >> value1 >> value2;
	cout << endl;

	value1 > value2 ? 
		cout << value1 << " is larger than " << value2 << endl : 
		cout << value2 << " is larger than " << value1 << endl;

	system("pause");
	return 0;
}


