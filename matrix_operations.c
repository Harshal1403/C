#include <stdio.h>

int main() {
    // Declare matrices and variables
    int mat1[100][100], mat2[100][100], r1, r2, c1, c2, i, j, k;
    int sum[100][100], sub[100][100], t[100][100], ch;

    // Input for matrix 1
    printf("Enter no of rows in matrix 1: ");
    scanf("%d", &r1);
    printf("Enter no of columns in matrix 1: ");
    scanf("%d", &c1);

    // Populate matrix 1
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element at position (%d,%d): ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for matrix 2
    printf("Enter no of rows in matrix 2: ");
    scanf("%d", &r2);
    printf("Enter no of columns in matrix 2: ");
    scanf("%d", &c2);

    // Populate matrix 2
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element at position (%d,%d): ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Start of choice section
    choice:

    // Display menu
    printf("\nEnter your choice:\n1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n");
    scanf("%d", &ch);

    // Perform operation based on user choice
    switch (ch) {
        case 1:
            // Matrix addition
            if (r1 == r2 && c1 == c2) {
                printf("\nMatrix addition:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        sum[i][j] = mat1[i][j] + mat2[i][j];
                        printf("\t%d", sum[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Addition not possible\n");
            }
            break;

        case 2:
            // Matrix subtraction
            if (r1 == r2 && c1 == c2) {
                printf("\nMatrix subtraction:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        sub[i][j] = mat1[i][j] - mat2[i][j];
                        printf("\t%d", sub[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Subtraction not possible\n");
            }
            break;

        case 3:
            // Matrix multiplication
            if (c1 == r2) {
                int mult[100][100] = {0}; // Initialize the result matrix to zero
                printf("\nMatrix multiplication:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        for (k = 0; k < c1; k++) {
                            mult[i][j] += (mat1[i][k] * mat2[k][j]);
                        }
                        printf("\t%d", mult[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Multiplication not possible\n");
            }
            break;

        case 4:
            // Transpose of matrix 1
            printf("\nTranspose of matrix:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++) {
                    t[j][i] = mat1[i][j];
                }
            }
            for (i = 0; i < c1; i++) {
                for (j = 0; j < r1; j++) {
                    printf("\t%d", t[i][j]);
                }
                printf("\n");
            }
            break;
    }

    // Ask user if they want to continue
    printf("\nDo you want to continue? Press 1\n");
    scanf("%d", &ch);
    if (ch == 1) {
        goto choice;
    } else {
        printf("Thank you\n");
    }

    return 0;
}
