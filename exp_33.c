#include <stdio.h>

#define SIZE 5

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int arr[SIZE] = {10, 20, 30, 40, 50};
    
    int *ptr;
    
    ptr = arr;
    
    printf("Traversing the array using pointer arithmetic:\n");
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("Element at index %d is: %d\n", i, *(ptr + i));
    }
    
    return 0;
}