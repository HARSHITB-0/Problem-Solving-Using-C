#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int a;
    printf("Please enter the no of entries :\n");
    scanf("%d", &a);
    int vector[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d term : \n", i);
        scanf("%d", &vector[i]);
    }
    printf("You entered : \n");
    for (int i = 0; i < a; i++)
    {
        printf("%d \n", vector[i]);
    }
    printf("\n");
    printf("Average of given %d no. in array is : \n", a);
    int sum= 0;
    float avg;
    for (int i = 0; i < a; i++)
    {
        sum = ( sum + vector[i] );
    }
    avg = sum / a;
    printf("Sum = %d\n", sum);
    printf("Avg = %.2f \n", avg);
    return 0;
}