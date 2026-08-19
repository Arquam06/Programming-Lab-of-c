//Write a C program to demonstrate the use of a nested structure for storing employee information. Define an employee structure containing empid, empname, and a nested salary structure containing basicpay, da, hra, and cca. Accept the employee details from the user, calculate the gross salary using: Gross Salary = Basic Pay + DA + HRA + CCA


#include <stdio.h>

struct salary
{
    float basicpay;
    float da;
    float hra;
    float cca;
};

struct employee
{
    int empid;
    char empname[50];

    struct salary sal;
};

int main()
{
    struct employee e;
    float gross;

    printf("Enter Employee ID: ");
    scanf("%d", &e.empid);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.empname);

    printf("Enter Basic Pay: ");
    scanf("%f", &e.sal.basicpay);

    printf("Enter DA: ");
    scanf("%f", &e.sal.da);

    printf("Enter HRA: ");
    scanf("%f", &e.sal.hra);

    printf("Enter CCA: ");
    scanf("%f", &e.sal.cca);

    gross = e.sal.basicpay + e.sal.da + e.sal.hra + e.sal.cca;

    printf("\n----- Employee Details -----\n");

    printf("Employee ID   : %d\n", e.empid);
    printf("Employee Name : %s\n", e.empname);
    printf("Basic Pay     : %.2f\n", e.sal.basicpay);
    printf("DA            : %.2f\n", e.sal.da);
    printf("HRA           : %.2f\n", e.sal.hra);
    printf("CCA           : %.2f\n", e.sal.cca);
    printf("Gross Salary  : %.2f\n", gross);

    return 0;
}