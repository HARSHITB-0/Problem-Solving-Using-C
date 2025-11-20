#include <stdio.h>

void getMatrixElements(int m, int n, int matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int m, int n, int matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int m, int n, int matrixA[m][n], int matrixB[m][n], int sumMatrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int m, n;
    
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    
    int matrixA[m][n];
    int matrixB[m][n];
    int sumMatrix[m][n];
    
    printf("\n--- Enter elements for the FIRST matrix ---\n");
    getMatrixElements(m, n, matrixA);
    
    printf("\n--- Enter elements for the SECOND matrix ---\n");
    getMatrixElements(m, n, matrixB);
    
    addMatrices(m, n, matrixA, matrixB, sumMatrix);
    
    printf("\n--- The SUM of the two matrices is: ---\n");
    printMatrix(m, n, sumMatrix);
    
    return 0;
}