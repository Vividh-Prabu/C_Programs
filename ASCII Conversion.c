#include<stdio.h>
int main()
{
    int t;
    int v;
    printf("Enter the no of testcase:");
    scanf("%d",&t);
    while (t--)
    {
        int n;
        printf("\nEnter the value of n:");
        scanf("%d",&n);
        for (int i=0;i<n;i++)
        {
            scanf("%d",&v);
            printf("%c",65+v-1);
        }
        printf("\n");
    }

}