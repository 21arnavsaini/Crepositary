//Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[201];
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    
    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';

    for (int i = 0; name[i] != '\0'; i++) {
        if ((i == 0 && name[i] != ' ') || (name[i] != ' ' && name[i - 1] == ' ')) {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}
