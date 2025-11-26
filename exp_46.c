#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");

    FILE *fptr;
    char text[1000];

    fptr = fopen("user_input.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter text to write to the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);

    fclose(fptr);

    printf("Data written to user_input.txt successfully.\n");

    printf("\n--- Reading and Analyzing file ---\n");

    fptr = fopen("user_input.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    int characters = 0;
    int words = 0;
    int lines = 0;
    char ch;
    int in_word = 0;

    printf("Content of the file:\n");

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
        
        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            words++;
        }
    }

    if (characters > 0 && lines == 0)
    {
        lines = 1;
    }

    fclose(fptr);

    printf("\n\n--- File Statistics ---\n");
    printf("Total Characters: %d\n", characters);
    printf("Total Words:      %d\n", words);
    printf("Total Lines:      %d\n", lines);
    
    return 0;
}