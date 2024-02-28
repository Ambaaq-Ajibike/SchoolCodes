#include <stdio.h>
#include <stdlib.h>

void AddMatrices(int a[100][100], int b[100][100], int row, int col);

int main(int argc, char *argv[]) {
    int row, col;
    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &col);

    int a[row][col], b[row][col], i, j;

    printf("Enter elements for matrix A:\n");
    for (i = 0; i < row;  i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element %d, %d of matrix A: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for matrix B:\n");
    for (i = 0; i < row;  i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element %d, %d of matrix B: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    AddMatrices(a, b, row, col);

    return 0;
}

void AddMatrices(int a[100][100], int b[100][100], int row, int col) {
    int c[row][col], i, j;
    for (i = 0; i < row; i++) {
        for (j = 0;  j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

