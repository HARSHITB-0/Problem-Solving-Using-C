#include <stdio.h>

float calculateAverage(int arr[], int size)
{
    if (size <= 0)
    {
        return 0.0;
    }
    
    float sum = 0.0;
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum / size;
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Invalid size.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    float avg = calculateAverage(arr, n);
    
    printf("\nThe average of the array elements is: %.2f\n", avg);
    
    return 0;
}