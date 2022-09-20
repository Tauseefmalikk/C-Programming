#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],*p,*q,*r,i;
	printf("enter the elements of array 1");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("enter the elements of 2 array");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	
	p=&a[0];
	q=&b[0];
	r=&c[0];
	
	for(i=0;i<5;i++)
	{
		*r=*p + *q;
		p++;
		q++;
		r++;
		
	}
	 for(i=0;i<5;i++)
	printf("%d ",c[i]);
	
}
