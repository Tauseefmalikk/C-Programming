#include <stdio.h>
int main()
{
	int a[6],c1=0,c2=0,i,ch;
	printf("\nenter the elements of an array");
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	
	printf("the array contains");
	for(i=0;i<6;i++)
	printf("%d,",a[i]);
    
    printf("\n1.sum of array");
    printf("\n2.count even and odd numbers");
    printf("\n3.sum of positive and negative values");
    printf("\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:for(i=0;i<6;i++)
    	       c1=c1+a[i];
    	       printf("\nsum of array is=%d",c1);
    	       break;
		case 2:
			for(i=0;i<6;i++)
			{
				if(a[i]%2==0)
				c1++;
			else
				c2++;
			}
			printf("\neven=%d \n odd=%d",c1,c2);
			break;
		case 3:
			for(i=0;i<6;i++)
			{
				if(a[i]>0)
				c1=c1+a[i];
				else if(a[i]<0)
				c2=c2+a[i];
				
			}
        printf("\npositive=%d \nnegative=%d",c1,c2);
		break;
	default:
	       	printf("\nwrong choice");
	}
	return 0;
}
