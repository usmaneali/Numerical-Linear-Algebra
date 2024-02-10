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
                      a[i][j]=rand()%7;
                 }
                 cout<<endl;
           }
           for(int i=0;i<=n-1;i++)
           {
              for(int j=0;j<=n;j++)
                 {
                      cout<<a[i][j]<<"\t";
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
           double det=1;
              for(int u=0;u<=n-1;u++)
                {
                       det=det*a[u][u];   //=====================    
				}
             cout<<"Determinent = "<<det<<endl;
}
