#include <c++/v1/cstdio>
//
// Created by Vividh Prabu on 20/01/26.
//
int gcd(int a,int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int result = arr[0];

    for (int i =1;i<n;i++)
    {
        result = gcd(result,arr[i]);

        if (result == 1)
        {
            break;
        }
    }
    printf("GCD of array elements = %d",result);
}