#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the two numbers to swap:");
    scanf("%d %d",&a,&b);
    printf("\nBefore swapping a=%d,b=%d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("After swapping a=%d,b=%d\n",a,b);

}