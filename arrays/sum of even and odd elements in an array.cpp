//sum of even and odd values in an array
#include <stdio.h>
int main()
{
	int a[6],i,s1=0,s2=0;
	printf("\nenter the elements of an array");
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	printf("the array is");
	for(i=0;i<6;i++)
	printf("%d,",a[i]);
	 for(i=0;i<6;i++)
	 {
	 	if(a[i]%2==0)
	 	s1=s1+a[i];
	 	else
	 	s2=s2+a[i];
	 }
	 printf("\nsum of even elements=%d \nsum of odd elements=%d",s1,s2);
}
