#include <stdio.h>
#include <string.h>

int stringLength(char *ptr)
{
    int count = 0;
    
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    
    return count;
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    char str[200];
    
    printf("Enter a string: ");
    
    fgets(str, 200, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    int len = stringLength(str);
    
    printf("The length of the string is: %d\n", len);
    
    return 0;
}