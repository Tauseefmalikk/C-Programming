#include <stdio.h>
int main()
{
	int a[3][3],i,j,temp;
	printf("\nenter the elements of 3x3 matrix");
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
	printf("the transpose of matrix is\n");
         for(i=0;i<3;i++)
         {
         	for(j=0;j<3;j++)
         	{
         		temp=i;
                i=j;
                j=temp;
	    	  printf("%d ",a[i][j]);
			 }
			 printf("\n");
		
		 }
   
		  
	
}
