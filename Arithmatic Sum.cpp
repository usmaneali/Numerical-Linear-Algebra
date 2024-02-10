#include<iostream>
using namespace std;
main()
{
	float n, a, d, s = 0.0;
	cout<<"1st Value, Common Difference, No. of Terms : "<<endl;
	cin>>a>>d>>n;
	cout<<"Arithmatic Sequence = ";
	for(int i=0;i<n;i++)
	{
		cout<<a<<" ";
		s = s+a;
		a = a+d;
	}
	cout<<endl;
	cout<<"Arithmatic Sum = "<<s<<endl;
	system("pause");
}
