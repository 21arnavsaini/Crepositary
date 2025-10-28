//Q74: Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}