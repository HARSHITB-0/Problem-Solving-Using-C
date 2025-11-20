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

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int m, n;
    
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    
    int matrix[m][n];
    int transpose[n][m];
    
    printf("\n--- Enter elements for the original matrix ---\n");
    getMatrixElements(m, n, matrix);
    
    printf("\n--- Original Matrix (%d x %d) ---\n", m, n);
    printMatrix(m, n, matrix);
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("\n--- Transpose Matrix (%d x %d) ---\n", n, m);
    printMatrix(n, m, transpose);
    
    return 0;
}