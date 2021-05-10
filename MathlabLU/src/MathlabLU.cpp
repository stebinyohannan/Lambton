#include <iostream>
using namespace std;

int main() {
	float A[50][50],L[50][50],U[50][50],c1 = 0,X[50],b[50],y[50],sum;
	int i,j,n,m , k=0;
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
	L[i][j] = 0;
}

			cin >> A[i][j];
			U[i][j] = A[i][j];
		}
		cout << "\n";
	}
for(i=0;i<(m-1);i++)
{
	for(j=(i+1);j<(m);j++)
	{
		c1 = (A[j][i])/(A[i][i]);
		if(i<j)
		{
			L[j][i] = c1;
		}
		for(int k=0;k<n;k++)
		{
		A[j][k] = A[j][k] - c1*(A[i][k]);
		U[j][k] = A[j][k];
		}
	}
}

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
		sum = sum + b[i]*U[i][j];       // backward substitution
	}
		if(U[i][i]==0)
		{
			cout << " Backward substitution not possible in this program";
			return 0;
		}
		X[i] = (b[i]-sum)/U[i][i];

}
for(i=0;i<m;i++)
{
	for(j=0;j<=(n);j++)
	{

		cout<<U[i][j]<<"\t";
	}
	cout<< "\n";
}
cout << "\n";

for(i=0;i<m;i++)
{
	for(j=0;j<=(n);j++)
	{

		cout  <<L[i][j]<<"\t";
	}
	cout << "\n";
}
cout << "\n";

for(i=0;i<m;i++)
{
	for(j=0;j<=(n-1);j++)
	{

		cout  <<A[i][j]<<"\t";
	}
	cout << "\n";
}
cout << "\n";

for(i=0;i<m;i++)
{
cout <<"b" <<(i+1) << "=" << b[i] <<"\n";
}
	return 0;
}

