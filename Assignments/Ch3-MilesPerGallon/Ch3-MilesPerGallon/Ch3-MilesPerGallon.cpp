// Ch3-MilesPerGallon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int gallons;
	int miles;

	cout << "How many gallons of gas can your car hold?\n";
	cin >> gallons;
	cout << "How many miles can your car drive on a full tank of gas?\n";
	cin >> miles;
	cout << "Your average MPG is: " << miles / gallons << "\n";

	system("pause");
}

