#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    int number;
    int sum = 0;
    int count = 0;
    float average;

    printf("Enter the source filename (containing numbers): ");
    scanf("%s", sourceFilename);

    sourceFile = fopen(sourceFilename, "r");

    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Appending results to the destination file
    destFile = fopen(destFilename, "a");

    if (destFile == NULL) {
        printf("Error: Could not open destination file for appending.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Read numbers from the file
    while (fscanf(sourceFile, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        fprintf(destFile, "Sum: %d\n", sum);
        fprintf(destFile, "Average: %.2f\n", average);
        printf("Results appended to '%s'.\n", destFilename);
    } else {
        fprintf(destFile, "No numbers found in the source file.\n");
        printf("No numbers found. Message logged to '%s'.\n", destFilename);
    }

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}