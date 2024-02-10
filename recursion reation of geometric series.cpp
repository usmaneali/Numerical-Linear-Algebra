#include <iostream>
#include<math.h>
using namespace std;
main()
{
      float a,r;
      int n;
      n=5;
      a=1;r=2;
      int arr[5];
      arr[0]=a;
      //cout<<a<<endl;
      for(int i=1;i<n;i++)
      {
              //a=a*r;
			  //cout<<a<<endl;
             arr[i]=arr[i-1]*r;
      }
      for(int i=0;i<n;i++)
      { 
	         
              cout<<arr[i]<<endl;
      }     
}
