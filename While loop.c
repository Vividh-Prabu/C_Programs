//
// Created by Vividh Prabu on 06/12/25.
//
#include <stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("Sum of the numbers is %d",sum);

}