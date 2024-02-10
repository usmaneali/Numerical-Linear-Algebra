#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{printf("\n'Measuring programming progress by lines of code is like measuring aircraft building progress by weight.'\n");printf("\n-------------------------------Code OutPut--------------------------------------\n");
      int n;   double ratio;
      cout<<"enter size of A matrix";
      cin>>n;
      double a[n][n+1];
      double x[n];
      cout<<"enter augmented matrix A/B"<<endl;
      for(int i=1;i<=n;i++)
           {
              for(int j=1;j<=n+1;j++)
                 {
                      a[i][j]=rand()%7;
                 }
                 cout<<endl;
           }
           for(int i=1;i<=n;i++)
           {
              for(int j=1;j<=n+1;j++)
                 {
                      cout<<a[i][j]<<"\t";
                 }
                 cout<<endl;
           }
           //Row Operations to make an UPPER Triangular Matrix
      for(int j=1;j<=n-1;j++)
      {
       for(int i=2;i<=n;i++)
       {
	      if(i>j)
	      {
	        ratio=a[i][j]/a[j][j];  
	       
		for(int k=1;k<=n+1;k++)
	       {
	      a[i][k]=a[i][k]-ratio*a[j][k];
	       }
		  } 
       }
     }
     cout<<"ThE Upper Triangular Matrix is = "<<endl;
     for(int i=1;i<=n;i++)
           {
              for(int j=1;j<=n+1;j++)
                 {
                      cout<<a[i][j]<<"\t";
                 }
                 cout<<endl;
           }         
			x[n]=a[n][n+1]/a[n][n];// for root x3.
			for(int i=n-1;i>=1;i--)    // i=2  ,,   ============================
			{
			 double sum=0;
			for(int j=i+1;j<=n;j++)  //   j=3  ,,,,,
			    {
			    sum=sum+a[i][j]*x[j];
			       x[i]=(a[i][n+1]-sum)/a[i][i];
			    }
			}
			cout<<endl<<endl<<endl<<endl;
			for(int i=1;i<=n;i++)
			{
			cout<<"x["<<i<<"]= "<<x[i]<<endl;
            }
}
