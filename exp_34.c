#include <stdio.h>

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int var = 500;
    
    int *ptr1;
    
    int **ptr2;
    
    ptr1 = &var;
    
    ptr2 = &ptr1;
    
    printf("--- Variable 'var' ---\n");
    printf("Value of var: %d\n", var);
    printf("Address of var (&var): %p\n", (void*)&var);
    
    printf("\n--- Pointer 'ptr1' (pointer to int) ---\n");
    printf("Value of ptr1 (address of var): %p\n", (void*)ptr1);
    printf("Address of ptr1 (&ptr1): %p\n", (void*)&ptr1);
    printf("Value at *ptr1 (dereferenced): %d\n", *ptr1);
    
    printf("\n--- Pointer 'ptr2' (pointer to pointer to int) ---\n");
    printf("Value of ptr2 (address of ptr1): %p\n", (void*)ptr2);
    printf("Value at *ptr2 (dereferenced, gives address of var): %p\n", (void*)*ptr2);
    printf("Value at **ptr2 (double dereferenced): %d\n", **ptr2);
    
    printf("\n--- Modifying 'var' using ptr2 ---\n");
    
    **ptr2 = 1000;
    
    printf("New value of var: %d\n", var);
    
    return 0;
}