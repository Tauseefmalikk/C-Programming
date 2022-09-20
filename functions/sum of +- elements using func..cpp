#include <stdio.h>
int sum(int a[]);
int main()
{
	int a[10],i;
	printf("enter the elements of array");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	sum(a);
	return 0;
}
int sum(int a[])
{
	int i,sp=0,sn=0;
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		sp=sp+a[i];
		else
		sn=sn+a[i];
	}
	printf("\nthe sum of possitive numbers=%d \nthe sum of negative numbers=%d",sp,sn);
}
