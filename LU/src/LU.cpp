#include <iostream>
using namespace std;

int main() {
	float A[50][50],L[50][50],U[50][50],c1 = 0,X[50],b[50],sum;
	int i,j,n,m;
	cout << "Enter the number of variables" << "\n";
	cin >> n;
	cout << "Enter the number of equations" << "\n";
	cin >> m;
	if( m<n)
	{
		cout << "Calculation not possible" << "\n";
		return 0;
	}
	for(i=0;i<m;i++)
	{
		cout << "Enter the equation \n";
		for(j=0;j<=n;j++)
		{
if(j==i)
{
	L[i][j] = 1;
}
else if(j==(n-1))
{
	L[i][j] = A[i][j];
}
else
{
	L[i][j] = 0;    // Assigning values to the matrix A and partially to L and U
}

			cin >> A[i][j];
			U[i][j] = A[i][j];
		}
	}

for(i=0;i<(m-1);i++)
{
	for(j=(i+1);j<(m);j++)
	{
		c1 = (A[j][i])/(A[i][i]);
		if(i<j)
		{
			L[j][i] = c1; // Making L matrix of LU
		}
		for(int k=0;k<n;k++)
		{
		A[j][k] = A[j][k] - c1*(A[i][k]);  // Making U matrix of LU
		U[j][k] = A[j][k];
		}
	}
}
for(i=0;i<m;i++)
{
	for(j=0;j<=(n-1);j++)
	{
								//To display A matrix
		cout  <<A[i][j]<<"\t";
	}
	cout << "\n";
}
cout << "\n";
cout << "U = \n";
for(i=0;i<m;i++)
{
	for(j=0;j<=(n-1);j++)
	{
										//To display U matrix
		cout<<U[i][j]<<"\t";
	}
	cout<< "\n";
}
	cout << " \n L = \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<=(n-1);j++)
		{
										//To display L matrix
			cout  <<L[i][j]<<"\t";
		}
		cout << "\n";
	}
	cout << "\n";

for(i=0;i<n;i++)
    {                                        //forward substitution method
        sum=0;
        for(j=0;j<i;j++)
        {
        sum+=L[i][j]*b[j];
        }
        b[i]=(A[i][m]-sum)/L[i][i];
    }
for(i=(m-1);i>=0;i--)
{
	sum = 0;
	for(j=(m-1);j>i;j--)
	{
		sum +=(U[i][j]*X[j]);       // backward substitution
	}
		if(U[i][i]==0)
		{
			cout << " Backward substitution not possible in this program";
			return 0;
		}
		else
		X[i] = (b[i]-sum)/U[i][i];
	}

for(i=0;i<m;i++)
{
cout <<"b" <<(i+1) << "=" << b[i] <<"\n"; 		// Display forward substitution result
}
cout <<"\n";
for(i=0;i<m;i++)
{
cout <<"X" <<(i+1) << "=" << X[i] <<"\n";    // Display final result
}
	return 0;
}

