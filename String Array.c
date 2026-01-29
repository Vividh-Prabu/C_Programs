//
// Created by Vividh Prabu on 07/12/25.
//
#include<stdio.h>
#include<string.h>
void main()
{
    int n,i;
    char str[50];
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter the string:");
    scanf("%s",&str);

    for (i=0;i<n;i++)
    {
        printf("%c\n",str[i]);
    }
}
