//============================================================================
// Name        : integral.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a,b,rad,integral,sum=0;
	a = 0;
	b = 2*3.14159;
	rad = 3.14159/180;
	while(a<b)
	{
	sum = sin(a) + sin(a+rad);
	integral = sum*rad/2;
	a = a+rad;
	}
	cout << "integral =" << integral;


}
