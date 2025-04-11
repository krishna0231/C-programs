#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int m, int n, int p, int q, int matrix1[m][n], int matrix2[p][q], int result[m][q]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;

    // Input dimensions of the matrices
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[m][n], matrix2[p][q], result[m][q];

    // Input matrices
    inputMatrix(m, n, matrix1);
    inputMatrix(p, q, matrix2);

    // Perform multiplication
    multiplyMatrices(m, n, p, q, matrix1, matrix2, result);

    // Print the result
    printf("Resultant matrix after multiplication:\n");
    printMatrix(m, q, result);

    return 0;
}
