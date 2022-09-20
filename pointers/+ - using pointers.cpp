//additiion of two numbers using pointers

#include <stdio.h>
int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	p1=&a;
	p2=&b;
	p3=&c;
	
	*p3=(*p1)+(*p2);
	printf("\nthe sum=%d",c);
	
		*p3=(*p1)-(*p2);
	printf("\nthe diffence=%d",c);
	
}
