#include <stdio.h>
int maximum(int []);
int minimum(int []);
int main()
{
	int a[10],i,m;
	printf("enter the elements");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	m=maximum(a);
	printf("\nmax=%d",m);
	
	m=minimum(a);
	printf("\nmin=%d",m);
	return 0;
}
int maximum(int a[])
{
	int i,m=0;
	for(i=0;i<10;i++)
	{
		if(a[i]>m)
	    m=a[i];
	}
	
    return m;                    	
}
int minimum(int a[])
{
	int i,m=32768;
		for(i=0;i<10;i++)
		{
			if(a[i]<m)
	        m=a[i];
		}
	
    return m;                    
}
