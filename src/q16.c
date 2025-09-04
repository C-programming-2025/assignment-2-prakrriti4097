// Write a C program that calculates the factorial of a given number using a do-while loop.
#include <stdio.h>
int main() {
    int num;
    unsigned long long factorial = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        do {
            factorial *= i; 
            i++; 
        } while (i <= num);
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}