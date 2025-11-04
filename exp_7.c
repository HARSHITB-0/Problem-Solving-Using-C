#include <stdio.h>
int main()
{
    int choice;
    float a, b;
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    do
    {
        printf("CALCULATOR: \n");
        printf("1. Addtion \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Exit \n");
        printf("Choose Your Operation \n");
        scanf("%d", &choice);
        printf("Enter two numbers: \n");
        scanf("%f %f", &a, &b);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            printf("The sum of %f and %f is %.2f \n", a, b, a + b);
            break;
        case 2:
            printf("Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            printf("The difference of %f and %f is %.2f \n", a, b, a - b);
            break;
        case 3:
            printf("Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            printf("The product of %f and %f is %.2f \n", a, b, a * b);
            break;
        case 4:
            printf("Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("The division of %f and %f is %.2f \n", a, b, a / b);
            else
                printf("Error: denominator can't be zero \n");
            break;
        case 5:
            printf("Bye bye \n");
            break;
        default:
            printf("please enter a no. between 1 and 5 \n");
            break;
        }

    } while (choice != 5);

    return 0;
}