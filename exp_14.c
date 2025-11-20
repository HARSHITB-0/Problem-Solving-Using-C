#include <stdio.h>

void merge(int arr1[], int n, int arr2[], int n1, int merged_array[])
{
    int i, k;

    for (i = 0; i < n; i++)
    {
        merged_array[i] = arr1[i];
    }

    for (k = 0; k < n1; k++)
    {
        merged_array[i] = arr2[k];
        i++;
    }
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int n;
    printf("Enter the no. of elements in 1st array: \n");
    scanf("%d", &n); 

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: \n", i);
        scanf("%d", &arr1[i]); 
    }

    int n1;
    printf("Enter the no. of elements in 2nd array: \n");
    scanf("%d", &n1); 

    int arr2[n1];
    for (int i = 0; i < n1; i++)
    {
        printf("Enter element %d: \n", i);
        scanf("%d", &arr2[i]); 
    }

    int merged_size = n + n1;
    int merged_array[merged_size];

    merge(arr1, n, arr2, n1, merged_array);

    printf("\nThe merged array is:\n");
    for (int i = 0; i < merged_size; i++)
    {
        printf("%d ", merged_array[i]);
    }
    printf("\n");
    
    return 0;
}