//
// Created by Vividh Prabu on 23/01/26.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    // realloc() = Reallocation.
    //             Resize previously allocated memory
    //             realloc(ptr, bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = (float*)malloc(number * sizeof(float));

    if(prices == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = (float*)realloc(prices, newNumber * sizeof(float));

    prices = temp;


    for(int i = number; i < newNumber; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    for(int i = 0; i < newNumber; i++)
    {
        printf("$%.2f ", prices[i]);
    }
    free(prices);
    prices=NULL;


    return 0;
}