//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}