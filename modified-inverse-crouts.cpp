#include<iostream>
using namespace std;

int main()
{
	cout<<"to find the inverse of a matrix by using crouts method"<<endl;
    int n;
      double a[n][n],x[n][n],l[n][n],u[n][n],y[n][n],ain[n][n];
       double sum1=0,sum2=0; 
	   cout<<"\n enter A matrix\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        	//a[i][j]=rand()%7;
        //	cout<<a[i][j]<<"\t";
                cin>>a[i][j];
        }    
        cout<<endl;
    }  
    //LU decomposition
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                if(i>=j)
                {
                 for(int k=0;k<=j-1;k++)sum1=sum1+l[i][k]*u[k][j];                 
                 l[i][j]=a[i][j]-sum1;
                }
                else
                l[i][j]=0.0;
                if(i<j&&j>=1)
                {
                 for(int k=0;k<=i-1;k++)sum2=sum2+l[i][k]*u[k][j];                 
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
		s=s+l[i][k]*x[k][j];
	}
	if(i==j)
	{
		x[i][j]=(1/l[i][i]);
	}
	else
	{
		x[i][j]=0-(s/l[i][i]);
	}
	}
	else
	{
		x[i][j]=0;
	}
	} }  
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
					s=s+y[i][k]*x[k][j];
				}
				ain[i][j]=s;
				cout<<s<<"\t";
			}
		}cout<<endl;
	}
}
