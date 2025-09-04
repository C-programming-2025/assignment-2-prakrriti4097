// Write a C program that prompts the user for a positive integer and prints all the factors of that number using a for loop.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Factors of %d are:\n", num);
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}