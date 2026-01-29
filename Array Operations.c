//
// Created by Vividh Prabu on 19/12/25.
//
#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[50];
    int sum = 0, max, min;
    float avg;

    int m1[2][2], m2[2][2], result[2][2];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    avg = sum / (float)n;

    printf("\nSum = %d", sum);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nAverage = %.2f\n", avg);

    printf("\nEnter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &m1[i][j]);

    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &m2[i][j]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            result[i][j] = m1[i][j] + m2[i][j];

    printf("\nSum of the two matrices:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
