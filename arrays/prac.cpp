#include <stdio.h>
int main()
{
	int a[3][3],i,j,s1=0,s2=0;
	printf("\nenter the 3x3 matrix");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
			
	}
	printf("the matrix is\n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
			
	}
		for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(i==j)
         	s1=s1+a[i][j];
         	else if(i+j==3)
	        s2=s2+a[i][j];	
		}
		
		
    }
    printf("the sum of major diagonal elements is=%d\n the sum of minor diagonal is=%d ",s1,s2);
}


