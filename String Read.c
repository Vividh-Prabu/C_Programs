//
// Created by Vividh Prabu on 18/01/26.
//
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100],name1[100];
    printf("Enter the name:");
    // scanf("%s",name); -> Reads only the character before the first empty space
    // gets(name); -> Reads the entire input
    // fgets(name,sizeof(name),stdin); -> Reads the entire input
    scanf("%[^\n]s",name);// Vividh Prabu

    printf("Your name is %s",name); // Vividh


}