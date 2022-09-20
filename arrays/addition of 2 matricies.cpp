//add and sub of two matricies
#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the elements of first 3x3 matrix");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&a[i][j]);

		}
	}
	printf("enter the elements of 2nd 3x3 matrix");
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&b[i][j]);

		}
	}
	printf("the first matrix is\n");
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",a[i][j]);

		}
		printf("\n");
	}
	printf("%d ",a[i][j]);
	
	printf("the 2nd matrix is\n");
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",b[i][j]);

		}
		printf("\n");
	}
	printf("%d ",b[i][j]);
	
	printf("\nthe sum of two matricies is\n");
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
        	printf("%d ",c[i][j]);
		}
		 	printf("\n");
	}
	printf("\nthe difference of two matricies is\n");
	 for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		c[i][j]=a[i][j]-b[i][j];
        	printf("%d ",c[i][j]);
		}
		 	printf("\n");
	}


	

	

