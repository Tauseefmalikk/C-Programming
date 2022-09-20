#include <stdio.h>
int main()
{
	int a[10],i,j,n,min,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\nenter the elements of array:");
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nthe array contains:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	min=a[0];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<min)
			min=a[i];
		}
	
       	temp=a[i];
       	a[i]=a[j];
        a[j]=temp;
   }
   for(i=0;i<n;i++)
	printf("\n%d\t",a[i]);
}
