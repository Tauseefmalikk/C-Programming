#include <stdio.h>
int password(int);
int main()
{
	int p=9692;
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\t||WELCOME TO TAUSEEF'S SECURITY SYSTEM||\n\n\n\n");
	printf("please enter your password\n");
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
		printf("Warning!...2 more tries left\n");
		
		printf("enter your password\n");
		scanf("%d",&p);
		
		if(p==9692)
	{
		printf("The password matched successfully");
	}
	else
	{
		printf("The password is incorrect\n");
		printf("Warning!...1 more try left\n");
		
		printf("Enter your password\n");
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
