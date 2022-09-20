#include <stdio.h>
int main()
{
	int a[100],i,n,min,temp,j;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	
	printf("\nenter the elements of an array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("\nthe array contains:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);    
     
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	
		 {
	     	if(a[j]<a[i])
	 	    min=j;
		 }
		 temp=a[i];
		 a[i]=a[min];
		 a[min]=temp;
	 }
    printf("\nthe sorted array=");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
