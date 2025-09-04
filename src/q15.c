// Write a C program that prompts the user for a positive integer and checks if it is a prime number using a while loop.
#include <stdio.h>
int main() {
    int num, i = 2, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {
        while (i * i <= num) { 
            if (num % i == 0) {
                isPrime = 0; 
                break; 
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}