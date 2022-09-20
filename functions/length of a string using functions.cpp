#include <stdio.h>
int length(char[]);
int main()
{
	char str[10];
	int l;
	printf("\n enter the string");
	scanf("%s",&str);
	l=length(str);
	printf("\nlength=%d",l);
	
}
int length(char str[])
{
	int i;
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
