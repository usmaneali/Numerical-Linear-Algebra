//Fabounachii Series
#include<iostream>
using namespace std;
main()
{
    int s,a=0,b=1, terms;
    cout<<"How many terms of Fabunacci Series do you want to dispaly : "<<endl;
    cin>>terms;
    cout<<"Fabunacci Series :"<<endl;
	cout<<a<<endl<<b<<endl;
    for(int i=2;i<terms;i++)
    {
		s=a+b;
		a=b;
		b=s;   
    	cout<<s<<endl;
	}
}
