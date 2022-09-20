#include <stdio.h>
int main()
{
	int i,x,a[4]={5,2,2,5};
	for(i=3;i>=0;i--)
	printf("%d",a[i]);
	x=a[i];
	
	if(x==a[4])
    {
	printf(" \nyes it is a pallindrome");
    }
	
	else
	{
	printf("\nit is not a pallindrome");
    }
	return 0;
}


