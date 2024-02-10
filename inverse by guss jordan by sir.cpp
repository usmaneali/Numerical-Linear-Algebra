#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{printf("\n'PHP is a minor evil perpetrated and created by incompetent amateurs, whereas Perl is a great and insidious evil, perpetrated by skilled but perverted professionals.'\n");printf("\n-------------------------------Code OutPut--------------------------------------\n");
	double a[10][10]={0},ratio,sum=0;
	int n;
	cout<<"\nEnter the order of matrix: ";
    cin>>n;
	cout<<"\n========Enter the elements of A Matrix =======:\n\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            //cout<< i<<"  "<<j<<"\t";
           a[i][j]=rand()%7;
        }
    }
	for(int i=1;i<=n;i++) // Augmented matrix with IDENTITY MAT.
        for(int j=1;j<=2*n;j++)
            if(j==(i+n))
                a[i][j]=1;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n);j++)
        {
            cout<<a[i][j]<<"\t";
        }
		cout<<"\n";
    }
	for(int j=1;j<=n;j++) // for Diagonal Matrix
    {
        for(int i=1;i<=2*n;i++)
        {
            if(i!=j)
            {
                ratio = a[i][j] / a[j][j];
                for(int k=1; k<=2*n; k++)
                {
                    a[i][k] = a[i][k] - ratio * a[j][k];
                }
            }
        }
    }
	for(int i=1;i<=n;i++)// for Unit matrix.
    {
    ratio=a[i][i];
        for(int j=1;j<=2*n;j++)
            a[i][j]=a[i][j]/ratio;
    }
	cout<<"The inverse of a matrix is "<<endl<<endl;
	for(int i=1; i<=n; i++)
    {
        for(int j=n+1; j<=(2*n); j++)
        {
            cout<<a[i][j]<<"\t";
        }
		cout<<"\n";
    }
}
