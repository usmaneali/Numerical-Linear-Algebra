#include<iostream>
using namespace std;
main()
{
	float n, a, d;
	cout<<"1st Value, Common Difference, No. of Terms  "<<endl;
	cin>>a>>d>>n;
	cout<<"Harmonic Sequence = ";
	for(int i=0;i<n;i++)
	{
		cout<<"1/"<<a<<" ";
		a = a+d;
	}
	cout<<endl;
	system("pause");
}
