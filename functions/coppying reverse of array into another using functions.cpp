#include <stdio.h>
int reverse(int[],int[]);
int main()
{
	int a[5],b[5],i;
	printf("enter the elements of array a");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	reverse(a,b);
	
	printf("\nreverse of array;");
	for(i=0;i<5;i++)
	printf("\n%d",b[i]);
	return 0;
}
int reverse(int a[], int b[])
{
	int i,j;
	for(i=0,j=4;i<5;i++,j--)

		{
			b[j]=a[i];
		}
	
}
