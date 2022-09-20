#include<stdio.h>
int rev(int a[5]);
int main()
{
	int a[5],i;
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	rev(a);
}
int rev(int a[])
{
	int i;
	printf("\nthe reverse of array is:");
	for(i=4;i>=0;i--)
	printf("%d",a[i]);
}
