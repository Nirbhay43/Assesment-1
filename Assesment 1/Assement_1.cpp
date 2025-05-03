/* Write a program to make multiplication of 2-D Matrix
Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.
Adhere to the coding principles
To Accomplish this program you have to use 2-Dimensional Array concept
Firstly take the matrix input from user and display elements in Matrix format :*/

#include <stdio.h>

#define MAX 10  // Define maximum matrix size for simplicity

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j, k;

    // Step 1: Take matrix dimensions from user
    printf("Matrix Multiplication Program\n");
    printf("------------------------------\n");

    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &r1);
    printf("Enter number of columns for Matrix A: ");
    scanf("%d", &c1);

    printf("Enter number of rows for Matrix B: ");
    scanf("%d", &r2);
    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &c2);

    // Step 2: Validate matrix multiplication rule
    if (c1 != r2) {
        printf("\nMatrix multiplication is not possible.\n");
        printf("Number of columns of Matrix A must be equal to number of rows of Matrix B.\n");
        return 0;
    }

    // Step 3: Input elements of Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Step 4: Input elements of Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Step 5: Display Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Step 6: Display Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Step 7: Initialize result matrix to zero
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Step 8: Multiply matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Step 9: Display the result matrix
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    // Program complete
    printf("\nMatrix multiplication completed successfully.\n");

    return 0;
}

