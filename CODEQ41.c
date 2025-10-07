//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);

    int len = strlen(num);

    if (len > 1) {
        char temp = num[0];
        num[0] = num[len - 1];
        num[len - 1] = temp;
    }

    printf("After swapping first and last digits: %s\n", num);
    return 0;
}