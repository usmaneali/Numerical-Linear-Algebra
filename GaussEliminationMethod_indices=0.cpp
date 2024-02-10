#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
      int n;   double ratio;
      cout<<"enter size of A matrix";
      cin>>n;
      double a[n][n+1];
      double x[n];
      cout<<"enter augmented matrix A/B"<<endl;
      for(int i=0;i<=n-1;i++)
           {
              for(int j=0;j<=n;j++)
                 {
                      cin>>a[i][j];//=rand()%7;
                 }
                 cout<<endl;
           }
           
           //Row Operations to make an UPPER Triangular Matrix
      for(int j=0;j<=n-2;j++)
      {
       for(int i=1;i<=n-1;i++)
       {
	      if(i>j)
	      {
	        ratio=a[i][j]/a[j][j];  
	       
		for(int k=0;k<=n;k++)
	       {
	      a[i][k]=a[i][k]-ratio*a[j][k];
	       }
		  } 
       }
     }
     cout<<"ThE Upper Triangular Matrix is = "<<endl;
     for(int i=0;i<=n-1;i++)
           {
              for(int j=0;j<=n;j++)
                 {
                      cout<<a[i][j]<<"\t";
                 }
                 cout<<endl;
           }         
			x[n-1]=a[n-1][n]/a[n-1][n-1];// for root x3.
			for(int i=n-2;i>=0;i--)    // i=1  ,,   ============================
			{
			 double sum=0;
			for(int j=i+1;j<=n-1;j++)  //   j=2  ,,,,,
			    {
			    sum=sum+a[i][j]*x[j];
			       x[i]=(a[i][n]-sum)/a[i][i];
			    }
			}
			cout<<endl<<endl<<endl<<endl;
			for(int i=0;i<=n-1;i++)
			{
			cout<<"x["<<i+1<<"]= "<<x[i]<<endl;
            }
}
