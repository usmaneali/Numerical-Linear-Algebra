#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
	int n;
	cout<<"Enter Size of matrix"<<endl;
	cin>>n;
	float a[n][n+1],x[n];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n;j++)
		{
		 a[i][j]=rand()%7;
		}
		cout<<endl;
	}
	cout<<"======== Augmented Matrix Is ========  "<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	 //Row Operations to make a Diagonal Matrix
	for(int j=0;j<=n-1;j++)
	{
		float ratio;
		for(int i=0;i<=n-1;i++)
		{
			if(i!=j)
			{
				ratio=a[i][j]/a[j][j];
				for(int k=0;k<=n; k++)
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
	cout<<"Determinant is =";
	float det=1;
	for(int i=0;i<=n-1;i++)
	{
		det=det*a[i][i];
	}
	cout<<det<<endl;
	
}
