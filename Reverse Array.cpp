//
// Created by Vividh Prabu on 16/12/25.
//
#include<stdio.h>
int main()
{
    int i,n,arr[n],rev[n];
    printf("Enter the size of array:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original Array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        rev[i] = arr[n-i-1];
    }
    printf("\nReversed Array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
}