#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"ënter the order of matrix"<<endl;
	cin>>n;
	float a[n][n],t[n][2*n],I[n][n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==i)
			{
				I[i][j]=1;
			}
			else
			{
				I[i][j]=0;
			}
		}
	}
	cout<<"enter the matrix"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >>a[i][j];
		}
	}
		//pivoting
	int m=0; 
	for(int i=1;i<=n;i++)
	{
		for(int k=i+1;k<=n;k++)
		{
			if(a[i][i]<a[k][i])
			{
				for(int j=1;j<=n+1;j++)
				{
				    m++;
					int temp=a[k][j];
					a[k][j]=a[i][j];
					a[i][j]=temp;
				}
			}
		}
	}
	//cout<<"augmented matrix is given by"<<endl;
	for(int i=0;i<=n;i++)
	{
		int k=1;
		for(int j=1;j<=2*n;j++)
		{
			if(j>=n+1)
			{
				t[i][j]=I[i][k];
				k++;
			}
			else
			{
				t[i][j]=a[i][j];
			}
		}
	}
	cout<<"augmented matrix is"<<endl;
	
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*n;j++)
		{
			if(j==n+1)
			{
				cout<<"|";
			}
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	//finding the inverse
		for(int j=1;j<=n;j++)
		{
			for(int i=1;i<=n;i++)
			{
			if(i!=j)
			{
				float ratio=t[i][j]/t[j][j];
				for(int k=1;k<=2*n;k++)
				{
					t[i][k]=t[i][k]-ratio*t[j][k];
				}
			}
		    }
		}
		cout<<"inverse is"<<endl;
			for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=2*n;j++)
		{
			if(j==n+1)
			{
				cout<<"|";
			}
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	}
