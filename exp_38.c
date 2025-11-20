#include <stdio.h>

int reverseNumber(int num)
{
    int reversed_num = 0;
    int remainder;
    
    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num = num / 10;
    }
    
    return reversed_num;
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    int n;
    
    printf("Enter an integer to reverse: ");
    scanf("%d", &n);
    
    int reversed = reverseNumber(n);
    
    printf("\nOriginal number: %d\n", n);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}