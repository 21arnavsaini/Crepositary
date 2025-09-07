#include <stdio.h>

int main() {
    int i, j, size;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            // Print * at borders only
            if(i == 1 || i == size || j == 1 || j == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}