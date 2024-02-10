#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int k;
	cout<<"How many Quadratic Equations do you want to solve : "<<endl;
	cin>>k;
	int a[k], b[k], c[k], d[k];
	for(int i=0;i<k;i++)
	{
		cout<<"Enter coefficients a, b, c : "<<endl;
		cin>>a[i]>>b[i]>>c[i];
		d[i] = (b[i]*b[i])-(4*a[i]*c[i]);
		if(d[i]==0)
		{
			cout<<"Roots are real and equals."<<endl;
			cout<<" x1R = x2R = "<<-b[i]/(2*a[i])<<endl;
			cout<<" x1I = x2I = 0"<<endl;
		}
		else if(d[i]>0)
		{
			cout<<"Roots are real and unequals."<<endl;
			cout<<" x1R = "<<(-b[i]+sqrt(d[i]))/2*a[i]<<endl;
			cout<<" x2R = "<<(-b[i]-sqrt(d[i]))/2*a[i]<<endl;
			cout<<" x1I = x2I = 0"<<endl;
		}
		else
		{
			cout<<"Roots are imaginary and unequals."<<endl;
			cout<<"x1 = "<<-b[i]/(2*a[i])<<" + ( "<<sqrt(-d[i])/2*a[i]<<" )i"<<endl;
			cout<<"x2 = "<<-b[i]/(2*a[i])<<" - ( "<<sqrt(-d[i])/2*a[i]<<" )i"<<endl;
		}
	}
	system("pause");
}
