#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int a, b, c, largest;
    printf("Enter the 3 numbers to be compared : \n");
    scanf("%d %d %d", &a, &b, &c);
    a = largest;
    if (largest < b || largest < c )
    {
        if (b > c)
        {
            printf("The largest no. is %d", b);
        }
        else
        printf("The largest no. is %d", c);
    }
    else
    printf("The largest no. is %d", a);
    return 0;
} 