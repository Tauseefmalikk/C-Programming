#include<stdio.h>
int fact(int);
int  main()
{
	int n,f;
	printf("\n enter the value of n");
	scanf("%d",&n);
	f=fact(n);
	printf("\nfactorial=%d",f);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	    f=f*i;
	return f;
	
}
