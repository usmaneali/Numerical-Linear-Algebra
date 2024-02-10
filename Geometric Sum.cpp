#include<iostream>
using namespace std;
main()
{
	float n, a, r, s = 0.0;
	cout<<"1st Value, Common Ratio, No. of Terms : "<<endl;
	cin>>a>>r>>n;
	cout<<"Geometric Sequence = ";
	for(int i=0;i<n;i++)
	{
		cout<<a<<" ";
		s = s+a;
		a = a*r;
	}
	cout<<endl;
	cout<<"Geometric Sum = "<<s<<endl;
	system("pause");
}
