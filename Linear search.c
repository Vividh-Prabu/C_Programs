//
// Created by Vividh Prabu on 19/12/25.
//
#include <stdio.h>

int main()
{
    int n, i, key, flag = 0;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d", i + 1);
            flag = 1;
            break;
        }
        else
        {
            printf("Element not found");
            break;
        }
    }
    // if(flag == 0)
    //     printf("Element not found");

    return 0;
}
