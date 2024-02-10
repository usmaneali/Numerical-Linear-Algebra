#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int n;
	double x,p;
	cout<<"No. of coefficients = ";
	cin>>n;
	cout<<"Value of x = ";
	cin>>x;
	double a[n];
	cout<<"Enter coefficients : "<<endl;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];		
	}
	p=a[0];
	for(int i=0;i<n;i++)
	{
		p=p*x+a[i];
	}
	cout<<"Polinomial = "<<p;
	
}
