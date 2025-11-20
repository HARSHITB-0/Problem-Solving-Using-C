#include <stdio.h>
#include <string.h>

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
    
    struct Student s1;
    
    struct Student *ptr;
    
    ptr = &s1;
    
    strcpy(ptr->name, "John Doe"); 
    
    ptr->roll = 101;
    ptr->marks = 85.5;
    
    printf("--- Displaying details using pointer 'ptr' ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    
    printf("\n--- Modifying and displaying with (*ptr) syntax ---\n");
    
    (*ptr).roll = 102;
    
    printf("New Roll No: %d\n", (*ptr).roll);
    
    return 0;
}