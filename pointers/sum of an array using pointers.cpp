#include<stdio.h>
int main()
{
	int a[5],i,*p,s=0;
	printf("enter the elements of an array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	p=&a[0];
	for(i=0;i<5;i++)
	{
		s=s+ *p;
		p++;
	}
	printf("the sum is=%d",s);
}
