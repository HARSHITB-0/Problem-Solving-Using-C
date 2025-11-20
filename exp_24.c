#include <stdio.h>

struct Employee
{
    char name[100];
    int emp_id;
    char designation[100];
};

void displayEmployee(struct Employee *emp)
{
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp->name);
    printf("Employee ID: %d\n", emp->emp_id);
    printf("Designation: %s\n", emp->designation);
}

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    struct Employee emp1;
    
    printf("Enter employee's name: ");
    scanf(" %[^\n]", emp1.name);
    
    printf("Enter employee's ID: ");
    scanf("%d", &emp1.emp_id);
    
    printf("Enter employee's designation: ");
    scanf(" %[^\n]", emp1.designation);
    
    displayEmployee(&emp1);
    
    return 0;
}