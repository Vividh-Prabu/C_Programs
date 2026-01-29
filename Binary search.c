//
// Created by Vividh Prabu on 19/12/25.
//
#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key)
{
    int mid;

    if (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);
        else
            return binarySearch(arr, mid + 1, high, key);
    }

    return -1;
}

int main()
{
    int n, i, key, result;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}



