//============================================================================
// Name        : Epsilon.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long double epsilon, temp,x,y,deg = 3.141592654/180,d=4;
	cin >> x;
	y = x*deg;
	for(int k =0;k<d;k++)
	{
temp = sin(y);
y = sin(y+deg);
cout << temp << "\n";
y = y - temp;
cout << y<< "\n";
y = y/deg;
cout << y<< "\n";

epsilon = asin(y)*(180/3.1414);
cout << epsilon<< "\n \n";
y = asin(y);
	}
	return 0;
}
