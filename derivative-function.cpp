#include<iostream>
#include<math.h>
using namespace std;
float df(float x);
float f(float x);
main()
{
   cout<<"derivative of a function is"<<endl;
	cout<<df(1);//calling with argument.
}
float f(float x)
	{
		return 3*x+sin(x)-exp(x);
	}
float df(float x)
	{
		return (f(x+0.0001)-f(x))/0.0001;// function is being called in other function.
	}	
