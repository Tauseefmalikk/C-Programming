#include <stdio.h>
int sum(int a[]);
int main()
{
	int a[5],i,so,se;
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	sum(a);
	
	
}
int sum(int a[])
{
	int i,se=0,so=0;
	for(i=0;i<5;i++)
	{
		if(i%2==0)
	    	se=se+a[i];
		else
	     	so=so+a[i];
	}
		printf("\nthe sum of even elements=%d the sum of odd elements=%d",se,so);

	
}
