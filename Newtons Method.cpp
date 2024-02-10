#include<iostream.h>
#include<math.h>
using namespace std;
double f(int x)
{
    return (3*(x)+ sin(x)- exp(x));
}
double f1(int x)
{
    return (f(x)/x);
}
main()
{
    double x2, x1=2,tol=0.0001,error;
   if(f(x1)!=0 && f1(x1)!=0)
{
     do
   {
         x2= x1- (f(x1)/f1(x1));
         x1=x2; 
    } while (f(x2)>=tol);
    cout<<x1<<"is root"<<endl;
}
else
{
    cout<<"Try another root"<<endl;
}
    system("pause");
}
