#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal \nRoll no. :125113054\n\n");
    int rows, cols;
    printf("Enter the no. of rows and cols in the array : \n");
    scanf("%d %d", &rows, &cols);
    float martix[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the (%d, %d) element of %d X %d matrix \n", i, j, rows, cols);
            scanf("%f", &martix[i][j]);
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.2f\t", martix[i][j]);
        }
        printf("\n");
    }

    int k = 0;
    float matrix1[k];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix1[k] = martix[i][j]; 
            k++;
        }
        
    }
    float temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (matrix1[j] == matrix1[j+1])
            {
             temp = matrix1[j];
             matrix1[j] = matrix1[j+1];
             matrix1[j+1] = temp;   
            }
        }
        
    }
    int count = 1;
    f
    
    return 0;