#include <iostream>
using namespace std;
main()
{
      float a,h;
      int n=5;
      a=1;h=2;
      cout<<a<<endl;
      //float arr[5];
      //arr[0]=a;
      for(int i=1;i<n;i++)
      {
              //cout<<a+(i*h)<<endl;
              a=a+h;//arithmetic seq.
             cout<<a<<endl;
             // arr[i]=arr[i-1]+h;// for arithmetic seq.with Array.
              
       }
      /*for(int i=0;i<n;i++)
      {
              cout<<arr[i]<<endl;
      }*/      
}
