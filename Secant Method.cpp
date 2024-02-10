#include<iostream.h>
#include<math.h>
using namespace std;
double f(double x)
{
    return(3*x+ sin(x)- exp(x));
}
main()
{
    double x0=1,x1=0,x2,tol=0.0000001,error;
    if(f(x1)<f(x0))
    {
        do
        {
        x2= x1-(f(x1)*(x0-x1))/(f(x0)-f(x1));
        x0=x1;
        x1=x2;
        error= f(x2);
        } while (error>=tol);
        cout<<x2<<"is the root"<<endl;
    }
    else
    {
        cout<<"try another guess"<<endl;
    }
    system("pause");
}
