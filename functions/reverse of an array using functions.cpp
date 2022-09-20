#include <stdio.h>
int rev(int[]);
int main()
{
	int a[10],i,r;
	printf("\nenter elements");
	for(i=0;i<10;i++)
	    scanf("%d",&a[i]);
	rev(a);
}
int rev(int a[])
{
	int i;
	printf("the reverse of an array=");
	for(i=9;i>=0;i--)
	printf("\n%d",a[i]);
}
