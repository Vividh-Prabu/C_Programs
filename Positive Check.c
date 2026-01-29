//
// Created by Vividh Prabu on 05/12/25.
//
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number to check:");
    scanf("%d",&num);
    if (num>0) {
        printf("%d is a positive number",num);
    }
    else if (num == 0) {
        printf("The given number is 0");
    }
    else {
        printf("%d is a negative number",num);
    }
}