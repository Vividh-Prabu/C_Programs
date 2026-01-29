//
// Created by Vividh Prabu on 07/12/25.
//
/*#include<stdio.h>
void main()
{
    int arr1[2][2],arr2[2][2],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Element:");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Next Array \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Element:");
            scanf("%d",&arr2[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}*/

// You are using GCC
#include <stdio.h>
int main()
{
    int n,lenght=1;
    scanf("%d",&n);
    while (n!=1)
    {
        printf("%d ",n);
        if (n%2==0)
        {
            n = n/2;
        }
        else if (n%2!=0)
            {
            n = 3*n+1;
        }
        lenght ++;
    }
    printf("1");
    printf("\nThe length of the sequence is %d.",lenght);

}


