#include<iostream.h>
#include<math.h>
using namespace std;
double f(int x);
main()
{
    double x1=1,x2,error,tol=0.0001;
    do
    {
        x2=x1;
        x1=f(x1);
    }
    while ((x1-x2)>=tol);
    cout<<x1<<"is the root"<<endl;
    system("pause");
}
double f(int x)
{
     return(((2*x)+3)^1/2);
}
