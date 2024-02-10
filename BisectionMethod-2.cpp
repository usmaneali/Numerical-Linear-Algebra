#include <iostream>
#include <math.h>
using namespace std;
float func(float x)
{
      return(pow(x,3)-4*x-9);
}
main()
{
    float x1,x2,x3,tol;
    tol=pow(10,-5);
    for(x1=0;;x1=x1+0.5)
    {
       if(func(x1)>0)
       {
       break;
       }
    }
    for(x2=x1-1;;x2=x2-0.5)
    { 
       if(func(x2)<0)
       break;
    }
    if(func(x1)*func(x2)<0)
    {
    cout<<"\n x1 \t x2 \t x3 \t |x1-x2|"<<endl;
          do
          {
               x3=(x1+x2)/2;
               if(func(x1)*func(x3)<0)
                  x2=x3;
               else 
                  x1=x3;  
               cout<<x1<<"   "<<x2<<"   "<<x3<<"   "<<fabs(x1-x2)<<endl; 
          }while(fabs(x1-x2)>=tol);
    }
    else
    cout<<"\n revise initial guess"<<endl;        
}
