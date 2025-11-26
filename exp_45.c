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

    printf("\n--- Reading from file ---\n");

    fptr = fopen("user_input.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("Content of the file:\n");

    while (fgets(text, sizeof(text), fptr) != NULL)
    {
        printf("%s", text);
    }

    fclose(fptr);

    return 0;
}