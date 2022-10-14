#include <stdio.h>
int password(int);
int main()
{
	int p=9692;
	printf("WELCOME TO TAUSEEF'S SECURITY SYSTEM\n\n");
	printf("please enter your password");
	scanf("%d",&p);
	
	password(p);
	
}
int password(int p)
{
	if(p==9692)
	{
		printf("The password matched successfully");
	}
	else
	{
		printf("The password is incorrect\n");
		printf("2 more tries left\n");
		
		printf("enter your password");
		scanf("%d",&p);
		
		if(p==9692)
	{
		printf("The password matched successfully");
	}
	else
	{
		printf("The password is incorrect\n");
		printf("1 more try left\n");
		
		printf("Enter your password");
		scanf("%d",&p);
		
		if(p==9692)
	{
		printf("The password matched successfully");
	}
	else
	{
		printf("The password is incorrect\n");
		printf("FAKE INPUT,THE SYSTEM IS BLOCKED FOR 24 HOURS");
	}
    }

	return p;
    }
}
