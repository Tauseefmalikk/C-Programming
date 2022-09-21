#include <stdio.h>
int sum(int[3][3]);
int main()
{
	int a[3][3],i,s,j;
	
	printf("\nenter the elements");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	s=sum(a);
    printf("the sum=%d",s);	
}
int sum(int a[3][3])
{
	int i,j,s=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
	}
	return s;
}

