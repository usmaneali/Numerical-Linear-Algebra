#include <iostream>
#include <math.h>
using namespace std;
double f(double a)
{
	return(exp(-1.0/a));
}
main()
{
	double a,b,dx,x,sum=0;
	int n;
	n=100;
	a=0;b=1;
	dx=(b-a)/n;	
	x=a;
	for(int i=0;i<n;i++)
	{
		x=x+dx;
		sum=sum+f(x)*dx;
	}
	cout<<sum;		
}
