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
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter text to write to the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);

    fclose(fptr);

    printf("Data written to user_input.txt successfully.\n");

    return 0;
}