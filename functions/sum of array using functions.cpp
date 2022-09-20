 #include <stdio.h>
 int sum(int a[]);
 int main()
 {
 	int a[5],i,s;
 	printf("enter the elements of an array");
 	for(i=0;i<5;i++)
 	scanf("%d",&a[i]);
 	
 	s=sum(a);
 	
 	printf("the sum of array is=%d",s);
 }
 int sum(int a[])
 {
 	int i,s=0;
 	
 	for(i=0;i<5;i++)
 	s=s+a[i];
 	return s;
 }
