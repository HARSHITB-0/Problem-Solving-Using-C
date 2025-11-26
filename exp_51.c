#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile1, *sourceFile2, *destFile;
    char file1[100], file2[100], file3[100];
    char ch;

    // Get the first source file
    printf("Enter the first source filename: ");
    scanf("%s", file1);

    sourceFile1 = fopen(file1, "r");
    if (sourceFile1 == NULL) {
        printf("Error: Could not open first source file '%s'.\n", file1);
        exit(EXIT_FAILURE);
    }

    // Get the second source file
    printf("Enter the second source filename: ");
    scanf("%s", file2);

    sourceFile2 = fopen(file2, "r");
    if (sourceFile2 == NULL) {
        printf("Error: Could not open second source file '%s'.\n", file2);
        fclose(sourceFile1);
        exit(EXIT_FAILURE);
    }

    // Get the destination file
    printf("Enter the destination filename to merge into: ");
    scanf("%s", file3);

    destFile = fopen(file3, "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file '%s'.\n", file3);
        fclose(sourceFile1);
        fclose(sourceFile2);
        exit(EXIT_FAILURE);
    }

    // Copy contents of first file to destination
    while ((ch = fgetc(sourceFile1)) != EOF) {
        fputc(ch, destFile);
    }

    // Copy contents of second file to destination
    while ((ch = fgetc(sourceFile2)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Files merged successfully into '%s'.\n", file3);

    // Close all files
    fclose(sourceFile1);
    fclose(sourceFile2);
    fclose(destFile);

    return 0;
}