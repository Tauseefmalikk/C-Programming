#include <stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	swap(a,b);
	
}
int swap(int p,int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	printf("\nvalue1=%d \n value2=%d",p,q);
}
