#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float f(float x)
	{
		return 3*x+sin(x)-exp(x);
	}
main()
{    
    cout<<"false-position-method"<<endl;
	float x0,x1,x2,tol;
	x0=0.1;x1=0.5;tol=0.0001;
	if(f(x0)*f(x1)<0)
	{
		cout<<"x1 \t x2 \t x3 \t f(x1) \t f(x2) \t f(x3) error"<<endl;
		do
		{
			x2=x1-f(x1)*(x0-x1)/(f(x0)-f(x1));
			if(f(x0)*f(x2)<0)
			{
				x1=x2;
			}
			else
			{
				x0=x2;
			}
			cout<<x0<<"   "<<x1<<"   "<<x2<<"   "<<f(x0)<<"   "<<f(x1)<<"   "<<f(x2)<<"   "<<fabs(x1-x0)<<endl;
		 } 
		 while(fabs(f(x2))>=tol);
			 }
	else
	{
		cout<<"choose other point"<<endl;
	}
}

