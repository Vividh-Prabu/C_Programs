#include<stdio.h>
int main()
{
    int T;
    printf("Testcase:");
    scanf("%d",&T);

    while (T--)
    {
        int n,i,u,l,found=0;;
        printf("\nN:");
        scanf("%d",&n);

        int arr[n];
        for (i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\nLower limit and Upper limit:");
        scanf("%d %d",&l,&u);

        for (i=0;i<n;i++)
        {
            if (arr[i]>=l && arr[i]<=u)
            {
                printf("Found:%d",arr[i]);
                found = 1;
            }
        }
        if (!found)
        {
            printf("No days found");
        }

    }
}