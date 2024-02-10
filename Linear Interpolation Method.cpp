#include<iostream>
#include<math.h>
using namespace std;
double f(double x)
{
	return(3*x+sin(x)-exp(x));
}
main()
{
	double x1,x2,x3,tol,error;
	x1=0,x2=1,tol=0.001;
	if(f(x1)*f(x2)<0)
	{
		do{
			error=abs(x1-x2);	
			x3=x2-(f(x2)*(x1-x2))/(f(x1)-f(x2));
			if(f(x1)*f(x3)<0)
				x2=x3;
			else
				x1=x3;
			cout<<error<<endl;
		}while(error>=tol);
		cout<<x3;
	}
	else
	cout<<"Try another guess";
	system("pause");
}




