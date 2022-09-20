#include<stdio.h>
int sum(int[]);
int main()
{
	int a[5],s,i;
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	s=sum(a);
	printf("sum=%d",s);
	
}
int sum(int a[])
{
	int i,s=0;
	for(i=0;i<5;i++)
	s=s+a[i];
	return s;
}
