#include <stdio.h>

// Define a maximum number of employees
#define MAX_EMPLOYEES 100

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
    
    // Create an array of structures
    struct Employee employees[MAX_EMPLOYEES];
    int n, i;
    
    // Get the number of employees from the user
    printf("Enter the number of employees (max %d): ", MAX_EMPLOYEES);
    scanf("%d", &n);
    
    // Validate the input
    if (n <= 0 || n > MAX_EMPLOYEES)
    {
        printf("Invalid number of employees.\n");
        return 1;
    }
    
    // Loop to get details for each employee
    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Employee %d ---\n", i + 1);
        
        printf("Enter employee's name: ");
        scanf(" %[^\n]", employees[i].name);
        
        printf("Enter employee's ID: ");
        scanf("%d", &employees[i].emp_id);
        
        printf("Enter employee's designation: ");
        scanf(" %[^\n]", employees[i].designation);
    }
    
    // Loop to display all employees
    printf("\n--- All Employee Records ---\n");
    for (i = 0; i < n; i++)
    {
        // Pass the address of the current employee in the array
        displayEmployee(&employees[i]);
    }
    
    return 0;
}