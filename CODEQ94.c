//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[111];
    char longestWord[11] = "";
    char currentWord[11];
    int maxLength = 0;

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

    int i = 0, j = 0;
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            currentWord[j++] = sentence[i];
        } else {
            currentWord[j] = '\0';
            if (j > maxLength) {
                maxLength = j;
                strcpy(longestWord, currentWord);
            }
            j = 0;
            if (sentence[i] == '\0') break;
        }
        i++;
    }

    printf("%s\n", longestWord);
    return 0;
}
