#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{printf("\n'MICROSOFT = Most Intelligent Customers Realize Our Software Only Fools Teenagers'\n");printf("\n-------------------------------Code OutPut--------------------------------------\n");
	int n;
	cout<<"Enter Size of matrix"<<endl;
	cin>>n;
	float a[n][n+1],x[n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1;j++)
		{
			a[i][j]=rand()%7;
		}
	}
	cout<<"======== Augmented Matrix Is ========  "<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	 //Row Operations to make a Diagonal Matrix
	for(int j=1;j<=n;j++)
	{
		float ratio;
		for(int i=1;i<=n+1;i++)
		{
			if(i!=j)
			{
				ratio=a[i][j]/a[j][j];
				for(int k=1;k<=n+1; k++)
				{		
					a[i][k]=a[i][k]-ratio*a[j][k];
				}	
			}
		}
	}
	cout<<" === Diagonal Matrix is ==="<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1;j++)
		{	
		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++) // Dividing every row by its diagonal
	{
		float p=a[i][i];
		for(int j=1; j<=n+1 ; j++)
		{
			a[i][j]=a[i][j]/p;
		}
	}
	cout<<"Matrix ( After Dividing by thier respected diagonals)"<<endl;
	for(int i=1; i<=n ; i++)
	{
		for(int j=1; j<=n+1 ; j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Roots for this Method are = "<<endl;
	for(int i=1;i<=n;i++)
	{
		x[i]=a[i][n+1];
		cout<<"x["<<i<<"] ="<<a[i][n+1]<<endl;
	}
}
