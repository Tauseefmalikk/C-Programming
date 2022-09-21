#include <stdio.h>
int even_sum(int[3][4]);
int odd_sum(int[3][4]);
int main()
{
	int a[3][4],i,Se,So,j;
	printf("enter the elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	Se=even_sum(a);
	printf("\nthe sum of even elements=%d",Se);
	
	So=odd_sum(a);
	printf("\nthe sum of odd elements=%d",So);
	
}
int even_sum(int a[3][4])
{
	int i,j,Se=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		    if(a[i][j]%2==0)
			{
			    Se=Se+a[i][j];  	
			}	
		}
    }
    return Se;
	
}
int odd_sum(int a[3][4])
{
	int i,j,So=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		    if(a[i][j]%2==0)
			{
			    So=So+a[i][j];  	
			}	
		}
    }
    return So;
}
