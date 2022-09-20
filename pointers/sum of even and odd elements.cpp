#include<stdio.h>
int main()
{
	int a[5],s1=0,s2=0,i,*p;
	printf("enter the elements of an array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	p=&a[0];
	
	for(i=0;i<5;i++)
	{
		if(*p%2==0)
		
		    s1=s1 + *p;
		else
			s2=s2 + *p;
			
		
		p++;
	}
	printf("the sum of even elements=%d \n the sum of odd elements=%d",s1,s2);	
}
