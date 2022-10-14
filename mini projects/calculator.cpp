#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    float result;
    printf("Welcome to the Tauseef's' Calculator!!!!\nSum-> +\nSubtract -> -\nMultiplication -> *\nDivide -> /n Modulus -> $\n");
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);
    printf("What operation you want to perform:\n");
    scanf("%s",&operator);
    if (operator=='+') // sum
    {
        result=num1+num2;
        printf("The result of %d and %d is %f.", num1, num2,result);
    }
    else
    {
        if (operator=='-') // subtract
        {
            result=num1-num2;
            printf("The result of %d and %d is %f.", num1, num2,result);
        }
        else
        {
            if (operator== '*') // multiplication
            {
                result=num1*num2;
                printf("The result of %d and %d is %f.", num1, num2,result);
            }
            else 
            {
                if (operator=='/') // divide
                {
                    result=num1/num2;
                    printf("The result of %d and %d is %f.", num1, num2,result);
                }
                else
                {
                    if(operator=='$') // modulus
                    {
                        result=num1%num2;
                        printf("The result of %d and %d is %f.", num1, num2,result);
                    }
                }
            }
        }
    }
    return 0;
}
