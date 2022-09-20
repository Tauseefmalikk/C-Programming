#include<stdio.h>
int main()
{
	int a[5],n,i,*p,f=0;
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	 
	printf("enter the element to be searched");
	scanf("%d",&n);
	
	p=&a[0];
	for(i=0;i<5;i++)
	{
		if(*p==n)
	
		{
			f=1;
		    break;
		}
	       	p++;
	}
	if(f==1)
	printf("the element is found at %dth position",i+1);
	else
	printf("the element not found");
}
