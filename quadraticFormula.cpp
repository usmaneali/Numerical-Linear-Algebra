#include <iostream>
#include <math.h>
using namespace std;

main()
{
      float a,b,c,disc,x1r,x2r,x1i,x2i;
      int n;
      //a=1;b=1;c=1;
      cout<<"enter no of equations = ";
      cin>>n;
      for(int i=0;i<n;i++)
      {
              cout<<"enter a,b,c";
              cin>>a;cin>>b;cin>>c;
      disc=pow(b,2)-4*a*c;
      cout<<"\ndiscremenant ="<<disc;
      if(disc==0)
      {
                 x1r=x2r=-b/(2*a);
              //  ( x1i=x2i=0;)
      }
      else if(disc>0)
      {
           x1r=-b/(2*a)+sqrt(disc)/(2*a);
           x2r=-b/(2*a)-sqrt(disc)/(2*a);
           //   (x1i=x2i=0;)
      }
      else
      {
           x1r=-b/(2*a);
           x2r=-b/(2*a);
           x1i=sqrt(-disc)/(2*a);
           x2i=-sqrt(-disc)/(2*a);
      }
      cout<<"\n x1r = "<<x1r<<"\t x1i = "<<x1i<<"\n x2r = "<<x2r<<"\t x2i = "<<x2i<<endl;  
      }      
}
