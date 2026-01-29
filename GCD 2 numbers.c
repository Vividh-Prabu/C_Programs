//
// Created by Vividh Prabu on 20/01/26.
//
#include <stdio.h>

int gcd(int a,int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;

    }
    return a;
}

int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);

    printf("\nGCD of %d and %d: %d",a,b,gcd(a,b));

}