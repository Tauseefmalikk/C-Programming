#include <stdio.h>
int sum(int,int);
int main()
{
	int a,b,c;
	printf("\nenter the value of a and b");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("\n sum=%d",c);
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;   
}
