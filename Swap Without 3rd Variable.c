//
// Created by Vividh Prabu on 18/01/26.
//
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before Swapping:\n");
    printf("a = %d, b = %d",a,b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}