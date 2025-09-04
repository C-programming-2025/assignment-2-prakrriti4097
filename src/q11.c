/* Write a C program that prints a pattern of asterisks.
    *****
     ***
      *
*/
#include <stdio.h>
int main() {
    int n = 5; 
    for (int i = n; i >= 1; i -= 2) {
        for (int j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}