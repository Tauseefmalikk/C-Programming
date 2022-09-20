#include <stdio.h>
void sum(int a[],int b[]);
int main()
{
	int a[5],b[5],i;
	printf("enter the elements of array 1");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("enter the elements of array 2");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	sum(a,b);
	return 0;

}
void sum(int a[],int b[])
{
	int i,c[10];
	for(i=0;i<10;i++)
	{
			c[i]=a[i]+b[i];
			printf("\n%d",c[i]);
	}

	
	
	
}
