#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, next, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number");
        return 0;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
