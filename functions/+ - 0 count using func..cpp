#include <stdio.h>
int count(int a[]);
int main()
{
	int a[7],i;
	printf("enter the elements of array");
	for(i=0;i<7;i++)
	scanf("%d",&a[i]);
	
	count(a);
	return 0;
}
int count(int a[])
{
	int i,c1=0,c2=0,c3=0;
	for(i=0;i<7;i++)
	{
		if(a[i]>0)
		    c1++;
		else
		if(a[i]<0)
		    c2++;
		else
		    c3++;
		    
	}
	printf("\positive elements=%d \nnegative elements=%d \nzeroes=%d",c1,c2,c3);
}
