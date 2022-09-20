#include<stdio.h>
int main()
{
	char str[10]="tauseef";
	char *p;
	int c=0;
	
	p=str;
	
	while(*p!='\0')
	{
		c++;
		p++;
	}
	printf("the lenght of string=%d",c);
}
