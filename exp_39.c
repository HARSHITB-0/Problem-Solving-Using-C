#include <stdio.h>

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int n;
    
    printf("Enter an integer to find the sum of its digits: \n");
    scanf("%d", &n);
    
    int sum = sumOfDigits(n);
    
    printf("\nThe sum of the digits of %d is: %d\n", n, sum);
    
    return 0;
}