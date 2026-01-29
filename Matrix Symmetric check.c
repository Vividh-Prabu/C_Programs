//
// Created by Vividh Prabu on 18/01/26.
//
#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter Row and Column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if (r!=c)
    {
        printf("Matrix is not symmetric");
        return 0;
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                printf("Matrix is not symmetric");
            }
        }
    }
    printf("Matrix is symmetric");
}
