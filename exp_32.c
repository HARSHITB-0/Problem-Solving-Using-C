#include <stdio.h>

void findMinMax(int *ptr, int size, int *min, int *max)
{
    *min = *ptr;
    *max = *ptr;
    
    for (int i = 1; i < size; i++)
    {
        int currentElement = *(ptr + i);
        
        if (currentElement < *min)
        {
            *min = currentElement;
        }
        
        if (currentElement > *max)
        {
            *max = currentElement;
        }
    }
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
    
    int min, max;
    
    findMinMax(arr, n, &min, &max);
    
    printf("\n--- Results ---\n");
    printf("Smallest number in the array: %d\n", min);
    printf("Largest number in the array:  %d\n", max);
    
    return 0;
}