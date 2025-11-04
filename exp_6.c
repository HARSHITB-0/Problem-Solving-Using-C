#include <stdio.h>
int main()
{
    printf("Name : Harshit Beniwal\nRoll no. : 125113054\n");
    int num, rev_num, rem;
    rev_num = 0;
    printf("Enter the no. to be revrsed \n");
    scanf("%d", &num);
    do
    {
        rem = num % 10;
        rev_num = rem + (rev_num * 10);
        num = num / 10;
    } while (num != 0);
    printf("The reversed no. is : %d \n", rev_num);
    return 0;
}