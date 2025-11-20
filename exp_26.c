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
    
    int n, i, j;
    struct Student students[MAX_STUDENTS];
    struct Student temp;
    
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);
    
    if (n <= 0 || n > MAX_STUDENTS)
    {
        printf("Invalid number of students.\n");
        return 1;
    }
    
    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        
        printf("Enter student's name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Enter student's roll number: ");
        scanf("%d", &students[i].roll);
        
        printf("Enter student's marks: ");
        scanf("%f", &students[i].marks);
    }
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (students[j].roll > students[j + 1].roll)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    
    printf("\n--- Sorted Student Records (by Roll Number) ---\n");
    
    for (i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    
    return 0;
}