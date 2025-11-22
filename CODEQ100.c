//Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    printf("enter the string\n");
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1)) {
                printf(",");
            }
        }
    }
    return 0;
}
