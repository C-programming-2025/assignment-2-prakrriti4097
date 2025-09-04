/* Write a C program that prompts the user for a positive integer and prints a pattern of asterisks (*) in a square shape using nested loops.
Example: User’s Input = 2, then pattern to print will be:
    * *
    * *
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}