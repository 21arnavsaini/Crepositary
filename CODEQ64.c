#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    int max_count = 0, max_digit = 0;

    for (int d = 0; d <= 9; d++) {
        long long temp = num;
        int count = 0;
        while (temp > 0) {
            if (temp % 10 == d) {
                count++;
            }
            temp /= 10;
        }
        if (count > max_count) {
            max_count = count;
            max_digit = d;
        }
    }

    printf("Digit that occurs most: %d\n", max_digit);
    return 0;
}