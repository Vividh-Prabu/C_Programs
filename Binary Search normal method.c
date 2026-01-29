//
// Created by Vividh Prabu on 19/12/25.
//
#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search:\n");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Element not found");
    return 0;
}
