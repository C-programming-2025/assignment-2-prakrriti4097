// Write a C program that prints all even numbers between 1 and 100 using a for loop.
#include <stdio.h>
int main() {
    // printf("Even numbers between 1 and 100 are:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}