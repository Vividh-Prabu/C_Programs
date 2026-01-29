#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    if (n<=1)
    {
        printf("\nIt is not a prime number");
    }
    for (i=2;i*i<=n;i++)
    {
        if (n % i ==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}
