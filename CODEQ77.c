//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square. Diagonal check is not applicable.\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at position a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    bool isDistinct = true;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) break;
    }

    if (isDistinct)
        printf("Distinct\n");
    else
        printf("Not Distinct\n");

    return 0;
}