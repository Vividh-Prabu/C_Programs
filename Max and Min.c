//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int i,n,arr[10],min,max;
    printf("Enter the value of n:");
    scanf("%d",&n);

    min = arr[0];
    max = arr[0];
    for (i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=1;i<n;i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max:%d\n",max);
    printf("Min:%d",min);
}