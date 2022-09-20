#include <string.h>
#include <stdio.h>
int main()
{
	char str[20];
	int i,j,l,t;
	printf("\nenter the string");
	gets(str);
	l=strlen(str);
	
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=str[i];
		str[i]=str[j];
		str[j]=t;
	}
	printf("the revrese=%s",str);
}
