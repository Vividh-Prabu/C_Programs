//
// Created by Vividh Prabu on 07/12/25.
//
#include<stdio.h>
#include<string.h>
void main() {
    int n,i;
    char str[50],str2[50],str3[50];

    printf("Enter the 1st string:");
    scanf("%s",str);

    printf("Enter the 2nd string:");
    scanf("%s",str2);

    strcpy(str3,str);
    printf("\nCopied String is %s",str3);

    printf("%d\n",strcmp(str,str2)); // Used to compare the each element in the both string,if both the elements are not same it will return the difference of the both ASCII value


    strcat(str,str2); // Adding the two or more string into a single string
    printf("After concatenation:%s",str);

    n = strlen(str); // Finding the length of the string
    printf("%d \n",n);

}