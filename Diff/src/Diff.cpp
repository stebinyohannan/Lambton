//============================================================================
// Name        : argument.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <limits>
#include <iostream>
#include <cmath>
using namespace std;

long double factorial(long double a)
{
    if(a > 1)
        return a * factorial(a - 1);
    else
        return 1;
}
long double derivative(long double k)
{
	long double x = 0, deg = 3.141592654/180, l=0,m=0,o=0,temp,y=0;

	y = x*(3.141592654/180);
	for (int i=0;i<k;i++)
	{
	temp = sin(y);
	y = sin(y+(3.141592654/180));
	cout << temp << "\n";
	y = y - temp;
	cout << y<< "\n";
	y = y/deg;
	cout << y<< "\n";
		cout << i << "\n"<< y << "\n";
		temp = asin(y);
		y = temp;
	}
	return x;
}
long double power(long double k, long double p)

{
	long double x = k;
	if(p==0)
		return 1;
	else
	{
	for(int i=1;i<p;i++)
	{
		x = x*k;
	}
	return x;
	}
}
int main()
{
    long double  n, m = 0, a;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Enter a positive integer: ";
    cin >> a;
  n = (n*3.141592654)/180;
    cout << "Factorial of " << a << " = " << factorial(a)<<"\n";
    for(long double j=0;j<=a;j++)
    {
    	  cout << "power of " << j << " = " << power(n,j)<<"\n";

    		  m = m + (derivative(j)*(power(n,j)))/factorial(j);
    		  cout << "mac " << m;
    }

    return 0;
}
