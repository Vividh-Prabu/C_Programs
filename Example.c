#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("%d is Invalid\n", num);
        return 0;
    }

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    if (tens * ones == hundreds) {
        printf("%d is Valid\n", num);
    } else {
        printf("%d is Invalid\n", num);
    }

    return 0;
}
