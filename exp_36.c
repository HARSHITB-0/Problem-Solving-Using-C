#include <stdio.h>

unsigned long long factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (unsigned long long)num * factorial(num - 1);
    }
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int n;
    
    printf("Enter a number to find its factorial: \n");
    scanf("%d", &n);
    
    if (n < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    else
    {
        unsigned long long result = factorial(n);
        printf("The factorial of %d is %llu\n", n, result);
    }
    
    return 0;
}