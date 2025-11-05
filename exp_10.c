#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int a;
    printf("Enter no. of elements in 1D array :\n");
    scanf("%d", &a);
    int vector[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d element of  array \n", i);
        scanf("%d", &vector[i]);
    }
    int largest = vector[0];
    for (int i = 0; i < a; i++)
    {
        if (vector[i] > largest)
        {
            largest = vector[i];
        }
        
    }
    printf("The largest no in the array is %d", largest);
    return 0;
}
