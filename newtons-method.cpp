#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std; 
 float f(float x)
	{
		return (exp(-1/2*x)*acosh(exp(1/2*x))-sqrt(0.5*0.088));
	}
 float df(float x)
	{
		return (f(x+0.0001)-f(x))/0.000001;
	}
 main()
 {
    cout<<"newton's method"<<endl;
	float x0,temp,tol;
	x0=0.4;tol=0.0001;
	if((df(x0)!=0)&&f(x0)!=0)
	{		
	   cout<<"x1 \t x2 \t f(x1) \t error"<<endl;
		do
		{
			temp=x0;
			x0=x0-(f(x0)/df(x0));
			cout<<temp<<"   "<<x0<<"   "<<f(x0)<<"   "<<fabs(temp-x0)<<endl;
		}
		while(fabs(temp-x0)>=tol);
	}
	else
	{
		cout<<"choose other points"<<endl;
	}
	cout<<"answer = "<<x0<<endl;
}
	
