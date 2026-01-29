//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main() {
    int n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    while (n>0)
    {
        sum = sum+(n%10);
        n = n/10;
    }
    printf("Sum of the digits:%d",sum);
}