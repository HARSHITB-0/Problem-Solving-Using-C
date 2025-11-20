#include <stdio.h>

void getMatrixElements(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
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
    
    int n;
    
    printf("Enter the order (n) of the square matrix (e.g., 3 for 3x3): ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Error: Matrix size must be positive.\n");
        return 1;
    }
    
    int matrix[n][n];
    
    printf("\n--- Enter elements for the %d x %d matrix ---\n", n, n);
    getMatrixElements(n, matrix);
    
    printf("\n--- Your Matrix ---\n");
    printMatrix(n, matrix);
    
    int main_sum = 0;
    int secondary_sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        main_sum += matrix[i][i];
        secondary_sum += matrix[i][n - 1 - i];
    }
    
    printf("\n--- Results ---\n");
    printf("Sum of the main diagonal: %d\n", main_sum);
    printf("Sum of the secondary diagonal: %d\n", secondary_sum);
    
    return 0;
}