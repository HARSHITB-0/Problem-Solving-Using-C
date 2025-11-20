#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[100];
    int roll;
    struct Date dob;
};

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    struct Student s1;
    
    printf("Enter student's name: ");
    scanf(" %[^\n]", s1.name);
    
    printf("Enter student's roll number: ");
    scanf("%d", &s1.roll);
    
    printf("Enter student's Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);
    
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll);
    printf("Date of Birth: %d/%d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    
    return 0;
}