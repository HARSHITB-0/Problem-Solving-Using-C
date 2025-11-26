#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    int roll;
    float marks;
};

void addStudent()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    printf("\nEnter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);

    printf("Student record added successfully.\n");
}

void displayStudents()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("--------------------------------\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF)
    {
        printf("%s\t\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");

    int choice;

    do
    {
        printf("\n1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}