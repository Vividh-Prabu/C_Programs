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
    printf("The reverse of the number is %d",rev);

}