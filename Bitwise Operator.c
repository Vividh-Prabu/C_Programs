//
// Created by Vividh Prabu on 18/01/26.
//
#include<stdio.h>
int main()
{
    int a,b,z;
    a = 2;
    b = 3;

    z = a & b;
    printf("Value of the AND operator is %d",z);

    z = a | b;
    printf("\nValue of the OR operator is %d",z);

    z = a ^ b;
    printf("\nValue of the XOR operator is %d",z);

    z = ~a;
    printf("\nValue of the NOT operator is %d",z);

    z = a >> b;
    printf("\nValue of the right shift is %d",z);

    z = a << b;
    printf("\nValue of the left shift is %d",z);

}