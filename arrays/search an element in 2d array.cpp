#include <stdio.h>
int main()
{
	int a[3][3],i,j,f=1,k,n;
	printf("\nenter the elements of 3x3 matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	  	scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(i=0;i<3;i++)
		{
			n=a[i][j];
	    for(k=n;k>=1;k--)
	    	{
	    	f=f*k;
		    }
		 printf("the factorial is=%d",f);
		}
	}
	


	
}
