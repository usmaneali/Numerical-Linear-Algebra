#include<iostream>
using namespace std;
main()
{
	
/*-1      0.333333        1.06667
1       5.12411e-017    -1.2
1       -0.333333       -0.866667*/
      float x[3][3]={{6,1,6},{5,3,2},{5,0,5}};
     float y[3][3]={{-1,0.333333 ,1.06667},{1,5.12411e-017,-1.2},{1,-0.333333, -0.866667}};//inverse of x.
     // now lets Check it out. 
       float row1=3,col2=3,col1=3,sum;
       int i,j,k;
       for(i=0;i<row1;i++)
       {  
     for(j=0;j<col2;j++)
      {
	    for(k=0;k<col1;k++)
	    {   
	      sum=sum+x[i][k]*y[k][j];
	    }
      cout<<sum<<"\t";
      sum=0;
      }
      cout<<endl;
      }
       
}
