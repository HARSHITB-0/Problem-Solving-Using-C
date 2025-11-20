#include <stdio.h>

struct Employee
{
    char name[100];
    float basic;
    float da;
    float hra;
};

int main()
{
    printf("Name: Harshit Beniwal \n");
    printf("Roll no.: 125113054 \n\n");
    
    struct Employee emp;
    float gross_salary;
    
    printf("Enter employee's name: ");
    scanf(" %[^\n]", emp.name);
    
    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);
    
    printf("Enter Dearness Allowance (DA): ");
    scanf("%f", &emp.da);
    
    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &emp.hra);
    
    gross_salary = emp.basic + emp.da + emp.hra;
    
    printf("\n--- Employee Salary Details ---\n");
    printf("Employee Name: %s\n", emp.name);
    printf("Gross Salary: %.2f\n", gross_salary);
    
    return 0;
}