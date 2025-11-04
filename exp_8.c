#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int i, a;
    long long unsigned factorial = 1;
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n");
    printf("Enter the integer: \n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        /* code */
        factorial = factorial * i; 
    }
    printf("The factorial is: %llu \n", factorial);
    return 0;
}