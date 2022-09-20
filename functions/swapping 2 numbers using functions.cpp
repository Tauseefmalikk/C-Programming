#include <stdio.h>
int swap(int*,int*);
int main()
{
	int a,b;
	printf("\nenter the values of a and b");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\na=%d, \nb=%d",a,b);
}
int swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
