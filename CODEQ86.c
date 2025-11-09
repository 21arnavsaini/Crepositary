//Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char s[11];
    printf("Enter a string: ");
    scanf("%s", s);
    int n = strlen(s), flag = 1;
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
