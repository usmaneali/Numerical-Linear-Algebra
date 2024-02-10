#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{printf("\n'MICROSOFT = Most Intelligent Customers Realize Our Software Only Fools Teenagers'\n");printf("\n-------------------------------Code OutPut--------------------------------------\n");
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
           //Operations to make a UPPER Triangular Matrix
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
           double det=1;
              
              for(int j=1;j<=n;j++)
                 {
				 	
                       det=det*a[j][j];   //=====================
                      
				}
             
             cout<<"Determinent = "<<det<<endl;
             /*cout<<"Transpose of a matrix = "<<endl;
             	for(int j=1;j<=n+1;j++)
                   {
              for(int i=1;i<=n;i++)
                 {
                      cout<<a[i][j]<<"\t";
                 }
                 cout<<endl;
			       }
			       cout<<"inverse of a matrix is = "<<endl;
			if(det!=0)
             {
             	for(int j=1;j<=n+1;j++)
                   {
              for(int i=1;i<=n;i++)
                 {
                 	cout<<a[i][j]/det<<"\t";
				 }
				 cout<<endl;
                   }
             }
             cout<<"verification = "<<endl;*/
             
}
