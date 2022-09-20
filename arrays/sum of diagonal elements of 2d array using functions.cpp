#include<stdio.h>
int sumofdiagonal(int[][]);
int main()
{
	int a[][],n,i,j,m,s,n;
	printf("enter the number of rows and columns in matrix");
	scanf("%d%d",&m,&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j])
		}
		
	}
	s=sumofdiagonal(a);
	printf("the sum=%d",s);
}
int sumofdiagonal(int a[][])
{
	int i,j,m,n,s=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			s=s+a[i][j];
		}
	}
	return s;
}
