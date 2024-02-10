#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{     
    int n;
	cout<<"enter the size of the matrix\n";
    cin>>n;
    double a[n][n],x[n],b[n],l[n][n],u[n][n],y[n]; 
    cout<<"\n enter A matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
               cin>>a[i][j];              //     
			    //a[i][j]=rand()%7;
               //cout<<a[i][j]<<"\t";
        }    
        cout<<endl;
    }
    cout<<"\n enter B matrix\n";
    for(int j=0;j<=n-1;j++)
        {
           cin>>b[j];      //
		    //b[j]=rand()%7;
		   //cout<<b[j]<<endl;
        }  
        double sum1=0,sum2=0;
    //LU decomposition......................................
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
             for(int k=0;k<=j;k++)
			 sum1=sum1+l[i][k]*u[k][j];                 
             l[i][j]=a[i][j]-sum1;
            }
            else
            l[i][j]=0.0;
			   
            if(i<j&&j>=1)                //===================
            {
             for(int k=0;k<=i;k++)
			 sum2=sum2+l[i][k]*u[k][j];                 
             u[i][j]=(a[i][j]-sum2)/l[i][i];
            }
            else
            {
            u[i][j]=0.0;
            u[i][i]=1.0;
            }
            sum1=0;sum2=0;
        }
    }
    cout<<"\n\n\n Lower... matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                cout<<l[i][j]<<"\t";
        }    
        cout<<endl;
    }
    cout<<"\n\n\n upper... matrix\n";
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                cout<<u[i][j]<<"\t";
        }    
        cout<<endl;
    }
    cout<<"====Forward Substitution===="<<endl;
    y[0]=b[0]/l[0][0];
   for(int i=0;i<n;i++)
   {
   	double s=0;
   	for(int j=0;j<i;j++)
   	{
   	    s=s+l[i][j]*y[j];
	}
	  y[i]=(b[i]-s)/l[i][i]; 
	}
  for(int i=0;i<n;i++)
  {
  		cout<<"y["<<i+1<<"] = "<<y[i]<<endl;
  }
  cout<<"====Backward Substitution===="<<endl;
	x[n-1]=y[n-1];
  for(int i=n-2;i>=0;i--)
  {
  	double s=0;
  	for(int j=i+1;j<n;j++)
  	{
  		s=s+u[i][j]*x[j];
    }
  	  x[i]=(y[i]-s);
  }
	for(int i=0;i<n;i++)
	{
	cout<<"x["<<i+1<<"]= "<<x[i]<<endl;
    }  
}
