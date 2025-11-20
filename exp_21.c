#include <stdio.h>

#define MAX_STUDENTS 100

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
    
    int n;
    struct Student students[MAX_STUDENTS];
    float total_marks = 0.0;
    float average;
    
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Invalid number of students.\n");
        return 1;
    }
    if (n > MAX_STUDENTS)
    {
        printf("Error: Cannot store more than %d students.\n", MAX_STUDENTS);
        return 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        
        printf("Enter student's name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Enter student's roll number: ");
        scanf("%d", &students[i].roll);
        
        printf("Enter student's marks: ");
        scanf("%f", &students[i].marks);
        
        total_marks += students[i].marks;
    }
    
    average = total_marks / n;
    
    printf("\n--- Class Results ---\n");
    printf("Total Students: %d\n", n);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Class Average: %.2f\n", average);
    
    return 0;
}