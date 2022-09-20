//swapping of two numbers using pointers

#include<stdio.h>
int main()
{
	int a,b,temp;
	int *p,*q;
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	
	p=&a;
	q=&b;
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("\nAfter swapping\nvalue of a=%d\nvalue of b=%d",a,b);
}
