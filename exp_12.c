#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no. of elements in the array \n");
    scanf("%d", &a);
    float vector[a], temp;
    int i;
    for (i = 0; i < a; i++)
    {
        printf("Enter the %d element of array :\n", i);
        scanf("%f", &vector[i]);
    }
    for (i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    printf("The array sorted in acsending order is : \n");
    for (i = 0; i < a; i++)
    {
        printf("%.3f\n", vector[i]);
    }
    printf("\n");
    return 0;
}
