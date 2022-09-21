#include<stdio.h>
int main(){
    int b,c,d;
    printf("Enter a number:\n");
    scanf("%d",&b);
    for (c=1;c<=b;c++)
    {
        if (b%c==0)
        {
            d++;
        }
    }
    if (d==2)
    {
        printf("The number %d is a prime number.",b);
    }
    else
    {
        printf("The number %d is not a prime number:/",b);
    }
  return 0;
}
