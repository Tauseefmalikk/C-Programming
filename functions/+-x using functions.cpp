#include <stdio.h>
int sum(int,int);
int sub(int,int);
float div(float,float);
int mul(int,int);
int main()
{
	int a,b,c;
	printf("enter the values  a  and b");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("\nsum=%d",c);
	c=sub(a,b);
	printf("\nsub=%d",c);
	c=div(a,b);
	printf("\ndiv=%f",c);
	c=mul(a,b);
	printf("\nmul=%d",c);
}
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
float div(float a,float b)
{
	return a/b;
}
int mul(int a,int b)
{
	return a*b;
}
