#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n;
	cout<<"\nEnter the order of matrix: ";
    cin>>n;
	double a[10][10]={0},sum=0,ratio,p;
	cout<<"\n========the elements of A Matrix =======:\n\n";
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
           a[i][j]=rand()%7;
        }
    }
	for(int i=0;i<=n-1;i++) // Augmented matrix with IDENTITY MAT.
        for(int j=0;j<=2*n-1;j++)
            if(j==i+n)
                a[i][j]=1;
	for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=2*n-1;j++)
        {
            cout<<a[i][j]<<"\t";
        }
		cout<<"\n";
    }
	for(int j=0;j<=n-1;j++) // for Diagonal Matrix
    {
        for(int i=0;i<=2*n-1;i++)
        {
            if(i!=j)
            {
                ratio = a[i][j] / a[j][j];
                for(int k=0; k<=2*n-1; k++)
                {
                    a[i][k] = a[i][k] - ratio * a[j][k];
                }
            }
        }
    }
	for(int i=0;i<=n-1;i++)// for Unit matrix.
    {
    p=a[i][i];
    for(int j=0;j<=2*n-1;j++)
        a[i][j]=a[i][j]/p;
    }
	cout<<"The inverse of a matrix is "<<endl<<endl;
	for(int i=0; i<=n-1; i++)
    {
        for(int j=n; j<=2*n-1; j++)
        {
            cout<<a[i][j]<<"\t";
        }
		cout<<"\n";
    }
}
