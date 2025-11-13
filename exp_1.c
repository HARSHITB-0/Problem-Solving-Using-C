#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n\n");
    int a;
    printf("Please enter a positive integer: \n");
    scanf("%d", &a);
    while (a<0)
    {
        /* code */
        printf("please re enter a positive integer:\n");
        scanf("%d", &a);
    }
    
    if (a%2==0)
    {
        printf("The entered no. %d is an even no.", a);
    }
    else 
    printf("The entered no. %d is an odd no.", a);
    return 0;
}