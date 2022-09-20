#include <stdio.h>
int main()
{
	char str[10];
	int i,c=0;
	printf("\nenter the string");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
    {
    	c++;
	}
	printf("the length of string=%d",c);
}

