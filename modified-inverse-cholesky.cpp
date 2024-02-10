#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"to find the inverse of a matrix by using cholesky method"<<endl;
    int n,i,j,k;
   n=3;
    double l[n][n],u[n][n],y[n][n],ain[n][n];
    double a[n][n]={{1,-1,2},{3,4,1},{1,12,2}};
        double sum1=0,sum2=0;  
    //LU decomposition
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                if(j>=i)
                {
                 for(int k=0;k<j-1;k++)
			    {
				 sum1=sum1+l[i][k]*u[k][j];                 
                }
				 u[i][j]=a[i][j]-sum1;
                }
                else
                u[i][j]=0.0;
                
                if(i>j&&i>=1)
                {
                 for(int k=0;k<i-1;k++)
				 sum2=sum2+l[i][k]*u[k][j];                 
                 l[i][j]=(a[i][j]-sum2)/u[j][j];
                }
                else
                {
                l[i][j]=0.0;
                l[i][i]=1.0;
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
    //inverse of lower matrix
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(i>=j)
		{
		
	double s=0;
	for(int k=0;k<i;k++)
	{
		s=s+l[i][k]*u[k][j];
	}
	if(i==j)
	{
		u[i][j]=(1/l[i][i]);
	}
	else
	{
		u[i][j]=0-(s/l[i][i]);
	}
	}
	else
	{
		u[i][j]=0;
	}
	 }  
}
	//inverse of upper matrix
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		if(i<=j)
		{
		double s=0;
		for(int k=i+1;k<n;k++)
		{
			s=s+u[i][k]*y[k][j];
			}
			if(i==j)
			{
				y[i][j]=1/u[i][i];
				}	
				else
				{
					y[i][j]=0-(s/u[i][i]);
				}
		}
		else
		{
			y[i][j]=0;
		}
			}
	//inverse of A matrix
		cout<<"multiply"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			double s=0;
			{
				for(int k=0;k<n;k++)
				{
					s=s+y[i][k]*u[k][j];
				}
				ain[i][j]=s;
				cout<<ain[i][j]<<"\t";
			}
		}cout<<endl;
	}
  }
