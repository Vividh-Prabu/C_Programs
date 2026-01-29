//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
     int arr[50],n,i,sum=0;
     float avg;
     printf("Enter the number of elements:");
     scanf("%d",&n);

     for (i=0;i<n;i++)
     {
          printf("Element %d:",i+1);
          scanf("%d",&arr[i]);
          sum += arr[i];
     }
     avg = (sum/n);
     printf("Sum:%d",sum);
     printf("\nAverage:%f",avg);
}
