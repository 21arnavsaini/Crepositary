//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0';

    int start = 0, end = 0;

    while (str[end] != '\0') {
        if (str[end] != ' ') {
            end++;
        } else {
            int left = start, right = end - 1;
            while (left < right) {
                char tmp = str[left];
                str[left] = str[right];
                str[right] = tmp;
                left++;
                right--;
            }
            end++;
            start = end;
        }
    }

    int left = start, right = end - 1;
    while (left < right) {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }

    printf("%s\n", str);
    return 0;
}
