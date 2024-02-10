#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
	int n;
	cout<<"Enter the order of matrix =";
	cin>>n;
	float a[n][n+1],x[n];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n;j++)
		{
			a[i][j]=rand()%7;
		}
	}
		//pivoting
	int t;
	int m=0; 
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i][i]<a[j][i])
			{
				for(int k=0;k<=n;k++)
				{
				    m++;
					int temp=a[j][k];
					a[j][k]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
	t=pow(-1,m);
	cout<<"Pivoted And === Augmented Matrix Is ="<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	 //Row Operations to make a Diagonal Matrix
	for(int j=0;j<n;j++)
	{
		float ratio;
		for(int i=0;i<=n-1;i++)
		{
			if(i!=j)
			{
				ratio=a[i][j]/a[j][j];
				for(int k=0;k<n+1; k++)
				{		
					a[i][k]=a[i][k]-ratio*a[j][k];
				}	
			}
		}
	}
	cout<<" === Diagonal Matrix is ==="<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n;j++)
		{	
		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++) // Dividing every row by its diagonal
	{
		float p=a[i][i];
		for(int j=0; j<n+1;j++)
		{
			a[i][j]=a[i][j]/p;
		}
	}
	cout<<"Matrix ( After Dividing by thier respective diagonals)"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Roots for this Method are = "<<endl;
	for(int i=0;i;i++)
	{
		x[i+1]=a[i][n];
		cout<<"x["<<i+1<<"] ="<<a[i][n]<<endl;
	}
}
