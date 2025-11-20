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
    
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Invalid number of students.\n");
        return 1;
    }
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        
        printf("Enter student's name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Enter student's roll number: ");
        scanf("%d", &students[i].roll);
        
        printf("Enter student's marks: ");
        scanf("%f", &students[i].marks);
    }
    
    float max_marks = students[0].marks;
    int top_student_index = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > max_marks)
        {
            max_marks = students[i].marks;
            top_student_index = i;
        }
    }
    
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[top_student_index].name);
    printf("Roll No: %d\n", students[top_student_index].roll);
    printf("Marks: %.2f\n", students[top_student_index].marks);
    
    return 0;
}