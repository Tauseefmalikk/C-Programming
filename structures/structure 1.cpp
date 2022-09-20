#include <stdio.h>
struct employe
{
	int employeid;
	char name[30];
	float salary;
	
};
int main()
{
	struct employe a[50];
	int n,i;
	printf("enter the total number of working employes in company");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the employe id,name,salary of employe %d",i+1);
	    scanf("%d%s%f",&a[i].employeid,&a[i].name,&a[i].salary);
	} 
	
	printf("employe id\tname\tsalary\n");
    for(i=0;i<n;i++)
    printf("%d\t\t%s\t%f\n",a[i].employeid,a[i].name,a[i].salary);
	

 
}
