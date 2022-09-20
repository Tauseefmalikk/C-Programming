#include<stdio.h>
int main()
{
	int a[5],*p,i,max=0,min=32767;
	printf("enter the elements of an array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	p=&a[0];
	
	for(i=0;i<5;i++)
	{
		if(*p>max)
		max=*p;
		
		if(*p<min)
		min=*p;
		
		p++;
		
	}
	printf("the max=%d \n the min=%d",max,min);
	
}
