//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int hcf = findHCF(num1, num2);
    int lcm = (num1 * num2) / hcf;
    printf("%d\n", lcm);
    return 0;
}