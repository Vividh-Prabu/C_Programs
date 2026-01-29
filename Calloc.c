//
// Created by Vividh Prabu on 23/01/26.
//
// You are using GCC
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    int i,j;
    int sum=0;
    printf("Enter the rows and columns:");
    scanf("%d %d",&r,&c);

    int **m = (int**)calloc(r,sizeof(int *));

    for(i=0;i<r;i++)
    {
        m[i] = (int*)calloc(c,sizeof(int));
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum += m[i][j];
        }
    }
    free(m);
    printf("%d",sum);
}