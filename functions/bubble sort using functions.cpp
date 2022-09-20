#include <stdio.h>
int sort(int a[]);
int main()
{
	int a[10],i;
	printf("enter the elements of array");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	sort(a);

}
int sort(int a[])
{
	int i,j,t;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
			    a[i]=a[j];
		    	a[j]=t;
			}
			
		}
	}
	printf("\nsorted array is");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
}
