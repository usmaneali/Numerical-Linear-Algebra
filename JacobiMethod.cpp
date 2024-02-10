#include <iostream>
using namespace std;
main()
{    
   int n,m;
   cout<<"enter size of matrix";
	cin>>n;
	double a[n][n],x[n],b[n],y[n];//Eliminate y[n]  for Gauss seidal method.
	cout<<"enter # of iterations";
	cin>>m;
	cout<<"\n enter matrix A"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"\n enter vector B \n";
	for(int j=0;j<n;j++)
		{
			cin>>b[j];
			cout<<"\n";
		}
		cout<<"\n enter initial gausses X \n";
	for(int j=0;j<n;j++)
		{
			cin>>x[j];
			cout<<"\n";
		}
		int c=0;
	do{	
		double sum=0;
	 for(int i=0;i<n;i++)
	 {
	 	
	 	for(int j=0;j<n;j++)
	 	{
	 		if(i!=j)
			 	sum=sum+(a[i][j]/a[i][i])*x[j];
			 	y[i]=b[i]/a[i][i]-sum;    	//replace x[i]  for Gauss seidal method.
			
	 	}
	 	sum=0;
	 }
	   c++;
	cout<<"\n # No of Iterations ="<<c<<endl;    
	for(int j=0;j<n;j++)
	 	{
		 x[j]=y[j];           //commend this statement for Gauss seidal method.
		 	cout<<"\n \n  x["<<j<<"]= "<<x[j];
	 	}
	 	m--;
      }
     while(m>0);
}
