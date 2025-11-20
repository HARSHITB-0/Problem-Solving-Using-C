#include <stdio.h>

int sumElements(int *ptr, int size)
{
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i);
    }
    
    return sum;
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
    
    int total = sumElements(arr, n);
    
    printf("\nThe sum of the array elements is: %d\n", total);
    
    return 0;
}