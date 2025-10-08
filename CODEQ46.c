//Q46: Write a program to print the  pattern:
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}