//
// Created by Vividh Prabu on 19/12/25.
//
#include <stdio.h>

int main()
{
    int n, i, j, key, arr[10];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
