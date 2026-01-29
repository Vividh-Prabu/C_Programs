//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int arr[10],i;
    arr[0] = 18;
    arr[1] = 45;
    arr[2] = 7;
    for (i=3;i<6;i++)
    {
        printf("Enter the value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<6;i++) {
        printf("%d\n",arr[i]);
    }

}