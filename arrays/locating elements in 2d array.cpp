#include <stdio.h>
int main()
{
	int a[5],i,n,flag=0;
	printf("\nenter the elements of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is");
	for(i=0;i<5;i++)
	printf("%d,",a[i]);
	
	printf("\nenter the element to be searched");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{    
	    if(a[i]==n)
	      
		{
		    flag=1;
		    break;
		}
		
	}
	if(flag==1)
	  printf("the element is found at %dth location",i+1);
	else
	  printf("the element is not present");
}
