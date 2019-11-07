// Marie Kelling Chapter 6 Assignment 

#include "pch.h"
#include <iostream>
using namespace std;

//Function Prototypes 
double getLength();
double getWidth();
double getArea(double&, double&);
void displayData(double&, double&, double&);

int main()
{
	double length, width, area;

	// Get the rectangle's length.
	length = getLength();

	// Get the rectangle's width.
	width = getWidth();

	// Get the rectangle's area.
	area = getArea(length, width);

	// Display the rectangle's data.
	displayData(length, width, area);

	system("pause");
	return 0;
}

//Function Definitions 
double getLength() {
	double length;
	cout << "Enter the rectangle's length: ";
	cin >> length;
	return length;
}

double getWidth() {
	double width;
	cout << "Enter the rectangle's width: ";
	cin >> width;
	return width;
}

double getArea(double& l, double& w) {
	return l * w;
}

void displayData(double& l, double& w, double& a) {
	cout << "The length is " << l << endl;
	cout << "The width is " << w << endl;
	cout << "The area is " << a << endl;
}



