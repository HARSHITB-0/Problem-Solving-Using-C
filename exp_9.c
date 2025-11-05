#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int original_num;
    int num, rev_num = 0, rem;
    printf("Enter the no. to check for palindrome \n");
    scanf("%d", &original_num);
    original_num = num;
    do
    {
        rem = num % 10;
        rev_num = (rev_num * 10) + rem;
        num = num / 10;
    } while (num != 0);
    if (rev_num == original_num)
    {
        printf("The given no. is a plaindrome. \n");
    }
    else
    printf("The given no. is not a palindrome. \n");
    return 0;
}
