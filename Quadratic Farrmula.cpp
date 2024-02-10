#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float a, b, c, x1, x2;
	cout<<"Enter values of a, b, & c : "<<endl;
	cin>>a>>b>>c;
	int d = b*b-4*a*c;
	if(d==0)
    {
    	cout<<"Roots are real and equals."<<endl;
		x1 = x2 = -b/(2*a);
	}
	else if(d>0)
	{
		cout<<"Roots are real and unequals."<<endl;
		x1 = (-b+sqrt(d))/2*a;
		x2 = (-b-sqrt(d))/2*a;
	}
	else
	{
		cout<<"Roots are imaginary and unequals."<<endl;
		x1 = (-b+sqrt(-d))/2*a;
		x2 = (-b-sqrt(-d))/2*a;
	}
	cout<<" x1 = "<<x1<<" & x2 = "<<x2<<endl;
}
