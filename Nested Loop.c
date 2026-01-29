//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}