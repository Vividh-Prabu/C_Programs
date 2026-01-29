//
// Created by Vividh Prabu on 06/12/25.
//
#include<stdio.h>
void main()
{
    int i,j,n,flag=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for (j=1;j<=n;j++)
    {
        if (j==1)
        {
            printf("Not Prime number\n");
            continue;
        }
        flag = 0;
        for (i=2;i<j;i++)
        {
            if (j%i!=0)
            {
                continue;
            }
            else
            {
                flag = 1;
                printf("Not Prime number\n",n);
                break;
            }

        }
        if (flag==0)
        {
            printf("Prime Number\n",n);
        }
    }
}