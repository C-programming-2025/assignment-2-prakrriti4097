// Write a C program that calculates the absolute value of a given number without using the built-in absolute value function.
#include <stdio.h>
int main() {
    int num, absValue;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        absValue = -num;
    } else {
        absValue = num;
    }

    printf("The absolute value is: %d\n", absValue);
    return 0;
}