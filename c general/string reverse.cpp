#include<string.h>
#include <stdio.h>
int main()
{
	char str[20];
	int i,l;
	printf("\nenter the string");
	gets(str);
	l=strlen(str);
	printf("\nthe reverse="); 
	for(i=l-1;i>=0;i--)
	printf("%c",str[i]);
}

