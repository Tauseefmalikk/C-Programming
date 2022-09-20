#include <stdio.h>
int rev(int a[]);
int main()
{
	int a[5],i;
	printf("enter the elements of array");
	for( i=0;i<5;i++)
	scanf("%d",&a[i]);
	 
	rev(a);
	 
	printf("the reverse of an array is:");
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	
	return 0;
}
int rev(int a[])
{
	int i,j,t;
	for(i=0;i<j;i++)
	{
		for(j=4;i<j;j--)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
