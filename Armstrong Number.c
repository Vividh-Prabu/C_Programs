//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
#include<math.h>
void main()
{
    int n,copy,digit=0,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    copy = n;
    while (copy>0)
    {
        copy = copy/10;
        digit++;
    }
    copy = n;
    while (copy>0)
    {
        sum = sum+pow((copy%10),digit);
        copy = copy/10;
    }
    if (sum==n)
    {
        printf("%d is an Armstrong Number",n);
    }
    else
    {
        printf("%d is not an Armstrong Number",n);
    }

}