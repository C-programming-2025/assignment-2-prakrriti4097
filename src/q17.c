// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Countdown from %d to 1:\n", num);
        for (int i = num; i >= 1; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}