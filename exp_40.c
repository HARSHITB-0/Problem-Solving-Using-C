#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    
    while (right > left)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    
    return 1;
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    char str[200];
    
    printf("Enter a string to check if it's a palindrome: ");
    
    fgets(str, 200, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    if (isPalindrome(str) == 1)
    {
        printf("\n'%s' is a palindrome.\n", str);
    }
    else
    {
        printf("\n'%s' is not a palindrome.\n", str);
    }
    
    return 0;
}