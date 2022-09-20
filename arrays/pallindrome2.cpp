#include <stdio.h>
int main()
{
	int i,x,a[4];
	printf("enter a 4 digit number");
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	
	for(i=3;i>=0;i--)
	printf("%d",a[i]);
	
}
