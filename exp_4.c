#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal \nRoll no. :125113054\n\n");
    int n;
    printf("Enter the no upto which sum is required : \n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum =  sum + i;
    }
    printf("sum %d integers is %d", n, sum);
    return 0;
}