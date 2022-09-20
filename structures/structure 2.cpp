#include <stdio.h>
struct students
{
	int registration_no;
	char name[20];
	float marks;
};
int main()
{  
    int topper_rollno,max_marks;


	struct students a[20];
	int i,n;
	printf("enter the total number of students present in class");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the registration no.,name and marks of %d student",i+1);
     	scanf("%d%s%f",&a[i].registration_no,&a[i].name,&a[i].marks);
	}

	
	 printf("registration no.\tname\tmarks\n");
	 for(i=0;i<n;i++)
	 printf("%d\t\t\t%s\t%f\n",a[i].registration_no,a[i].name,a[i].marks);
	 
	 max_marks=a[0].marks;
	 topper_rollno=1;
	 
	 for(i=1;i<n;i++)
	 {
	 	if(max_marks<a[i].marks)
	 	{
	 		max_marks=a[i].marks;
	 		topper_rollno=i+1;
	    }
	 }
	 printf("the topper is roll no.=%d and has marks=%f",topper_rollno,max_marks);
}
