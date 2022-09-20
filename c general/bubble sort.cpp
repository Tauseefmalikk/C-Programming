#include <stdio.h>
int main()
{
	int a[100],i,n,j,temp;
	printf("\nenter the size of array");
	scanf("%d",&n);
	
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("the array contains=");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{                     //bubble sort
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	printf("\nthe sorted array is=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
