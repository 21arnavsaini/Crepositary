//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}