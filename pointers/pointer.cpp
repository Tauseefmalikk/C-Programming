//pointer in C
// pointer is a variable which can store adress of any variable

#include <stdio.h>
int main()
{
	int a=5;
	int *p;
	p=&a;
	
	printf("\nvalue of a = %d",a);
	printf("\nvalue of a using pointers= %d",*p);
	printf("\nthe adress of a= %p",p);
}
