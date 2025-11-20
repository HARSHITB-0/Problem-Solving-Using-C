#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    
    *a = *b;
    
    *b = temp;
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int num1, num2;
    
    printf("Enter the first number (num1): ");
    scanf("%d", &num1);
    
    printf("Enter the second number (num2): ");
    scanf("%d", &num2);
    
    printf("\nBefore swap: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}