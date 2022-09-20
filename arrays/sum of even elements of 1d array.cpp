#include <stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("enter the elements of an array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("the array is");
    for(i=0;i<5;i++)
    {
    	printf("%d,",a[i]);
	}
	printf("\nthe sum of even elements is");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
	    sum=sum+a[i];
	}
		printf("%d",sum);
		
}
