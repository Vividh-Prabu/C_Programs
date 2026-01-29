//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        sum = sum+i;
    }
    printf("The sum of n numbers is %d",sum);
}