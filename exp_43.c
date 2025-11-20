#include <stdio.h>

void callByValue(int num)
{
    num = 100;
    printf("Inside callByValue, num is: %d\n", num);
}

void callByReference(int *numPtr)
{
    *numPtr = 200;
    printf("Inside callByReference, *numPtr is: %d\n", *numPtr);
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int a = 10;
    
    printf("--- Call By Value ---\n");
    printf("Before function, a = %d\n", a);
    callByValue(a);
    printf("After function,  a = %d\n", a);
    
    printf("\n--- Call By Reference ---\n");
    printf("Before function, a = %d\n", a);
    callByReference(&a);
    printf("After function,  a = %d\n", a);
    
    return 0;
}