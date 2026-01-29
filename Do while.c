//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    do
    {
        fact = fact*i;
        i++;
    }
    while (i<=n);
    printf("The factorial of %d is %d",n,fact);

}