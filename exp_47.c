#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    sourceFile = fopen(sourceFilename, "r");

    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    destFile = fopen(destFilename, "w");

    if (destFile == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}