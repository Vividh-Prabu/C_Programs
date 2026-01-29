//
// Created by Vividh Prabu on 06/12/25.
//
#include <stdio.h>
void main()
{
    int num1,num2,func;
    printf("Enter the 1st Number:");
    scanf("%d",&num1);

    printf("Enter the 2nd Number:");
    scanf("%d",&num2);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");

    printf("\nEnter the serial no of operation which you want to perform:");
    scanf("%d",&func);

    switch (func)
    {
        case 1:
            printf("Sum is:%d",num1+num2);
            break;

        case 2:
            printf("Sub is:%d",num1-num2);
            break;
        case 3:
            printf("Product is:%d",num1*num2);
            break;
        case 4:
            printf("Division is:%d",num1/num2);
            break;
        default:
            printf("Invalid Operator");
    }







}