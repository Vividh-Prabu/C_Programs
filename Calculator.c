//
// Created by Vividh Prabu on 06/12/25.
//
#include <stdio.h>
void main()
{
    int num1,num2,func;
    printf("Enter the 1st Number:");
    scanf("%d",&num1);

    printf("Enter the 2nd NUmber:");
    scanf("%d",&num2);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");

    printf("\nEnter the serial no of operation which you want to perform:");
    scanf("%d",&func);

    if (func == 1)
    {
        int sum;
        sum = num1+num2;
        printf("Sum is:%d",sum);

    }
    else if (func==2)
    {
        int sub;
        sub = num1-num2;
        printf("Sub is:%d",sub);
    }
    else if (func==3)
    {
        int mul;
        mul = num1*num2;
        printf("Mul is:%d",mul);
    }
    else if (func==4)
    {
        float div;
        div = num1/num2;
        printf("Div is:%f",div);
    }
    else
    {
        printf("Invalid operator");
    }
}