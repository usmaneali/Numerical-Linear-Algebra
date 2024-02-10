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
      x1=-2.08;x2=4;tol=0.00000001;
      if(func(x1)*func(x2)<0)
      {
      cout<<"\n x1\t   x2        \t x3 \t         |x1-x2|";
      for(int i=0;i<10;i++)
      //do
      {
              x3=(x1+x2)/2;
              if(func(x1)*func(x3)<0)
                 x2=x3;
              else
                 x1=x3;
              cout<<"\n "<<x1<<"      "<<x2<<"       "<<x3<<"        "<<fabs(x1-x2)<<endl;
      }
      }
      else
      cout<<"revise initial guess"<<endl;
}
