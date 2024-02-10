#include<iostream>
#include<math.h>
using namespace std;
float  secant(float x)
{
	return(3*x+sin(x)-exp(x));
}
main()
{
	float x0=0.5,x1=10,x2,toll=pow(10,-6);
	if(fabs(secant(x1))>fabs(secant(x0)))
	{  
	float temp=x0;
	x0=x1;
	x1=temp;
	cout<<"\n x0 \t x1 \t x2 \t |secant(x2)|"<<endl;
	do
   {
	x2=x1-secant(x1)*((x0-x1)/(secant(x0)-secant(x1)));
	x0=x1;
	x1=x2;
	cout<<x0<<"   "<<x1<<"   "<<x2<<"   "<<fabs(secant(x2)>=toll)<<endl;
	}while(fabs(secant(x2))>=toll);
	}
	else
	{
		cout<<"\n revise initial guess"<<endl;
	}
}
