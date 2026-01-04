// program to perform matrix operations addition, subtraction and 
// transpose? 
#include <stdio.h>


void readMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], sum[r][c], diff[r][c], trans[c][r];

    printf("\n--- Matrix A ---\n");
    readMatrix(r, c, A);

    printf("\n--- Matrix B ---\n");
    readMatrix(r, c, B);

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];    
            diff[i][j] = A[i][j] - B[i][j];   
            trans[j][i] = A[i][j];             
        }
    }

    printf("\nAddition (A + B):\n");
    displayMatrix(r, c, sum);

    printf("\nSubtraction (A - B):\n");
    displayMatrix(r, c, diff);

    printf("\nTranspose of A:\n");
    displayMatrix(c, r, trans); // Note: rows and cols are swapped

    return 0;
}