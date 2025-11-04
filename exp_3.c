#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int a;
    printf("Please enter a year from 1000 to 9999:\n");
    scanf("%d", &a);
    while(a<1000 || a>9999)
    {
        printf("Please enter a valid year:\n");
        scanf("%d", &a);
    }
    if((a%4==0 && a%100!=0)||(a%400==0))
    {
        printf("The year %d is a leap year", a);
    }
    else 
    printf("The year %d is not a leap year", a);
    return 0;
}