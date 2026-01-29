//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int n,rev=0,copy;
    printf("Enter the value of n:");
    scanf("%d",&n);

    copy = n;
    while (copy>0)
    {
        rev = rev*10;
        rev = rev+(copy%10);
        copy /= 10;
    }
    printf("The reverse of the number is %d\n",rev);
    if (n == rev)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
}