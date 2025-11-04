#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no of which multiplication table is required \n");
    scanf("%d", &a);
    int i, product;
    while (i > 0 && i < 11)
    {
        product = a * i;
        printf("%d X %d = %d \n", a, i, product);
        i++;
    }
    return 0;
}
