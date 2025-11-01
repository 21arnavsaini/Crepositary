//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    if (r1 != r2 || c1 != c2) {
        printf("Matrix dimensions must match.\n");
        return 1;
    }

    int sum[r1][c1];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}