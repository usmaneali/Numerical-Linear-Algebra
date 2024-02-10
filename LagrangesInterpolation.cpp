#include <iostream>
#include <math.h>
using namespace std;
main()
{
      int n;
      cout<<"enter no. of data points \n";
      cin>>n;           
      double x[n],fx[n],c,p,sum=0;
      cout<<"enter the point\n";
      cin>>c;
      for(int i=0;i<n;i++)
      {
          x[i]=i*0.5;
          fx[i]=  sin(i*0.5);  
      }
      for(int i=0;i<n;i++)
      {
      p=1;
      for(int j=0;j<n;j++)
      {
              if(i!=j)
              p=p*(c-x[j])/(x[i]-x[j]);            //consider c=x.
      }
      sum=sum+p*fx[i];
      }
      cout<<"The interpolated answer at x = "<<c<<"\t f[x]= "<<sum<<endl;
      cout<<"The analytical answer at x = "<<c<<"\t f[x]= "<<sin(c);
      
}
