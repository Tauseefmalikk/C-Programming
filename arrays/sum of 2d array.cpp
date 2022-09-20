#include <stdio.h>
int main()
{
	int a[3][4],i,j,s=0;
	printf("\nenter the 3x4 matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix is\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
			s=s+a[i][j];
		}
		printf("\n");
	}
	printf("the sum=%d",s);
}
