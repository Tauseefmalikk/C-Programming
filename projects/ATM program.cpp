#include <stdio.h>
int main()
{
	float y,i=10000;
	char z;
	int a=9692;
	
	printf("Enter your 4 digit pin\n");
	scanf("%d",&a);
	
	if(a==9692)
	{
		printf("Enter \nc for credit\nd for debit\nb for balance\n");
	    scanf("\n%c",&z);
	}
	
	else
	{
		printf("incorrect pin\n");
	}

	
	switch(z)
	{
		case 'c':
			printf("Enter the credit amount\n");
			scanf("%f",&y);
			i=i+y;
			printf("New amount=%f",i);
			break;
			
		case 'd':
			printf("Enter the debit amount");
			scanf("%f",&y);

				if(i>=y)
				{
					i=i-y;
					printf("New amount=%f",i);
				}
				else
				{
					 printf("Transaction failed due to insuffient balance");
				}
				   
				break;
		
		case 'b':
			printf("Available balance in your account=%f",i);
			break;
			
		

				
	}
	
	
	
}
