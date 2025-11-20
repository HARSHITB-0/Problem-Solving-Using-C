#include <stdio.h>
#include <string.h>

void stringCopy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0';
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    char source[200];
    char destination[200];
    
    printf("Enter a string to copy: ");
    
    fgets(source, 200, stdin);
    
    source[strcspn(source, "\n")] = '\0';
    
    stringCopy(destination, source);
    
    printf("\nOriginal string: %s\n", source);
    printf("Copied string:   %s\n", destination);
    
    return 0;
}