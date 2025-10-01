//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    float result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}