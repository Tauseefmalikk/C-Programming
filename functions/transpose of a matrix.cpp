#include <stdio.h>
int transpose(int[3][4]);
int main()
{
	int a[3][4],i,T,j;
	printf("\nenter the elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a);
	
}
int transpose(int a[3][4])
{
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
    }
	
}
