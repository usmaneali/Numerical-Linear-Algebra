#include <iostream>
#include <conio.h>
double func(double x,double a,double b)
{
       return(a*x+b);
}
using namespace std;
main()
{
      int n=5;
      double a[2][3]={0}, x[n],fx[n];
      cout<<"enter x values\n";
      for(int i=0;i<n;i++)
      {
              cin>>x[i];
              cout<<endl;
      }
      cout<<"enter fx values\n";
      for(int i=0;i<n;i++)
      {
              cin>>fx[i];
              cout<<endl;
      }
      //calculatiion of coeficients  of A and B
      for(int i=0;i<n;i++)
      {
              a[0][0]=a[0][0]+x[i]*x[i];
              a[0][1]=a[0][1]+x[i];
              a[0][2]=a[0][2]+x[i]*fx[i];
              
              a[1][0]=a[1][0]+x[i];
              a[1][1]=n;
              a[1][2]=a[1][2]+fx[i];              
      }
      double ratio,aa,bb;
      for(int j=0;j<2;j++)
      {
		for(int i=0;i<2;i++)
		{
		if(i!=j)
		{
		ratio=a[i][j]/a[j][j];
		for(int k=0;k<3;k++)
		{
		      a[i][k]=a[i][k]-ratio*a[j][k];
		}
		}
        }
              
      }
      aa=a[0][2]/a[0][0];
      bb=a[1][2]/a[1][1];
      //cout<<aa<<endl<<bb;
      for(int i=0;i<n;i++)
      {
      cout<<"xi= "<<x[i]<<"    yi= "<<func(x[i],aa,bb)<<endl;
      }      
}
