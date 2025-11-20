 #include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n");
    
    int number;
    
    printf("Enter an integer to check if it's prime: ");
    scanf("%d", &number);
    
    if (isPrime(number) == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}