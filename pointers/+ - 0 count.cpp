#include<stdio.h>
int main()
{
	int a[5],i,c1=0,c2=0,c3=0,*p;
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	p=&a[0];
	
	for(i=0;i<5;i++)
	{
		{
			if(*p>0)
	    	c1++;
		else if(*p<0)
		    c2++;
		else
		    c3++;
		}
		
		
		p++;
	}
	printf("positive=%d\nnegative=%d\nzeroes=%d",c1,c2,c3);
}
