#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    float marks;
};

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    struct Student s;
    
    printf("Enter student's name: ");
    scanf(" %[^\n]", s.name);
    
    printf("Enter student's roll number: ");
    scanf("%d", &s.roll);
    
    printf("Enter student's marks: ");
    scanf("%f", &s.marks);
    
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}