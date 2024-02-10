#include <iostream>
#include <math.h>
using namespace std;

main()
{
	
      float a[3]={1,1,1},disc,x1r[3],x2r[3],x1i[3],x2i[3];
	  float b[3]={1,4,2};float c[3]={1,2,1};
      int n;
      //a=1;b=1;c=1;
      cout<<"enter no of equations = ";
      cin>>n;
      for(int i=0;i<n;i++)
      {
      disc=pow(b[i],2)-4*a[i]*c[i];
      cout<<"\ndiscremenant ="<<disc;
      if(disc==0)
      {
                 x1r[i]=x2r[i]=-b[i]/(2*a[i]);
                 //x1i[i]=x2i[i]=0;
      }
      else if(disc>0)
      {
           x1r[i]=-b[i]/(2*a[i])+sqrt(disc)/(2*a[i]);
           x2r[i]=-b[i]/(2*a[i])-sqrt(disc)/(2*a[i]);
           //x1i[i]=x2i[i]=0;
      }
      else
      {
           x1r[i]=-b[i]/(2*a[i]);
           x2r[i]=-b[i]/(2*a[i]);
           x1i[i]=sqrt(-disc)/(2*a[i]);
           x2i[i]=-sqrt(-disc)/(2*a[i]);
      }
      cout<<"\n x1r = "<<x1r[i]<<"\t x1i = "<<x1i[i]<<"\n x2r = "<<x2r[i]<<"\t x2i = "<<x2i[i]<<endl;  
      }      
}
