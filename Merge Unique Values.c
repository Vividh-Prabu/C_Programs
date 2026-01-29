//
// Created by Vividh Prabu on 18/01/26.
//
#include<stdio.h>
int main()
{
    int T;
    printf("Testcase:");
    scanf("%d",&T);

    while (T--)
    {
        int N,M,total,i,j;
        printf("Value of N and M:");
        scanf("%d %d",&N,&M);

        int arr[50];
        total = 0;

        for (i=0;i<N;i++)
        {
            scanf("%d",&arr[total]);
            total ++;
        }
        for (i=0;i<M;i++)
        {
            scanf("%d",&arr[total]);
            total ++;
        }

        for (i=0;i<total-1;i++)
        {
            for (j=i+1;j<total;j++)
            {
                if (arr[i]>arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int unique[50];
        int u = 0;

        for (i=0;i<total;i++)
        {
            if (i == 0 || arr[i] != arr[i-1])
            {
                unique[u] = arr[i];
                u++;
            }
        }
        for(i=0;i<u;i++)
        {
            printf("%d",unique[i]);
            if(i != u-1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}