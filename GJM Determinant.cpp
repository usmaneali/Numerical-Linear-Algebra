#include <iostream>
#include <conio.h>
using namespace std;
main()
{printf("\n”So let's go back, probably you have chance to see in school some kind a porn, some kind a kisses, which go far and far. But from there you see the boobs, then the feet from boobs it comes in your mind dick between the boobs, for feet comes feetjob. Then blowjob and so on and so on. But stop for a moment! You really don't need jerkoff it ruins everything, think clear if you want read this as much times as possible...” ");printf("\n-------------------------------Code OutPut--------------------------------------\n");
	int n;
	cout<<"Enter Size of matrix"<<endl;
	cin>>n;
	float a[n][n+1],y[n+1];
	cout<<"Enter A matrix"<<endl;
	for(int i=1; i<=n ; i++)
	{
		for(int j=1; j<=n ; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] =";
			cin>>a[i][j];
		}
	}
	cout<<"Enter B Matrix"<<endl;		// Program will automatically make it augmented matrix
	for(int i=1; i<=n ; i++)
	{  
		cout<<"b["<<i<<"]["<<n+1<<"] =";
		cin>>a[i][n+1];
	}
	cout<<"Matrix"<<endl;
	for(int i=1; i<=n ; i++)
	{
		for(int j=1; j<=n+1 ; j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(int j=1; j<=n; j++)
	{
		float ratio;
		for(int i=1; i<=n ; i++)
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
	cout<<"Matrix"<<endl;
	for(int i=1; i<=n ; i++)
	{
		for(int j=1; j<=n+1 ; j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Determinant =";
	int p=1;
	for(int i=1;i<=n ; i++)
	{
		p=p*a[i][i];
	}
	cout<<p<<endl;
	
	system("pause");

	
}
