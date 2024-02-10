#include <iostream>
#include <math.h>
using namespace std;

double f(double a)
{
	return(pow(a,2));
}
main()
{
	double dx,ans,x;
	x=2;dx=0.00001;
	ans=(f(x+dx)-f(x))/dx;
	cout<<ans;
	
}
