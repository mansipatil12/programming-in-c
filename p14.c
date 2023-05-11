#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    char designation[100];
    char department[100];
    float basic_salary;
};

int main()
{
    struct Employee emp;
    float da, hra, ta, pf, gross_salary, net_salary;

    printf("Enter employee details:\n");
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Designation: ");
    scanf("%s", emp.designation);
    printf("Department: ");
    scanf("%s", emp.department);
    printf("Basic Salary: ");
    scanf("%f", &emp.basic_salary);

    // Calculate allowances and deductions
    da = 0.5 * emp.basic_salary;
    hra = 0.3 * emp.basic_salary;
    ta = 0.1 * emp.basic_salary;
    pf = 0.12 * emp.basic_salary;

    // Calculate gross and net salary
    gross_salary = emp.basic_salary + da + hra + ta;
    net_salary = gross_salary - pf;

    // Print pay slip
    printf("\nPay Slip\n");
    printf("=========\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Basic Salary: %.2f\n", emp.basic_salary);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("TA: %.2f\n", ta);
    printf("PF: %.2f\n", pf);
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Net Salary: %.2f\n", net_salary);
    return 0;
}