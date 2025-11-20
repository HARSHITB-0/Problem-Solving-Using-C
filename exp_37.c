#include <stdio.h>

int findGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n");

    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("\n");
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}